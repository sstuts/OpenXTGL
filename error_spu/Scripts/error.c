/* Copyright (c) 2001, Stanford University
	All rights reserved.

	See the file LICENSE.txt for information on redistributing this software. */
	
#include <stdio.h>
#include "cr_error.h"
#include "cr_spu.h"
#include "state/cr_statetypes.h"

#if defined(WINDOWS)
#define ERROR_APIENTRY __stdcall
#else
#define ERROR_APIENTRY
#endif

#define ERROR_UNUSED(x) ((void)x)

static void ERROR_APIENTRY errorAccum( GLenum op, GLfloat value )
{
	ERROR_UNUSED(op);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glAccum called!" );
}

static void ERROR_APIENTRY errorActiveStencilFaceEXT( GLenum face )
{
	ERROR_UNUSED(face);
	crError( "ERROR SPU: Unsupported function glActiveStencilFaceEXT called!" );
}

static void ERROR_APIENTRY errorActiveTextureARB( GLenum texture )
{
	ERROR_UNUSED(texture);
	crError( "ERROR SPU: Unsupported function glActiveTextureARB called!" );
}

static void ERROR_APIENTRY errorAlphaFunc( GLenum func, GLclampf ref )
{
	ERROR_UNUSED(func);
	ERROR_UNUSED(ref);
	crError( "ERROR SPU: Unsupported function glAlphaFunc called!" );
}

static GLboolean ERROR_APIENTRY errorAreProgramsResidentNV( GLsizei n, const GLuint * ids, GLboolean * residences )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(ids);
	ERROR_UNUSED(residences);
	crError( "ERROR SPU: Unsupported function glAreProgramsResidentNV called!" );
	return (GLboolean)0;
}

static GLboolean ERROR_APIENTRY errorAreTexturesResident( GLsizei n, const GLuint * textures, GLboolean * residences )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(textures);
	ERROR_UNUSED(residences);
	crError( "ERROR SPU: Unsupported function glAreTexturesResident called!" );
	return (GLboolean)0;
}

static void ERROR_APIENTRY errorArrayElement( GLint i )
{
	ERROR_UNUSED(i);
	crError( "ERROR SPU: Unsupported function glArrayElement called!" );
}

static void ERROR_APIENTRY errorAttachShader( GLuint program, GLuint shader )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(shader);
	crError( "ERROR SPU: Unsupported function glAttachShader called!" );
}

static void ERROR_APIENTRY errorBarrierCreateCR( GLuint name, GLuint count )
{
	ERROR_UNUSED(name);
	ERROR_UNUSED(count);
	crError( "ERROR SPU: Unsupported function glBarrierCreateCR called!" );
}

static void ERROR_APIENTRY errorBarrierDestroyCR( GLuint name )
{
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glBarrierDestroyCR called!" );
}

static void ERROR_APIENTRY errorBarrierExecCR( GLuint name )
{
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glBarrierExecCR called!" );
}

static void ERROR_APIENTRY errorBegin( GLenum mode )
{
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glBegin called!" );
}

static void ERROR_APIENTRY errorBeginQueryARB( GLenum target, GLuint id )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(id);
	crError( "ERROR SPU: Unsupported function glBeginQueryARB called!" );
}

static void ERROR_APIENTRY errorBindAttribLocation( GLuint program, GLuint index, const char * name )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(index);
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glBindAttribLocation called!" );
}

static void ERROR_APIENTRY errorBindBufferARB( GLenum target, GLuint buffer )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(buffer);
	crError( "ERROR SPU: Unsupported function glBindBufferARB called!" );
}

static void ERROR_APIENTRY errorBindFramebufferEXT( GLenum target, GLuint framebuffer )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(framebuffer);
	crError( "ERROR SPU: Unsupported function glBindFramebufferEXT called!" );
}

static void ERROR_APIENTRY errorBindProgramARB( GLenum target, GLuint program )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(program);
	crError( "ERROR SPU: Unsupported function glBindProgramARB called!" );
}

static void ERROR_APIENTRY errorBindProgramNV( GLenum target, GLuint id )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(id);
	crError( "ERROR SPU: Unsupported function glBindProgramNV called!" );
}

static void ERROR_APIENTRY errorBindRenderbufferEXT( GLenum target, GLuint renderbuffer )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(renderbuffer);
	crError( "ERROR SPU: Unsupported function glBindRenderbufferEXT called!" );
}

static void ERROR_APIENTRY errorBindTexture( GLenum target, GLuint texture )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(texture);
	crError( "ERROR SPU: Unsupported function glBindTexture called!" );
}

static void ERROR_APIENTRY errorBitmap( GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap )
{
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(xorig);
	ERROR_UNUSED(yorig);
	ERROR_UNUSED(xmove);
	ERROR_UNUSED(ymove);
	ERROR_UNUSED(bitmap);
	crError( "ERROR SPU: Unsupported function glBitmap called!" );
}

static void ERROR_APIENTRY errorBlendColorEXT( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glBlendColorEXT called!" );
}

static void ERROR_APIENTRY errorBlendEquationEXT( GLenum mode )
{
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glBlendEquationEXT called!" );
}

static void ERROR_APIENTRY errorBlendEquationSeparate( GLenum modeRGB, GLenum modeAlpha )
{
	ERROR_UNUSED(modeRGB);
	ERROR_UNUSED(modeAlpha);
	crError( "ERROR SPU: Unsupported function glBlendEquationSeparate called!" );
}

static void ERROR_APIENTRY errorBlendFunc( GLenum sfactor, GLenum dfactor )
{
	ERROR_UNUSED(sfactor);
	ERROR_UNUSED(dfactor);
	crError( "ERROR SPU: Unsupported function glBlendFunc called!" );
}

static void ERROR_APIENTRY errorBlendFuncSeparateEXT( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorA, GLenum dfactorA )
{
	ERROR_UNUSED(sfactorRGB);
	ERROR_UNUSED(dfactorRGB);
	ERROR_UNUSED(sfactorA);
	ERROR_UNUSED(dfactorA);
	crError( "ERROR SPU: Unsupported function glBlendFuncSeparateEXT called!" );
}

static void ERROR_APIENTRY errorBlitFramebufferEXT( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter )
{
	ERROR_UNUSED(srcX0);
	ERROR_UNUSED(srcY0);
	ERROR_UNUSED(srcX1);
	ERROR_UNUSED(srcY1);
	ERROR_UNUSED(dstX0);
	ERROR_UNUSED(dstY0);
	ERROR_UNUSED(dstX1);
	ERROR_UNUSED(dstY1);
	ERROR_UNUSED(mask);
	ERROR_UNUSED(filter);
	crError( "ERROR SPU: Unsupported function glBlitFramebufferEXT called!" );
}

static void ERROR_APIENTRY errorBoundsInfoCR( const CRrecti * bounds, const GLbyte * payload, GLint len, GLint num_opcodes )
{
	ERROR_UNUSED(bounds);
	ERROR_UNUSED(payload);
	ERROR_UNUSED(len);
	ERROR_UNUSED(num_opcodes);
	crError( "ERROR SPU: Unsupported function glBoundsInfoCR called!" );
}

static void ERROR_APIENTRY errorBufferDataARB( GLenum target, GLsizeiptrARB size, const GLvoid * data, GLenum usage )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(size);
	ERROR_UNUSED(data);
	ERROR_UNUSED(usage);
	crError( "ERROR SPU: Unsupported function glBufferDataARB called!" );
}

static void ERROR_APIENTRY errorBufferSubDataARB( GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid * data )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(offset);
	ERROR_UNUSED(size);
	ERROR_UNUSED(data);
	crError( "ERROR SPU: Unsupported function glBufferSubDataARB called!" );
}

static void ERROR_APIENTRY errorCallList( GLuint list )
{
	ERROR_UNUSED(list);
	crError( "ERROR SPU: Unsupported function glCallList called!" );
}

static void ERROR_APIENTRY errorCallLists( GLsizei n, GLenum type, const GLvoid * lists )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(type);
	ERROR_UNUSED(lists);
	crError( "ERROR SPU: Unsupported function glCallLists called!" );
}

static GLenum ERROR_APIENTRY errorCheckFramebufferStatusEXT( GLenum target )
{
	ERROR_UNUSED(target);
	crError( "ERROR SPU: Unsupported function glCheckFramebufferStatusEXT called!" );
	return (GLenum)0;
}

static void ERROR_APIENTRY errorChromiumParameterfCR( GLenum target, GLfloat value )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glChromiumParameterfCR called!" );
}

static void ERROR_APIENTRY errorChromiumParameteriCR( GLenum target, GLint value )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glChromiumParameteriCR called!" );
}

static void ERROR_APIENTRY errorChromiumParametervCR( GLenum target, GLenum type, GLsizei count, const GLvoid * values )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(type);
	ERROR_UNUSED(count);
	ERROR_UNUSED(values);
	crError( "ERROR SPU: Unsupported function glChromiumParametervCR called!" );
}

static void ERROR_APIENTRY errorClear( GLbitfield mask )
{
	ERROR_UNUSED(mask);
	crError( "ERROR SPU: Unsupported function glClear called!" );
}

static void ERROR_APIENTRY errorClearAccum( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glClearAccum called!" );
}

static void ERROR_APIENTRY errorClearColor( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glClearColor called!" );
}

static void ERROR_APIENTRY errorClearDepth( GLclampd depth )
{
	ERROR_UNUSED(depth);
	crError( "ERROR SPU: Unsupported function glClearDepth called!" );
}

static void ERROR_APIENTRY errorClearIndex( GLfloat c )
{
	ERROR_UNUSED(c);
	crError( "ERROR SPU: Unsupported function glClearIndex called!" );
}

static void ERROR_APIENTRY errorClearStencil( GLint s )
{
	ERROR_UNUSED(s);
	crError( "ERROR SPU: Unsupported function glClearStencil called!" );
}

static void ERROR_APIENTRY errorClientActiveTextureARB( GLenum texture )
{
	ERROR_UNUSED(texture);
	crError( "ERROR SPU: Unsupported function glClientActiveTextureARB called!" );
}

static void ERROR_APIENTRY errorClipPlane( GLenum plane, const GLdouble * equation )
{
	ERROR_UNUSED(plane);
	ERROR_UNUSED(equation);
	crError( "ERROR SPU: Unsupported function glClipPlane called!" );
}

static void ERROR_APIENTRY errorColor3b( GLbyte red, GLbyte green, GLbyte blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glColor3b called!" );
}

static void ERROR_APIENTRY errorColor3bv( const GLbyte * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor3bv called!" );
}

static void ERROR_APIENTRY errorColor3d( GLdouble red, GLdouble green, GLdouble blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glColor3d called!" );
}

static void ERROR_APIENTRY errorColor3dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor3dv called!" );
}

static void ERROR_APIENTRY errorColor3f( GLfloat red, GLfloat green, GLfloat blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glColor3f called!" );
}

static void ERROR_APIENTRY errorColor3fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor3fv called!" );
}

static void ERROR_APIENTRY errorColor3i( GLint red, GLint green, GLint blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glColor3i called!" );
}

static void ERROR_APIENTRY errorColor3iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor3iv called!" );
}

static void ERROR_APIENTRY errorColor3s( GLshort red, GLshort green, GLshort blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glColor3s called!" );
}

static void ERROR_APIENTRY errorColor3sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor3sv called!" );
}

static void ERROR_APIENTRY errorColor3ub( GLubyte red, GLubyte green, GLubyte blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glColor3ub called!" );
}

static void ERROR_APIENTRY errorColor3ubv( const GLubyte * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor3ubv called!" );
}

static void ERROR_APIENTRY errorColor3ui( GLuint red, GLuint green, GLuint blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glColor3ui called!" );
}

static void ERROR_APIENTRY errorColor3uiv( const GLuint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor3uiv called!" );
}

static void ERROR_APIENTRY errorColor3us( GLushort red, GLushort green, GLushort blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glColor3us called!" );
}

static void ERROR_APIENTRY errorColor3usv( const GLushort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor3usv called!" );
}

static void ERROR_APIENTRY errorColor4b( GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glColor4b called!" );
}

static void ERROR_APIENTRY errorColor4bv( const GLbyte * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor4bv called!" );
}

static void ERROR_APIENTRY errorColor4d( GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glColor4d called!" );
}

static void ERROR_APIENTRY errorColor4dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor4dv called!" );
}

static void ERROR_APIENTRY errorColor4f( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glColor4f called!" );
}

static void ERROR_APIENTRY errorColor4fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor4fv called!" );
}

static void ERROR_APIENTRY errorColor4i( GLint red, GLint green, GLint blue, GLint alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glColor4i called!" );
}

static void ERROR_APIENTRY errorColor4iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor4iv called!" );
}

static void ERROR_APIENTRY errorColor4s( GLshort red, GLshort green, GLshort blue, GLshort alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glColor4s called!" );
}

static void ERROR_APIENTRY errorColor4sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor4sv called!" );
}

static void ERROR_APIENTRY errorColor4ub( GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glColor4ub called!" );
}

static void ERROR_APIENTRY errorColor4ubv( const GLubyte * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor4ubv called!" );
}

static void ERROR_APIENTRY errorColor4ui( GLuint red, GLuint green, GLuint blue, GLuint alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glColor4ui called!" );
}

static void ERROR_APIENTRY errorColor4uiv( const GLuint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor4uiv called!" );
}

static void ERROR_APIENTRY errorColor4us( GLushort red, GLushort green, GLushort blue, GLushort alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glColor4us called!" );
}

static void ERROR_APIENTRY errorColor4usv( const GLushort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glColor4usv called!" );
}

static void ERROR_APIENTRY errorColorMask( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	ERROR_UNUSED(alpha);
	crError( "ERROR SPU: Unsupported function glColorMask called!" );
}

static void ERROR_APIENTRY errorColorMaterial( GLenum face, GLenum mode )
{
	ERROR_UNUSED(face);
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glColorMaterial called!" );
}

static void ERROR_APIENTRY errorColorPointer( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer )
{
	ERROR_UNUSED(size);
	ERROR_UNUSED(type);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glColorPointer called!" );
}

static void ERROR_APIENTRY errorCombinerInputNV( GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage )
{
	ERROR_UNUSED(stage);
	ERROR_UNUSED(portion);
	ERROR_UNUSED(variable);
	ERROR_UNUSED(input);
	ERROR_UNUSED(mapping);
	ERROR_UNUSED(componentUsage);
	crError( "ERROR SPU: Unsupported function glCombinerInputNV called!" );
}

static void ERROR_APIENTRY errorCombinerOutputNV( GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum )
{
	ERROR_UNUSED(stage);
	ERROR_UNUSED(portion);
	ERROR_UNUSED(abOutput);
	ERROR_UNUSED(cdOutput);
	ERROR_UNUSED(sumOutput);
	ERROR_UNUSED(scale);
	ERROR_UNUSED(bias);
	ERROR_UNUSED(abDotProduct);
	ERROR_UNUSED(cdDotProduct);
	ERROR_UNUSED(muxSum);
	crError( "ERROR SPU: Unsupported function glCombinerOutputNV called!" );
}

static void ERROR_APIENTRY errorCombinerParameterfNV( GLenum pname, GLfloat param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glCombinerParameterfNV called!" );
}

static void ERROR_APIENTRY errorCombinerParameterfvNV( GLenum pname, const GLfloat * params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glCombinerParameterfvNV called!" );
}

static void ERROR_APIENTRY errorCombinerParameteriNV( GLenum pname, GLint param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glCombinerParameteriNV called!" );
}

static void ERROR_APIENTRY errorCombinerParameterivNV( GLenum pname, const GLint * params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glCombinerParameterivNV called!" );
}

static void ERROR_APIENTRY errorCombinerStageParameterfvNV( GLenum stage, GLenum pname, const GLfloat * params )
{
	ERROR_UNUSED(stage);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glCombinerStageParameterfvNV called!" );
}

static void ERROR_APIENTRY errorCompileShader( GLuint shader )
{
	ERROR_UNUSED(shader);
	crError( "ERROR SPU: Unsupported function glCompileShader called!" );
}

static void ERROR_APIENTRY errorCompressedTexImage1DARB( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLint border, GLsizei imagesize, const GLvoid * data )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(internalFormat);
	ERROR_UNUSED(width);
	ERROR_UNUSED(border);
	ERROR_UNUSED(imagesize);
	ERROR_UNUSED(data);
	crError( "ERROR SPU: Unsupported function glCompressedTexImage1DARB called!" );
}

static void ERROR_APIENTRY errorCompressedTexImage2DARB( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imagesize, const GLvoid * data )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(internalFormat);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(border);
	ERROR_UNUSED(imagesize);
	ERROR_UNUSED(data);
	crError( "ERROR SPU: Unsupported function glCompressedTexImage2DARB called!" );
}

static void ERROR_APIENTRY errorCompressedTexImage3DARB( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imagesize, const GLvoid * data )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(internalFormat);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(depth);
	ERROR_UNUSED(border);
	ERROR_UNUSED(imagesize);
	ERROR_UNUSED(data);
	crError( "ERROR SPU: Unsupported function glCompressedTexImage3DARB called!" );
}

static void ERROR_APIENTRY errorCompressedTexSubImage1DARB( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imagesize, const GLvoid * data )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(xoffset);
	ERROR_UNUSED(width);
	ERROR_UNUSED(format);
	ERROR_UNUSED(imagesize);
	ERROR_UNUSED(data);
	crError( "ERROR SPU: Unsupported function glCompressedTexSubImage1DARB called!" );
}

static void ERROR_APIENTRY errorCompressedTexSubImage2DARB( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imagesize, const GLvoid * data )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(xoffset);
	ERROR_UNUSED(yoffset);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(format);
	ERROR_UNUSED(imagesize);
	ERROR_UNUSED(data);
	crError( "ERROR SPU: Unsupported function glCompressedTexSubImage2DARB called!" );
}

static void ERROR_APIENTRY errorCompressedTexSubImage3DARB( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imagesize, const GLvoid * data )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(xoffset);
	ERROR_UNUSED(yoffset);
	ERROR_UNUSED(zoffset);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(depth);
	ERROR_UNUSED(format);
	ERROR_UNUSED(imagesize);
	ERROR_UNUSED(data);
	crError( "ERROR SPU: Unsupported function glCompressedTexSubImage3DARB called!" );
}

static void ERROR_APIENTRY errorCopyPixels( GLint x, GLint y, GLsizei width, GLsizei height, GLenum type )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(type);
	crError( "ERROR SPU: Unsupported function glCopyPixels called!" );
}

static void ERROR_APIENTRY errorCopyTexImage1D( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(internalFormat);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(width);
	ERROR_UNUSED(border);
	crError( "ERROR SPU: Unsupported function glCopyTexImage1D called!" );
}

static void ERROR_APIENTRY errorCopyTexImage2D( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(internalFormat);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(border);
	crError( "ERROR SPU: Unsupported function glCopyTexImage2D called!" );
}

static void ERROR_APIENTRY errorCopyTexSubImage1D( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(xoffset);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(width);
	crError( "ERROR SPU: Unsupported function glCopyTexSubImage1D called!" );
}

static void ERROR_APIENTRY errorCopyTexSubImage2D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(xoffset);
	ERROR_UNUSED(yoffset);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	crError( "ERROR SPU: Unsupported function glCopyTexSubImage2D called!" );
}

static void ERROR_APIENTRY errorCopyTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(xoffset);
	ERROR_UNUSED(yoffset);
	ERROR_UNUSED(zoffset);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	crError( "ERROR SPU: Unsupported function glCopyTexSubImage3D called!" );
}

static GLint ERROR_APIENTRY errorCreateContext( const char * dpyName, GLint visual, GLint shareCtx )
{
	ERROR_UNUSED(dpyName);
	ERROR_UNUSED(visual);
	ERROR_UNUSED(shareCtx);
	crError( "ERROR SPU: Unsupported function glCreateContext called!" );
	return (GLint)0;
}

static GLuint ERROR_APIENTRY errorCreateProgram( void )
{
	crError( "ERROR SPU: Unsupported function glCreateProgram called!" );
	return (GLuint)0;
}

static GLuint ERROR_APIENTRY errorCreateShader( GLenum type )
{
	ERROR_UNUSED(type);
	crError( "ERROR SPU: Unsupported function glCreateShader called!" );
	return (GLuint)0;
}

static void ERROR_APIENTRY errorCullFace( GLenum mode )
{
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glCullFace called!" );
}

static void ERROR_APIENTRY errorDeleteBuffersARB( GLsizei n, const GLuint * buffer )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(buffer);
	crError( "ERROR SPU: Unsupported function glDeleteBuffersARB called!" );
}

static void ERROR_APIENTRY errorDeleteFencesNV( GLsizei n, const GLuint * fences )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(fences);
	crError( "ERROR SPU: Unsupported function glDeleteFencesNV called!" );
}

static void ERROR_APIENTRY errorDeleteFramebuffersEXT( GLsizei n, const GLuint * framebuffers )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(framebuffers);
	crError( "ERROR SPU: Unsupported function glDeleteFramebuffersEXT called!" );
}

static void ERROR_APIENTRY errorDeleteLists( GLuint list, GLsizei range )
{
	ERROR_UNUSED(list);
	ERROR_UNUSED(range);
	crError( "ERROR SPU: Unsupported function glDeleteLists called!" );
}

static void ERROR_APIENTRY errorDeleteObjectARB( VBoxGLhandleARB obj )
{
	ERROR_UNUSED(obj);
	crError( "ERROR SPU: Unsupported function glDeleteObjectARB called!" );
}

static void ERROR_APIENTRY errorDeleteProgram( GLuint program )
{
	ERROR_UNUSED(program);
	crError( "ERROR SPU: Unsupported function glDeleteProgram called!" );
}

static void ERROR_APIENTRY errorDeleteProgramsARB( GLsizei n, const GLuint * programs )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(programs);
	crError( "ERROR SPU: Unsupported function glDeleteProgramsARB called!" );
}

static void ERROR_APIENTRY errorDeleteQueriesARB( GLsizei n, const GLuint * ids )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(ids);
	crError( "ERROR SPU: Unsupported function glDeleteQueriesARB called!" );
}

static void ERROR_APIENTRY errorDeleteRenderbuffersEXT( GLsizei n, const GLuint * renderbuffers )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(renderbuffers);
	crError( "ERROR SPU: Unsupported function glDeleteRenderbuffersEXT called!" );
}

static void ERROR_APIENTRY errorDeleteShader( GLuint shader )
{
	ERROR_UNUSED(shader);
	crError( "ERROR SPU: Unsupported function glDeleteShader called!" );
}

static void ERROR_APIENTRY errorDeleteTextures( GLsizei n, const GLuint * textures )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(textures);
	crError( "ERROR SPU: Unsupported function glDeleteTextures called!" );
}

static void ERROR_APIENTRY errorDepthFunc( GLenum func )
{
	ERROR_UNUSED(func);
	crError( "ERROR SPU: Unsupported function glDepthFunc called!" );
}

static void ERROR_APIENTRY errorDepthMask( GLboolean flag )
{
	ERROR_UNUSED(flag);
	crError( "ERROR SPU: Unsupported function glDepthMask called!" );
}

static void ERROR_APIENTRY errorDepthRange( GLclampd zNear, GLclampd zFar )
{
	ERROR_UNUSED(zNear);
	ERROR_UNUSED(zFar);
	crError( "ERROR SPU: Unsupported function glDepthRange called!" );
}

static void ERROR_APIENTRY errorDestroyContext( GLint ctx )
{
	ERROR_UNUSED(ctx);
	crError( "ERROR SPU: Unsupported function glDestroyContext called!" );
}

static void ERROR_APIENTRY errorDetachShader( GLuint program, GLuint shader )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(shader);
	crError( "ERROR SPU: Unsupported function glDetachShader called!" );
}

static void ERROR_APIENTRY errorDisable( GLenum cap )
{
	ERROR_UNUSED(cap);
	crError( "ERROR SPU: Unsupported function glDisable called!" );
}

static void ERROR_APIENTRY errorDisableClientState( GLenum array )
{
	ERROR_UNUSED(array);
	crError( "ERROR SPU: Unsupported function glDisableClientState called!" );
}

static void ERROR_APIENTRY errorDisableVertexAttribArrayARB( GLuint index )
{
	ERROR_UNUSED(index);
	crError( "ERROR SPU: Unsupported function glDisableVertexAttribArrayARB called!" );
}

static void ERROR_APIENTRY errorDrawArrays( GLenum mode, GLint first, GLsizei count )
{
	ERROR_UNUSED(mode);
	ERROR_UNUSED(first);
	ERROR_UNUSED(count);
	crError( "ERROR SPU: Unsupported function glDrawArrays called!" );
}

static void ERROR_APIENTRY errorDrawBuffer( GLenum mode )
{
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glDrawBuffer called!" );
}

static void ERROR_APIENTRY errorDrawBuffers( GLsizei n, const GLenum* bufs )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(bufs);
	crError( "ERROR SPU: Unsupported function glDrawBuffers called!" );
}

static void ERROR_APIENTRY errorDrawElements( GLenum mode, GLsizei count, GLenum type, const GLvoid * indices )
{
	ERROR_UNUSED(mode);
	ERROR_UNUSED(count);
	ERROR_UNUSED(type);
	ERROR_UNUSED(indices);
	crError( "ERROR SPU: Unsupported function glDrawElements called!" );
}

static void ERROR_APIENTRY errorDrawPixels( GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels )
{
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(format);
	ERROR_UNUSED(type);
	ERROR_UNUSED(pixels);
	crError( "ERROR SPU: Unsupported function glDrawPixels called!" );
}

static void ERROR_APIENTRY errorDrawRangeElements( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices )
{
	ERROR_UNUSED(mode);
	ERROR_UNUSED(start);
	ERROR_UNUSED(end);
	ERROR_UNUSED(count);
	ERROR_UNUSED(type);
	ERROR_UNUSED(indices);
	crError( "ERROR SPU: Unsupported function glDrawRangeElements called!" );
}

static void ERROR_APIENTRY errorEdgeFlag( GLboolean flag )
{
	ERROR_UNUSED(flag);
	crError( "ERROR SPU: Unsupported function glEdgeFlag called!" );
}

static void ERROR_APIENTRY errorEdgeFlagPointer( GLsizei stride, const GLvoid * pointer )
{
	ERROR_UNUSED(stride);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glEdgeFlagPointer called!" );
}

static void ERROR_APIENTRY errorEdgeFlagv( const GLboolean * flag )
{
	ERROR_UNUSED(flag);
	crError( "ERROR SPU: Unsupported function glEdgeFlagv called!" );
}

static void ERROR_APIENTRY errorEnable( GLenum cap )
{
	ERROR_UNUSED(cap);
	crError( "ERROR SPU: Unsupported function glEnable called!" );
}

static void ERROR_APIENTRY errorEnableClientState( GLenum array )
{
	ERROR_UNUSED(array);
	crError( "ERROR SPU: Unsupported function glEnableClientState called!" );
}

static void ERROR_APIENTRY errorEnableVertexAttribArrayARB( GLuint index )
{
	ERROR_UNUSED(index);
	crError( "ERROR SPU: Unsupported function glEnableVertexAttribArrayARB called!" );
}

static void ERROR_APIENTRY errorEnd( void )
{
	crError( "ERROR SPU: Unsupported function glEnd called!" );
}

static void ERROR_APIENTRY errorEndList( void )
{
	crError( "ERROR SPU: Unsupported function glEndList called!" );
}

static void ERROR_APIENTRY errorEndQueryARB( GLenum target )
{
	ERROR_UNUSED(target);
	crError( "ERROR SPU: Unsupported function glEndQueryARB called!" );
}

static void ERROR_APIENTRY errorEvalCoord1d( GLdouble u )
{
	ERROR_UNUSED(u);
	crError( "ERROR SPU: Unsupported function glEvalCoord1d called!" );
}

static void ERROR_APIENTRY errorEvalCoord1dv( const GLdouble * u )
{
	ERROR_UNUSED(u);
	crError( "ERROR SPU: Unsupported function glEvalCoord1dv called!" );
}

static void ERROR_APIENTRY errorEvalCoord1f( GLfloat u )
{
	ERROR_UNUSED(u);
	crError( "ERROR SPU: Unsupported function glEvalCoord1f called!" );
}

static void ERROR_APIENTRY errorEvalCoord1fv( const GLfloat * u )
{
	ERROR_UNUSED(u);
	crError( "ERROR SPU: Unsupported function glEvalCoord1fv called!" );
}

static void ERROR_APIENTRY errorEvalCoord2d( GLdouble u, GLdouble v )
{
	ERROR_UNUSED(u);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glEvalCoord2d called!" );
}

static void ERROR_APIENTRY errorEvalCoord2dv( const GLdouble * u )
{
	ERROR_UNUSED(u);
	crError( "ERROR SPU: Unsupported function glEvalCoord2dv called!" );
}

static void ERROR_APIENTRY errorEvalCoord2f( GLfloat u, GLfloat v )
{
	ERROR_UNUSED(u);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glEvalCoord2f called!" );
}

static void ERROR_APIENTRY errorEvalCoord2fv( const GLfloat * u )
{
	ERROR_UNUSED(u);
	crError( "ERROR SPU: Unsupported function glEvalCoord2fv called!" );
}

static void ERROR_APIENTRY errorEvalMesh1( GLenum mode, GLint i1, GLint i2 )
{
	ERROR_UNUSED(mode);
	ERROR_UNUSED(i1);
	ERROR_UNUSED(i2);
	crError( "ERROR SPU: Unsupported function glEvalMesh1 called!" );
}

static void ERROR_APIENTRY errorEvalMesh2( GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2 )
{
	ERROR_UNUSED(mode);
	ERROR_UNUSED(i1);
	ERROR_UNUSED(i2);
	ERROR_UNUSED(j1);
	ERROR_UNUSED(j2);
	crError( "ERROR SPU: Unsupported function glEvalMesh2 called!" );
}

static void ERROR_APIENTRY errorEvalPoint1( GLint i )
{
	ERROR_UNUSED(i);
	crError( "ERROR SPU: Unsupported function glEvalPoint1 called!" );
}

static void ERROR_APIENTRY errorEvalPoint2( GLint i, GLint j )
{
	ERROR_UNUSED(i);
	ERROR_UNUSED(j);
	crError( "ERROR SPU: Unsupported function glEvalPoint2 called!" );
}

static void ERROR_APIENTRY errorExecuteProgramNV( GLenum target, GLuint id, const GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(id);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glExecuteProgramNV called!" );
}

static void ERROR_APIENTRY errorFeedbackBuffer( GLsizei size, GLenum type, GLfloat * buffer )
{
	ERROR_UNUSED(size);
	ERROR_UNUSED(type);
	ERROR_UNUSED(buffer);
	crError( "ERROR SPU: Unsupported function glFeedbackBuffer called!" );
}

static void ERROR_APIENTRY errorFinalCombinerInputNV( GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage )
{
	ERROR_UNUSED(variable);
	ERROR_UNUSED(input);
	ERROR_UNUSED(mapping);
	ERROR_UNUSED(componentUsage);
	crError( "ERROR SPU: Unsupported function glFinalCombinerInputNV called!" );
}

static void ERROR_APIENTRY errorFinish( void )
{
	crError( "ERROR SPU: Unsupported function glFinish called!" );
}

static void ERROR_APIENTRY errorFinishFenceNV( GLuint fence )
{
	ERROR_UNUSED(fence);
	crError( "ERROR SPU: Unsupported function glFinishFenceNV called!" );
}

static void ERROR_APIENTRY errorFlush( void )
{
	crError( "ERROR SPU: Unsupported function glFlush called!" );
}

static void ERROR_APIENTRY errorFlushVertexArrayRangeNV( void )
{
	crError( "ERROR SPU: Unsupported function glFlushVertexArrayRangeNV called!" );
}

static void ERROR_APIENTRY errorFogCoordPointerEXT( GLenum type, GLsizei stride, const GLvoid * pointer )
{
	ERROR_UNUSED(type);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glFogCoordPointerEXT called!" );
}

static void ERROR_APIENTRY errorFogCoorddEXT( GLdouble coord )
{
	ERROR_UNUSED(coord);
	crError( "ERROR SPU: Unsupported function glFogCoorddEXT called!" );
}

static void ERROR_APIENTRY errorFogCoorddvEXT( const GLdouble * coord )
{
	ERROR_UNUSED(coord);
	crError( "ERROR SPU: Unsupported function glFogCoorddvEXT called!" );
}

static void ERROR_APIENTRY errorFogCoordfEXT( GLfloat coord )
{
	ERROR_UNUSED(coord);
	crError( "ERROR SPU: Unsupported function glFogCoordfEXT called!" );
}

static void ERROR_APIENTRY errorFogCoordfvEXT( const GLfloat * coord )
{
	ERROR_UNUSED(coord);
	crError( "ERROR SPU: Unsupported function glFogCoordfvEXT called!" );
}

static void ERROR_APIENTRY errorFogf( GLenum pname, GLfloat param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glFogf called!" );
}

static void ERROR_APIENTRY errorFogfv( GLenum pname, const GLfloat * params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glFogfv called!" );
}

static void ERROR_APIENTRY errorFogi( GLenum pname, GLint param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glFogi called!" );
}

static void ERROR_APIENTRY errorFogiv( GLenum pname, const GLint * params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glFogiv called!" );
}

static void ERROR_APIENTRY errorFramebufferRenderbufferEXT( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(attachment);
	ERROR_UNUSED(renderbuffertarget);
	ERROR_UNUSED(renderbuffer);
	crError( "ERROR SPU: Unsupported function glFramebufferRenderbufferEXT called!" );
}

static void ERROR_APIENTRY errorFramebufferTexture1DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(attachment);
	ERROR_UNUSED(textarget);
	ERROR_UNUSED(texture);
	ERROR_UNUSED(level);
	crError( "ERROR SPU: Unsupported function glFramebufferTexture1DEXT called!" );
}

static void ERROR_APIENTRY errorFramebufferTexture2DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(attachment);
	ERROR_UNUSED(textarget);
	ERROR_UNUSED(texture);
	ERROR_UNUSED(level);
	crError( "ERROR SPU: Unsupported function glFramebufferTexture2DEXT called!" );
}

static void ERROR_APIENTRY errorFramebufferTexture3DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(attachment);
	ERROR_UNUSED(textarget);
	ERROR_UNUSED(texture);
	ERROR_UNUSED(level);
	ERROR_UNUSED(zoffset);
	crError( "ERROR SPU: Unsupported function glFramebufferTexture3DEXT called!" );
}

static void ERROR_APIENTRY errorFrontFace( GLenum mode )
{
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glFrontFace called!" );
}

static void ERROR_APIENTRY errorFrustum( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar )
{
	ERROR_UNUSED(left);
	ERROR_UNUSED(right);
	ERROR_UNUSED(bottom);
	ERROR_UNUSED(top);
	ERROR_UNUSED(zNear);
	ERROR_UNUSED(zFar);
	crError( "ERROR SPU: Unsupported function glFrustum called!" );
}

static void ERROR_APIENTRY errorGenBuffersARB( GLsizei n, GLuint * buffer )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(buffer);
	crError( "ERROR SPU: Unsupported function glGenBuffersARB called!" );
}

static void ERROR_APIENTRY errorGenFencesNV( GLsizei n, GLuint * fences )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(fences);
	crError( "ERROR SPU: Unsupported function glGenFencesNV called!" );
}

static void ERROR_APIENTRY errorGenFramebuffersEXT( GLsizei n, GLuint * framebuffers )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(framebuffers);
	crError( "ERROR SPU: Unsupported function glGenFramebuffersEXT called!" );
}

static GLuint ERROR_APIENTRY errorGenLists( GLsizei range )
{
	ERROR_UNUSED(range);
	crError( "ERROR SPU: Unsupported function glGenLists called!" );
	return (GLuint)0;
}

static void ERROR_APIENTRY errorGenProgramsARB( GLsizei n, GLuint * programs )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(programs);
	crError( "ERROR SPU: Unsupported function glGenProgramsARB called!" );
}

static void ERROR_APIENTRY errorGenProgramsNV( GLsizei n, GLuint * ids )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(ids);
	crError( "ERROR SPU: Unsupported function glGenProgramsNV called!" );
}

static void ERROR_APIENTRY errorGenQueriesARB( GLsizei n, GLuint * ids )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(ids);
	crError( "ERROR SPU: Unsupported function glGenQueriesARB called!" );
}

static void ERROR_APIENTRY errorGenRenderbuffersEXT( GLsizei n, GLuint * renderbuffers )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(renderbuffers);
	crError( "ERROR SPU: Unsupported function glGenRenderbuffersEXT called!" );
}

static void ERROR_APIENTRY errorGenTextures( GLsizei n, GLuint * textures )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(textures);
	crError( "ERROR SPU: Unsupported function glGenTextures called!" );
}

static void ERROR_APIENTRY errorGenerateMipmapEXT( GLenum target )
{
	ERROR_UNUSED(target);
	crError( "ERROR SPU: Unsupported function glGenerateMipmapEXT called!" );
}

static void ERROR_APIENTRY errorGetActiveAttrib( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, char * name )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(index);
	ERROR_UNUSED(bufSize);
	ERROR_UNUSED(length);
	ERROR_UNUSED(size);
	ERROR_UNUSED(type);
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glGetActiveAttrib called!" );
}

static void ERROR_APIENTRY errorGetActiveUniform( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, char * name )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(index);
	ERROR_UNUSED(bufSize);
	ERROR_UNUSED(length);
	ERROR_UNUSED(size);
	ERROR_UNUSED(type);
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glGetActiveUniform called!" );
}

static void ERROR_APIENTRY errorGetAttachedObjectsARB( VBoxGLhandleARB containerObj, GLsizei maxCount, GLsizei * count, VBoxGLhandleARB * obj )
{
	ERROR_UNUSED(containerObj);
	ERROR_UNUSED(maxCount);
	ERROR_UNUSED(count);
	ERROR_UNUSED(obj);
	crError( "ERROR SPU: Unsupported function glGetAttachedObjectsARB called!" );
}

static void ERROR_APIENTRY errorGetAttachedShaders( GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(maxCount);
	ERROR_UNUSED(count);
	ERROR_UNUSED(shaders);
	crError( "ERROR SPU: Unsupported function glGetAttachedShaders called!" );
}

static GLint ERROR_APIENTRY errorGetAttribLocation( GLuint program, const char * name )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glGetAttribLocation called!" );
	return (GLint)0;
}

static void ERROR_APIENTRY errorGetAttribsLocations( GLuint program, GLsizei maxcbData, GLsizei * cbData, GLvoid * pData )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(maxcbData);
	ERROR_UNUSED(cbData);
	ERROR_UNUSED(pData);
	crError( "ERROR SPU: Unsupported function glGetAttribsLocations called!" );
}

static void ERROR_APIENTRY errorGetBooleanv( GLenum pname, GLboolean * params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetBooleanv called!" );
}

static void ERROR_APIENTRY errorGetBufferParameterivARB( GLenum target, GLenum pname, GLint * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetBufferParameterivARB called!" );
}

static void ERROR_APIENTRY errorGetBufferPointervARB( GLenum target, GLenum pname, GLvoid ** params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetBufferPointervARB called!" );
}

static void ERROR_APIENTRY errorGetBufferSubDataARB( GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(offset);
	ERROR_UNUSED(size);
	ERROR_UNUSED(data);
	crError( "ERROR SPU: Unsupported function glGetBufferSubDataARB called!" );
}

static void ERROR_APIENTRY errorGetChromiumParametervCR( GLenum target, GLuint index, GLenum type, GLsizei count, GLvoid * values )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(type);
	ERROR_UNUSED(count);
	ERROR_UNUSED(values);
	crError( "ERROR SPU: Unsupported function glGetChromiumParametervCR called!" );
}

static void ERROR_APIENTRY errorGetClipPlane( GLenum plane, GLdouble * equation )
{
	ERROR_UNUSED(plane);
	ERROR_UNUSED(equation);
	crError( "ERROR SPU: Unsupported function glGetClipPlane called!" );
}

static void ERROR_APIENTRY errorGetCombinerInputParameterfvNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(stage);
	ERROR_UNUSED(portion);
	ERROR_UNUSED(variable);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetCombinerInputParameterfvNV called!" );
}

static void ERROR_APIENTRY errorGetCombinerInputParameterivNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params )
{
	ERROR_UNUSED(stage);
	ERROR_UNUSED(portion);
	ERROR_UNUSED(variable);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetCombinerInputParameterivNV called!" );
}

static void ERROR_APIENTRY errorGetCombinerOutputParameterfvNV( GLenum stage, GLenum portion, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(stage);
	ERROR_UNUSED(portion);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetCombinerOutputParameterfvNV called!" );
}

static void ERROR_APIENTRY errorGetCombinerOutputParameterivNV( GLenum stage, GLenum portion, GLenum pname, GLint * params )
{
	ERROR_UNUSED(stage);
	ERROR_UNUSED(portion);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetCombinerOutputParameterivNV called!" );
}

static void ERROR_APIENTRY errorGetCombinerStageParameterfvNV( GLenum stage, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(stage);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetCombinerStageParameterfvNV called!" );
}

static void ERROR_APIENTRY errorGetCompressedTexImageARB( GLenum target, GLint level, GLvoid * img )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(img);
	crError( "ERROR SPU: Unsupported function glGetCompressedTexImageARB called!" );
}

static void ERROR_APIENTRY errorGetDoublev( GLenum pname, GLdouble * params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetDoublev called!" );
}

static GLenum ERROR_APIENTRY errorGetError( void )
{
	crError( "ERROR SPU: Unsupported function glGetError called!" );
	return (GLenum)0;
}

static void ERROR_APIENTRY errorGetFenceivNV( GLuint fence, GLenum pname, GLint * params )
{
	ERROR_UNUSED(fence);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetFenceivNV called!" );
}

static void ERROR_APIENTRY errorGetFinalCombinerInputParameterfvNV( GLenum variable, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(variable);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetFinalCombinerInputParameterfvNV called!" );
}

static void ERROR_APIENTRY errorGetFinalCombinerInputParameterivNV( GLenum variable, GLenum pname, GLint * params )
{
	ERROR_UNUSED(variable);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetFinalCombinerInputParameterivNV called!" );
}

static void ERROR_APIENTRY errorGetFloatv( GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetFloatv called!" );
}

static void ERROR_APIENTRY errorGetFramebufferAttachmentParameterivEXT( GLenum target, GLenum attachment, GLenum pname, GLint * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(attachment);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetFramebufferAttachmentParameterivEXT called!" );
}

static VBoxGLhandleARB ERROR_APIENTRY errorGetHandleARB( GLenum pname )
{
	ERROR_UNUSED(pname);
	crError( "ERROR SPU: Unsupported function glGetHandleARB called!" );
	return (VBoxGLhandleARB)0;
}

static void ERROR_APIENTRY errorGetInfoLogARB( VBoxGLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog )
{
	ERROR_UNUSED(obj);
	ERROR_UNUSED(maxLength);
	ERROR_UNUSED(length);
	ERROR_UNUSED(infoLog);
	crError( "ERROR SPU: Unsupported function glGetInfoLogARB called!" );
}

static void ERROR_APIENTRY errorGetIntegerv( GLenum pname, GLint * params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetIntegerv called!" );
}

static void ERROR_APIENTRY errorGetLightfv( GLenum light, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(light);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetLightfv called!" );
}

static void ERROR_APIENTRY errorGetLightiv( GLenum light, GLenum pname, GLint * params )
{
	ERROR_UNUSED(light);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetLightiv called!" );
}

static void ERROR_APIENTRY errorGetMapdv( GLenum target, GLenum query, GLdouble * v )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(query);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glGetMapdv called!" );
}

static void ERROR_APIENTRY errorGetMapfv( GLenum target, GLenum query, GLfloat * v )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(query);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glGetMapfv called!" );
}

static void ERROR_APIENTRY errorGetMapiv( GLenum target, GLenum query, GLint * v )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(query);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glGetMapiv called!" );
}

static void ERROR_APIENTRY errorGetMaterialfv( GLenum face, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(face);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetMaterialfv called!" );
}

static void ERROR_APIENTRY errorGetMaterialiv( GLenum face, GLenum pname, GLint * params )
{
	ERROR_UNUSED(face);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetMaterialiv called!" );
}

static void ERROR_APIENTRY errorGetObjectParameterfvARB( VBoxGLhandleARB obj, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(obj);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetObjectParameterfvARB called!" );
}

static void ERROR_APIENTRY errorGetObjectParameterivARB( VBoxGLhandleARB obj, GLenum pname, GLint * params )
{
	ERROR_UNUSED(obj);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetObjectParameterivARB called!" );
}

static void ERROR_APIENTRY errorGetPixelMapfv( GLenum map, GLfloat * values )
{
	ERROR_UNUSED(map);
	ERROR_UNUSED(values);
	crError( "ERROR SPU: Unsupported function glGetPixelMapfv called!" );
}

static void ERROR_APIENTRY errorGetPixelMapuiv( GLenum map, GLuint * values )
{
	ERROR_UNUSED(map);
	ERROR_UNUSED(values);
	crError( "ERROR SPU: Unsupported function glGetPixelMapuiv called!" );
}

static void ERROR_APIENTRY errorGetPixelMapusv( GLenum map, GLushort * values )
{
	ERROR_UNUSED(map);
	ERROR_UNUSED(values);
	crError( "ERROR SPU: Unsupported function glGetPixelMapusv called!" );
}

static void ERROR_APIENTRY errorGetPointerv( GLenum pname, GLvoid ** params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetPointerv called!" );
}

static void ERROR_APIENTRY errorGetPolygonStipple( GLubyte * mask )
{
	ERROR_UNUSED(mask);
	crError( "ERROR SPU: Unsupported function glGetPolygonStipple called!" );
}

static void ERROR_APIENTRY errorGetProgramEnvParameterdvARB( GLenum target, GLuint index, GLdouble * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetProgramEnvParameterdvARB called!" );
}

static void ERROR_APIENTRY errorGetProgramEnvParameterfvARB( GLenum target, GLuint index, GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetProgramEnvParameterfvARB called!" );
}

static void ERROR_APIENTRY errorGetProgramInfoLog( GLuint program, GLsizei bufSize, GLsizei * length, char * infoLog )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(bufSize);
	ERROR_UNUSED(length);
	ERROR_UNUSED(infoLog);
	crError( "ERROR SPU: Unsupported function glGetProgramInfoLog called!" );
}

static void ERROR_APIENTRY errorGetProgramLocalParameterdvARB( GLenum target, GLuint index, GLdouble * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetProgramLocalParameterdvARB called!" );
}

static void ERROR_APIENTRY errorGetProgramLocalParameterfvARB( GLenum target, GLuint index, GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetProgramLocalParameterfvARB called!" );
}

static void ERROR_APIENTRY errorGetProgramNamedParameterdvNV( GLuint id, GLsizei len, const GLubyte * name, GLdouble * params )
{
	ERROR_UNUSED(id);
	ERROR_UNUSED(len);
	ERROR_UNUSED(name);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetProgramNamedParameterdvNV called!" );
}

static void ERROR_APIENTRY errorGetProgramNamedParameterfvNV( GLuint id, GLsizei len, const GLubyte * name, GLfloat * params )
{
	ERROR_UNUSED(id);
	ERROR_UNUSED(len);
	ERROR_UNUSED(name);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetProgramNamedParameterfvNV called!" );
}

static void ERROR_APIENTRY errorGetProgramParameterdvNV( GLenum target, GLuint index, GLenum pname, GLdouble * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetProgramParameterdvNV called!" );
}

static void ERROR_APIENTRY errorGetProgramParameterfvNV( GLenum target, GLuint index, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetProgramParameterfvNV called!" );
}

static void ERROR_APIENTRY errorGetProgramStringARB( GLenum target, GLenum pname, GLvoid * string )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(string);
	crError( "ERROR SPU: Unsupported function glGetProgramStringARB called!" );
}

static void ERROR_APIENTRY errorGetProgramStringNV( GLuint id, GLenum pname, GLubyte * program )
{
	ERROR_UNUSED(id);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(program);
	crError( "ERROR SPU: Unsupported function glGetProgramStringNV called!" );
}

static void ERROR_APIENTRY errorGetProgramiv( GLuint program, GLenum pname, GLint * params )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetProgramiv called!" );
}

static void ERROR_APIENTRY errorGetProgramivARB( GLenum target, GLenum pname, GLint * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetProgramivARB called!" );
}

static void ERROR_APIENTRY errorGetProgramivNV( GLuint id, GLenum pname, GLint * params )
{
	ERROR_UNUSED(id);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetProgramivNV called!" );
}

static void ERROR_APIENTRY errorGetQueryObjectivARB( GLuint id, GLenum pname, GLint * params )
{
	ERROR_UNUSED(id);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetQueryObjectivARB called!" );
}

static void ERROR_APIENTRY errorGetQueryObjectuivARB( GLuint id, GLenum pname, GLuint * params )
{
	ERROR_UNUSED(id);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetQueryObjectuivARB called!" );
}

static void ERROR_APIENTRY errorGetQueryivARB( GLenum target, GLenum pname, GLint * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetQueryivARB called!" );
}

static void ERROR_APIENTRY errorGetRenderbufferParameterivEXT( GLenum target, GLenum pname, GLint * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetRenderbufferParameterivEXT called!" );
}

static void ERROR_APIENTRY errorGetShaderInfoLog( GLuint shader, GLsizei bufSize, GLsizei * length, char * infoLog )
{
	ERROR_UNUSED(shader);
	ERROR_UNUSED(bufSize);
	ERROR_UNUSED(length);
	ERROR_UNUSED(infoLog);
	crError( "ERROR SPU: Unsupported function glGetShaderInfoLog called!" );
}

static void ERROR_APIENTRY errorGetShaderSource( GLuint shader, GLsizei bufSize, GLsizei * length, char * source )
{
	ERROR_UNUSED(shader);
	ERROR_UNUSED(bufSize);
	ERROR_UNUSED(length);
	ERROR_UNUSED(source);
	crError( "ERROR SPU: Unsupported function glGetShaderSource called!" );
}

static void ERROR_APIENTRY errorGetShaderiv( GLuint shader, GLenum pname, GLint * params )
{
	ERROR_UNUSED(shader);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetShaderiv called!" );
}

static const GLubyte * ERROR_APIENTRY errorGetString( GLenum name )
{
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glGetString called!" );
	return (const GLubyte *)0;
}

static void ERROR_APIENTRY errorGetTexEnvfv( GLenum target, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetTexEnvfv called!" );
}

static void ERROR_APIENTRY errorGetTexEnviv( GLenum target, GLenum pname, GLint * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetTexEnviv called!" );
}

static void ERROR_APIENTRY errorGetTexGendv( GLenum coord, GLenum pname, GLdouble * params )
{
	ERROR_UNUSED(coord);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetTexGendv called!" );
}

static void ERROR_APIENTRY errorGetTexGenfv( GLenum coord, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(coord);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetTexGenfv called!" );
}

static void ERROR_APIENTRY errorGetTexGeniv( GLenum coord, GLenum pname, GLint * params )
{
	ERROR_UNUSED(coord);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetTexGeniv called!" );
}

static void ERROR_APIENTRY errorGetTexImage( GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(format);
	ERROR_UNUSED(type);
	ERROR_UNUSED(pixels);
	crError( "ERROR SPU: Unsupported function glGetTexImage called!" );
}

static void ERROR_APIENTRY errorGetTexLevelParameterfv( GLenum target, GLint level, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetTexLevelParameterfv called!" );
}

static void ERROR_APIENTRY errorGetTexLevelParameteriv( GLenum target, GLint level, GLenum pname, GLint * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetTexLevelParameteriv called!" );
}

static void ERROR_APIENTRY errorGetTexParameterfv( GLenum target, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetTexParameterfv called!" );
}

static void ERROR_APIENTRY errorGetTexParameteriv( GLenum target, GLenum pname, GLint * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetTexParameteriv called!" );
}

static void ERROR_APIENTRY errorGetTrackMatrixivNV( GLenum target, GLuint address, GLenum pname, GLint * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(address);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetTrackMatrixivNV called!" );
}

static GLint ERROR_APIENTRY errorGetUniformLocation( GLuint program, const char * name )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glGetUniformLocation called!" );
	return (GLint)0;
}

static void ERROR_APIENTRY errorGetUniformfv( GLuint program, GLint location, GLfloat * params )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(location);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetUniformfv called!" );
}

static void ERROR_APIENTRY errorGetUniformiv( GLuint program, GLint location, GLint * params )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(location);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetUniformiv called!" );
}

static void ERROR_APIENTRY errorGetUniformsLocations( GLuint program, GLsizei maxcbData, GLsizei * cbData, GLvoid * pData )
{
	ERROR_UNUSED(program);
	ERROR_UNUSED(maxcbData);
	ERROR_UNUSED(cbData);
	ERROR_UNUSED(pData);
	crError( "ERROR SPU: Unsupported function glGetUniformsLocations called!" );
}

static void ERROR_APIENTRY errorGetVertexAttribPointervARB( GLuint index, GLenum pname, GLvoid ** pointer )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glGetVertexAttribPointervARB called!" );
}

static void ERROR_APIENTRY errorGetVertexAttribPointervNV( GLuint index, GLenum pname, GLvoid ** pointer )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glGetVertexAttribPointervNV called!" );
}

static void ERROR_APIENTRY errorGetVertexAttribdvARB( GLuint index, GLenum pname, GLdouble * params )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetVertexAttribdvARB called!" );
}

static void ERROR_APIENTRY errorGetVertexAttribdvNV( GLuint index, GLenum pname, GLdouble * params )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetVertexAttribdvNV called!" );
}

static void ERROR_APIENTRY errorGetVertexAttribfvARB( GLuint index, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetVertexAttribfvARB called!" );
}

static void ERROR_APIENTRY errorGetVertexAttribfvNV( GLuint index, GLenum pname, GLfloat * params )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetVertexAttribfvNV called!" );
}

static void ERROR_APIENTRY errorGetVertexAttribivARB( GLuint index, GLenum pname, GLint * params )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetVertexAttribivARB called!" );
}

static void ERROR_APIENTRY errorGetVertexAttribivNV( GLuint index, GLenum pname, GLint * params )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glGetVertexAttribivNV called!" );
}

static void ERROR_APIENTRY errorHint( GLenum target, GLenum mode )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glHint called!" );
}

static void ERROR_APIENTRY errorIndexMask( GLuint mask )
{
	ERROR_UNUSED(mask);
	crError( "ERROR SPU: Unsupported function glIndexMask called!" );
}

static void ERROR_APIENTRY errorIndexPointer( GLenum type, GLsizei stride, const GLvoid * pointer )
{
	ERROR_UNUSED(type);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glIndexPointer called!" );
}

static void ERROR_APIENTRY errorIndexd( GLdouble c )
{
	ERROR_UNUSED(c);
	crError( "ERROR SPU: Unsupported function glIndexd called!" );
}

static void ERROR_APIENTRY errorIndexdv( const GLdouble * c )
{
	ERROR_UNUSED(c);
	crError( "ERROR SPU: Unsupported function glIndexdv called!" );
}

static void ERROR_APIENTRY errorIndexf( GLfloat c )
{
	ERROR_UNUSED(c);
	crError( "ERROR SPU: Unsupported function glIndexf called!" );
}

static void ERROR_APIENTRY errorIndexfv( const GLfloat * c )
{
	ERROR_UNUSED(c);
	crError( "ERROR SPU: Unsupported function glIndexfv called!" );
}

static void ERROR_APIENTRY errorIndexi( GLint c )
{
	ERROR_UNUSED(c);
	crError( "ERROR SPU: Unsupported function glIndexi called!" );
}

static void ERROR_APIENTRY errorIndexiv( const GLint * c )
{
	ERROR_UNUSED(c);
	crError( "ERROR SPU: Unsupported function glIndexiv called!" );
}

static void ERROR_APIENTRY errorIndexs( GLshort c )
{
	ERROR_UNUSED(c);
	crError( "ERROR SPU: Unsupported function glIndexs called!" );
}

static void ERROR_APIENTRY errorIndexsv( const GLshort * c )
{
	ERROR_UNUSED(c);
	crError( "ERROR SPU: Unsupported function glIndexsv called!" );
}

static void ERROR_APIENTRY errorIndexub( GLubyte c )
{
	ERROR_UNUSED(c);
	crError( "ERROR SPU: Unsupported function glIndexub called!" );
}

static void ERROR_APIENTRY errorIndexubv( const GLubyte * c )
{
	ERROR_UNUSED(c);
	crError( "ERROR SPU: Unsupported function glIndexubv called!" );
}

static void ERROR_APIENTRY errorInitNames( void )
{
	crError( "ERROR SPU: Unsupported function glInitNames called!" );
}

static void ERROR_APIENTRY errorInterleavedArrays( GLenum format, GLsizei stride, const GLvoid * pointer )
{
	ERROR_UNUSED(format);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glInterleavedArrays called!" );
}

static GLboolean ERROR_APIENTRY errorIsBufferARB( GLuint buffer )
{
	ERROR_UNUSED(buffer);
	crError( "ERROR SPU: Unsupported function glIsBufferARB called!" );
	return (GLboolean)0;
}

static GLboolean ERROR_APIENTRY errorIsEnabled( GLenum cap )
{
	ERROR_UNUSED(cap);
	crError( "ERROR SPU: Unsupported function glIsEnabled called!" );
	return (GLboolean)0;
}

static GLboolean ERROR_APIENTRY errorIsFenceNV( GLuint fence )
{
	ERROR_UNUSED(fence);
	crError( "ERROR SPU: Unsupported function glIsFenceNV called!" );
	return (GLboolean)0;
}

static GLboolean ERROR_APIENTRY errorIsFramebufferEXT( GLuint framebuffer )
{
	ERROR_UNUSED(framebuffer);
	crError( "ERROR SPU: Unsupported function glIsFramebufferEXT called!" );
	return (GLboolean)0;
}

static GLboolean ERROR_APIENTRY errorIsList( GLuint list )
{
	ERROR_UNUSED(list);
	crError( "ERROR SPU: Unsupported function glIsList called!" );
	return (GLboolean)0;
}

static GLboolean ERROR_APIENTRY errorIsProgram( GLuint program )
{
	ERROR_UNUSED(program);
	crError( "ERROR SPU: Unsupported function glIsProgram called!" );
	return (GLboolean)0;
}

static GLboolean ERROR_APIENTRY errorIsProgramARB( GLuint program )
{
	ERROR_UNUSED(program);
	crError( "ERROR SPU: Unsupported function glIsProgramARB called!" );
	return (GLboolean)0;
}

static GLboolean ERROR_APIENTRY errorIsQueryARB( GLuint id )
{
	ERROR_UNUSED(id);
	crError( "ERROR SPU: Unsupported function glIsQueryARB called!" );
	return (GLboolean)0;
}

static GLboolean ERROR_APIENTRY errorIsRenderbufferEXT( GLuint renderbuffer )
{
	ERROR_UNUSED(renderbuffer);
	crError( "ERROR SPU: Unsupported function glIsRenderbufferEXT called!" );
	return (GLboolean)0;
}

static GLboolean ERROR_APIENTRY errorIsShader( GLuint shader )
{
	ERROR_UNUSED(shader);
	crError( "ERROR SPU: Unsupported function glIsShader called!" );
	return (GLboolean)0;
}

static GLboolean ERROR_APIENTRY errorIsTexture( GLuint texture )
{
	ERROR_UNUSED(texture);
	crError( "ERROR SPU: Unsupported function glIsTexture called!" );
	return (GLboolean)0;
}

static void ERROR_APIENTRY errorLightModelf( GLenum pname, GLfloat param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glLightModelf called!" );
}

static void ERROR_APIENTRY errorLightModelfv( GLenum pname, const GLfloat * params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glLightModelfv called!" );
}

static void ERROR_APIENTRY errorLightModeli( GLenum pname, GLint param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glLightModeli called!" );
}

static void ERROR_APIENTRY errorLightModeliv( GLenum pname, const GLint * params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glLightModeliv called!" );
}

static void ERROR_APIENTRY errorLightf( GLenum light, GLenum pname, GLfloat param )
{
	ERROR_UNUSED(light);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glLightf called!" );
}

static void ERROR_APIENTRY errorLightfv( GLenum light, GLenum pname, const GLfloat * params )
{
	ERROR_UNUSED(light);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glLightfv called!" );
}

static void ERROR_APIENTRY errorLighti( GLenum light, GLenum pname, GLint param )
{
	ERROR_UNUSED(light);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glLighti called!" );
}

static void ERROR_APIENTRY errorLightiv( GLenum light, GLenum pname, const GLint * params )
{
	ERROR_UNUSED(light);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glLightiv called!" );
}

static void ERROR_APIENTRY errorLineStipple( GLint factor, GLushort pattern )
{
	ERROR_UNUSED(factor);
	ERROR_UNUSED(pattern);
	crError( "ERROR SPU: Unsupported function glLineStipple called!" );
}

static void ERROR_APIENTRY errorLineWidth( GLfloat width )
{
	ERROR_UNUSED(width);
	crError( "ERROR SPU: Unsupported function glLineWidth called!" );
}

static void ERROR_APIENTRY errorLinkProgram( GLuint program )
{
	ERROR_UNUSED(program);
	crError( "ERROR SPU: Unsupported function glLinkProgram called!" );
}

static void ERROR_APIENTRY errorListBase( GLuint base )
{
	ERROR_UNUSED(base);
	crError( "ERROR SPU: Unsupported function glListBase called!" );
}

static void ERROR_APIENTRY errorLoadIdentity( void )
{
	crError( "ERROR SPU: Unsupported function glLoadIdentity called!" );
}

static void ERROR_APIENTRY errorLoadMatrixd( const GLdouble * m )
{
	ERROR_UNUSED(m);
	crError( "ERROR SPU: Unsupported function glLoadMatrixd called!" );
}

static void ERROR_APIENTRY errorLoadMatrixf( const GLfloat * m )
{
	ERROR_UNUSED(m);
	crError( "ERROR SPU: Unsupported function glLoadMatrixf called!" );
}

static void ERROR_APIENTRY errorLoadName( GLuint name )
{
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glLoadName called!" );
}

static void ERROR_APIENTRY errorLoadProgramNV( GLenum target, GLuint id, GLsizei len, const GLubyte * program )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(id);
	ERROR_UNUSED(len);
	ERROR_UNUSED(program);
	crError( "ERROR SPU: Unsupported function glLoadProgramNV called!" );
}

static void ERROR_APIENTRY errorLoadTransposeMatrixdARB( const GLdouble * m )
{
	ERROR_UNUSED(m);
	crError( "ERROR SPU: Unsupported function glLoadTransposeMatrixdARB called!" );
}

static void ERROR_APIENTRY errorLoadTransposeMatrixfARB( const GLfloat * m )
{
	ERROR_UNUSED(m);
	crError( "ERROR SPU: Unsupported function glLoadTransposeMatrixfARB called!" );
}

static void ERROR_APIENTRY errorLockArraysEXT( GLint first, GLint count )
{
	ERROR_UNUSED(first);
	ERROR_UNUSED(count);
	crError( "ERROR SPU: Unsupported function glLockArraysEXT called!" );
}

static void ERROR_APIENTRY errorLogicOp( GLenum opcode )
{
	ERROR_UNUSED(opcode);
	crError( "ERROR SPU: Unsupported function glLogicOp called!" );
}

static void ERROR_APIENTRY errorMakeCurrent( GLint window, GLint nativeWindow, GLint ctx )
{
	ERROR_UNUSED(window);
	ERROR_UNUSED(nativeWindow);
	ERROR_UNUSED(ctx);
	crError( "ERROR SPU: Unsupported function glMakeCurrent called!" );
}

static void ERROR_APIENTRY errorMap1d( GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(u1);
	ERROR_UNUSED(u2);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(order);
	ERROR_UNUSED(points);
	crError( "ERROR SPU: Unsupported function glMap1d called!" );
}

static void ERROR_APIENTRY errorMap1f( GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(u1);
	ERROR_UNUSED(u2);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(order);
	ERROR_UNUSED(points);
	crError( "ERROR SPU: Unsupported function glMap1f called!" );
}

static void ERROR_APIENTRY errorMap2d( GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(u1);
	ERROR_UNUSED(u2);
	ERROR_UNUSED(ustride);
	ERROR_UNUSED(uorder);
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	ERROR_UNUSED(vstride);
	ERROR_UNUSED(vorder);
	ERROR_UNUSED(points);
	crError( "ERROR SPU: Unsupported function glMap2d called!" );
}

static void ERROR_APIENTRY errorMap2f( GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(u1);
	ERROR_UNUSED(u2);
	ERROR_UNUSED(ustride);
	ERROR_UNUSED(uorder);
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	ERROR_UNUSED(vstride);
	ERROR_UNUSED(vorder);
	ERROR_UNUSED(points);
	crError( "ERROR SPU: Unsupported function glMap2f called!" );
}

static void * ERROR_APIENTRY errorMapBufferARB( GLenum target, GLenum access )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(access);
	crError( "ERROR SPU: Unsupported function glMapBufferARB called!" );
	return (void *)0;
}

static void ERROR_APIENTRY errorMapGrid1d( GLint un, GLdouble u1, GLdouble u2 )
{
	ERROR_UNUSED(un);
	ERROR_UNUSED(u1);
	ERROR_UNUSED(u2);
	crError( "ERROR SPU: Unsupported function glMapGrid1d called!" );
}

static void ERROR_APIENTRY errorMapGrid1f( GLint un, GLfloat u1, GLfloat u2 )
{
	ERROR_UNUSED(un);
	ERROR_UNUSED(u1);
	ERROR_UNUSED(u2);
	crError( "ERROR SPU: Unsupported function glMapGrid1f called!" );
}

static void ERROR_APIENTRY errorMapGrid2d( GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2 )
{
	ERROR_UNUSED(un);
	ERROR_UNUSED(u1);
	ERROR_UNUSED(u2);
	ERROR_UNUSED(vn);
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	crError( "ERROR SPU: Unsupported function glMapGrid2d called!" );
}

static void ERROR_APIENTRY errorMapGrid2f( GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2 )
{
	ERROR_UNUSED(un);
	ERROR_UNUSED(u1);
	ERROR_UNUSED(u2);
	ERROR_UNUSED(vn);
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	crError( "ERROR SPU: Unsupported function glMapGrid2f called!" );
}

static void ERROR_APIENTRY errorMaterialf( GLenum face, GLenum pname, GLfloat param )
{
	ERROR_UNUSED(face);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glMaterialf called!" );
}

static void ERROR_APIENTRY errorMaterialfv( GLenum face, GLenum pname, const GLfloat * params )
{
	ERROR_UNUSED(face);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glMaterialfv called!" );
}

static void ERROR_APIENTRY errorMateriali( GLenum face, GLenum pname, GLint param )
{
	ERROR_UNUSED(face);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glMateriali called!" );
}

static void ERROR_APIENTRY errorMaterialiv( GLenum face, GLenum pname, const GLint * params )
{
	ERROR_UNUSED(face);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glMaterialiv called!" );
}

static void ERROR_APIENTRY errorMatrixMode( GLenum mode )
{
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glMatrixMode called!" );
}

static void ERROR_APIENTRY errorMultMatrixd( const GLdouble * m )
{
	ERROR_UNUSED(m);
	crError( "ERROR SPU: Unsupported function glMultMatrixd called!" );
}

static void ERROR_APIENTRY errorMultMatrixf( const GLfloat * m )
{
	ERROR_UNUSED(m);
	crError( "ERROR SPU: Unsupported function glMultMatrixf called!" );
}

static void ERROR_APIENTRY errorMultTransposeMatrixdARB( const GLdouble * m )
{
	ERROR_UNUSED(m);
	crError( "ERROR SPU: Unsupported function glMultTransposeMatrixdARB called!" );
}

static void ERROR_APIENTRY errorMultTransposeMatrixfARB( const GLfloat * m )
{
	ERROR_UNUSED(m);
	crError( "ERROR SPU: Unsupported function glMultTransposeMatrixfARB called!" );
}

static void ERROR_APIENTRY errorMultiDrawArraysEXT( GLenum mode, GLint * first, GLsizei * count, GLsizei primcount )
{
	ERROR_UNUSED(mode);
	ERROR_UNUSED(first);
	ERROR_UNUSED(count);
	ERROR_UNUSED(primcount);
	crError( "ERROR SPU: Unsupported function glMultiDrawArraysEXT called!" );
}

static void ERROR_APIENTRY errorMultiDrawElementsEXT( GLenum mode, const GLsizei * count, GLenum type, const GLvoid ** indices, GLsizei primcount )
{
	ERROR_UNUSED(mode);
	ERROR_UNUSED(count);
	ERROR_UNUSED(type);
	ERROR_UNUSED(indices);
	ERROR_UNUSED(primcount);
	crError( "ERROR SPU: Unsupported function glMultiDrawElementsEXT called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord1dARB( GLenum texture, GLdouble s )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord1dARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord1dvARB( GLenum texture, const GLdouble * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord1dvARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord1fARB( GLenum texture, GLfloat s )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord1fARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord1fvARB( GLenum texture, const GLfloat * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord1fvARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord1iARB( GLenum texture, GLint s )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord1iARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord1ivARB( GLenum texture, const GLint * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord1ivARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord1sARB( GLenum texture, GLshort s )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord1sARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord1svARB( GLenum texture, const GLshort * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord1svARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord2dARB( GLenum texture, GLdouble s, GLdouble t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord2dARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord2dvARB( GLenum texture, const GLdouble * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord2dvARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord2fARB( GLenum texture, GLfloat s, GLfloat t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord2fARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord2fvARB( GLenum texture, const GLfloat * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord2fvARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord2iARB( GLenum texture, GLint s, GLint t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord2iARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord2ivARB( GLenum texture, const GLint * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord2ivARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord2sARB( GLenum texture, GLshort s, GLshort t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord2sARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord2svARB( GLenum texture, const GLshort * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord2svARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord3dARB( GLenum texture, GLdouble s, GLdouble t, GLdouble r )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord3dARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord3dvARB( GLenum texture, const GLdouble * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord3dvARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord3fARB( GLenum texture, GLfloat s, GLfloat t, GLfloat r )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord3fARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord3fvARB( GLenum texture, const GLfloat * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord3fvARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord3iARB( GLenum texture, GLint s, GLint t, GLint r )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord3iARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord3ivARB( GLenum texture, const GLint * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord3ivARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord3sARB( GLenum texture, GLshort s, GLshort t, GLshort r )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord3sARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord3svARB( GLenum texture, const GLshort * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord3svARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord4dARB( GLenum texture, GLdouble s, GLdouble t, GLdouble r, GLdouble q )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	ERROR_UNUSED(q);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord4dARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord4dvARB( GLenum texture, const GLdouble * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord4dvARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord4fARB( GLenum texture, GLfloat s, GLfloat t, GLfloat r, GLfloat q )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	ERROR_UNUSED(q);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord4fARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord4fvARB( GLenum texture, const GLfloat * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord4fvARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord4iARB( GLenum texture, GLint s, GLint t, GLint r, GLint q )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	ERROR_UNUSED(q);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord4iARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord4ivARB( GLenum texture, const GLint * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord4ivARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord4sARB( GLenum texture, GLshort s, GLshort t, GLshort r, GLshort q )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	ERROR_UNUSED(q);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord4sARB called!" );
}

static void ERROR_APIENTRY errorMultiTexCoord4svARB( GLenum texture, const GLshort * t )
{
	ERROR_UNUSED(texture);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glMultiTexCoord4svARB called!" );
}

static void ERROR_APIENTRY errorNewList( GLuint list, GLenum mode )
{
	ERROR_UNUSED(list);
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glNewList called!" );
}

static void ERROR_APIENTRY errorNormal3b( GLbyte nx, GLbyte ny, GLbyte nz )
{
	ERROR_UNUSED(nx);
	ERROR_UNUSED(ny);
	ERROR_UNUSED(nz);
	crError( "ERROR SPU: Unsupported function glNormal3b called!" );
}

static void ERROR_APIENTRY errorNormal3bv( const GLbyte * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glNormal3bv called!" );
}

static void ERROR_APIENTRY errorNormal3d( GLdouble nx, GLdouble ny, GLdouble nz )
{
	ERROR_UNUSED(nx);
	ERROR_UNUSED(ny);
	ERROR_UNUSED(nz);
	crError( "ERROR SPU: Unsupported function glNormal3d called!" );
}

static void ERROR_APIENTRY errorNormal3dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glNormal3dv called!" );
}

static void ERROR_APIENTRY errorNormal3f( GLfloat nx, GLfloat ny, GLfloat nz )
{
	ERROR_UNUSED(nx);
	ERROR_UNUSED(ny);
	ERROR_UNUSED(nz);
	crError( "ERROR SPU: Unsupported function glNormal3f called!" );
}

static void ERROR_APIENTRY errorNormal3fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glNormal3fv called!" );
}

static void ERROR_APIENTRY errorNormal3i( GLint nx, GLint ny, GLint nz )
{
	ERROR_UNUSED(nx);
	ERROR_UNUSED(ny);
	ERROR_UNUSED(nz);
	crError( "ERROR SPU: Unsupported function glNormal3i called!" );
}

static void ERROR_APIENTRY errorNormal3iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glNormal3iv called!" );
}

static void ERROR_APIENTRY errorNormal3s( GLshort nx, GLshort ny, GLshort nz )
{
	ERROR_UNUSED(nx);
	ERROR_UNUSED(ny);
	ERROR_UNUSED(nz);
	crError( "ERROR SPU: Unsupported function glNormal3s called!" );
}

static void ERROR_APIENTRY errorNormal3sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glNormal3sv called!" );
}

static void ERROR_APIENTRY errorNormalPointer( GLenum type, GLsizei stride, const GLvoid * pointer )
{
	ERROR_UNUSED(type);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glNormalPointer called!" );
}

static void ERROR_APIENTRY errorOrtho( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar )
{
	ERROR_UNUSED(left);
	ERROR_UNUSED(right);
	ERROR_UNUSED(bottom);
	ERROR_UNUSED(top);
	ERROR_UNUSED(zNear);
	ERROR_UNUSED(zFar);
	crError( "ERROR SPU: Unsupported function glOrtho called!" );
}

static void ERROR_APIENTRY errorPassThrough( GLfloat token )
{
	ERROR_UNUSED(token);
	crError( "ERROR SPU: Unsupported function glPassThrough called!" );
}

static void ERROR_APIENTRY errorPixelMapfv( GLenum map, GLsizei mapsize, const GLfloat * values )
{
	ERROR_UNUSED(map);
	ERROR_UNUSED(mapsize);
	ERROR_UNUSED(values);
	crError( "ERROR SPU: Unsupported function glPixelMapfv called!" );
}

static void ERROR_APIENTRY errorPixelMapuiv( GLenum map, GLsizei mapsize, const GLuint * values )
{
	ERROR_UNUSED(map);
	ERROR_UNUSED(mapsize);
	ERROR_UNUSED(values);
	crError( "ERROR SPU: Unsupported function glPixelMapuiv called!" );
}

static void ERROR_APIENTRY errorPixelMapusv( GLenum map, GLsizei mapsize, const GLushort * values )
{
	ERROR_UNUSED(map);
	ERROR_UNUSED(mapsize);
	ERROR_UNUSED(values);
	crError( "ERROR SPU: Unsupported function glPixelMapusv called!" );
}

static void ERROR_APIENTRY errorPixelStoref( GLenum pname, GLfloat param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glPixelStoref called!" );
}

static void ERROR_APIENTRY errorPixelStorei( GLenum pname, GLint param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glPixelStorei called!" );
}

static void ERROR_APIENTRY errorPixelTransferf( GLenum pname, GLfloat param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glPixelTransferf called!" );
}

static void ERROR_APIENTRY errorPixelTransferi( GLenum pname, GLint param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glPixelTransferi called!" );
}

static void ERROR_APIENTRY errorPixelZoom( GLfloat xfactor, GLfloat yfactor )
{
	ERROR_UNUSED(xfactor);
	ERROR_UNUSED(yfactor);
	crError( "ERROR SPU: Unsupported function glPixelZoom called!" );
}

static void ERROR_APIENTRY errorPointParameterfARB( GLenum pname, GLfloat param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glPointParameterfARB called!" );
}

static void ERROR_APIENTRY errorPointParameterfvARB( GLenum pname, const GLfloat * params )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glPointParameterfvARB called!" );
}

static void ERROR_APIENTRY errorPointParameteri( GLenum pname, GLint param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glPointParameteri called!" );
}

static void ERROR_APIENTRY errorPointParameteriv( GLenum pname, const GLint * param )
{
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glPointParameteriv called!" );
}

static void ERROR_APIENTRY errorPointSize( GLfloat size )
{
	ERROR_UNUSED(size);
	crError( "ERROR SPU: Unsupported function glPointSize called!" );
}

static void ERROR_APIENTRY errorPolygonMode( GLenum face, GLenum mode )
{
	ERROR_UNUSED(face);
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glPolygonMode called!" );
}

static void ERROR_APIENTRY errorPolygonOffset( GLfloat factor, GLfloat units )
{
	ERROR_UNUSED(factor);
	ERROR_UNUSED(units);
	crError( "ERROR SPU: Unsupported function glPolygonOffset called!" );
}

static void ERROR_APIENTRY errorPolygonStipple( const GLubyte * mask )
{
	ERROR_UNUSED(mask);
	crError( "ERROR SPU: Unsupported function glPolygonStipple called!" );
}

static void ERROR_APIENTRY errorPopAttrib( void )
{
	crError( "ERROR SPU: Unsupported function glPopAttrib called!" );
}

static void ERROR_APIENTRY errorPopClientAttrib( void )
{
	crError( "ERROR SPU: Unsupported function glPopClientAttrib called!" );
}

static void ERROR_APIENTRY errorPopMatrix( void )
{
	crError( "ERROR SPU: Unsupported function glPopMatrix called!" );
}

static void ERROR_APIENTRY errorPopName( void )
{
	crError( "ERROR SPU: Unsupported function glPopName called!" );
}

static void ERROR_APIENTRY errorPrioritizeTextures( GLsizei n, const GLuint * textures, const GLclampf * priorities )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(textures);
	ERROR_UNUSED(priorities);
	crError( "ERROR SPU: Unsupported function glPrioritizeTextures called!" );
}

static void ERROR_APIENTRY errorProgramEnvParameter4dARB( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glProgramEnvParameter4dARB called!" );
}

static void ERROR_APIENTRY errorProgramEnvParameter4dvARB( GLenum target, GLuint index, const GLdouble * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glProgramEnvParameter4dvARB called!" );
}

static void ERROR_APIENTRY errorProgramEnvParameter4fARB( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glProgramEnvParameter4fARB called!" );
}

static void ERROR_APIENTRY errorProgramEnvParameter4fvARB( GLenum target, GLuint index, const GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glProgramEnvParameter4fvARB called!" );
}

static void ERROR_APIENTRY errorProgramLocalParameter4dARB( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glProgramLocalParameter4dARB called!" );
}

static void ERROR_APIENTRY errorProgramLocalParameter4dvARB( GLenum target, GLuint index, const GLdouble * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glProgramLocalParameter4dvARB called!" );
}

static void ERROR_APIENTRY errorProgramLocalParameter4fARB( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glProgramLocalParameter4fARB called!" );
}

static void ERROR_APIENTRY errorProgramLocalParameter4fvARB( GLenum target, GLuint index, const GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glProgramLocalParameter4fvARB called!" );
}

static void ERROR_APIENTRY errorProgramNamedParameter4dNV( GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	ERROR_UNUSED(id);
	ERROR_UNUSED(len);
	ERROR_UNUSED(name);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glProgramNamedParameter4dNV called!" );
}

static void ERROR_APIENTRY errorProgramNamedParameter4dvNV( GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v )
{
	ERROR_UNUSED(id);
	ERROR_UNUSED(len);
	ERROR_UNUSED(name);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glProgramNamedParameter4dvNV called!" );
}

static void ERROR_APIENTRY errorProgramNamedParameter4fNV( GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	ERROR_UNUSED(id);
	ERROR_UNUSED(len);
	ERROR_UNUSED(name);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glProgramNamedParameter4fNV called!" );
}

static void ERROR_APIENTRY errorProgramNamedParameter4fvNV( GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v )
{
	ERROR_UNUSED(id);
	ERROR_UNUSED(len);
	ERROR_UNUSED(name);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glProgramNamedParameter4fvNV called!" );
}

static void ERROR_APIENTRY errorProgramParameter4dNV( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glProgramParameter4dNV called!" );
}

static void ERROR_APIENTRY errorProgramParameter4dvNV( GLenum target, GLuint index, const GLdouble * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glProgramParameter4dvNV called!" );
}

static void ERROR_APIENTRY errorProgramParameter4fNV( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glProgramParameter4fNV called!" );
}

static void ERROR_APIENTRY errorProgramParameter4fvNV( GLenum target, GLuint index, const GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glProgramParameter4fvNV called!" );
}

static void ERROR_APIENTRY errorProgramParameters4dvNV( GLenum target, GLuint index, GLuint num, const GLdouble * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(num);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glProgramParameters4dvNV called!" );
}

static void ERROR_APIENTRY errorProgramParameters4fvNV( GLenum target, GLuint index, GLuint num, const GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(index);
	ERROR_UNUSED(num);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glProgramParameters4fvNV called!" );
}

static void ERROR_APIENTRY errorProgramStringARB( GLenum target, GLenum format, GLsizei len, const GLvoid * string )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(format);
	ERROR_UNUSED(len);
	ERROR_UNUSED(string);
	crError( "ERROR SPU: Unsupported function glProgramStringARB called!" );
}

static void ERROR_APIENTRY errorPushAttrib( GLbitfield mask )
{
	ERROR_UNUSED(mask);
	crError( "ERROR SPU: Unsupported function glPushAttrib called!" );
}

static void ERROR_APIENTRY errorPushClientAttrib( GLbitfield mask )
{
	ERROR_UNUSED(mask);
	crError( "ERROR SPU: Unsupported function glPushClientAttrib called!" );
}

static void ERROR_APIENTRY errorPushMatrix( void )
{
	crError( "ERROR SPU: Unsupported function glPushMatrix called!" );
}

static void ERROR_APIENTRY errorPushName( GLuint name )
{
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glPushName called!" );
}

static void ERROR_APIENTRY errorRasterPos2d( GLdouble x, GLdouble y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glRasterPos2d called!" );
}

static void ERROR_APIENTRY errorRasterPos2dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos2dv called!" );
}

static void ERROR_APIENTRY errorRasterPos2f( GLfloat x, GLfloat y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glRasterPos2f called!" );
}

static void ERROR_APIENTRY errorRasterPos2fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos2fv called!" );
}

static void ERROR_APIENTRY errorRasterPos2i( GLint x, GLint y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glRasterPos2i called!" );
}

static void ERROR_APIENTRY errorRasterPos2iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos2iv called!" );
}

static void ERROR_APIENTRY errorRasterPos2s( GLshort x, GLshort y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glRasterPos2s called!" );
}

static void ERROR_APIENTRY errorRasterPos2sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos2sv called!" );
}

static void ERROR_APIENTRY errorRasterPos3d( GLdouble x, GLdouble y, GLdouble z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glRasterPos3d called!" );
}

static void ERROR_APIENTRY errorRasterPos3dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos3dv called!" );
}

static void ERROR_APIENTRY errorRasterPos3f( GLfloat x, GLfloat y, GLfloat z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glRasterPos3f called!" );
}

static void ERROR_APIENTRY errorRasterPos3fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos3fv called!" );
}

static void ERROR_APIENTRY errorRasterPos3i( GLint x, GLint y, GLint z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glRasterPos3i called!" );
}

static void ERROR_APIENTRY errorRasterPos3iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos3iv called!" );
}

static void ERROR_APIENTRY errorRasterPos3s( GLshort x, GLshort y, GLshort z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glRasterPos3s called!" );
}

static void ERROR_APIENTRY errorRasterPos3sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos3sv called!" );
}

static void ERROR_APIENTRY errorRasterPos4d( GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glRasterPos4d called!" );
}

static void ERROR_APIENTRY errorRasterPos4dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos4dv called!" );
}

static void ERROR_APIENTRY errorRasterPos4f( GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glRasterPos4f called!" );
}

static void ERROR_APIENTRY errorRasterPos4fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos4fv called!" );
}

static void ERROR_APIENTRY errorRasterPos4i( GLint x, GLint y, GLint z, GLint w )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glRasterPos4i called!" );
}

static void ERROR_APIENTRY errorRasterPos4iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos4iv called!" );
}

static void ERROR_APIENTRY errorRasterPos4s( GLshort x, GLshort y, GLshort z, GLshort w )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glRasterPos4s called!" );
}

static void ERROR_APIENTRY errorRasterPos4sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glRasterPos4sv called!" );
}

static void ERROR_APIENTRY errorReadBuffer( GLenum mode )
{
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glReadBuffer called!" );
}

static void ERROR_APIENTRY errorReadPixels( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(format);
	ERROR_UNUSED(type);
	ERROR_UNUSED(pixels);
	crError( "ERROR SPU: Unsupported function glReadPixels called!" );
}

static void ERROR_APIENTRY errorRectd( GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2 )
{
	ERROR_UNUSED(x1);
	ERROR_UNUSED(y1);
	ERROR_UNUSED(x2);
	ERROR_UNUSED(y2);
	crError( "ERROR SPU: Unsupported function glRectd called!" );
}

static void ERROR_APIENTRY errorRectdv( const GLdouble * v1, const GLdouble * v2 )
{
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	crError( "ERROR SPU: Unsupported function glRectdv called!" );
}

static void ERROR_APIENTRY errorRectf( GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2 )
{
	ERROR_UNUSED(x1);
	ERROR_UNUSED(y1);
	ERROR_UNUSED(x2);
	ERROR_UNUSED(y2);
	crError( "ERROR SPU: Unsupported function glRectf called!" );
}

static void ERROR_APIENTRY errorRectfv( const GLfloat * v1, const GLfloat * v2 )
{
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	crError( "ERROR SPU: Unsupported function glRectfv called!" );
}

static void ERROR_APIENTRY errorRecti( GLint x1, GLint y1, GLint x2, GLint y2 )
{
	ERROR_UNUSED(x1);
	ERROR_UNUSED(y1);
	ERROR_UNUSED(x2);
	ERROR_UNUSED(y2);
	crError( "ERROR SPU: Unsupported function glRecti called!" );
}

static void ERROR_APIENTRY errorRectiv( const GLint * v1, const GLint * v2 )
{
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	crError( "ERROR SPU: Unsupported function glRectiv called!" );
}

static void ERROR_APIENTRY errorRects( GLshort x1, GLshort y1, GLshort x2, GLshort y2 )
{
	ERROR_UNUSED(x1);
	ERROR_UNUSED(y1);
	ERROR_UNUSED(x2);
	ERROR_UNUSED(y2);
	crError( "ERROR SPU: Unsupported function glRects called!" );
}

static void ERROR_APIENTRY errorRectsv( const GLshort * v1, const GLshort * v2 )
{
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	crError( "ERROR SPU: Unsupported function glRectsv called!" );
}

static GLint ERROR_APIENTRY errorRenderMode( GLenum mode )
{
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glRenderMode called!" );
	return (GLint)0;
}

static void ERROR_APIENTRY errorRenderbufferStorageEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(internalformat);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	crError( "ERROR SPU: Unsupported function glRenderbufferStorageEXT called!" );
}

static void ERROR_APIENTRY errorRequestResidentProgramsNV( GLsizei n, const GLuint * ids )
{
	ERROR_UNUSED(n);
	ERROR_UNUSED(ids);
	crError( "ERROR SPU: Unsupported function glRequestResidentProgramsNV called!" );
}

static void ERROR_APIENTRY errorRotated( GLdouble angle, GLdouble x, GLdouble y, GLdouble z )
{
	ERROR_UNUSED(angle);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glRotated called!" );
}

static void ERROR_APIENTRY errorRotatef( GLfloat angle, GLfloat x, GLfloat y, GLfloat z )
{
	ERROR_UNUSED(angle);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glRotatef called!" );
}

static void ERROR_APIENTRY errorSampleCoverageARB( GLclampf value, GLboolean invert )
{
	ERROR_UNUSED(value);
	ERROR_UNUSED(invert);
	crError( "ERROR SPU: Unsupported function glSampleCoverageARB called!" );
}

static void ERROR_APIENTRY errorScaled( GLdouble x, GLdouble y, GLdouble z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glScaled called!" );
}

static void ERROR_APIENTRY errorScalef( GLfloat x, GLfloat y, GLfloat z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glScalef called!" );
}

static void ERROR_APIENTRY errorScissor( GLint x, GLint y, GLsizei width, GLsizei height )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	crError( "ERROR SPU: Unsupported function glScissor called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3bEXT( GLbyte red, GLbyte green, GLbyte blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3bEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3bvEXT( const GLbyte * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3bvEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3dEXT( GLdouble red, GLdouble green, GLdouble blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3dEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3dvEXT( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3dvEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3fEXT( GLfloat red, GLfloat green, GLfloat blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3fEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3fvEXT( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3fvEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3iEXT( GLint red, GLint green, GLint blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3iEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3ivEXT( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3ivEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3sEXT( GLshort red, GLshort green, GLshort blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3sEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3svEXT( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3svEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3ubEXT( GLubyte red, GLubyte green, GLubyte blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3ubEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3ubvEXT( const GLubyte * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3ubvEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3uiEXT( GLuint red, GLuint green, GLuint blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3uiEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3uivEXT( const GLuint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3uivEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3usEXT( GLushort red, GLushort green, GLushort blue )
{
	ERROR_UNUSED(red);
	ERROR_UNUSED(green);
	ERROR_UNUSED(blue);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3usEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColor3usvEXT( const GLushort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glSecondaryColor3usvEXT called!" );
}

static void ERROR_APIENTRY errorSecondaryColorPointerEXT( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer )
{
	ERROR_UNUSED(size);
	ERROR_UNUSED(type);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glSecondaryColorPointerEXT called!" );
}

static void ERROR_APIENTRY errorSelectBuffer( GLsizei size, GLuint * buffer )
{
	ERROR_UNUSED(size);
	ERROR_UNUSED(buffer);
	crError( "ERROR SPU: Unsupported function glSelectBuffer called!" );
}

static void ERROR_APIENTRY errorSemaphoreCreateCR( GLuint name, GLuint count )
{
	ERROR_UNUSED(name);
	ERROR_UNUSED(count);
	crError( "ERROR SPU: Unsupported function glSemaphoreCreateCR called!" );
}

static void ERROR_APIENTRY errorSemaphoreDestroyCR( GLuint name )
{
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glSemaphoreDestroyCR called!" );
}

static void ERROR_APIENTRY errorSemaphorePCR( GLuint name )
{
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glSemaphorePCR called!" );
}

static void ERROR_APIENTRY errorSemaphoreVCR( GLuint name )
{
	ERROR_UNUSED(name);
	crError( "ERROR SPU: Unsupported function glSemaphoreVCR called!" );
}

static void ERROR_APIENTRY errorSetFenceNV( GLuint fence, GLenum condition )
{
	ERROR_UNUSED(fence);
	ERROR_UNUSED(condition);
	crError( "ERROR SPU: Unsupported function glSetFenceNV called!" );
}

static void ERROR_APIENTRY errorShadeModel( GLenum mode )
{
	ERROR_UNUSED(mode);
	crError( "ERROR SPU: Unsupported function glShadeModel called!" );
}

static void ERROR_APIENTRY errorShaderSource( GLuint shader, GLsizei count, const char ** string, const GLint * length )
{
	ERROR_UNUSED(shader);
	ERROR_UNUSED(count);
	ERROR_UNUSED(string);
	ERROR_UNUSED(length);
	crError( "ERROR SPU: Unsupported function glShaderSource called!" );
}

static void ERROR_APIENTRY errorStencilFunc( GLenum func, GLint ref, GLuint mask )
{
	ERROR_UNUSED(func);
	ERROR_UNUSED(ref);
	ERROR_UNUSED(mask);
	crError( "ERROR SPU: Unsupported function glStencilFunc called!" );
}

static void ERROR_APIENTRY errorStencilFuncSeparate( GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask )
{
	ERROR_UNUSED(frontfunc);
	ERROR_UNUSED(backfunc);
	ERROR_UNUSED(ref);
	ERROR_UNUSED(mask);
	crError( "ERROR SPU: Unsupported function glStencilFuncSeparate called!" );
}

static void ERROR_APIENTRY errorStencilMask( GLuint mask )
{
	ERROR_UNUSED(mask);
	crError( "ERROR SPU: Unsupported function glStencilMask called!" );
}

static void ERROR_APIENTRY errorStencilMaskSeparate( GLenum face, GLuint mask )
{
	ERROR_UNUSED(face);
	ERROR_UNUSED(mask);
	crError( "ERROR SPU: Unsupported function glStencilMaskSeparate called!" );
}

static void ERROR_APIENTRY errorStencilOp( GLenum fail, GLenum zfail, GLenum zpass )
{
	ERROR_UNUSED(fail);
	ERROR_UNUSED(zfail);
	ERROR_UNUSED(zpass);
	crError( "ERROR SPU: Unsupported function glStencilOp called!" );
}

static void ERROR_APIENTRY errorStencilOpSeparate( GLenum face, GLenum fail, GLenum zfail, GLenum zpass )
{
	ERROR_UNUSED(face);
	ERROR_UNUSED(fail);
	ERROR_UNUSED(zfail);
	ERROR_UNUSED(zpass);
	crError( "ERROR SPU: Unsupported function glStencilOpSeparate called!" );
}

static void ERROR_APIENTRY errorStringMarkerGREMEDY( GLsizei len, const GLvoid* string )
{
	ERROR_UNUSED(len);
	ERROR_UNUSED(string);
	crError( "ERROR SPU: Unsupported function glStringMarkerGREMEDY called!" );
}

static void ERROR_APIENTRY errorSwapBuffers( GLint window, GLint flags )
{
	ERROR_UNUSED(window);
	ERROR_UNUSED(flags);
	crError( "ERROR SPU: Unsupported function glSwapBuffers called!" );
}

static GLboolean ERROR_APIENTRY errorTestFenceNV( GLuint fence )
{
	ERROR_UNUSED(fence);
	crError( "ERROR SPU: Unsupported function glTestFenceNV called!" );
	return (GLboolean)0;
}

static void ERROR_APIENTRY errorTexCoord1d( GLdouble s )
{
	ERROR_UNUSED(s);
	crError( "ERROR SPU: Unsupported function glTexCoord1d called!" );
}

static void ERROR_APIENTRY errorTexCoord1dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord1dv called!" );
}

static void ERROR_APIENTRY errorTexCoord1f( GLfloat s )
{
	ERROR_UNUSED(s);
	crError( "ERROR SPU: Unsupported function glTexCoord1f called!" );
}

static void ERROR_APIENTRY errorTexCoord1fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord1fv called!" );
}

static void ERROR_APIENTRY errorTexCoord1i( GLint s )
{
	ERROR_UNUSED(s);
	crError( "ERROR SPU: Unsupported function glTexCoord1i called!" );
}

static void ERROR_APIENTRY errorTexCoord1iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord1iv called!" );
}

static void ERROR_APIENTRY errorTexCoord1s( GLshort s )
{
	ERROR_UNUSED(s);
	crError( "ERROR SPU: Unsupported function glTexCoord1s called!" );
}

static void ERROR_APIENTRY errorTexCoord1sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord1sv called!" );
}

static void ERROR_APIENTRY errorTexCoord2d( GLdouble s, GLdouble t )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glTexCoord2d called!" );
}

static void ERROR_APIENTRY errorTexCoord2dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord2dv called!" );
}

static void ERROR_APIENTRY errorTexCoord2f( GLfloat s, GLfloat t )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glTexCoord2f called!" );
}

static void ERROR_APIENTRY errorTexCoord2fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord2fv called!" );
}

static void ERROR_APIENTRY errorTexCoord2i( GLint s, GLint t )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glTexCoord2i called!" );
}

static void ERROR_APIENTRY errorTexCoord2iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord2iv called!" );
}

static void ERROR_APIENTRY errorTexCoord2s( GLshort s, GLshort t )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	crError( "ERROR SPU: Unsupported function glTexCoord2s called!" );
}

static void ERROR_APIENTRY errorTexCoord2sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord2sv called!" );
}

static void ERROR_APIENTRY errorTexCoord3d( GLdouble s, GLdouble t, GLdouble r )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	crError( "ERROR SPU: Unsupported function glTexCoord3d called!" );
}

static void ERROR_APIENTRY errorTexCoord3dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord3dv called!" );
}

static void ERROR_APIENTRY errorTexCoord3f( GLfloat s, GLfloat t, GLfloat r )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	crError( "ERROR SPU: Unsupported function glTexCoord3f called!" );
}

static void ERROR_APIENTRY errorTexCoord3fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord3fv called!" );
}

static void ERROR_APIENTRY errorTexCoord3i( GLint s, GLint t, GLint r )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	crError( "ERROR SPU: Unsupported function glTexCoord3i called!" );
}

static void ERROR_APIENTRY errorTexCoord3iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord3iv called!" );
}

static void ERROR_APIENTRY errorTexCoord3s( GLshort s, GLshort t, GLshort r )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	crError( "ERROR SPU: Unsupported function glTexCoord3s called!" );
}

static void ERROR_APIENTRY errorTexCoord3sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord3sv called!" );
}

static void ERROR_APIENTRY errorTexCoord4d( GLdouble s, GLdouble t, GLdouble r, GLdouble q )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	ERROR_UNUSED(q);
	crError( "ERROR SPU: Unsupported function glTexCoord4d called!" );
}

static void ERROR_APIENTRY errorTexCoord4dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord4dv called!" );
}

static void ERROR_APIENTRY errorTexCoord4f( GLfloat s, GLfloat t, GLfloat r, GLfloat q )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	ERROR_UNUSED(q);
	crError( "ERROR SPU: Unsupported function glTexCoord4f called!" );
}

static void ERROR_APIENTRY errorTexCoord4fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord4fv called!" );
}

static void ERROR_APIENTRY errorTexCoord4i( GLint s, GLint t, GLint r, GLint q )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	ERROR_UNUSED(q);
	crError( "ERROR SPU: Unsupported function glTexCoord4i called!" );
}

static void ERROR_APIENTRY errorTexCoord4iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord4iv called!" );
}

static void ERROR_APIENTRY errorTexCoord4s( GLshort s, GLshort t, GLshort r, GLshort q )
{
	ERROR_UNUSED(s);
	ERROR_UNUSED(t);
	ERROR_UNUSED(r);
	ERROR_UNUSED(q);
	crError( "ERROR SPU: Unsupported function glTexCoord4s called!" );
}

static void ERROR_APIENTRY errorTexCoord4sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glTexCoord4sv called!" );
}

static void ERROR_APIENTRY errorTexCoordPointer( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer )
{
	ERROR_UNUSED(size);
	ERROR_UNUSED(type);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glTexCoordPointer called!" );
}

static void ERROR_APIENTRY errorTexEnvf( GLenum target, GLenum pname, GLfloat param )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glTexEnvf called!" );
}

static void ERROR_APIENTRY errorTexEnvfv( GLenum target, GLenum pname, const GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glTexEnvfv called!" );
}

static void ERROR_APIENTRY errorTexEnvi( GLenum target, GLenum pname, GLint param )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glTexEnvi called!" );
}

static void ERROR_APIENTRY errorTexEnviv( GLenum target, GLenum pname, const GLint * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glTexEnviv called!" );
}

static void ERROR_APIENTRY errorTexGend( GLenum coord, GLenum pname, GLdouble param )
{
	ERROR_UNUSED(coord);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glTexGend called!" );
}

static void ERROR_APIENTRY errorTexGendv( GLenum coord, GLenum pname, const GLdouble * params )
{
	ERROR_UNUSED(coord);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glTexGendv called!" );
}

static void ERROR_APIENTRY errorTexGenf( GLenum coord, GLenum pname, GLfloat param )
{
	ERROR_UNUSED(coord);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glTexGenf called!" );
}

static void ERROR_APIENTRY errorTexGenfv( GLenum coord, GLenum pname, const GLfloat * params )
{
	ERROR_UNUSED(coord);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glTexGenfv called!" );
}

static void ERROR_APIENTRY errorTexGeni( GLenum coord, GLenum pname, GLint param )
{
	ERROR_UNUSED(coord);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glTexGeni called!" );
}

static void ERROR_APIENTRY errorTexGeniv( GLenum coord, GLenum pname, const GLint * params )
{
	ERROR_UNUSED(coord);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glTexGeniv called!" );
}

static void ERROR_APIENTRY errorTexImage1D( GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(internalFormat);
	ERROR_UNUSED(width);
	ERROR_UNUSED(border);
	ERROR_UNUSED(format);
	ERROR_UNUSED(type);
	ERROR_UNUSED(pixels);
	crError( "ERROR SPU: Unsupported function glTexImage1D called!" );
}

static void ERROR_APIENTRY errorTexImage2D( GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(internalFormat);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(border);
	ERROR_UNUSED(format);
	ERROR_UNUSED(type);
	ERROR_UNUSED(pixels);
	crError( "ERROR SPU: Unsupported function glTexImage2D called!" );
}

static void ERROR_APIENTRY errorTexImage3D( GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(internalFormat);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(depth);
	ERROR_UNUSED(border);
	ERROR_UNUSED(format);
	ERROR_UNUSED(type);
	ERROR_UNUSED(pixels);
	crError( "ERROR SPU: Unsupported function glTexImage3D called!" );
}

static void ERROR_APIENTRY errorTexImage3DEXT( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(internalFormat);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(depth);
	ERROR_UNUSED(border);
	ERROR_UNUSED(format);
	ERROR_UNUSED(type);
	ERROR_UNUSED(pixels);
	crError( "ERROR SPU: Unsupported function glTexImage3DEXT called!" );
}

static void ERROR_APIENTRY errorTexParameterf( GLenum target, GLenum pname, GLfloat param )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glTexParameterf called!" );
}

static void ERROR_APIENTRY errorTexParameterfv( GLenum target, GLenum pname, const GLfloat * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glTexParameterfv called!" );
}

static void ERROR_APIENTRY errorTexParameteri( GLenum target, GLenum pname, GLint param )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(param);
	crError( "ERROR SPU: Unsupported function glTexParameteri called!" );
}

static void ERROR_APIENTRY errorTexParameteriv( GLenum target, GLenum pname, const GLint * params )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(pname);
	ERROR_UNUSED(params);
	crError( "ERROR SPU: Unsupported function glTexParameteriv called!" );
}

static void ERROR_APIENTRY errorTexSubImage1D( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(xoffset);
	ERROR_UNUSED(width);
	ERROR_UNUSED(format);
	ERROR_UNUSED(type);
	ERROR_UNUSED(pixels);
	crError( "ERROR SPU: Unsupported function glTexSubImage1D called!" );
}

static void ERROR_APIENTRY errorTexSubImage2D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(xoffset);
	ERROR_UNUSED(yoffset);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(format);
	ERROR_UNUSED(type);
	ERROR_UNUSED(pixels);
	crError( "ERROR SPU: Unsupported function glTexSubImage2D called!" );
}

static void ERROR_APIENTRY errorTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(level);
	ERROR_UNUSED(xoffset);
	ERROR_UNUSED(yoffset);
	ERROR_UNUSED(zoffset);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(depth);
	ERROR_UNUSED(format);
	ERROR_UNUSED(type);
	ERROR_UNUSED(pixels);
	crError( "ERROR SPU: Unsupported function glTexSubImage3D called!" );
}

static void ERROR_APIENTRY errorTrackMatrixNV( GLenum target, GLuint address, GLenum matrix, GLenum transform )
{
	ERROR_UNUSED(target);
	ERROR_UNUSED(address);
	ERROR_UNUSED(matrix);
	ERROR_UNUSED(transform);
	crError( "ERROR SPU: Unsupported function glTrackMatrixNV called!" );
}

static void ERROR_APIENTRY errorTranslated( GLdouble x, GLdouble y, GLdouble z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glTranslated called!" );
}

static void ERROR_APIENTRY errorTranslatef( GLfloat x, GLfloat y, GLfloat z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glTranslatef called!" );
}

static void ERROR_APIENTRY errorUniform1f( GLint location, GLfloat v0 )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(v0);
	crError( "ERROR SPU: Unsupported function glUniform1f called!" );
}

static void ERROR_APIENTRY errorUniform1fv( GLint location, GLsizei count, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniform1fv called!" );
}

static void ERROR_APIENTRY errorUniform1i( GLint location, GLint v0 )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(v0);
	crError( "ERROR SPU: Unsupported function glUniform1i called!" );
}

static void ERROR_APIENTRY errorUniform1iv( GLint location, GLsizei count, const GLint * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniform1iv called!" );
}

static void ERROR_APIENTRY errorUniform2f( GLint location, GLfloat v0, GLfloat v1 )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(v0);
	ERROR_UNUSED(v1);
	crError( "ERROR SPU: Unsupported function glUniform2f called!" );
}

static void ERROR_APIENTRY errorUniform2fv( GLint location, GLsizei count, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniform2fv called!" );
}

static void ERROR_APIENTRY errorUniform2i( GLint location, GLint v0, GLint v1 )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(v0);
	ERROR_UNUSED(v1);
	crError( "ERROR SPU: Unsupported function glUniform2i called!" );
}

static void ERROR_APIENTRY errorUniform2iv( GLint location, GLsizei count, const GLint * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniform2iv called!" );
}

static void ERROR_APIENTRY errorUniform3f( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(v0);
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	crError( "ERROR SPU: Unsupported function glUniform3f called!" );
}

static void ERROR_APIENTRY errorUniform3fv( GLint location, GLsizei count, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniform3fv called!" );
}

static void ERROR_APIENTRY errorUniform3i( GLint location, GLint v0, GLint v1, GLint v2 )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(v0);
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	crError( "ERROR SPU: Unsupported function glUniform3i called!" );
}

static void ERROR_APIENTRY errorUniform3iv( GLint location, GLsizei count, const GLint * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniform3iv called!" );
}

static void ERROR_APIENTRY errorUniform4f( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(v0);
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	ERROR_UNUSED(v3);
	crError( "ERROR SPU: Unsupported function glUniform4f called!" );
}

static void ERROR_APIENTRY errorUniform4fv( GLint location, GLsizei count, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniform4fv called!" );
}

static void ERROR_APIENTRY errorUniform4i( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(v0);
	ERROR_UNUSED(v1);
	ERROR_UNUSED(v2);
	ERROR_UNUSED(v3);
	crError( "ERROR SPU: Unsupported function glUniform4i called!" );
}

static void ERROR_APIENTRY errorUniform4iv( GLint location, GLsizei count, const GLint * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniform4iv called!" );
}

static void ERROR_APIENTRY errorUniformMatrix2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(transpose);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniformMatrix2fv called!" );
}

static void ERROR_APIENTRY errorUniformMatrix2x3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(transpose);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniformMatrix2x3fv called!" );
}

static void ERROR_APIENTRY errorUniformMatrix2x4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(transpose);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniformMatrix2x4fv called!" );
}

static void ERROR_APIENTRY errorUniformMatrix3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(transpose);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniformMatrix3fv called!" );
}

static void ERROR_APIENTRY errorUniformMatrix3x2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(transpose);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniformMatrix3x2fv called!" );
}

static void ERROR_APIENTRY errorUniformMatrix3x4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(transpose);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniformMatrix3x4fv called!" );
}

static void ERROR_APIENTRY errorUniformMatrix4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(transpose);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniformMatrix4fv called!" );
}

static void ERROR_APIENTRY errorUniformMatrix4x2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(transpose);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniformMatrix4x2fv called!" );
}

static void ERROR_APIENTRY errorUniformMatrix4x3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	ERROR_UNUSED(location);
	ERROR_UNUSED(count);
	ERROR_UNUSED(transpose);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glUniformMatrix4x3fv called!" );
}

static void ERROR_APIENTRY errorUnlockArraysEXT( void )
{
	crError( "ERROR SPU: Unsupported function glUnlockArraysEXT called!" );
}

static GLboolean ERROR_APIENTRY errorUnmapBufferARB( GLenum target )
{
	ERROR_UNUSED(target);
	crError( "ERROR SPU: Unsupported function glUnmapBufferARB called!" );
	return (GLboolean)0;
}

static void ERROR_APIENTRY errorUseProgram( GLuint program )
{
	ERROR_UNUSED(program);
	crError( "ERROR SPU: Unsupported function glUseProgram called!" );
}

static void ERROR_APIENTRY errorVBoxAttachThread( void )
{
	crError( "ERROR SPU: Unsupported function glVBoxAttachThread called!" );
}

static void ERROR_APIENTRY errorVBoxConChromiumParameteriCR( GLint con, GLenum target, GLint value )
{
	ERROR_UNUSED(con);
	ERROR_UNUSED(target);
	ERROR_UNUSED(value);
	crError( "ERROR SPU: Unsupported function glVBoxConChromiumParameteriCR called!" );
}

static void ERROR_APIENTRY errorVBoxConChromiumParametervCR( GLint con, GLenum target, GLenum type, GLsizei count, const GLvoid * values )
{
	ERROR_UNUSED(con);
	ERROR_UNUSED(target);
	ERROR_UNUSED(type);
	ERROR_UNUSED(count);
	ERROR_UNUSED(values);
	crError( "ERROR SPU: Unsupported function glVBoxConChromiumParametervCR called!" );
}

static GLint ERROR_APIENTRY errorVBoxConCreate( struct VBOXUHGSMI * pHgsmi )
{
	ERROR_UNUSED(pHgsmi);
	crError( "ERROR SPU: Unsupported function glVBoxConCreate called!" );
	return (GLint)0;
}

static void ERROR_APIENTRY errorVBoxConDestroy( GLint con )
{
	ERROR_UNUSED(con);
	crError( "ERROR SPU: Unsupported function glVBoxConDestroy called!" );
}

static void ERROR_APIENTRY errorVBoxConFlush( GLint con )
{
	ERROR_UNUSED(con);
	crError( "ERROR SPU: Unsupported function glVBoxConFlush called!" );
}

static GLint ERROR_APIENTRY errorVBoxCreateContext( GLint con, const char * dpyName, GLint visual, GLint shareCtx )
{
	ERROR_UNUSED(con);
	ERROR_UNUSED(dpyName);
	ERROR_UNUSED(visual);
	ERROR_UNUSED(shareCtx);
	crError( "ERROR SPU: Unsupported function glVBoxCreateContext called!" );
	return (GLint)0;
}

static void ERROR_APIENTRY errorVBoxDetachThread( void )
{
	crError( "ERROR SPU: Unsupported function glVBoxDetachThread called!" );
}

static GLuint ERROR_APIENTRY errorVBoxPackGetInjectID( GLint con )
{
	ERROR_UNUSED(con);
	crError( "ERROR SPU: Unsupported function glVBoxPackGetInjectID called!" );
	return (GLuint)0;
}

static void ERROR_APIENTRY errorVBoxPackSetInjectID( GLuint id )
{
	ERROR_UNUSED(id);
	crError( "ERROR SPU: Unsupported function glVBoxPackSetInjectID called!" );
}

static GLint ERROR_APIENTRY errorVBoxPackSetInjectThread( struct VBOXUHGSMI * pHgsmi )
{
	ERROR_UNUSED(pHgsmi);
	crError( "ERROR SPU: Unsupported function glVBoxPackSetInjectThread called!" );
	return (GLint)0;
}

static void ERROR_APIENTRY errorVBoxPresentComposition( GLint win, const struct VBOXVR_SCR_COMPOSITOR * pCompositor, const struct VBOXVR_SCR_COMPOSITOR_ENTRY * pChangedEntry )
{
	ERROR_UNUSED(win);
	ERROR_UNUSED(pCompositor);
	ERROR_UNUSED(pChangedEntry);
	crError( "ERROR SPU: Unsupported function glVBoxPresentComposition called!" );
}

static GLint ERROR_APIENTRY errorVBoxWindowCreate( GLint con, const char * dpyName, GLint visBits )
{
	ERROR_UNUSED(con);
	ERROR_UNUSED(dpyName);
	ERROR_UNUSED(visBits);
	crError( "ERROR SPU: Unsupported function glVBoxWindowCreate called!" );
	return (GLint)0;
}

static void ERROR_APIENTRY errorVBoxWindowDestroy( GLint con, GLint window )
{
	ERROR_UNUSED(con);
	ERROR_UNUSED(window);
	crError( "ERROR SPU: Unsupported function glVBoxWindowDestroy called!" );
}

static void ERROR_APIENTRY errorValidateProgram( GLuint program )
{
	ERROR_UNUSED(program);
	crError( "ERROR SPU: Unsupported function glValidateProgram called!" );
}

static void ERROR_APIENTRY errorVertex2d( GLdouble x, GLdouble y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glVertex2d called!" );
}

static void ERROR_APIENTRY errorVertex2dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex2dv called!" );
}

static void ERROR_APIENTRY errorVertex2f( GLfloat x, GLfloat y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glVertex2f called!" );
}

static void ERROR_APIENTRY errorVertex2fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex2fv called!" );
}

static void ERROR_APIENTRY errorVertex2i( GLint x, GLint y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glVertex2i called!" );
}

static void ERROR_APIENTRY errorVertex2iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex2iv called!" );
}

static void ERROR_APIENTRY errorVertex2s( GLshort x, GLshort y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glVertex2s called!" );
}

static void ERROR_APIENTRY errorVertex2sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex2sv called!" );
}

static void ERROR_APIENTRY errorVertex3d( GLdouble x, GLdouble y, GLdouble z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glVertex3d called!" );
}

static void ERROR_APIENTRY errorVertex3dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex3dv called!" );
}

static void ERROR_APIENTRY errorVertex3f( GLfloat x, GLfloat y, GLfloat z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glVertex3f called!" );
}

static void ERROR_APIENTRY errorVertex3fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex3fv called!" );
}

static void ERROR_APIENTRY errorVertex3i( GLint x, GLint y, GLint z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glVertex3i called!" );
}

static void ERROR_APIENTRY errorVertex3iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex3iv called!" );
}

static void ERROR_APIENTRY errorVertex3s( GLshort x, GLshort y, GLshort z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glVertex3s called!" );
}

static void ERROR_APIENTRY errorVertex3sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex3sv called!" );
}

static void ERROR_APIENTRY errorVertex4d( GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glVertex4d called!" );
}

static void ERROR_APIENTRY errorVertex4dv( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex4dv called!" );
}

static void ERROR_APIENTRY errorVertex4f( GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glVertex4f called!" );
}

static void ERROR_APIENTRY errorVertex4fv( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex4fv called!" );
}

static void ERROR_APIENTRY errorVertex4i( GLint x, GLint y, GLint z, GLint w )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glVertex4i called!" );
}

static void ERROR_APIENTRY errorVertex4iv( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex4iv called!" );
}

static void ERROR_APIENTRY errorVertex4s( GLshort x, GLshort y, GLshort z, GLshort w )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glVertex4s called!" );
}

static void ERROR_APIENTRY errorVertex4sv( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertex4sv called!" );
}

static void ERROR_APIENTRY errorVertexArrayRangeNV( GLsizei length, const GLvoid * pointer )
{
	ERROR_UNUSED(length);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glVertexArrayRangeNV called!" );
}

static void ERROR_APIENTRY errorVertexAttrib1dARB( GLuint index, GLdouble x )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	crError( "ERROR SPU: Unsupported function glVertexAttrib1dARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib1dvARB( GLuint index, const GLdouble * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib1dvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib1fARB( GLuint index, GLfloat x )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	crError( "ERROR SPU: Unsupported function glVertexAttrib1fARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib1fvARB( GLuint index, const GLfloat * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib1fvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib1sARB( GLuint index, GLshort x )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	crError( "ERROR SPU: Unsupported function glVertexAttrib1sARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib1svARB( GLuint index, const GLshort * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib1svARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib2dARB( GLuint index, GLdouble x, GLdouble y )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glVertexAttrib2dARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib2dvARB( GLuint index, const GLdouble * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib2dvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib2fARB( GLuint index, GLfloat x, GLfloat y )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glVertexAttrib2fARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib2fvARB( GLuint index, const GLfloat * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib2fvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib2sARB( GLuint index, GLshort x, GLshort y )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glVertexAttrib2sARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib2svARB( GLuint index, const GLshort * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib2svARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib3dARB( GLuint index, GLdouble x, GLdouble y, GLdouble z )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glVertexAttrib3dARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib3dvARB( GLuint index, const GLdouble * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib3dvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib3fARB( GLuint index, GLfloat x, GLfloat y, GLfloat z )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glVertexAttrib3fARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib3fvARB( GLuint index, const GLfloat * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib3fvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib3sARB( GLuint index, GLshort x, GLshort y, GLshort z )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glVertexAttrib3sARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib3svARB( GLuint index, const GLshort * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib3svARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4NbvARB( GLuint index, const GLbyte * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4NbvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4NivARB( GLuint index, const GLint * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4NivARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4NsvARB( GLuint index, const GLshort * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4NsvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4NubARB( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4NubARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4NubvARB( GLuint index, const GLubyte * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4NubvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4NuivARB( GLuint index, const GLuint * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4NuivARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4NusvARB( GLuint index, const GLushort * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4NusvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4bvARB( GLuint index, const GLbyte * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4bvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4dARB( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4dARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4dvARB( GLuint index, const GLdouble * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4dvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4fARB( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4fARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4fvARB( GLuint index, const GLfloat * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4fvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4ivARB( GLuint index, const GLint * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4ivARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4sARB( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	ERROR_UNUSED(w);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4sARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4svARB( GLuint index, const GLshort * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4svARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4ubvARB( GLuint index, const GLubyte * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4ubvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4uivARB( GLuint index, const GLuint * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4uivARB called!" );
}

static void ERROR_APIENTRY errorVertexAttrib4usvARB( GLuint index, const GLushort * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttrib4usvARB called!" );
}

static void ERROR_APIENTRY errorVertexAttribPointerARB( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(size);
	ERROR_UNUSED(type);
	ERROR_UNUSED(normalized);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glVertexAttribPointerARB called!" );
}

static void ERROR_APIENTRY errorVertexAttribPointerNV( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(size);
	ERROR_UNUSED(type);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glVertexAttribPointerNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs1dvNV( GLuint index, GLsizei n, const GLdouble * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs1dvNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs1fvNV( GLuint index, GLsizei n, const GLfloat * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs1fvNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs1svNV( GLuint index, GLsizei n, const GLshort * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs1svNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs2dvNV( GLuint index, GLsizei n, const GLdouble * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs2dvNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs2fvNV( GLuint index, GLsizei n, const GLfloat * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs2fvNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs2svNV( GLuint index, GLsizei n, const GLshort * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs2svNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs3dvNV( GLuint index, GLsizei n, const GLdouble * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs3dvNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs3fvNV( GLuint index, GLsizei n, const GLfloat * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs3fvNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs3svNV( GLuint index, GLsizei n, const GLshort * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs3svNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs4dvNV( GLuint index, GLsizei n, const GLdouble * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs4dvNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs4fvNV( GLuint index, GLsizei n, const GLfloat * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs4fvNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs4svNV( GLuint index, GLsizei n, const GLshort * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs4svNV called!" );
}

static void ERROR_APIENTRY errorVertexAttribs4ubvNV( GLuint index, GLsizei n, const GLubyte * v )
{
	ERROR_UNUSED(index);
	ERROR_UNUSED(n);
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glVertexAttribs4ubvNV called!" );
}

static void ERROR_APIENTRY errorVertexPointer( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer )
{
	ERROR_UNUSED(size);
	ERROR_UNUSED(type);
	ERROR_UNUSED(stride);
	ERROR_UNUSED(pointer);
	crError( "ERROR SPU: Unsupported function glVertexPointer called!" );
}

static void ERROR_APIENTRY errorViewport( GLint x, GLint y, GLsizei width, GLsizei height )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	crError( "ERROR SPU: Unsupported function glViewport called!" );
}

static GLint ERROR_APIENTRY errorWindowCreate( const char * dpyName, GLint visBits )
{
	ERROR_UNUSED(dpyName);
	ERROR_UNUSED(visBits);
	crError( "ERROR SPU: Unsupported function glWindowCreate called!" );
	return (GLint)0;
}

static void ERROR_APIENTRY errorWindowDestroy( GLint window )
{
	ERROR_UNUSED(window);
	crError( "ERROR SPU: Unsupported function glWindowDestroy called!" );
}

static void ERROR_APIENTRY errorWindowPos2dARB( GLdouble x, GLdouble y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glWindowPos2dARB called!" );
}

static void ERROR_APIENTRY errorWindowPos2dvARB( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glWindowPos2dvARB called!" );
}

static void ERROR_APIENTRY errorWindowPos2fARB( GLfloat x, GLfloat y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glWindowPos2fARB called!" );
}

static void ERROR_APIENTRY errorWindowPos2fvARB( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glWindowPos2fvARB called!" );
}

static void ERROR_APIENTRY errorWindowPos2iARB( GLint x, GLint y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glWindowPos2iARB called!" );
}

static void ERROR_APIENTRY errorWindowPos2ivARB( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glWindowPos2ivARB called!" );
}

static void ERROR_APIENTRY errorWindowPos2sARB( GLshort x, GLshort y )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glWindowPos2sARB called!" );
}

static void ERROR_APIENTRY errorWindowPos2svARB( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glWindowPos2svARB called!" );
}

static void ERROR_APIENTRY errorWindowPos3dARB( GLdouble x, GLdouble y, GLdouble z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glWindowPos3dARB called!" );
}

static void ERROR_APIENTRY errorWindowPos3dvARB( const GLdouble * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glWindowPos3dvARB called!" );
}

static void ERROR_APIENTRY errorWindowPos3fARB( GLfloat x, GLfloat y, GLfloat z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glWindowPos3fARB called!" );
}

static void ERROR_APIENTRY errorWindowPos3fvARB( const GLfloat * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glWindowPos3fvARB called!" );
}

static void ERROR_APIENTRY errorWindowPos3iARB( GLint x, GLint y, GLint z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glWindowPos3iARB called!" );
}

static void ERROR_APIENTRY errorWindowPos3ivARB( const GLint * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glWindowPos3ivARB called!" );
}

static void ERROR_APIENTRY errorWindowPos3sARB( GLshort x, GLshort y, GLshort z )
{
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	ERROR_UNUSED(z);
	crError( "ERROR SPU: Unsupported function glWindowPos3sARB called!" );
}

static void ERROR_APIENTRY errorWindowPos3svARB( const GLshort * v )
{
	ERROR_UNUSED(v);
	crError( "ERROR SPU: Unsupported function glWindowPos3svARB called!" );
}

static void ERROR_APIENTRY errorWindowPosition( GLint window, GLint x, GLint y )
{
	ERROR_UNUSED(window);
	ERROR_UNUSED(x);
	ERROR_UNUSED(y);
	crError( "ERROR SPU: Unsupported function glWindowPosition called!" );
}

static void ERROR_APIENTRY errorWindowShow( GLint window, GLint flag )
{
	ERROR_UNUSED(window);
	ERROR_UNUSED(flag);
	crError( "ERROR SPU: Unsupported function glWindowShow called!" );
}

static void ERROR_APIENTRY errorWindowSize( GLint window, GLint w, GLint h )
{
	ERROR_UNUSED(window);
	ERROR_UNUSED(w);
	ERROR_UNUSED(h);
	crError( "ERROR SPU: Unsupported function glWindowSize called!" );
}

static void ERROR_APIENTRY errorWindowVisibleRegion( GLint window, GLint cRects, const GLint * pRects )
{
	ERROR_UNUSED(window);
	ERROR_UNUSED(cRects);
	ERROR_UNUSED(pRects);
	crError( "ERROR SPU: Unsupported function glWindowVisibleRegion called!" );
}

static void ERROR_APIENTRY errorWriteback( GLint * writeback )
{
	ERROR_UNUSED(writeback);
	crError( "ERROR SPU: Unsupported function glWriteback called!" );
}

static void ERROR_APIENTRY errorZPixCR( GLsizei width, GLsizei height, GLenum format, GLenum type, GLenum ztype, GLint zparm, GLint length, const GLvoid * pixels )
{
	ERROR_UNUSED(width);
	ERROR_UNUSED(height);
	ERROR_UNUSED(format);
	ERROR_UNUSED(type);
	ERROR_UNUSED(ztype);
	ERROR_UNUSED(zparm);
	ERROR_UNUSED(length);
	ERROR_UNUSED(pixels);
	crError( "ERROR SPU: Unsupported function glZPixCR called!" );
}
SPUNamedFunctionTable _cr_error_table[] = {
	{ "Accum", (SPUGenericFunction) errorAccum },
	{ "ActiveStencilFaceEXT", (SPUGenericFunction) errorActiveStencilFaceEXT },
	{ "ActiveTextureARB", (SPUGenericFunction) errorActiveTextureARB },
	{ "AlphaFunc", (SPUGenericFunction) errorAlphaFunc },
	{ "AreProgramsResidentNV", (SPUGenericFunction) errorAreProgramsResidentNV },
	{ "AreTexturesResident", (SPUGenericFunction) errorAreTexturesResident },
	{ "ArrayElement", (SPUGenericFunction) errorArrayElement },
	{ "AttachShader", (SPUGenericFunction) errorAttachShader },
	{ "BarrierCreateCR", (SPUGenericFunction) errorBarrierCreateCR },
	{ "BarrierDestroyCR", (SPUGenericFunction) errorBarrierDestroyCR },
	{ "BarrierExecCR", (SPUGenericFunction) errorBarrierExecCR },
	{ "Begin", (SPUGenericFunction) errorBegin },
	{ "BeginQueryARB", (SPUGenericFunction) errorBeginQueryARB },
	{ "BindAttribLocation", (SPUGenericFunction) errorBindAttribLocation },
	{ "BindBufferARB", (SPUGenericFunction) errorBindBufferARB },
	{ "BindFramebufferEXT", (SPUGenericFunction) errorBindFramebufferEXT },
	{ "BindProgramARB", (SPUGenericFunction) errorBindProgramARB },
	{ "BindProgramNV", (SPUGenericFunction) errorBindProgramNV },
	{ "BindRenderbufferEXT", (SPUGenericFunction) errorBindRenderbufferEXT },
	{ "BindTexture", (SPUGenericFunction) errorBindTexture },
	{ "Bitmap", (SPUGenericFunction) errorBitmap },
	{ "BlendColorEXT", (SPUGenericFunction) errorBlendColorEXT },
	{ "BlendEquationEXT", (SPUGenericFunction) errorBlendEquationEXT },
	{ "BlendEquationSeparate", (SPUGenericFunction) errorBlendEquationSeparate },
	{ "BlendFunc", (SPUGenericFunction) errorBlendFunc },
	{ "BlendFuncSeparateEXT", (SPUGenericFunction) errorBlendFuncSeparateEXT },
	{ "BlitFramebufferEXT", (SPUGenericFunction) errorBlitFramebufferEXT },
	{ "BoundsInfoCR", (SPUGenericFunction) errorBoundsInfoCR },
	{ "BufferDataARB", (SPUGenericFunction) errorBufferDataARB },
	{ "BufferSubDataARB", (SPUGenericFunction) errorBufferSubDataARB },
	{ "CallList", (SPUGenericFunction) errorCallList },
	{ "CallLists", (SPUGenericFunction) errorCallLists },
	{ "CheckFramebufferStatusEXT", (SPUGenericFunction) errorCheckFramebufferStatusEXT },
	{ "ChromiumParameterfCR", (SPUGenericFunction) errorChromiumParameterfCR },
	{ "ChromiumParameteriCR", (SPUGenericFunction) errorChromiumParameteriCR },
	{ "ChromiumParametervCR", (SPUGenericFunction) errorChromiumParametervCR },
	{ "Clear", (SPUGenericFunction) errorClear },
	{ "ClearAccum", (SPUGenericFunction) errorClearAccum },
	{ "ClearColor", (SPUGenericFunction) errorClearColor },
	{ "ClearDepth", (SPUGenericFunction) errorClearDepth },
	{ "ClearIndex", (SPUGenericFunction) errorClearIndex },
	{ "ClearStencil", (SPUGenericFunction) errorClearStencil },
	{ "ClientActiveTextureARB", (SPUGenericFunction) errorClientActiveTextureARB },
	{ "ClipPlane", (SPUGenericFunction) errorClipPlane },
	{ "Color3b", (SPUGenericFunction) errorColor3b },
	{ "Color3bv", (SPUGenericFunction) errorColor3bv },
	{ "Color3d", (SPUGenericFunction) errorColor3d },
	{ "Color3dv", (SPUGenericFunction) errorColor3dv },
	{ "Color3f", (SPUGenericFunction) errorColor3f },
	{ "Color3fv", (SPUGenericFunction) errorColor3fv },
	{ "Color3i", (SPUGenericFunction) errorColor3i },
	{ "Color3iv", (SPUGenericFunction) errorColor3iv },
	{ "Color3s", (SPUGenericFunction) errorColor3s },
	{ "Color3sv", (SPUGenericFunction) errorColor3sv },
	{ "Color3ub", (SPUGenericFunction) errorColor3ub },
	{ "Color3ubv", (SPUGenericFunction) errorColor3ubv },
	{ "Color3ui", (SPUGenericFunction) errorColor3ui },
	{ "Color3uiv", (SPUGenericFunction) errorColor3uiv },
	{ "Color3us", (SPUGenericFunction) errorColor3us },
	{ "Color3usv", (SPUGenericFunction) errorColor3usv },
	{ "Color4b", (SPUGenericFunction) errorColor4b },
	{ "Color4bv", (SPUGenericFunction) errorColor4bv },
	{ "Color4d", (SPUGenericFunction) errorColor4d },
	{ "Color4dv", (SPUGenericFunction) errorColor4dv },
	{ "Color4f", (SPUGenericFunction) errorColor4f },
	{ "Color4fv", (SPUGenericFunction) errorColor4fv },
	{ "Color4i", (SPUGenericFunction) errorColor4i },
	{ "Color4iv", (SPUGenericFunction) errorColor4iv },
	{ "Color4s", (SPUGenericFunction) errorColor4s },
	{ "Color4sv", (SPUGenericFunction) errorColor4sv },
	{ "Color4ub", (SPUGenericFunction) errorColor4ub },
	{ "Color4ubv", (SPUGenericFunction) errorColor4ubv },
	{ "Color4ui", (SPUGenericFunction) errorColor4ui },
	{ "Color4uiv", (SPUGenericFunction) errorColor4uiv },
	{ "Color4us", (SPUGenericFunction) errorColor4us },
	{ "Color4usv", (SPUGenericFunction) errorColor4usv },
	{ "ColorMask", (SPUGenericFunction) errorColorMask },
	{ "ColorMaterial", (SPUGenericFunction) errorColorMaterial },
	{ "ColorPointer", (SPUGenericFunction) errorColorPointer },
	{ "CombinerInputNV", (SPUGenericFunction) errorCombinerInputNV },
	{ "CombinerOutputNV", (SPUGenericFunction) errorCombinerOutputNV },
	{ "CombinerParameterfNV", (SPUGenericFunction) errorCombinerParameterfNV },
	{ "CombinerParameterfvNV", (SPUGenericFunction) errorCombinerParameterfvNV },
	{ "CombinerParameteriNV", (SPUGenericFunction) errorCombinerParameteriNV },
	{ "CombinerParameterivNV", (SPUGenericFunction) errorCombinerParameterivNV },
	{ "CombinerStageParameterfvNV", (SPUGenericFunction) errorCombinerStageParameterfvNV },
	{ "CompileShader", (SPUGenericFunction) errorCompileShader },
	{ "CompressedTexImage1DARB", (SPUGenericFunction) errorCompressedTexImage1DARB },
	{ "CompressedTexImage2DARB", (SPUGenericFunction) errorCompressedTexImage2DARB },
	{ "CompressedTexImage3DARB", (SPUGenericFunction) errorCompressedTexImage3DARB },
	{ "CompressedTexSubImage1DARB", (SPUGenericFunction) errorCompressedTexSubImage1DARB },
	{ "CompressedTexSubImage2DARB", (SPUGenericFunction) errorCompressedTexSubImage2DARB },
	{ "CompressedTexSubImage3DARB", (SPUGenericFunction) errorCompressedTexSubImage3DARB },
	{ "CopyPixels", (SPUGenericFunction) errorCopyPixels },
	{ "CopyTexImage1D", (SPUGenericFunction) errorCopyTexImage1D },
	{ "CopyTexImage2D", (SPUGenericFunction) errorCopyTexImage2D },
	{ "CopyTexSubImage1D", (SPUGenericFunction) errorCopyTexSubImage1D },
	{ "CopyTexSubImage2D", (SPUGenericFunction) errorCopyTexSubImage2D },
	{ "CopyTexSubImage3D", (SPUGenericFunction) errorCopyTexSubImage3D },
	{ "CreateContext", (SPUGenericFunction) errorCreateContext },
	{ "CreateProgram", (SPUGenericFunction) errorCreateProgram },
	{ "CreateShader", (SPUGenericFunction) errorCreateShader },
	{ "CullFace", (SPUGenericFunction) errorCullFace },
	{ "DeleteBuffersARB", (SPUGenericFunction) errorDeleteBuffersARB },
	{ "DeleteFencesNV", (SPUGenericFunction) errorDeleteFencesNV },
	{ "DeleteFramebuffersEXT", (SPUGenericFunction) errorDeleteFramebuffersEXT },
	{ "DeleteLists", (SPUGenericFunction) errorDeleteLists },
	{ "DeleteObjectARB", (SPUGenericFunction) errorDeleteObjectARB },
	{ "DeleteProgram", (SPUGenericFunction) errorDeleteProgram },
	{ "DeleteProgramsARB", (SPUGenericFunction) errorDeleteProgramsARB },
	{ "DeleteQueriesARB", (SPUGenericFunction) errorDeleteQueriesARB },
	{ "DeleteRenderbuffersEXT", (SPUGenericFunction) errorDeleteRenderbuffersEXT },
	{ "DeleteShader", (SPUGenericFunction) errorDeleteShader },
	{ "DeleteTextures", (SPUGenericFunction) errorDeleteTextures },
	{ "DepthFunc", (SPUGenericFunction) errorDepthFunc },
	{ "DepthMask", (SPUGenericFunction) errorDepthMask },
	{ "DepthRange", (SPUGenericFunction) errorDepthRange },
	{ "DestroyContext", (SPUGenericFunction) errorDestroyContext },
	{ "DetachShader", (SPUGenericFunction) errorDetachShader },
	{ "Disable", (SPUGenericFunction) errorDisable },
	{ "DisableClientState", (SPUGenericFunction) errorDisableClientState },
	{ "DisableVertexAttribArrayARB", (SPUGenericFunction) errorDisableVertexAttribArrayARB },
	{ "DrawArrays", (SPUGenericFunction) errorDrawArrays },
	{ "DrawBuffer", (SPUGenericFunction) errorDrawBuffer },
	{ "DrawBuffers", (SPUGenericFunction) errorDrawBuffers },
	{ "DrawElements", (SPUGenericFunction) errorDrawElements },
	{ "DrawPixels", (SPUGenericFunction) errorDrawPixels },
	{ "DrawRangeElements", (SPUGenericFunction) errorDrawRangeElements },
	{ "EdgeFlag", (SPUGenericFunction) errorEdgeFlag },
	{ "EdgeFlagPointer", (SPUGenericFunction) errorEdgeFlagPointer },
	{ "EdgeFlagv", (SPUGenericFunction) errorEdgeFlagv },
	{ "Enable", (SPUGenericFunction) errorEnable },
	{ "EnableClientState", (SPUGenericFunction) errorEnableClientState },
	{ "EnableVertexAttribArrayARB", (SPUGenericFunction) errorEnableVertexAttribArrayARB },
	{ "End", (SPUGenericFunction) errorEnd },
	{ "EndList", (SPUGenericFunction) errorEndList },
	{ "EndQueryARB", (SPUGenericFunction) errorEndQueryARB },
	{ "EvalCoord1d", (SPUGenericFunction) errorEvalCoord1d },
	{ "EvalCoord1dv", (SPUGenericFunction) errorEvalCoord1dv },
	{ "EvalCoord1f", (SPUGenericFunction) errorEvalCoord1f },
	{ "EvalCoord1fv", (SPUGenericFunction) errorEvalCoord1fv },
	{ "EvalCoord2d", (SPUGenericFunction) errorEvalCoord2d },
	{ "EvalCoord2dv", (SPUGenericFunction) errorEvalCoord2dv },
	{ "EvalCoord2f", (SPUGenericFunction) errorEvalCoord2f },
	{ "EvalCoord2fv", (SPUGenericFunction) errorEvalCoord2fv },
	{ "EvalMesh1", (SPUGenericFunction) errorEvalMesh1 },
	{ "EvalMesh2", (SPUGenericFunction) errorEvalMesh2 },
	{ "EvalPoint1", (SPUGenericFunction) errorEvalPoint1 },
	{ "EvalPoint2", (SPUGenericFunction) errorEvalPoint2 },
	{ "ExecuteProgramNV", (SPUGenericFunction) errorExecuteProgramNV },
	{ "FeedbackBuffer", (SPUGenericFunction) errorFeedbackBuffer },
	{ "FinalCombinerInputNV", (SPUGenericFunction) errorFinalCombinerInputNV },
	{ "Finish", (SPUGenericFunction) errorFinish },
	{ "FinishFenceNV", (SPUGenericFunction) errorFinishFenceNV },
	{ "Flush", (SPUGenericFunction) errorFlush },
	{ "FlushVertexArrayRangeNV", (SPUGenericFunction) errorFlushVertexArrayRangeNV },
	{ "FogCoordPointerEXT", (SPUGenericFunction) errorFogCoordPointerEXT },
	{ "FogCoorddEXT", (SPUGenericFunction) errorFogCoorddEXT },
	{ "FogCoorddvEXT", (SPUGenericFunction) errorFogCoorddvEXT },
	{ "FogCoordfEXT", (SPUGenericFunction) errorFogCoordfEXT },
	{ "FogCoordfvEXT", (SPUGenericFunction) errorFogCoordfvEXT },
	{ "Fogf", (SPUGenericFunction) errorFogf },
	{ "Fogfv", (SPUGenericFunction) errorFogfv },
	{ "Fogi", (SPUGenericFunction) errorFogi },
	{ "Fogiv", (SPUGenericFunction) errorFogiv },
	{ "FramebufferRenderbufferEXT", (SPUGenericFunction) errorFramebufferRenderbufferEXT },
	{ "FramebufferTexture1DEXT", (SPUGenericFunction) errorFramebufferTexture1DEXT },
	{ "FramebufferTexture2DEXT", (SPUGenericFunction) errorFramebufferTexture2DEXT },
	{ "FramebufferTexture3DEXT", (SPUGenericFunction) errorFramebufferTexture3DEXT },
	{ "FrontFace", (SPUGenericFunction) errorFrontFace },
	{ "Frustum", (SPUGenericFunction) errorFrustum },
	{ "GenBuffersARB", (SPUGenericFunction) errorGenBuffersARB },
	{ "GenFencesNV", (SPUGenericFunction) errorGenFencesNV },
	{ "GenFramebuffersEXT", (SPUGenericFunction) errorGenFramebuffersEXT },
	{ "GenLists", (SPUGenericFunction) errorGenLists },
	{ "GenProgramsARB", (SPUGenericFunction) errorGenProgramsARB },
	{ "GenProgramsNV", (SPUGenericFunction) errorGenProgramsNV },
	{ "GenQueriesARB", (SPUGenericFunction) errorGenQueriesARB },
	{ "GenRenderbuffersEXT", (SPUGenericFunction) errorGenRenderbuffersEXT },
	{ "GenTextures", (SPUGenericFunction) errorGenTextures },
	{ "GenerateMipmapEXT", (SPUGenericFunction) errorGenerateMipmapEXT },
	{ "GetActiveAttrib", (SPUGenericFunction) errorGetActiveAttrib },
	{ "GetActiveUniform", (SPUGenericFunction) errorGetActiveUniform },
	{ "GetAttachedObjectsARB", (SPUGenericFunction) errorGetAttachedObjectsARB },
	{ "GetAttachedShaders", (SPUGenericFunction) errorGetAttachedShaders },
	{ "GetAttribLocation", (SPUGenericFunction) errorGetAttribLocation },
	{ "GetAttribsLocations", (SPUGenericFunction) errorGetAttribsLocations },
	{ "GetBooleanv", (SPUGenericFunction) errorGetBooleanv },
	{ "GetBufferParameterivARB", (SPUGenericFunction) errorGetBufferParameterivARB },
	{ "GetBufferPointervARB", (SPUGenericFunction) errorGetBufferPointervARB },
	{ "GetBufferSubDataARB", (SPUGenericFunction) errorGetBufferSubDataARB },
	{ "GetChromiumParametervCR", (SPUGenericFunction) errorGetChromiumParametervCR },
	{ "GetClipPlane", (SPUGenericFunction) errorGetClipPlane },
	{ "GetCombinerInputParameterfvNV", (SPUGenericFunction) errorGetCombinerInputParameterfvNV },
	{ "GetCombinerInputParameterivNV", (SPUGenericFunction) errorGetCombinerInputParameterivNV },
	{ "GetCombinerOutputParameterfvNV", (SPUGenericFunction) errorGetCombinerOutputParameterfvNV },
	{ "GetCombinerOutputParameterivNV", (SPUGenericFunction) errorGetCombinerOutputParameterivNV },
	{ "GetCombinerStageParameterfvNV", (SPUGenericFunction) errorGetCombinerStageParameterfvNV },
	{ "GetCompressedTexImageARB", (SPUGenericFunction) errorGetCompressedTexImageARB },
	{ "GetDoublev", (SPUGenericFunction) errorGetDoublev },
	{ "GetError", (SPUGenericFunction) errorGetError },
	{ "GetFenceivNV", (SPUGenericFunction) errorGetFenceivNV },
	{ "GetFinalCombinerInputParameterfvNV", (SPUGenericFunction) errorGetFinalCombinerInputParameterfvNV },
	{ "GetFinalCombinerInputParameterivNV", (SPUGenericFunction) errorGetFinalCombinerInputParameterivNV },
	{ "GetFloatv", (SPUGenericFunction) errorGetFloatv },
	{ "GetFramebufferAttachmentParameterivEXT", (SPUGenericFunction) errorGetFramebufferAttachmentParameterivEXT },
	{ "GetHandleARB", (SPUGenericFunction) errorGetHandleARB },
	{ "GetInfoLogARB", (SPUGenericFunction) errorGetInfoLogARB },
	{ "GetIntegerv", (SPUGenericFunction) errorGetIntegerv },
	{ "GetLightfv", (SPUGenericFunction) errorGetLightfv },
	{ "GetLightiv", (SPUGenericFunction) errorGetLightiv },
	{ "GetMapdv", (SPUGenericFunction) errorGetMapdv },
	{ "GetMapfv", (SPUGenericFunction) errorGetMapfv },
	{ "GetMapiv", (SPUGenericFunction) errorGetMapiv },
	{ "GetMaterialfv", (SPUGenericFunction) errorGetMaterialfv },
	{ "GetMaterialiv", (SPUGenericFunction) errorGetMaterialiv },
	{ "GetObjectParameterfvARB", (SPUGenericFunction) errorGetObjectParameterfvARB },
	{ "GetObjectParameterivARB", (SPUGenericFunction) errorGetObjectParameterivARB },
	{ "GetPixelMapfv", (SPUGenericFunction) errorGetPixelMapfv },
	{ "GetPixelMapuiv", (SPUGenericFunction) errorGetPixelMapuiv },
	{ "GetPixelMapusv", (SPUGenericFunction) errorGetPixelMapusv },
	{ "GetPointerv", (SPUGenericFunction) errorGetPointerv },
	{ "GetPolygonStipple", (SPUGenericFunction) errorGetPolygonStipple },
	{ "GetProgramEnvParameterdvARB", (SPUGenericFunction) errorGetProgramEnvParameterdvARB },
	{ "GetProgramEnvParameterfvARB", (SPUGenericFunction) errorGetProgramEnvParameterfvARB },
	{ "GetProgramInfoLog", (SPUGenericFunction) errorGetProgramInfoLog },
	{ "GetProgramLocalParameterdvARB", (SPUGenericFunction) errorGetProgramLocalParameterdvARB },
	{ "GetProgramLocalParameterfvARB", (SPUGenericFunction) errorGetProgramLocalParameterfvARB },
	{ "GetProgramNamedParameterdvNV", (SPUGenericFunction) errorGetProgramNamedParameterdvNV },
	{ "GetProgramNamedParameterfvNV", (SPUGenericFunction) errorGetProgramNamedParameterfvNV },
	{ "GetProgramParameterdvNV", (SPUGenericFunction) errorGetProgramParameterdvNV },
	{ "GetProgramParameterfvNV", (SPUGenericFunction) errorGetProgramParameterfvNV },
	{ "GetProgramStringARB", (SPUGenericFunction) errorGetProgramStringARB },
	{ "GetProgramStringNV", (SPUGenericFunction) errorGetProgramStringNV },
	{ "GetProgramiv", (SPUGenericFunction) errorGetProgramiv },
	{ "GetProgramivARB", (SPUGenericFunction) errorGetProgramivARB },
	{ "GetProgramivNV", (SPUGenericFunction) errorGetProgramivNV },
	{ "GetQueryObjectivARB", (SPUGenericFunction) errorGetQueryObjectivARB },
	{ "GetQueryObjectuivARB", (SPUGenericFunction) errorGetQueryObjectuivARB },
	{ "GetQueryivARB", (SPUGenericFunction) errorGetQueryivARB },
	{ "GetRenderbufferParameterivEXT", (SPUGenericFunction) errorGetRenderbufferParameterivEXT },
	{ "GetShaderInfoLog", (SPUGenericFunction) errorGetShaderInfoLog },
	{ "GetShaderSource", (SPUGenericFunction) errorGetShaderSource },
	{ "GetShaderiv", (SPUGenericFunction) errorGetShaderiv },
	{ "GetString", (SPUGenericFunction) errorGetString },
	{ "GetTexEnvfv", (SPUGenericFunction) errorGetTexEnvfv },
	{ "GetTexEnviv", (SPUGenericFunction) errorGetTexEnviv },
	{ "GetTexGendv", (SPUGenericFunction) errorGetTexGendv },
	{ "GetTexGenfv", (SPUGenericFunction) errorGetTexGenfv },
	{ "GetTexGeniv", (SPUGenericFunction) errorGetTexGeniv },
	{ "GetTexImage", (SPUGenericFunction) errorGetTexImage },
	{ "GetTexLevelParameterfv", (SPUGenericFunction) errorGetTexLevelParameterfv },
	{ "GetTexLevelParameteriv", (SPUGenericFunction) errorGetTexLevelParameteriv },
	{ "GetTexParameterfv", (SPUGenericFunction) errorGetTexParameterfv },
	{ "GetTexParameteriv", (SPUGenericFunction) errorGetTexParameteriv },
	{ "GetTrackMatrixivNV", (SPUGenericFunction) errorGetTrackMatrixivNV },
	{ "GetUniformLocation", (SPUGenericFunction) errorGetUniformLocation },
	{ "GetUniformfv", (SPUGenericFunction) errorGetUniformfv },
	{ "GetUniformiv", (SPUGenericFunction) errorGetUniformiv },
	{ "GetUniformsLocations", (SPUGenericFunction) errorGetUniformsLocations },
	{ "GetVertexAttribPointervARB", (SPUGenericFunction) errorGetVertexAttribPointervARB },
	{ "GetVertexAttribPointervNV", (SPUGenericFunction) errorGetVertexAttribPointervNV },
	{ "GetVertexAttribdvARB", (SPUGenericFunction) errorGetVertexAttribdvARB },
	{ "GetVertexAttribdvNV", (SPUGenericFunction) errorGetVertexAttribdvNV },
	{ "GetVertexAttribfvARB", (SPUGenericFunction) errorGetVertexAttribfvARB },
	{ "GetVertexAttribfvNV", (SPUGenericFunction) errorGetVertexAttribfvNV },
	{ "GetVertexAttribivARB", (SPUGenericFunction) errorGetVertexAttribivARB },
	{ "GetVertexAttribivNV", (SPUGenericFunction) errorGetVertexAttribivNV },
	{ "Hint", (SPUGenericFunction) errorHint },
	{ "IndexMask", (SPUGenericFunction) errorIndexMask },
	{ "IndexPointer", (SPUGenericFunction) errorIndexPointer },
	{ "Indexd", (SPUGenericFunction) errorIndexd },
	{ "Indexdv", (SPUGenericFunction) errorIndexdv },
	{ "Indexf", (SPUGenericFunction) errorIndexf },
	{ "Indexfv", (SPUGenericFunction) errorIndexfv },
	{ "Indexi", (SPUGenericFunction) errorIndexi },
	{ "Indexiv", (SPUGenericFunction) errorIndexiv },
	{ "Indexs", (SPUGenericFunction) errorIndexs },
	{ "Indexsv", (SPUGenericFunction) errorIndexsv },
	{ "Indexub", (SPUGenericFunction) errorIndexub },
	{ "Indexubv", (SPUGenericFunction) errorIndexubv },
	{ "InitNames", (SPUGenericFunction) errorInitNames },
	{ "InterleavedArrays", (SPUGenericFunction) errorInterleavedArrays },
	{ "IsBufferARB", (SPUGenericFunction) errorIsBufferARB },
	{ "IsEnabled", (SPUGenericFunction) errorIsEnabled },
	{ "IsFenceNV", (SPUGenericFunction) errorIsFenceNV },
	{ "IsFramebufferEXT", (SPUGenericFunction) errorIsFramebufferEXT },
	{ "IsList", (SPUGenericFunction) errorIsList },
	{ "IsProgram", (SPUGenericFunction) errorIsProgram },
	{ "IsProgramARB", (SPUGenericFunction) errorIsProgramARB },
	{ "IsQueryARB", (SPUGenericFunction) errorIsQueryARB },
	{ "IsRenderbufferEXT", (SPUGenericFunction) errorIsRenderbufferEXT },
	{ "IsShader", (SPUGenericFunction) errorIsShader },
	{ "IsTexture", (SPUGenericFunction) errorIsTexture },
	{ "LightModelf", (SPUGenericFunction) errorLightModelf },
	{ "LightModelfv", (SPUGenericFunction) errorLightModelfv },
	{ "LightModeli", (SPUGenericFunction) errorLightModeli },
	{ "LightModeliv", (SPUGenericFunction) errorLightModeliv },
	{ "Lightf", (SPUGenericFunction) errorLightf },
	{ "Lightfv", (SPUGenericFunction) errorLightfv },
	{ "Lighti", (SPUGenericFunction) errorLighti },
	{ "Lightiv", (SPUGenericFunction) errorLightiv },
	{ "LineStipple", (SPUGenericFunction) errorLineStipple },
	{ "LineWidth", (SPUGenericFunction) errorLineWidth },
	{ "LinkProgram", (SPUGenericFunction) errorLinkProgram },
	{ "ListBase", (SPUGenericFunction) errorListBase },
	{ "LoadIdentity", (SPUGenericFunction) errorLoadIdentity },
	{ "LoadMatrixd", (SPUGenericFunction) errorLoadMatrixd },
	{ "LoadMatrixf", (SPUGenericFunction) errorLoadMatrixf },
	{ "LoadName", (SPUGenericFunction) errorLoadName },
	{ "LoadProgramNV", (SPUGenericFunction) errorLoadProgramNV },
	{ "LoadTransposeMatrixdARB", (SPUGenericFunction) errorLoadTransposeMatrixdARB },
	{ "LoadTransposeMatrixfARB", (SPUGenericFunction) errorLoadTransposeMatrixfARB },
	{ "LockArraysEXT", (SPUGenericFunction) errorLockArraysEXT },
	{ "LogicOp", (SPUGenericFunction) errorLogicOp },
	{ "MakeCurrent", (SPUGenericFunction) errorMakeCurrent },
	{ "Map1d", (SPUGenericFunction) errorMap1d },
	{ "Map1f", (SPUGenericFunction) errorMap1f },
	{ "Map2d", (SPUGenericFunction) errorMap2d },
	{ "Map2f", (SPUGenericFunction) errorMap2f },
	{ "MapBufferARB", (SPUGenericFunction) errorMapBufferARB },
	{ "MapGrid1d", (SPUGenericFunction) errorMapGrid1d },
	{ "MapGrid1f", (SPUGenericFunction) errorMapGrid1f },
	{ "MapGrid2d", (SPUGenericFunction) errorMapGrid2d },
	{ "MapGrid2f", (SPUGenericFunction) errorMapGrid2f },
	{ "Materialf", (SPUGenericFunction) errorMaterialf },
	{ "Materialfv", (SPUGenericFunction) errorMaterialfv },
	{ "Materiali", (SPUGenericFunction) errorMateriali },
	{ "Materialiv", (SPUGenericFunction) errorMaterialiv },
	{ "MatrixMode", (SPUGenericFunction) errorMatrixMode },
	{ "MultMatrixd", (SPUGenericFunction) errorMultMatrixd },
	{ "MultMatrixf", (SPUGenericFunction) errorMultMatrixf },
	{ "MultTransposeMatrixdARB", (SPUGenericFunction) errorMultTransposeMatrixdARB },
	{ "MultTransposeMatrixfARB", (SPUGenericFunction) errorMultTransposeMatrixfARB },
	{ "MultiDrawArraysEXT", (SPUGenericFunction) errorMultiDrawArraysEXT },
	{ "MultiDrawElementsEXT", (SPUGenericFunction) errorMultiDrawElementsEXT },
	{ "MultiTexCoord1dARB", (SPUGenericFunction) errorMultiTexCoord1dARB },
	{ "MultiTexCoord1dvARB", (SPUGenericFunction) errorMultiTexCoord1dvARB },
	{ "MultiTexCoord1fARB", (SPUGenericFunction) errorMultiTexCoord1fARB },
	{ "MultiTexCoord1fvARB", (SPUGenericFunction) errorMultiTexCoord1fvARB },
	{ "MultiTexCoord1iARB", (SPUGenericFunction) errorMultiTexCoord1iARB },
	{ "MultiTexCoord1ivARB", (SPUGenericFunction) errorMultiTexCoord1ivARB },
	{ "MultiTexCoord1sARB", (SPUGenericFunction) errorMultiTexCoord1sARB },
	{ "MultiTexCoord1svARB", (SPUGenericFunction) errorMultiTexCoord1svARB },
	{ "MultiTexCoord2dARB", (SPUGenericFunction) errorMultiTexCoord2dARB },
	{ "MultiTexCoord2dvARB", (SPUGenericFunction) errorMultiTexCoord2dvARB },
	{ "MultiTexCoord2fARB", (SPUGenericFunction) errorMultiTexCoord2fARB },
	{ "MultiTexCoord2fvARB", (SPUGenericFunction) errorMultiTexCoord2fvARB },
	{ "MultiTexCoord2iARB", (SPUGenericFunction) errorMultiTexCoord2iARB },
	{ "MultiTexCoord2ivARB", (SPUGenericFunction) errorMultiTexCoord2ivARB },
	{ "MultiTexCoord2sARB", (SPUGenericFunction) errorMultiTexCoord2sARB },
	{ "MultiTexCoord2svARB", (SPUGenericFunction) errorMultiTexCoord2svARB },
	{ "MultiTexCoord3dARB", (SPUGenericFunction) errorMultiTexCoord3dARB },
	{ "MultiTexCoord3dvARB", (SPUGenericFunction) errorMultiTexCoord3dvARB },
	{ "MultiTexCoord3fARB", (SPUGenericFunction) errorMultiTexCoord3fARB },
	{ "MultiTexCoord3fvARB", (SPUGenericFunction) errorMultiTexCoord3fvARB },
	{ "MultiTexCoord3iARB", (SPUGenericFunction) errorMultiTexCoord3iARB },
	{ "MultiTexCoord3ivARB", (SPUGenericFunction) errorMultiTexCoord3ivARB },
	{ "MultiTexCoord3sARB", (SPUGenericFunction) errorMultiTexCoord3sARB },
	{ "MultiTexCoord3svARB", (SPUGenericFunction) errorMultiTexCoord3svARB },
	{ "MultiTexCoord4dARB", (SPUGenericFunction) errorMultiTexCoord4dARB },
	{ "MultiTexCoord4dvARB", (SPUGenericFunction) errorMultiTexCoord4dvARB },
	{ "MultiTexCoord4fARB", (SPUGenericFunction) errorMultiTexCoord4fARB },
	{ "MultiTexCoord4fvARB", (SPUGenericFunction) errorMultiTexCoord4fvARB },
	{ "MultiTexCoord4iARB", (SPUGenericFunction) errorMultiTexCoord4iARB },
	{ "MultiTexCoord4ivARB", (SPUGenericFunction) errorMultiTexCoord4ivARB },
	{ "MultiTexCoord4sARB", (SPUGenericFunction) errorMultiTexCoord4sARB },
	{ "MultiTexCoord4svARB", (SPUGenericFunction) errorMultiTexCoord4svARB },
	{ "NewList", (SPUGenericFunction) errorNewList },
	{ "Normal3b", (SPUGenericFunction) errorNormal3b },
	{ "Normal3bv", (SPUGenericFunction) errorNormal3bv },
	{ "Normal3d", (SPUGenericFunction) errorNormal3d },
	{ "Normal3dv", (SPUGenericFunction) errorNormal3dv },
	{ "Normal3f", (SPUGenericFunction) errorNormal3f },
	{ "Normal3fv", (SPUGenericFunction) errorNormal3fv },
	{ "Normal3i", (SPUGenericFunction) errorNormal3i },
	{ "Normal3iv", (SPUGenericFunction) errorNormal3iv },
	{ "Normal3s", (SPUGenericFunction) errorNormal3s },
	{ "Normal3sv", (SPUGenericFunction) errorNormal3sv },
	{ "NormalPointer", (SPUGenericFunction) errorNormalPointer },
	{ "Ortho", (SPUGenericFunction) errorOrtho },
	{ "PassThrough", (SPUGenericFunction) errorPassThrough },
	{ "PixelMapfv", (SPUGenericFunction) errorPixelMapfv },
	{ "PixelMapuiv", (SPUGenericFunction) errorPixelMapuiv },
	{ "PixelMapusv", (SPUGenericFunction) errorPixelMapusv },
	{ "PixelStoref", (SPUGenericFunction) errorPixelStoref },
	{ "PixelStorei", (SPUGenericFunction) errorPixelStorei },
	{ "PixelTransferf", (SPUGenericFunction) errorPixelTransferf },
	{ "PixelTransferi", (SPUGenericFunction) errorPixelTransferi },
	{ "PixelZoom", (SPUGenericFunction) errorPixelZoom },
	{ "PointParameterfARB", (SPUGenericFunction) errorPointParameterfARB },
	{ "PointParameterfvARB", (SPUGenericFunction) errorPointParameterfvARB },
	{ "PointParameteri", (SPUGenericFunction) errorPointParameteri },
	{ "PointParameteriv", (SPUGenericFunction) errorPointParameteriv },
	{ "PointSize", (SPUGenericFunction) errorPointSize },
	{ "PolygonMode", (SPUGenericFunction) errorPolygonMode },
	{ "PolygonOffset", (SPUGenericFunction) errorPolygonOffset },
	{ "PolygonStipple", (SPUGenericFunction) errorPolygonStipple },
	{ "PopAttrib", (SPUGenericFunction) errorPopAttrib },
	{ "PopClientAttrib", (SPUGenericFunction) errorPopClientAttrib },
	{ "PopMatrix", (SPUGenericFunction) errorPopMatrix },
	{ "PopName", (SPUGenericFunction) errorPopName },
	{ "PrioritizeTextures", (SPUGenericFunction) errorPrioritizeTextures },
	{ "ProgramEnvParameter4dARB", (SPUGenericFunction) errorProgramEnvParameter4dARB },
	{ "ProgramEnvParameter4dvARB", (SPUGenericFunction) errorProgramEnvParameter4dvARB },
	{ "ProgramEnvParameter4fARB", (SPUGenericFunction) errorProgramEnvParameter4fARB },
	{ "ProgramEnvParameter4fvARB", (SPUGenericFunction) errorProgramEnvParameter4fvARB },
	{ "ProgramLocalParameter4dARB", (SPUGenericFunction) errorProgramLocalParameter4dARB },
	{ "ProgramLocalParameter4dvARB", (SPUGenericFunction) errorProgramLocalParameter4dvARB },
	{ "ProgramLocalParameter4fARB", (SPUGenericFunction) errorProgramLocalParameter4fARB },
	{ "ProgramLocalParameter4fvARB", (SPUGenericFunction) errorProgramLocalParameter4fvARB },
	{ "ProgramNamedParameter4dNV", (SPUGenericFunction) errorProgramNamedParameter4dNV },
	{ "ProgramNamedParameter4dvNV", (SPUGenericFunction) errorProgramNamedParameter4dvNV },
	{ "ProgramNamedParameter4fNV", (SPUGenericFunction) errorProgramNamedParameter4fNV },
	{ "ProgramNamedParameter4fvNV", (SPUGenericFunction) errorProgramNamedParameter4fvNV },
	{ "ProgramParameter4dNV", (SPUGenericFunction) errorProgramParameter4dNV },
	{ "ProgramParameter4dvNV", (SPUGenericFunction) errorProgramParameter4dvNV },
	{ "ProgramParameter4fNV", (SPUGenericFunction) errorProgramParameter4fNV },
	{ "ProgramParameter4fvNV", (SPUGenericFunction) errorProgramParameter4fvNV },
	{ "ProgramParameters4dvNV", (SPUGenericFunction) errorProgramParameters4dvNV },
	{ "ProgramParameters4fvNV", (SPUGenericFunction) errorProgramParameters4fvNV },
	{ "ProgramStringARB", (SPUGenericFunction) errorProgramStringARB },
	{ "PushAttrib", (SPUGenericFunction) errorPushAttrib },
	{ "PushClientAttrib", (SPUGenericFunction) errorPushClientAttrib },
	{ "PushMatrix", (SPUGenericFunction) errorPushMatrix },
	{ "PushName", (SPUGenericFunction) errorPushName },
	{ "RasterPos2d", (SPUGenericFunction) errorRasterPos2d },
	{ "RasterPos2dv", (SPUGenericFunction) errorRasterPos2dv },
	{ "RasterPos2f", (SPUGenericFunction) errorRasterPos2f },
	{ "RasterPos2fv", (SPUGenericFunction) errorRasterPos2fv },
	{ "RasterPos2i", (SPUGenericFunction) errorRasterPos2i },
	{ "RasterPos2iv", (SPUGenericFunction) errorRasterPos2iv },
	{ "RasterPos2s", (SPUGenericFunction) errorRasterPos2s },
	{ "RasterPos2sv", (SPUGenericFunction) errorRasterPos2sv },
	{ "RasterPos3d", (SPUGenericFunction) errorRasterPos3d },
	{ "RasterPos3dv", (SPUGenericFunction) errorRasterPos3dv },
	{ "RasterPos3f", (SPUGenericFunction) errorRasterPos3f },
	{ "RasterPos3fv", (SPUGenericFunction) errorRasterPos3fv },
	{ "RasterPos3i", (SPUGenericFunction) errorRasterPos3i },
	{ "RasterPos3iv", (SPUGenericFunction) errorRasterPos3iv },
	{ "RasterPos3s", (SPUGenericFunction) errorRasterPos3s },
	{ "RasterPos3sv", (SPUGenericFunction) errorRasterPos3sv },
	{ "RasterPos4d", (SPUGenericFunction) errorRasterPos4d },
	{ "RasterPos4dv", (SPUGenericFunction) errorRasterPos4dv },
	{ "RasterPos4f", (SPUGenericFunction) errorRasterPos4f },
	{ "RasterPos4fv", (SPUGenericFunction) errorRasterPos4fv },
	{ "RasterPos4i", (SPUGenericFunction) errorRasterPos4i },
	{ "RasterPos4iv", (SPUGenericFunction) errorRasterPos4iv },
	{ "RasterPos4s", (SPUGenericFunction) errorRasterPos4s },
	{ "RasterPos4sv", (SPUGenericFunction) errorRasterPos4sv },
	{ "ReadBuffer", (SPUGenericFunction) errorReadBuffer },
	{ "ReadPixels", (SPUGenericFunction) errorReadPixels },
	{ "Rectd", (SPUGenericFunction) errorRectd },
	{ "Rectdv", (SPUGenericFunction) errorRectdv },
	{ "Rectf", (SPUGenericFunction) errorRectf },
	{ "Rectfv", (SPUGenericFunction) errorRectfv },
	{ "Recti", (SPUGenericFunction) errorRecti },
	{ "Rectiv", (SPUGenericFunction) errorRectiv },
	{ "Rects", (SPUGenericFunction) errorRects },
	{ "Rectsv", (SPUGenericFunction) errorRectsv },
	{ "RenderMode", (SPUGenericFunction) errorRenderMode },
	{ "RenderbufferStorageEXT", (SPUGenericFunction) errorRenderbufferStorageEXT },
	{ "RequestResidentProgramsNV", (SPUGenericFunction) errorRequestResidentProgramsNV },
	{ "Rotated", (SPUGenericFunction) errorRotated },
	{ "Rotatef", (SPUGenericFunction) errorRotatef },
	{ "SampleCoverageARB", (SPUGenericFunction) errorSampleCoverageARB },
	{ "Scaled", (SPUGenericFunction) errorScaled },
	{ "Scalef", (SPUGenericFunction) errorScalef },
	{ "Scissor", (SPUGenericFunction) errorScissor },
	{ "SecondaryColor3bEXT", (SPUGenericFunction) errorSecondaryColor3bEXT },
	{ "SecondaryColor3bvEXT", (SPUGenericFunction) errorSecondaryColor3bvEXT },
	{ "SecondaryColor3dEXT", (SPUGenericFunction) errorSecondaryColor3dEXT },
	{ "SecondaryColor3dvEXT", (SPUGenericFunction) errorSecondaryColor3dvEXT },
	{ "SecondaryColor3fEXT", (SPUGenericFunction) errorSecondaryColor3fEXT },
	{ "SecondaryColor3fvEXT", (SPUGenericFunction) errorSecondaryColor3fvEXT },
	{ "SecondaryColor3iEXT", (SPUGenericFunction) errorSecondaryColor3iEXT },
	{ "SecondaryColor3ivEXT", (SPUGenericFunction) errorSecondaryColor3ivEXT },
	{ "SecondaryColor3sEXT", (SPUGenericFunction) errorSecondaryColor3sEXT },
	{ "SecondaryColor3svEXT", (SPUGenericFunction) errorSecondaryColor3svEXT },
	{ "SecondaryColor3ubEXT", (SPUGenericFunction) errorSecondaryColor3ubEXT },
	{ "SecondaryColor3ubvEXT", (SPUGenericFunction) errorSecondaryColor3ubvEXT },
	{ "SecondaryColor3uiEXT", (SPUGenericFunction) errorSecondaryColor3uiEXT },
	{ "SecondaryColor3uivEXT", (SPUGenericFunction) errorSecondaryColor3uivEXT },
	{ "SecondaryColor3usEXT", (SPUGenericFunction) errorSecondaryColor3usEXT },
	{ "SecondaryColor3usvEXT", (SPUGenericFunction) errorSecondaryColor3usvEXT },
	{ "SecondaryColorPointerEXT", (SPUGenericFunction) errorSecondaryColorPointerEXT },
	{ "SelectBuffer", (SPUGenericFunction) errorSelectBuffer },
	{ "SemaphoreCreateCR", (SPUGenericFunction) errorSemaphoreCreateCR },
	{ "SemaphoreDestroyCR", (SPUGenericFunction) errorSemaphoreDestroyCR },
	{ "SemaphorePCR", (SPUGenericFunction) errorSemaphorePCR },
	{ "SemaphoreVCR", (SPUGenericFunction) errorSemaphoreVCR },
	{ "SetFenceNV", (SPUGenericFunction) errorSetFenceNV },
	{ "ShadeModel", (SPUGenericFunction) errorShadeModel },
	{ "ShaderSource", (SPUGenericFunction) errorShaderSource },
	{ "StencilFunc", (SPUGenericFunction) errorStencilFunc },
	{ "StencilFuncSeparate", (SPUGenericFunction) errorStencilFuncSeparate },
	{ "StencilMask", (SPUGenericFunction) errorStencilMask },
	{ "StencilMaskSeparate", (SPUGenericFunction) errorStencilMaskSeparate },
	{ "StencilOp", (SPUGenericFunction) errorStencilOp },
	{ "StencilOpSeparate", (SPUGenericFunction) errorStencilOpSeparate },
	{ "StringMarkerGREMEDY", (SPUGenericFunction) errorStringMarkerGREMEDY },
	{ "SwapBuffers", (SPUGenericFunction) errorSwapBuffers },
	{ "TestFenceNV", (SPUGenericFunction) errorTestFenceNV },
	{ "TexCoord1d", (SPUGenericFunction) errorTexCoord1d },
	{ "TexCoord1dv", (SPUGenericFunction) errorTexCoord1dv },
	{ "TexCoord1f", (SPUGenericFunction) errorTexCoord1f },
	{ "TexCoord1fv", (SPUGenericFunction) errorTexCoord1fv },
	{ "TexCoord1i", (SPUGenericFunction) errorTexCoord1i },
	{ "TexCoord1iv", (SPUGenericFunction) errorTexCoord1iv },
	{ "TexCoord1s", (SPUGenericFunction) errorTexCoord1s },
	{ "TexCoord1sv", (SPUGenericFunction) errorTexCoord1sv },
	{ "TexCoord2d", (SPUGenericFunction) errorTexCoord2d },
	{ "TexCoord2dv", (SPUGenericFunction) errorTexCoord2dv },
	{ "TexCoord2f", (SPUGenericFunction) errorTexCoord2f },
	{ "TexCoord2fv", (SPUGenericFunction) errorTexCoord2fv },
	{ "TexCoord2i", (SPUGenericFunction) errorTexCoord2i },
	{ "TexCoord2iv", (SPUGenericFunction) errorTexCoord2iv },
	{ "TexCoord2s", (SPUGenericFunction) errorTexCoord2s },
	{ "TexCoord2sv", (SPUGenericFunction) errorTexCoord2sv },
	{ "TexCoord3d", (SPUGenericFunction) errorTexCoord3d },
	{ "TexCoord3dv", (SPUGenericFunction) errorTexCoord3dv },
	{ "TexCoord3f", (SPUGenericFunction) errorTexCoord3f },
	{ "TexCoord3fv", (SPUGenericFunction) errorTexCoord3fv },
	{ "TexCoord3i", (SPUGenericFunction) errorTexCoord3i },
	{ "TexCoord3iv", (SPUGenericFunction) errorTexCoord3iv },
	{ "TexCoord3s", (SPUGenericFunction) errorTexCoord3s },
	{ "TexCoord3sv", (SPUGenericFunction) errorTexCoord3sv },
	{ "TexCoord4d", (SPUGenericFunction) errorTexCoord4d },
	{ "TexCoord4dv", (SPUGenericFunction) errorTexCoord4dv },
	{ "TexCoord4f", (SPUGenericFunction) errorTexCoord4f },
	{ "TexCoord4fv", (SPUGenericFunction) errorTexCoord4fv },
	{ "TexCoord4i", (SPUGenericFunction) errorTexCoord4i },
	{ "TexCoord4iv", (SPUGenericFunction) errorTexCoord4iv },
	{ "TexCoord4s", (SPUGenericFunction) errorTexCoord4s },
	{ "TexCoord4sv", (SPUGenericFunction) errorTexCoord4sv },
	{ "TexCoordPointer", (SPUGenericFunction) errorTexCoordPointer },
	{ "TexEnvf", (SPUGenericFunction) errorTexEnvf },
	{ "TexEnvfv", (SPUGenericFunction) errorTexEnvfv },
	{ "TexEnvi", (SPUGenericFunction) errorTexEnvi },
	{ "TexEnviv", (SPUGenericFunction) errorTexEnviv },
	{ "TexGend", (SPUGenericFunction) errorTexGend },
	{ "TexGendv", (SPUGenericFunction) errorTexGendv },
	{ "TexGenf", (SPUGenericFunction) errorTexGenf },
	{ "TexGenfv", (SPUGenericFunction) errorTexGenfv },
	{ "TexGeni", (SPUGenericFunction) errorTexGeni },
	{ "TexGeniv", (SPUGenericFunction) errorTexGeniv },
	{ "TexImage1D", (SPUGenericFunction) errorTexImage1D },
	{ "TexImage2D", (SPUGenericFunction) errorTexImage2D },
	{ "TexImage3D", (SPUGenericFunction) errorTexImage3D },
	{ "TexImage3DEXT", (SPUGenericFunction) errorTexImage3DEXT },
	{ "TexParameterf", (SPUGenericFunction) errorTexParameterf },
	{ "TexParameterfv", (SPUGenericFunction) errorTexParameterfv },
	{ "TexParameteri", (SPUGenericFunction) errorTexParameteri },
	{ "TexParameteriv", (SPUGenericFunction) errorTexParameteriv },
	{ "TexSubImage1D", (SPUGenericFunction) errorTexSubImage1D },
	{ "TexSubImage2D", (SPUGenericFunction) errorTexSubImage2D },
	{ "TexSubImage3D", (SPUGenericFunction) errorTexSubImage3D },
	{ "TrackMatrixNV", (SPUGenericFunction) errorTrackMatrixNV },
	{ "Translated", (SPUGenericFunction) errorTranslated },
	{ "Translatef", (SPUGenericFunction) errorTranslatef },
	{ "Uniform1f", (SPUGenericFunction) errorUniform1f },
	{ "Uniform1fv", (SPUGenericFunction) errorUniform1fv },
	{ "Uniform1i", (SPUGenericFunction) errorUniform1i },
	{ "Uniform1iv", (SPUGenericFunction) errorUniform1iv },
	{ "Uniform2f", (SPUGenericFunction) errorUniform2f },
	{ "Uniform2fv", (SPUGenericFunction) errorUniform2fv },
	{ "Uniform2i", (SPUGenericFunction) errorUniform2i },
	{ "Uniform2iv", (SPUGenericFunction) errorUniform2iv },
	{ "Uniform3f", (SPUGenericFunction) errorUniform3f },
	{ "Uniform3fv", (SPUGenericFunction) errorUniform3fv },
	{ "Uniform3i", (SPUGenericFunction) errorUniform3i },
	{ "Uniform3iv", (SPUGenericFunction) errorUniform3iv },
	{ "Uniform4f", (SPUGenericFunction) errorUniform4f },
	{ "Uniform4fv", (SPUGenericFunction) errorUniform4fv },
	{ "Uniform4i", (SPUGenericFunction) errorUniform4i },
	{ "Uniform4iv", (SPUGenericFunction) errorUniform4iv },
	{ "UniformMatrix2fv", (SPUGenericFunction) errorUniformMatrix2fv },
	{ "UniformMatrix2x3fv", (SPUGenericFunction) errorUniformMatrix2x3fv },
	{ "UniformMatrix2x4fv", (SPUGenericFunction) errorUniformMatrix2x4fv },
	{ "UniformMatrix3fv", (SPUGenericFunction) errorUniformMatrix3fv },
	{ "UniformMatrix3x2fv", (SPUGenericFunction) errorUniformMatrix3x2fv },
	{ "UniformMatrix3x4fv", (SPUGenericFunction) errorUniformMatrix3x4fv },
	{ "UniformMatrix4fv", (SPUGenericFunction) errorUniformMatrix4fv },
	{ "UniformMatrix4x2fv", (SPUGenericFunction) errorUniformMatrix4x2fv },
	{ "UniformMatrix4x3fv", (SPUGenericFunction) errorUniformMatrix4x3fv },
	{ "UnlockArraysEXT", (SPUGenericFunction) errorUnlockArraysEXT },
	{ "UnmapBufferARB", (SPUGenericFunction) errorUnmapBufferARB },
	{ "UseProgram", (SPUGenericFunction) errorUseProgram },
	{ "VBoxAttachThread", (SPUGenericFunction) errorVBoxAttachThread },
	{ "VBoxConChromiumParameteriCR", (SPUGenericFunction) errorVBoxConChromiumParameteriCR },
	{ "VBoxConChromiumParametervCR", (SPUGenericFunction) errorVBoxConChromiumParametervCR },
	{ "VBoxConCreate", (SPUGenericFunction) errorVBoxConCreate },
	{ "VBoxConDestroy", (SPUGenericFunction) errorVBoxConDestroy },
	{ "VBoxConFlush", (SPUGenericFunction) errorVBoxConFlush },
	{ "VBoxCreateContext", (SPUGenericFunction) errorVBoxCreateContext },
	{ "VBoxDetachThread", (SPUGenericFunction) errorVBoxDetachThread },
	{ "VBoxPackGetInjectID", (SPUGenericFunction) errorVBoxPackGetInjectID },
	{ "VBoxPackSetInjectID", (SPUGenericFunction) errorVBoxPackSetInjectID },
	{ "VBoxPackSetInjectThread", (SPUGenericFunction) errorVBoxPackSetInjectThread },
	{ "VBoxPresentComposition", (SPUGenericFunction) errorVBoxPresentComposition },
	{ "VBoxWindowCreate", (SPUGenericFunction) errorVBoxWindowCreate },
	{ "VBoxWindowDestroy", (SPUGenericFunction) errorVBoxWindowDestroy },
	{ "ValidateProgram", (SPUGenericFunction) errorValidateProgram },
	{ "Vertex2d", (SPUGenericFunction) errorVertex2d },
	{ "Vertex2dv", (SPUGenericFunction) errorVertex2dv },
	{ "Vertex2f", (SPUGenericFunction) errorVertex2f },
	{ "Vertex2fv", (SPUGenericFunction) errorVertex2fv },
	{ "Vertex2i", (SPUGenericFunction) errorVertex2i },
	{ "Vertex2iv", (SPUGenericFunction) errorVertex2iv },
	{ "Vertex2s", (SPUGenericFunction) errorVertex2s },
	{ "Vertex2sv", (SPUGenericFunction) errorVertex2sv },
	{ "Vertex3d", (SPUGenericFunction) errorVertex3d },
	{ "Vertex3dv", (SPUGenericFunction) errorVertex3dv },
	{ "Vertex3f", (SPUGenericFunction) errorVertex3f },
	{ "Vertex3fv", (SPUGenericFunction) errorVertex3fv },
	{ "Vertex3i", (SPUGenericFunction) errorVertex3i },
	{ "Vertex3iv", (SPUGenericFunction) errorVertex3iv },
	{ "Vertex3s", (SPUGenericFunction) errorVertex3s },
	{ "Vertex3sv", (SPUGenericFunction) errorVertex3sv },
	{ "Vertex4d", (SPUGenericFunction) errorVertex4d },
	{ "Vertex4dv", (SPUGenericFunction) errorVertex4dv },
	{ "Vertex4f", (SPUGenericFunction) errorVertex4f },
	{ "Vertex4fv", (SPUGenericFunction) errorVertex4fv },
	{ "Vertex4i", (SPUGenericFunction) errorVertex4i },
	{ "Vertex4iv", (SPUGenericFunction) errorVertex4iv },
	{ "Vertex4s", (SPUGenericFunction) errorVertex4s },
	{ "Vertex4sv", (SPUGenericFunction) errorVertex4sv },
	{ "VertexArrayRangeNV", (SPUGenericFunction) errorVertexArrayRangeNV },
	{ "VertexAttrib1dARB", (SPUGenericFunction) errorVertexAttrib1dARB },
	{ "VertexAttrib1dvARB", (SPUGenericFunction) errorVertexAttrib1dvARB },
	{ "VertexAttrib1fARB", (SPUGenericFunction) errorVertexAttrib1fARB },
	{ "VertexAttrib1fvARB", (SPUGenericFunction) errorVertexAttrib1fvARB },
	{ "VertexAttrib1sARB", (SPUGenericFunction) errorVertexAttrib1sARB },
	{ "VertexAttrib1svARB", (SPUGenericFunction) errorVertexAttrib1svARB },
	{ "VertexAttrib2dARB", (SPUGenericFunction) errorVertexAttrib2dARB },
	{ "VertexAttrib2dvARB", (SPUGenericFunction) errorVertexAttrib2dvARB },
	{ "VertexAttrib2fARB", (SPUGenericFunction) errorVertexAttrib2fARB },
	{ "VertexAttrib2fvARB", (SPUGenericFunction) errorVertexAttrib2fvARB },
	{ "VertexAttrib2sARB", (SPUGenericFunction) errorVertexAttrib2sARB },
	{ "VertexAttrib2svARB", (SPUGenericFunction) errorVertexAttrib2svARB },
	{ "VertexAttrib3dARB", (SPUGenericFunction) errorVertexAttrib3dARB },
	{ "VertexAttrib3dvARB", (SPUGenericFunction) errorVertexAttrib3dvARB },
	{ "VertexAttrib3fARB", (SPUGenericFunction) errorVertexAttrib3fARB },
	{ "VertexAttrib3fvARB", (SPUGenericFunction) errorVertexAttrib3fvARB },
	{ "VertexAttrib3sARB", (SPUGenericFunction) errorVertexAttrib3sARB },
	{ "VertexAttrib3svARB", (SPUGenericFunction) errorVertexAttrib3svARB },
	{ "VertexAttrib4NbvARB", (SPUGenericFunction) errorVertexAttrib4NbvARB },
	{ "VertexAttrib4NivARB", (SPUGenericFunction) errorVertexAttrib4NivARB },
	{ "VertexAttrib4NsvARB", (SPUGenericFunction) errorVertexAttrib4NsvARB },
	{ "VertexAttrib4NubARB", (SPUGenericFunction) errorVertexAttrib4NubARB },
	{ "VertexAttrib4NubvARB", (SPUGenericFunction) errorVertexAttrib4NubvARB },
	{ "VertexAttrib4NuivARB", (SPUGenericFunction) errorVertexAttrib4NuivARB },
	{ "VertexAttrib4NusvARB", (SPUGenericFunction) errorVertexAttrib4NusvARB },
	{ "VertexAttrib4bvARB", (SPUGenericFunction) errorVertexAttrib4bvARB },
	{ "VertexAttrib4dARB", (SPUGenericFunction) errorVertexAttrib4dARB },
	{ "VertexAttrib4dvARB", (SPUGenericFunction) errorVertexAttrib4dvARB },
	{ "VertexAttrib4fARB", (SPUGenericFunction) errorVertexAttrib4fARB },
	{ "VertexAttrib4fvARB", (SPUGenericFunction) errorVertexAttrib4fvARB },
	{ "VertexAttrib4ivARB", (SPUGenericFunction) errorVertexAttrib4ivARB },
	{ "VertexAttrib4sARB", (SPUGenericFunction) errorVertexAttrib4sARB },
	{ "VertexAttrib4svARB", (SPUGenericFunction) errorVertexAttrib4svARB },
	{ "VertexAttrib4ubvARB", (SPUGenericFunction) errorVertexAttrib4ubvARB },
	{ "VertexAttrib4uivARB", (SPUGenericFunction) errorVertexAttrib4uivARB },
	{ "VertexAttrib4usvARB", (SPUGenericFunction) errorVertexAttrib4usvARB },
	{ "VertexAttribPointerARB", (SPUGenericFunction) errorVertexAttribPointerARB },
	{ "VertexAttribPointerNV", (SPUGenericFunction) errorVertexAttribPointerNV },
	{ "VertexAttribs1dvNV", (SPUGenericFunction) errorVertexAttribs1dvNV },
	{ "VertexAttribs1fvNV", (SPUGenericFunction) errorVertexAttribs1fvNV },
	{ "VertexAttribs1svNV", (SPUGenericFunction) errorVertexAttribs1svNV },
	{ "VertexAttribs2dvNV", (SPUGenericFunction) errorVertexAttribs2dvNV },
	{ "VertexAttribs2fvNV", (SPUGenericFunction) errorVertexAttribs2fvNV },
	{ "VertexAttribs2svNV", (SPUGenericFunction) errorVertexAttribs2svNV },
	{ "VertexAttribs3dvNV", (SPUGenericFunction) errorVertexAttribs3dvNV },
	{ "VertexAttribs3fvNV", (SPUGenericFunction) errorVertexAttribs3fvNV },
	{ "VertexAttribs3svNV", (SPUGenericFunction) errorVertexAttribs3svNV },
	{ "VertexAttribs4dvNV", (SPUGenericFunction) errorVertexAttribs4dvNV },
	{ "VertexAttribs4fvNV", (SPUGenericFunction) errorVertexAttribs4fvNV },
	{ "VertexAttribs4svNV", (SPUGenericFunction) errorVertexAttribs4svNV },
	{ "VertexAttribs4ubvNV", (SPUGenericFunction) errorVertexAttribs4ubvNV },
	{ "VertexPointer", (SPUGenericFunction) errorVertexPointer },
	{ "Viewport", (SPUGenericFunction) errorViewport },
	{ "WindowCreate", (SPUGenericFunction) errorWindowCreate },
	{ "WindowDestroy", (SPUGenericFunction) errorWindowDestroy },
	{ "WindowPos2dARB", (SPUGenericFunction) errorWindowPos2dARB },
	{ "WindowPos2dvARB", (SPUGenericFunction) errorWindowPos2dvARB },
	{ "WindowPos2fARB", (SPUGenericFunction) errorWindowPos2fARB },
	{ "WindowPos2fvARB", (SPUGenericFunction) errorWindowPos2fvARB },
	{ "WindowPos2iARB", (SPUGenericFunction) errorWindowPos2iARB },
	{ "WindowPos2ivARB", (SPUGenericFunction) errorWindowPos2ivARB },
	{ "WindowPos2sARB", (SPUGenericFunction) errorWindowPos2sARB },
	{ "WindowPos2svARB", (SPUGenericFunction) errorWindowPos2svARB },
	{ "WindowPos3dARB", (SPUGenericFunction) errorWindowPos3dARB },
	{ "WindowPos3dvARB", (SPUGenericFunction) errorWindowPos3dvARB },
	{ "WindowPos3fARB", (SPUGenericFunction) errorWindowPos3fARB },
	{ "WindowPos3fvARB", (SPUGenericFunction) errorWindowPos3fvARB },
	{ "WindowPos3iARB", (SPUGenericFunction) errorWindowPos3iARB },
	{ "WindowPos3ivARB", (SPUGenericFunction) errorWindowPos3ivARB },
	{ "WindowPos3sARB", (SPUGenericFunction) errorWindowPos3sARB },
	{ "WindowPos3svARB", (SPUGenericFunction) errorWindowPos3svARB },
	{ "WindowPosition", (SPUGenericFunction) errorWindowPosition },
	{ "WindowShow", (SPUGenericFunction) errorWindowShow },
	{ "WindowSize", (SPUGenericFunction) errorWindowSize },
	{ "WindowVisibleRegion", (SPUGenericFunction) errorWindowVisibleRegion },
	{ "Writeback", (SPUGenericFunction) errorWriteback },
	{ "ZPixCR", (SPUGenericFunction) errorZPixCR },
	{ NULL, NULL }
};
