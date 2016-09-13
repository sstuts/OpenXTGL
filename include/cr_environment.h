/* Copyright (c) 2001, Stanford University
 * All rights reserved.
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#ifndef CR_ENVIRONMENT_H
#define CR_ENVIRONMENT_H

#ifdef WINDOWS
#include <windows.h>
#pragma warning( disable: 4706 )
#endif

#include <iprt/cdefs.h>

#ifdef __cplusplus
extern "C" {
#endif

extern DECLEXPORT(void) crSetenv( const char *var, const char *value );
extern DECLEXPORT(const char *) crGetenv( const char *var );

#ifdef __cplusplus
}
#endif

#endif /* CR_ENVIRONMENT_H */
