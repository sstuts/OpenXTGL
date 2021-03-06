/* $Id: mem.h 33676 2010-11-02 09:48:24Z vboxsync $ */
/** @file
 * IPRT - Memory Management.
 */

/*
 * Copyright (C) 2010 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 *
 * The contents of this file may alternatively be used under the terms
 * of the Common Development and Distribution License Version 1.0
 * (CDDL) only, as it comes in the "COPYING.CDDL" file of the
 * VirtualBox OSE distribution, in which case the provisions of the
 * CDDL are applicable instead of those of the GPL.
 *
 * You may elect to license modified versions of this file under the
 * terms and conditions of either the GPL or the CDDL or both.
 */

#ifndef ___internal_mem_h
#define ___internal_mem_h

#include <iprt/cdefs.h>

RT_C_DECLS_BEGIN

/**
 * Special allocation method that does not have any IPRT dependencies.
 *
 * This is suitable for allocating memory for IPRT heaps, pools, caches, memory
 * trackers, semaphores and similar that end up in bootstrap depencency hell
 * otherwise.
 *
 * @returns Pointer to the allocated memory, NULL on failure.  Must be freed by
 *          calling rtMemBaseFree().
 * @param   cb          The number of bytes to allocate.
 */
DECLHIDDEN(void *)  rtMemBaseAlloc(size_t cb);

/**
 * Frees memory allocated by rtInitAlloc().
 *
 * @param   pv          What rtInitAlloc() returned.
 */
DECLHIDDEN(void)    rtMemBaseFree(void *pv);


RT_C_DECLS_END

#endif

