# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.


import sys

import apiutil


def GenerateEntrypoints():

	#apiutil.CopyrightC()
	print ('%include "iprt/asmdefs.mac"' )
	print ("" )
	print ("%ifdef RT_ARCH_AMD64" )
	print ("extern glim" )
	print ("%else ; X86" )
	print ("extern _glim" )
	print ("%endif" )
	print ("" )

	# Get sorted list of dispatched functions.
	# The order is very important - it must match cr_opcodes.h
	# and spu_dispatch_table.h
	keys = apiutil.GetDispatchedFunctions(sys.argv[1]+"/APIspec.txt")

	for index in range(len(keys)):
		func_name = keys[index]
		if apiutil.Category(func_name) == "Chromium":
			continue
		if apiutil.Category(func_name) == "VBox":
			continue

		print ("BEGINPROC_EXPORTED cr_gl%s" % func_name )
		print ("%ifdef RT_ARCH_AMD64" )
		print ("\tmov \trax, qword glim+%d" % (8*index) )
		print ("\tjmp \t[rax]" )
		print ("%else ; X86" )
		print ("\tmov \teax, dword _glim+%d" % (4*index) )
		print ("\tjmp \t[eax]" )
		print ("%endif" )
		print ("ENDPROC cr_gl%s" % func_name )
		print ("" )


	print (';' )
	print ('; Aliases' )
	print (';' )

	# Now loop over all the functions and take care of any aliases
	allkeys = apiutil.GetAllFunctions(sys.argv[1]+"/APIspec.txt")
	for func_name in allkeys:
		if "omit" in apiutil.ChromiumProps(func_name):
			continue

		if func_name in keys:
			# we already processed this function earlier
			continue

		# alias is the function we're aliasing
		alias = apiutil.Alias(func_name)
		if alias:
			# this dict lookup should never fail (raise an exception)!
			index = keys.index(alias)
			print ("BEGINPROC_EXPORTED cr_gl%s" % func_name )
			print ("%ifdef RT_ARCH_AMD64" )
			print ("\tmov \trax, qword glim+%d" % (8*index) )
			print ("\tjmp \t[rax]" )
			print ("%else ; X86" )
			print ("\tmov \teax, dword _glim+%d" % (4*index) )
			print ("\tjmp \t[eax]" )
			print ("%endif" )
			print ("ENDPROC cr_gl%s" % func_name )
			print ("" )


	print (';' )
	print ('; No-op stubs' )
	print (';' )

	# Now generate no-op stub functions
	for func_name in allkeys:
		if "stub" in apiutil.ChromiumProps(func_name):
			print ("BEGINPROC_EXPORTED cr_gl%s" % func_name )
			print ("\tleave" )
			print ("\tret" )
			print ("ENDPROC cr_gl%s" % func_name )
			print ("" )


GenerateEntrypoints()

