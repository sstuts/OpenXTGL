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

    RTR3InitDll(RTR3INIT_FLAGS_DLL);
    renderspuSetWindowId((uint64_t) ActiveWindow);
    crServerInit(1, NULL);

    crServerSerializeRemoteStreams();
    crServerTearDown();
    renderspuStopWindowThreadProc();
    //tearingdown = 0;
    //TBD: once we are disconnected, spawn another listening thread
    if(!CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) oglListenThreadProc, (LPVOID) &RenderWindow, 0, (LPDWORD)&ThreadID)) {
        crError("%s Failed to start thread 0x%x", __FUNCTION__, GetLastError());
    }
    return 0;
 }

DECLEXPORT(int) __cdecl startOGLClient(HWND hWnd) 
{
    RenderWindow =(HWND) ~0;
    ActiveWindow = hWnd;

    //Spawn a thread to listen for Chromium connection from guest
#ifdef RT_OS_WINDOWS

    if(!CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) oglListenThreadProc, (LPVOID)&ActiveWindow, 0, (LPDWORD) &ThreadID)) {
        crError("%s Failed to start thread 0x%x", __FUNCTION__, GetLastError());
        return -1;
    }
#endif
    return 0;
}
