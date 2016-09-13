;; @file
; IPRT - ASMBitFirstSet().
;

;
; Copyright (C) 2006-2015 Oracle Corporation
;
; This file is part of VirtualBox Open Source Edition (OSE), as
; available from http://www.virtualbox.org. This file is free software;
; you can redistribute it and/or modify it under the terms of the GNU
; General Public License (GPL) as published by the Free Software
; Foundation, in version 2 as it comes in the "COPYING" file of the
; VirtualBox OSE distribution. VirtualBox OSE is distributed in the
; hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
;
; The contents of this file may alternatively be used under the terms
; of the Common Development and Distribution License Version 1.0
; (CDDL) only, as it comes in the "COPYING.CDDL" file of the
; VirtualBox OSE distribution, in which case the provisions of the
; CDDL are applicable instead of those of the GPL.
;
; You may elect to license modified versions of this file under the
; terms and conditions of either the GPL or the CDDL or both.
;


;*******************************************************************************
;* Header Files                                                                *
;*******************************************************************************
;%include "iprt/asmdefs.mac"

;BEGINCODE

;;
; Finds the first set bit in a bitmap.
;
; @returns eax  Index of the first set bit.
; @returns eax  -1 if no clear bit was found.
; @param   ecx  pvBitmap    Pointer to the bitmap.
; @param   edx  cBits       The number of bits in the bitmap. Multiple of 32.
;
;BEGINPROC_EXPORTED ASMBitFirstSet
_text SEGMENT
ASMBitFirstSet PROC
ifdef RT_ARCH_X64
        or      edx, edx
        jz      short failed
        ;{
        push    rdi

        ;    asm {...}
        mov     rdi, rcx                ; rdi = start of scasd
        mov     ecx, edx
        add     ecx, 31                 ; 32 bit aligned
        shr     ecx, 5                  ; number of dwords to scan.
        mov     rdx, rdi                ; rdx = saved pvBitmap
        xor     eax, eax
        repe    scasd                   ; Scan for the first dword with any set bit.
        je      failed_restore

        ; find the bit in question
        lea     rdi, [rdi - 4]          ; one step back.
        mov     eax, [rdi]
        sub     rdi, rdx
        shl     edi, 3                  ; calc bit offset.

        mov     ecx, 0ffffffffh
        bsf     ecx, eax
        add     ecx, edi
        mov     eax, ecx

        ; return success
        pop     rdi
        ret

        ; failure
        ;}
        ;return -1;
failed_restore:
        pop     rdi
failed:
        mov     eax, 0ffffffffh
        ret
endif
ifdef RT_ARCH_X86
        or      edx, edx
        jz      short failed
        ;{
        push    edi

        ;    asm {...}
        mov     edi, ecx                ; edi = start of scasd
        mov     ecx, edx
        add     ecx, 31                 ; 32 bit aligned
        shr     ecx, 5                  ; number of dwords to scan.
        mov     edx, edi                ; rdx = saved pvBitmap
        xor     eax, eax
        repe    scasd                   ; Scan for the first dword with any set bit.
        je      failed_restore

        ; find the bit in question
        lea     edi, [edi - 4]          ; one step back.
        mov     eax, [edi]
        sub     edi, edx
        shl     edi, 3                  ; calc bit offset.

        mov     ecx, 0ffffffffh
        bsf     ecx, eax
        add     ecx, edi
        mov     eax, ecx

        ; return success
        pop     edi
        ret

        ; failure
        ;}
        ;return -1;
failed_restore:
        pop     edi
failed:
        mov     eax, 0ffffffffh
        ret
endif
		ASMBitFirstSet ENDP
_text ENDS
END
;ENDPROC ASMBitFirstSet



