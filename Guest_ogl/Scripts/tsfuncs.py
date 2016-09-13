# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

import sys
sys.path.append(sys.argv[1])
import apiutil


apiutil.CopyrightC()

print ( """
/* DO NOT EDIT - THIS FILE GENERATED BY THE tsfuncs.py SCRIPT */

#include "stub.h"
""" )

keys = apiutil.GetDispatchedFunctions(sys.argv[1]+"/APIspec.txt")

for func_name in keys:
	return_type = apiutil.ReturnType(func_name)
	params = apiutil.Parameters(func_name)

	print ( "static %s SPULOAD_APIENTRY ts_%s( %s )" % (return_type, func_name, apiutil.MakeDeclarationString(params) ) )
	print ( "{" )
	print ( "\tSPUDispatchTable *tab = (SPUDispatchTable *) crGetTSD(&stub.dispatchTSD);" )

	if return_type != "void":
		print ( "\treturn ", )

	print ( "\ttab->%s( %s );" % (func_name, apiutil.MakeCallString(params)) )
	print ( "}" )
	print ( "" )


print ( "SPUDispatchTable stubThreadsafeDispatch = {" )

for func_name in keys:
	print ( "\tts_%s," % func_name )

print ( "\tNULL,  /* copyList */" )
print ( "\tNULL,  /* copy_of */" )
print ( "\t0,     /* mark */" )
print ( "\tNULL   /* server */" )
print ( "};" )
