#include <cr_dll.h>
#include "server.h"
#include "cr_server.h"
#include <iprt/initterm.h>

#ifdef RT_OS_WINDOWS
#include <windows.h>
#include <tchar.h>
#endif

DECLIMPORT(void) renderspuSetWindowId(uint64_t winId);
DECLIMPORT(void) renderspuStopWindowThreadProc();
static uint64_t ThreadID;
HWND RenderWindow;
HWND ActiveWindow;

static BOOL CALLBACK FindRemoteViewerWindow(HWND hwnd, LPARAM lParam)
{
    TCHAR  WindowCap[256];
    TCHAR Caption[256];
    int nchars;

    _tcscpy_s(Caption, sizeof(_T("Remote Viewer")), _T("Remote Viewer"));
    nchars = _tcslen(Caption);

    //Find the correct one and set RenderWindow
    GetWindowText(hwnd, WindowCap, 256);
    if(!_tcscmp(WindowCap, Caption))
    {
        RenderWindow = hwnd;
        return FALSE;
    }
    return TRUE;
}

static BOOL GetRenderWindowID()
{
    int tries = 0;
    int max_tries = 10000;
    while(RenderWindow == (HWND) ~0 && tries++ < max_tries)
    {
        EnumChildWindows(ActiveWindow, FindRemoteViewerWindow, (LPARAM) NULL);
        crError("% Failed to find the proper render window", __FUNCTION__);
        Sleep(300);
    }
    return RenderWindow != (HWND) ~0;
}

static DWORD oglListenThreadProc(void * args) {
    uint64_t winId = *(uint64_t *) args;
    static int checkEnv = 1;
    static int hang = 0;
    static char * HangEnv;
    static uint32_t clientID = 1;

    do
    {
        crVBoxServerAddClient(clientID++);
    }
    while(clientID > 1);

    return 0;
 }

static DWORD oglDisplayThreadProc(void * args)
{
    uint16_t winId = *(uint16_t *) args;

    RTR3InitDll(RTR3INIT_FLAGS_DLL);
    renderspuSetWindowId((uint64_t) ActiveWindow);
    crServerInit(1, NULL);

    if(!CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) oglListenThreadProc, (LPVOID) &ActiveWindow, 0, (LPDWORD) &ThreadID))
    {
        crError("%s Failed to start thread 0x%x", __FUNCTION__, GetLastError());
        return -1;
    }

    crServerSerializeRemoteStreams();
    crServerTearDown();
    renderspuStopWindowThreadProc();

    //Restart
    if(!CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) oglDisplayThreadProc, (LPVOID) &ActiveWindow, 0, (LPDWORD) &ThreadID))
    {
        crError("%s Failed to start thread 0x%x", __FUNCTION__, GetLastError());
        return -1;
    }

   return 0;
}

DECLEXPORT(int) __cdecl startOGLClient(HWND hWnd) 
{
    RenderWindow =(HWND) ~0;
    ActiveWindow = hWnd;


    //Now we've connected initially, start a thread to listen for more clients

    //Spawn a thread to listen for Chromium connection from guest

    if(!CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) oglDisplayThreadProc, (LPVOID)&ActiveWindow, 0, (LPDWORD) &ThreadID)) {
        crError("%s Failed to start thread 0x%x", __FUNCTION__, GetLastError());
        return -1;
    }

    return 0;
}
