# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.


import sys

sys.path.append(sys.argv[1])
import apiutil


apiutil.CopyrightC()

print ( """
/* DO NOT EDIT - THIS FILE AUTOMATICALLY GENERATED BY state_funcs.py SCRIPT */
#ifndef CR_STATE_FUNCS_H
#define CR_STATE_FUNCS_H

#include "chromium.h"
#include "cr_error.h"

#include <iprt/cdefs.h>

#if defined(WINDOWS)
#define STATE_APIENTRY __stdcall
#else
#define STATE_APIENTRY
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define STATE_UNUSED(x) ((void)x)""" )



for func_name in apiutil.AllSpecials( "state" ):
	return_type = apiutil.ReturnType(func_name)
	params = apiutil.Parameters(func_name)
	print ( 'DECLEXPORT(%s) STATE_APIENTRY crState%s( %s );' % (return_type, func_name, apiutil.MakeDeclarationString(params)) )

for func_name in apiutil.AllSpecials( "state_feedback" ):
	return_type = apiutil.ReturnType(func_name)
	params = apiutil.Parameters(func_name)
	print ( 'DECLEXPORT(%s) STATE_APIENTRY crStateFeedback%s( %s );' % (return_type, func_name, apiutil.MakeDeclarationString(params)) )

for func_name in apiutil.AllSpecials( "state_select" ):
	return_type = apiutil.ReturnType(func_name)
	params = apiutil.Parameters(func_name)
	print ( 'DECLEXPORT(%s) STATE_APIENTRY crStateSelect%s( %s );' % (return_type, func_name, apiutil.MakeDeclarationString(params)) )


print ( """
#ifdef __cplusplus
}
#endif

#endif /* CR_STATE_FUNCS_H */
""")
