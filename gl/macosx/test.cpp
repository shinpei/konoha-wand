# 1 "test.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "test.c"
# 1 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 1 3
# 59 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 3
# 1 "/System/Library/Frameworks/OpenGL.framework/Headers/gl.h" 1 3
# 40 "/System/Library/Frameworks/OpenGL.framework/Headers/gl.h" 3
typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLsizei;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void GLvoid;

typedef long GLintptr;
typedef long GLsizeiptr;



    typedef char GLchar;



# 1 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 1 3
# 171 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
typedef char GLcharARB;
typedef void *GLhandleARB;



typedef long GLintptrARB;
typedef long GLsizeiptrARB;
# 2757 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glActiveTextureARB (GLenum);
extern void glClientActiveTextureARB (GLenum);
extern void glMultiTexCoord1dARB (GLenum, GLdouble);
extern void glMultiTexCoord1dvARB (GLenum, const GLdouble *);
extern void glMultiTexCoord1fARB (GLenum, GLfloat);
extern void glMultiTexCoord1fvARB (GLenum, const GLfloat *);
extern void glMultiTexCoord1iARB (GLenum, GLint);
extern void glMultiTexCoord1ivARB (GLenum, const GLint *);
extern void glMultiTexCoord1sARB (GLenum, GLshort);
extern void glMultiTexCoord1svARB (GLenum, const GLshort *);
extern void glMultiTexCoord2dARB (GLenum, GLdouble, GLdouble);
extern void glMultiTexCoord2dvARB (GLenum, const GLdouble *);
extern void glMultiTexCoord2fARB (GLenum, GLfloat, GLfloat);
extern void glMultiTexCoord2fvARB (GLenum, const GLfloat *);
extern void glMultiTexCoord2iARB (GLenum, GLint, GLint);
extern void glMultiTexCoord2ivARB (GLenum, const GLint *);
extern void glMultiTexCoord2sARB (GLenum, GLshort, GLshort);
extern void glMultiTexCoord2svARB (GLenum, const GLshort *);
extern void glMultiTexCoord3dARB (GLenum, GLdouble, GLdouble, GLdouble);
extern void glMultiTexCoord3dvARB (GLenum, const GLdouble *);
extern void glMultiTexCoord3fARB (GLenum, GLfloat, GLfloat, GLfloat);
extern void glMultiTexCoord3fvARB (GLenum, const GLfloat *);
extern void glMultiTexCoord3iARB (GLenum, GLint, GLint, GLint);
extern void glMultiTexCoord3ivARB (GLenum, const GLint *);
extern void glMultiTexCoord3sARB (GLenum, GLshort, GLshort, GLshort);
extern void glMultiTexCoord3svARB (GLenum, const GLshort *);
extern void glMultiTexCoord4dARB (GLenum, GLdouble, GLdouble, GLdouble, GLdouble);
extern void glMultiTexCoord4dvARB (GLenum, const GLdouble *);
extern void glMultiTexCoord4fARB (GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
extern void glMultiTexCoord4fvARB (GLenum, const GLfloat *);
extern void glMultiTexCoord4iARB (GLenum, GLint, GLint, GLint, GLint);
extern void glMultiTexCoord4ivARB (GLenum, const GLint *);
extern void glMultiTexCoord4sARB (GLenum, GLshort, GLshort, GLshort, GLshort);
extern void glMultiTexCoord4svARB (GLenum, const GLshort *);
# 2801 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glLoadTransposeMatrixfARB (const GLfloat *);
extern void glLoadTransposeMatrixdARB (const GLdouble *);
extern void glMultTransposeMatrixfARB (const GLfloat *);
extern void glMultTransposeMatrixdARB (const GLdouble *);
# 2813 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glSampleCoverageARB (GLclampf, GLboolean);
extern void glSamplePassARB (GLenum);
# 2828 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glCompressedTexImage3DARB (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);
extern void glCompressedTexImage2DARB (GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);
extern void glCompressedTexImage1DARB (GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *);
extern void glCompressedTexSubImage3DARB (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
extern void glCompressedTexSubImage2DARB (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
extern void glCompressedTexSubImage1DARB (GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *);
extern void glGetCompressedTexImageARB (GLenum, GLint, GLvoid *);
# 2851 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glWeightbvARB(GLint, const GLbyte *);
extern void glWeightsvARB(GLint, const GLshort *);
extern void glWeightivARB(GLint, const GLint *);
extern void glWeightfvARB(GLint, const GLfloat *);
extern void glWeightdvARB(GLint, const GLdouble *);
extern void glWeightubvARB(GLint, const GLubyte *);
extern void glWeightusvARB(GLint, const GLushort *);
extern void glWeightuivARB(GLint, const GLuint *);
extern void glWeightPointerARB(GLint, GLenum, GLsizei, const GLvoid *);
extern void glVertexBlendARB(GLint);
# 2883 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glWindowPos2dARB (GLdouble, GLdouble);
extern void glWindowPos2dvARB (const GLdouble *);
extern void glWindowPos2fARB (GLfloat, GLfloat);
extern void glWindowPos2fvARB (const GLfloat *);
extern void glWindowPos2iARB (GLint, GLint);
extern void glWindowPos2ivARB (const GLint *);
extern void glWindowPos2sARB (GLshort, GLshort);
extern void glWindowPos2svARB (const GLshort *);
extern void glWindowPos3dARB (GLdouble, GLdouble, GLdouble);
extern void glWindowPos3dvARB (const GLdouble *);
extern void glWindowPos3fARB (GLfloat, GLfloat, GLfloat);
extern void glWindowPos3fvARB (const GLfloat *);
extern void glWindowPos3iARB (GLint, GLint, GLint);
extern void glWindowPos3ivARB (const GLint *);
extern void glWindowPos3sARB (GLshort, GLshort, GLshort);
extern void glWindowPos3svARB (const GLshort *);
# 2913 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glGenQueriesARB(GLsizei n, GLuint *ids);
extern void glDeleteQueriesARB(GLsizei n, const GLuint *ids);
extern GLboolean glIsQueryARB(GLuint id);
extern void glBeginQueryARB(GLenum target, GLuint id);
extern void glEndQueryARB(GLenum target);
extern void glGetQueryivARB(GLenum target, GLenum pname, GLint *params);
extern void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint *params);
extern void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint *params);
# 2929 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glPointParameterfARB(GLenum pname, GLfloat param);
extern void glPointParameterfvARB(GLenum pname, const GLfloat *params);
# 2965 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBindProgramARB(GLenum target, GLuint program);
extern void glDeleteProgramsARB(GLsizei n, const GLuint *programs);
extern void glGenProgramsARB(GLsizei n, GLuint *programs);
extern GLboolean glIsProgramARB(GLuint program);

extern void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble *params);
extern void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat *params);
extern void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble *params);
extern void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat *params);

extern void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble *params);
extern void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat *params);

extern void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat *params);
extern void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat *params);


extern void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble *params);
extern void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat *params);

extern void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const GLvoid *string);
extern void glGetProgramStringARB(GLenum target, GLenum pname, GLvoid *string);

extern void glGetProgramivARB(GLenum target, GLenum pname, GLint *params);
# 3048 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glVertexAttrib1dARB(GLuint index, GLdouble x);
extern void glVertexAttrib1dvARB(GLuint index, const GLdouble *v);
extern void glVertexAttrib1fARB(GLuint index, GLfloat x);
extern void glVertexAttrib1fvARB(GLuint index, const GLfloat *v);
extern void glVertexAttrib1sARB(GLuint index, GLshort x);
extern void glVertexAttrib1svARB(GLuint index, const GLshort *v);
extern void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y);
extern void glVertexAttrib2dvARB(GLuint index, const GLdouble *v);
extern void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y);
extern void glVertexAttrib2fvARB(GLuint index, const GLfloat *v);
extern void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y);
extern void glVertexAttrib2svARB(GLuint index, const GLshort *v);
extern void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern void glVertexAttrib3dvARB(GLuint index, const GLdouble *v);
extern void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern void glVertexAttrib3fvARB(GLuint index, const GLfloat *v);
extern void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z);
extern void glVertexAttrib3svARB(GLuint index, const GLshort *v);
extern void glVertexAttrib4NbvARB(GLuint index, const GLbyte *v);
extern void glVertexAttrib4NivARB(GLuint index, const GLint *v);
extern void glVertexAttrib4NsvARB(GLuint index, const GLshort *v);
extern void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
extern void glVertexAttrib4NubvARB(GLuint index, const GLubyte *v);
extern void glVertexAttrib4NuivARB(GLuint index, const GLuint *v);
extern void glVertexAttrib4NusvARB(GLuint index, const GLushort *v);
extern void glVertexAttrib4bvARB(GLuint index, const GLbyte *v);
extern void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glVertexAttrib4dvARB(GLuint index, const GLdouble *v);
extern void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glVertexAttrib4fvARB(GLuint index, const GLfloat *v);
extern void glVertexAttrib4ivARB(GLuint index, const GLint *v);
extern void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
extern void glVertexAttrib4svARB(GLuint index, const GLshort *v);
extern void glVertexAttrib4ubvARB(GLuint index, const GLubyte *v);
extern void glVertexAttrib4uivARB(GLuint index, const GLuint *v);
extern void glVertexAttrib4usvARB(GLuint index, const GLushort *v);
extern void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);

extern void glDisableVertexAttribArrayARB(GLuint index);
extern void glEnableVertexAttribArrayARB(GLuint index);

extern void glGetVertexAttribPointervARB(GLuint index, GLenum pname, GLvoid **pointer);
extern void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble *params);
extern void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat *params);
extern void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint *params);
# 3139 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glDeleteObjectARB(GLhandleARB obj);
extern GLhandleARB glGetHandleARB(GLenum pname);
extern void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj);
extern GLhandleARB glCreateShaderObjectARB(GLenum shaderType);
extern void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB **string, const GLint *length);
extern void glCompileShaderARB(GLhandleARB shaderObj);
extern GLhandleARB glCreateProgramObjectARB(void);
extern void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj);
extern void glLinkProgramARB(GLhandleARB programObj);
extern void glUseProgramObjectARB(GLhandleARB programObj);
extern void glValidateProgramARB(GLhandleARB programObj);
extern void glUniform1fARB(GLint location, GLfloat v0);
extern void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1);
extern void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern void glUniform1iARB(GLint location, GLint v0);
extern void glUniform2iARB(GLint location, GLint v0, GLint v1);
extern void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2);
extern void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern void glUniform1fvARB(GLint location, GLsizei count, const GLfloat *value);
extern void glUniform2fvARB(GLint location, GLsizei count, const GLfloat *value);
extern void glUniform3fvARB(GLint location, GLsizei count, const GLfloat *value);
extern void glUniform4fvARB(GLint location, GLsizei count, const GLfloat *value);
extern void glUniform1ivARB(GLint location, GLsizei count, const GLint *value);
extern void glUniform2ivARB(GLint location, GLsizei count, const GLint *value);
extern void glUniform3ivARB(GLint location, GLsizei count, const GLint *value);
extern void glUniform4ivARB(GLint location, GLsizei count, const GLint *value);
extern void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat *params);
extern void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint *params);
extern void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog);
extern void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj);
extern GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB *name);
extern void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
extern void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat *params);
extern void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint *params);
extern void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source);
# 3187 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB *name);
extern void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
extern GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB *name);
# 3207 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBindBufferARB(GLenum target, GLuint buffer);
extern void glDeleteBuffersARB(GLsizei n, const GLuint *buffers);
extern void glGenBuffersARB(GLsizei n, GLuint *buffers);
extern GLboolean glIsBufferARB(GLuint buffer);
extern void glBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage);
extern void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data);
extern void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data);
extern GLvoid *glMapBufferARB(GLenum target, GLenum access);
extern GLboolean glUnmapBufferARB(GLenum target);
extern void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint *params);
extern void glGetBufferPointervARB(GLenum target, GLenum pname, GLvoid **params);
# 3226 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glDrawBuffersARB(GLsizei n, const GLenum *bufs);







extern void glBlendColorEXT (GLclampf, GLclampf, GLclampf, GLclampf);
# 3386 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBlendEquationEXT (GLenum);
# 3408 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glColorTableEXT (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);
extern void glColorSubTableEXT (GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
extern void glGetColorTableEXT (GLenum, GLenum, GLenum, GLvoid *);
extern void glGetColorTableParameterivEXT (GLenum, GLenum, GLint *);
extern void glGetColorTableParameterfvEXT (GLenum, GLenum, GLfloat *);
# 3437 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glLockArraysEXT (GLint, GLsizei);
extern void glUnlockArraysEXT (void);
# 3456 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glDrawRangeElementsEXT (GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *);
# 3506 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glSecondaryColor3bEXT (GLbyte, GLbyte, GLbyte);
extern void glSecondaryColor3bvEXT (const GLbyte *);
extern void glSecondaryColor3dEXT (GLdouble, GLdouble, GLdouble);
extern void glSecondaryColor3dvEXT (const GLdouble *);
extern void glSecondaryColor3fEXT (GLfloat, GLfloat, GLfloat);
extern void glSecondaryColor3fvEXT (const GLfloat *);
extern void glSecondaryColor3iEXT (GLint, GLint, GLint);
extern void glSecondaryColor3ivEXT (const GLint *);
extern void glSecondaryColor3sEXT (GLshort, GLshort, GLshort);
extern void glSecondaryColor3svEXT (const GLshort *);
extern void glSecondaryColor3ubEXT (GLubyte, GLubyte, GLubyte);
extern void glSecondaryColor3ubvEXT (const GLubyte *);
extern void glSecondaryColor3uiEXT (GLuint, GLuint, GLuint);
extern void glSecondaryColor3uivEXT (const GLuint *);
extern void glSecondaryColor3usEXT (GLushort, GLushort, GLushort);
extern void glSecondaryColor3usvEXT (const GLushort *);
extern void glSecondaryColorPointerEXT (GLint, GLenum, GLsizei, const GLvoid *);
# 3539 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glMultiDrawArraysEXT (GLenum, const GLint *, const GLsizei *, GLsizei);
extern void glMultiDrawElementsEXT (GLenum, const GLsizei *, GLenum, const GLvoid* *, GLsizei);
# 3552 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glFogCoordfEXT (GLfloat);
extern void glFogCoordfvEXT (const GLfloat *);
extern void glFogCoorddEXT (GLdouble);
extern void glFogCoorddvEXT (const GLdouble *);
extern void glFogCoordPointerEXT (GLenum, GLsizei, const GLvoid *);
# 3614 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBlendFuncSeparateEXT (GLenum, GLenum, GLenum, GLenum);
# 3768 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glActiveStencilFaceEXT(GLenum face);







extern void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax);







extern void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha);
# 3808 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern GLboolean glIsRenderbufferEXT(GLuint renderbuffer);
extern void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer);
extern void glDeleteRenderbuffersEXT(GLsizei n, const GLuint *renderbuffers);
extern void glGenRenderbuffersEXT(GLsizei n, GLuint *renderbuffers);
extern void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
extern void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint *params);
extern GLboolean glIsFramebufferEXT(GLuint framebuffer);
extern void glBindFramebufferEXT(GLenum target, GLuint framebuffer);
extern void glDeleteFramebuffersEXT(GLsizei n, const GLuint *framebuffers);
extern void glGenFramebuffersEXT(GLsizei n, GLuint *framebuffers);
extern GLenum glCheckFramebufferStatusEXT(GLenum target);
extern void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
extern void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint *params);
extern void glGenerateMipmapEXT(GLenum target);







extern void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);







extern void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
# 3851 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value);
extern void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level);
extern void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
extern void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
# 3870 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
extern void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer);
extern void glBeginTransformFeedbackEXT(GLenum primitiveMode);
extern void glEndTransformFeedbackEXT(void);
extern void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar **varyings, GLenum bufferMode);
extern void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
extern void glGetIntegerIndexedvEXT(GLenum param, GLuint index, GLint *values);
extern void glGetBooleanIndexedvEXT(GLenum param, GLuint index, GLboolean *values);
# 3888 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer);
extern GLint glGetUniformBufferSizeEXT(GLuint program, GLint location);
extern GLintptr glGetUniformOffsetEXT(GLuint program, GLint location);
# 3903 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glClearColorIiEXT( GLint r, GLint g, GLint b, GLint a );
extern void glClearColorIuiEXT( GLuint r, GLuint g, GLuint b, GLuint a );
extern void glTexParameterIivEXT( GLenum target, GLenum pname, GLint *params );
extern void glTexParameterIuivEXT( GLenum target, GLenum pname, GLuint *params );
extern void glGetTexParameterIivEXT( GLenum target, GLenum pname, GLint *params);
extern void glGetTexParameterIiuvEXT( GLenum target, GLenum pname, GLuint *params);
# 3949 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glVertexAttribI1iEXT(GLuint index, GLint x);
extern void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y);
extern void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z);
extern void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w);
extern void glVertexAttribI1uiEXT(GLuint index, GLuint x);
extern void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y);
extern void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z);
extern void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern void glVertexAttribI1ivEXT(GLuint index, const GLint *v);
extern void glVertexAttribI2ivEXT(GLuint index, const GLint *v);
extern void glVertexAttribI3ivEXT(GLuint index, const GLint *v);
extern void glVertexAttribI4ivEXT(GLuint index, const GLint *v);
extern void glVertexAttribI1uivEXT(GLuint index, const GLuint *v);
extern void glVertexAttribI2uivEXT(GLuint index, const GLuint *v);
extern void glVertexAttribI3uivEXT(GLuint index, const GLuint *v);
extern void glVertexAttribI4uivEXT(GLuint index, const GLuint *v);
extern void glVertexAttribI4bvEXT(GLuint index, const GLbyte *v);
extern void glVertexAttribI4svEXT(GLuint index, const GLshort *v);
extern void glVertexAttribI4ubvEXT(GLuint index, const GLubyte *v);
extern void glVertexAttribI4usvEXT(GLuint index, const GLushort *v);
extern void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint *params);
extern void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint *params);
extern void glUniform1uiEXT(GLint location, GLuint v0);
extern void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1);
extern void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2);
extern void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
extern void glUniform1uivEXT(GLint location, GLsizei count, const GLuint *value);
extern void glUniform2uivEXT(GLint location, GLsizei count, const GLuint *value);
extern void glUniform3uivEXT(GLint location, GLsizei count, const GLuint *value);
extern void glUniform4uivEXT(GLint location, GLsizei count, const GLuint *value);
extern void glGetUniformuivEXT(GLuint program, GLint location, GLuint *params);
extern void glBindFragDataLocationEXT(GLuint program, GLuint colorNumber, const GLchar *name);
extern GLint glGetFragDataLocationEXT(GLuint program, const GLchar *name);
# 3991 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glTextureRangeAPPLE(GLenum target, GLsizei length, const GLvoid *pointer);
extern void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, GLvoid **params);
# 4002 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glVertexArrayRangeAPPLE(GLsizei length, const GLvoid *pointer);
extern void glFlushVertexArrayRangeAPPLE(GLsizei length, const GLvoid *pointer);
extern void glVertexArrayParameteriAPPLE(GLenum pname, GLint param);
# 4015 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBindVertexArrayAPPLE(GLuint id);
extern void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint *ids);
extern void glGenVertexArraysAPPLE(GLsizei n, GLuint *ids);
extern GLboolean glIsVertexArrayAPPLE(GLuint id);
# 4033 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glGenFencesAPPLE(GLsizei n, GLuint *fences);
extern void glDeleteFencesAPPLE(GLsizei n, const GLuint *fences);
extern void glSetFenceAPPLE(GLuint fence);
extern GLboolean glIsFenceAPPLE(GLuint fence);
extern GLboolean glTestFenceAPPLE(GLuint fence);
extern void glFinishFenceAPPLE(GLuint fence);
extern GLboolean glTestObjectAPPLE(GLenum object, GLuint name);
extern void glFinishObjectAPPLE(GLenum object, GLuint name);
# 4052 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glElementPointerAPPLE(GLenum type, const GLvoid *pointer);
extern void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count);
extern void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
extern void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
extern void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount);
# 4066 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glFlushRenderAPPLE(void);
extern void glFinishRenderAPPLE(void);
extern void glSwapAPPLE(void);
# 4082 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glEnableVertexAttribAPPLE(GLuint index, GLenum pname);
extern void glDisableVertexAttribAPPLE(GLuint index, GLenum pname);
extern GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname);
extern void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
extern void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
extern void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
extern void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
# 4097 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param);
extern void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size);
# 4108 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option);
extern GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option);
extern void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint* params);
# 4119 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glPNTrianglesiATI(GLenum pname, GLint param);
extern void glPNTrianglesfATI(GLenum pname, GLfloat param);







extern void glBlendEquationSeparateATI(GLenum equationRGB, GLenum equationAlpha);
# 4137 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
extern void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
# 4147 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glPNTrianglesiATIX(GLenum pname, GLint param);
extern void glPNTrianglesfATIX(GLenum pname, GLfloat param);
# 4255 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glCombinerParameterfvNV (GLenum, const GLfloat *);
extern void glCombinerParameterfNV (GLenum, GLfloat);
extern void glCombinerParameterivNV (GLenum, const GLint *);
extern void glCombinerParameteriNV (GLenum, GLint);
extern void glCombinerInputNV (GLenum, GLenum, GLenum, GLenum, GLenum, GLenum);
extern void glCombinerOutputNV (GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean);
extern void glFinalCombinerInputNV (GLenum, GLenum, GLenum, GLenum);
extern void glGetCombinerInputParameterfvNV (GLenum, GLenum, GLenum, GLenum, GLfloat *);
extern void glGetCombinerInputParameterivNV (GLenum, GLenum, GLenum, GLenum, GLint *);
extern void glGetCombinerOutputParameterfvNV (GLenum, GLenum, GLenum, GLfloat *);
extern void glGetCombinerOutputParameterivNV (GLenum, GLenum, GLenum, GLint *);
extern void glGetFinalCombinerInputParameterfvNV (GLenum, GLenum, GLfloat *);
extern void glGetFinalCombinerInputParameterivNV (GLenum, GLenum, GLint *);
# 4276 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glCombinerStageParameterfvNV (GLenum, GLenum, const GLfloat *);
extern void glGetCombinerStageParameterfvNV (GLenum, GLenum, GLfloat *);
# 4420 "/System/Library/Frameworks/OpenGL.framework/Headers/glext.h" 3
extern void glPointParameteriNV(GLenum pname, GLint param);
extern void glPointParameterivNV(GLenum pname, const GLint *params);
# 66 "/System/Library/Frameworks/OpenGL.framework/Headers/gl.h" 2 3
# 2427 "/System/Library/Frameworks/OpenGL.framework/Headers/gl.h" 3
extern void glAccum (GLenum op, GLfloat value);
extern void glAlphaFunc (GLenum func, GLclampf ref);
extern GLboolean glAreTexturesResident (GLsizei n, const GLuint *textures, GLboolean *residences);
extern void glArrayElement (GLint i);
extern void glBegin (GLenum mode);
extern void glBindTexture (GLenum target, GLuint texture);
extern void glBitmap (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap);
extern void glBlendColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern void glBlendEquation (GLenum mode);
extern void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
extern void glBlendFunc (GLenum sfactor, GLenum dfactor);
extern void glCallList (GLuint list);
extern void glCallLists (GLsizei n, GLenum type, const GLvoid *lists);
extern void glClear (GLbitfield mask);
extern void glClearAccum (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
extern void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern void glClearDepth (GLclampd depth);
extern void glClearIndex (GLfloat c);
extern void glClearStencil (GLint s);
extern void glClipPlane (GLenum plane, const GLdouble *equation);
extern void glColor3b (GLbyte red, GLbyte green, GLbyte blue);
extern void glColor3bv (const GLbyte *v);
extern void glColor3d (GLdouble red, GLdouble green, GLdouble blue);
extern void glColor3dv (const GLdouble *v);
extern void glColor3f (GLfloat red, GLfloat green, GLfloat blue);
extern void glColor3fv (const GLfloat *v);
extern void glColor3i (GLint red, GLint green, GLint blue);
extern void glColor3iv (const GLint *v);
extern void glColor3s (GLshort red, GLshort green, GLshort blue);
extern void glColor3sv (const GLshort *v);
extern void glColor3ub (GLubyte red, GLubyte green, GLubyte blue);
extern void glColor3ubv (const GLubyte *v);
extern void glColor3ui (GLuint red, GLuint green, GLuint blue);
extern void glColor3uiv (const GLuint *v);
extern void glColor3us (GLushort red, GLushort green, GLushort blue);
extern void glColor3usv (const GLushort *v);
extern void glColor4b (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
extern void glColor4bv (const GLbyte *v);
extern void glColor4d (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
extern void glColor4dv (const GLdouble *v);
extern void glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
extern void glColor4fv (const GLfloat *v);
extern void glColor4i (GLint red, GLint green, GLint blue, GLint alpha);
extern void glColor4iv (const GLint *v);
extern void glColor4s (GLshort red, GLshort green, GLshort blue, GLshort alpha);
extern void glColor4sv (const GLshort *v);
extern void glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
extern void glColor4ubv (const GLubyte *v);
extern void glColor4ui (GLuint red, GLuint green, GLuint blue, GLuint alpha);
extern void glColor4uiv (const GLuint *v);
extern void glColor4us (GLushort red, GLushort green, GLushort blue, GLushort alpha);
extern void glColor4usv (const GLushort *v);
extern void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
extern void glColorMaterial (GLenum face, GLenum mode);
extern void glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glColorSubTable (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data);
extern void glColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
extern void glColorTableParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glColorTableParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void glConvolutionFilter1D (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image);
extern void glConvolutionFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image);
extern void glConvolutionParameterf (GLenum target, GLenum pname, GLfloat params);
extern void glConvolutionParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glConvolutionParameteri (GLenum target, GLenum pname, GLint params);
extern void glConvolutionParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void glCopyColorSubTable (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
extern void glCopyColorTable (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void glCopyConvolutionFilter1D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void glCopyConvolutionFilter2D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCopyPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
extern void glCopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
extern void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern void glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
extern void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCullFace (GLenum mode);
extern void glDeleteLists (GLuint list, GLsizei range);
extern void glDeleteTextures (GLsizei n, const GLuint *textures);
extern void glDepthFunc (GLenum func);
extern void glDepthMask (GLboolean flag);
extern void glDepthRange (GLclampd zNear, GLclampd zFar);
extern void glDisable (GLenum cap);
extern void glDisableClientState (GLenum array);
extern void glDrawArrays (GLenum mode, GLint first, GLsizei count);
extern void glDrawBuffer (GLenum mode);
extern void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
extern void glDrawPixels (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
extern void glEdgeFlag (GLboolean flag);
extern void glEdgeFlagPointer (GLsizei stride, const GLvoid *pointer);
extern void glEdgeFlagv (const GLboolean *flag);
extern void glEnable (GLenum cap);
extern void glEnableClientState (GLenum array);
extern void glEnd (void);
extern void glEndList (void);
extern void glEvalCoord1d (GLdouble u);
extern void glEvalCoord1dv (const GLdouble *u);
extern void glEvalCoord1f (GLfloat u);
extern void glEvalCoord1fv (const GLfloat *u);
extern void glEvalCoord2d (GLdouble u, GLdouble v);
extern void glEvalCoord2dv (const GLdouble *u);
extern void glEvalCoord2f (GLfloat u, GLfloat v);
extern void glEvalCoord2fv (const GLfloat *u);
extern void glEvalMesh1 (GLenum mode, GLint i1, GLint i2);
extern void glEvalMesh2 (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
extern void glEvalPoint1 (GLint i);
extern void glEvalPoint2 (GLint i, GLint j);
extern void glFeedbackBuffer (GLsizei size, GLenum type, GLfloat *buffer);
extern void glFinish (void);
extern void glFlush (void);
extern void glFogf (GLenum pname, GLfloat param);
extern void glFogfv (GLenum pname, const GLfloat *params);
extern void glFogi (GLenum pname, GLint param);
extern void glFogiv (GLenum pname, const GLint *params);
extern void glFrontFace (GLenum mode);
extern void glFrustum (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
extern GLuint glGenLists (GLsizei range);
extern void glGenTextures (GLsizei n, GLuint *textures);
extern void glGetBooleanv (GLenum pname, GLboolean *params);
extern void glGetClipPlane (GLenum plane, GLdouble *equation);
extern void glGetColorTable (GLenum target, GLenum format, GLenum type, GLvoid *table);
extern void glGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetColorTableParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, GLvoid *image);
extern void glGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetConvolutionParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetDoublev (GLenum pname, GLdouble *params);
extern GLenum glGetError (void);
extern void glGetFloatv (GLenum pname, GLfloat *params);
extern void glGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern void glGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetHistogramParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetIntegerv (GLenum pname, GLint *params);
extern void glGetLightfv (GLenum light, GLenum pname, GLfloat *params);
extern void glGetLightiv (GLenum light, GLenum pname, GLint *params);
extern void glGetMapdv (GLenum target, GLenum query, GLdouble *v);
extern void glGetMapfv (GLenum target, GLenum query, GLfloat *v);
extern void glGetMapiv (GLenum target, GLenum query, GLint *v);
extern void glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params);
extern void glGetMaterialiv (GLenum face, GLenum pname, GLint *params);
extern void glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern void glGetMinmaxParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetMinmaxParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetPixelMapfv (GLenum map, GLfloat *values);
extern void glGetPixelMapuiv (GLenum map, GLuint *values);
extern void glGetPixelMapusv (GLenum map, GLushort *values);
extern void glGetPointerv (GLenum pname, GLvoid* *params);
extern void glGetPolygonStipple (GLubyte *mask);
extern void glGetSeparableFilter (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span);
extern const GLubyte * glGetString (GLenum name);
extern void glGetTexEnvfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetTexEnviv (GLenum target, GLenum pname, GLint *params);
extern void glGetTexGendv (GLenum coord, GLenum pname, GLdouble *params);
extern void glGetTexGenfv (GLenum coord, GLenum pname, GLfloat *params);
extern void glGetTexGeniv (GLenum coord, GLenum pname, GLint *params);
extern void glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
extern void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params);
extern void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params);
extern void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glHint (GLenum target, GLenum mode);
extern void glHistogram (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
extern void glIndexMask (GLuint mask);
extern void glIndexPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glIndexd (GLdouble c);
extern void glIndexdv (const GLdouble *c);
extern void glIndexf (GLfloat c);
extern void glIndexfv (const GLfloat *c);
extern void glIndexi (GLint c);
extern void glIndexiv (const GLint *c);
extern void glIndexs (GLshort c);
extern void glIndexsv (const GLshort *c);
extern void glIndexub (GLubyte c);
extern void glIndexubv (const GLubyte *c);
extern void glInitNames (void);
extern void glInterleavedArrays (GLenum format, GLsizei stride, const GLvoid *pointer);
extern GLboolean glIsEnabled (GLenum cap);
extern GLboolean glIsList (GLuint list);
extern GLboolean glIsTexture (GLuint texture);
extern void glLightModelf (GLenum pname, GLfloat param);
extern void glLightModelfv (GLenum pname, const GLfloat *params);
extern void glLightModeli (GLenum pname, GLint param);
extern void glLightModeliv (GLenum pname, const GLint *params);
extern void glLightf (GLenum light, GLenum pname, GLfloat param);
extern void glLightfv (GLenum light, GLenum pname, const GLfloat *params);
extern void glLighti (GLenum light, GLenum pname, GLint param);
extern void glLightiv (GLenum light, GLenum pname, const GLint *params);
extern void glLineStipple (GLint factor, GLushort pattern);
extern void glLineWidth (GLfloat width);
extern void glListBase (GLuint base);
extern void glLoadIdentity (void);
extern void glLoadMatrixd (const GLdouble *m);
extern void glLoadMatrixf (const GLfloat *m);
extern void glLoadName (GLuint name);
extern void glLogicOp (GLenum opcode);
extern void glMap1d (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
extern void glMap1f (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
extern void glMap2d (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
extern void glMap2f (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
extern void glMapGrid1d (GLint un, GLdouble u1, GLdouble u2);
extern void glMapGrid1f (GLint un, GLfloat u1, GLfloat u2);
extern void glMapGrid2d (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
extern void glMapGrid2f (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
extern void glMaterialf (GLenum face, GLenum pname, GLfloat param);
extern void glMaterialfv (GLenum face, GLenum pname, const GLfloat *params);
extern void glMateriali (GLenum face, GLenum pname, GLint param);
extern void glMaterialiv (GLenum face, GLenum pname, const GLint *params);
extern void glMatrixMode (GLenum mode);
extern void glMinmax (GLenum target, GLenum internalformat, GLboolean sink);
extern void glMultMatrixd (const GLdouble *m);
extern void glMultMatrixf (const GLfloat *m);
extern void glNewList (GLuint list, GLenum mode);
extern void glNormal3b (GLbyte nx, GLbyte ny, GLbyte nz);
extern void glNormal3bv (const GLbyte *v);
extern void glNormal3d (GLdouble nx, GLdouble ny, GLdouble nz);
extern void glNormal3dv (const GLdouble *v);
extern void glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz);
extern void glNormal3fv (const GLfloat *v);
extern void glNormal3i (GLint nx, GLint ny, GLint nz);
extern void glNormal3iv (const GLint *v);
extern void glNormal3s (GLshort nx, GLshort ny, GLshort nz);
extern void glNormal3sv (const GLshort *v);
extern void glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glOrtho (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
extern void glPassThrough (GLfloat token);
extern void glPixelMapfv (GLenum map, GLint mapsize, const GLfloat *values);
extern void glPixelMapuiv (GLenum map, GLint mapsize, const GLuint *values);
extern void glPixelMapusv (GLenum map, GLint mapsize, const GLushort *values);
extern void glPixelStoref (GLenum pname, GLfloat param);
extern void glPixelStorei (GLenum pname, GLint param);
extern void glPixelTransferf (GLenum pname, GLfloat param);
extern void glPixelTransferi (GLenum pname, GLint param);
extern void glPixelZoom (GLfloat xfactor, GLfloat yfactor);
extern void glPointSize (GLfloat size);
extern void glPolygonMode (GLenum face, GLenum mode);
extern void glPolygonOffset (GLfloat factor, GLfloat units);
extern void glPolygonStipple (const GLubyte *mask);
extern void glPopAttrib (void);
extern void glPopClientAttrib (void);
extern void glPopMatrix (void);
extern void glPopName (void);
extern void glPrioritizeTextures (GLsizei n, const GLuint *textures, const GLclampf *priorities);
extern void glPushAttrib (GLbitfield mask);
extern void glPushClientAttrib (GLbitfield mask);
extern void glPushMatrix (void);
extern void glPushName (GLuint name);
extern void glRasterPos2d (GLdouble x, GLdouble y);
extern void glRasterPos2dv (const GLdouble *v);
extern void glRasterPos2f (GLfloat x, GLfloat y);
extern void glRasterPos2fv (const GLfloat *v);
extern void glRasterPos2i (GLint x, GLint y);
extern void glRasterPos2iv (const GLint *v);
extern void glRasterPos2s (GLshort x, GLshort y);
extern void glRasterPos2sv (const GLshort *v);
extern void glRasterPos3d (GLdouble x, GLdouble y, GLdouble z);
extern void glRasterPos3dv (const GLdouble *v);
extern void glRasterPos3f (GLfloat x, GLfloat y, GLfloat z);
extern void glRasterPos3fv (const GLfloat *v);
extern void glRasterPos3i (GLint x, GLint y, GLint z);
extern void glRasterPos3iv (const GLint *v);
extern void glRasterPos3s (GLshort x, GLshort y, GLshort z);
extern void glRasterPos3sv (const GLshort *v);
extern void glRasterPos4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glRasterPos4dv (const GLdouble *v);
extern void glRasterPos4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glRasterPos4fv (const GLfloat *v);
extern void glRasterPos4i (GLint x, GLint y, GLint z, GLint w);
extern void glRasterPos4iv (const GLint *v);
extern void glRasterPos4s (GLshort x, GLshort y, GLshort z, GLshort w);
extern void glRasterPos4sv (const GLshort *v);
extern void glReadBuffer (GLenum mode);
extern void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
extern void glRectd (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
extern void glRectdv (const GLdouble *v1, const GLdouble *v2);
extern void glRectf (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
extern void glRectfv (const GLfloat *v1, const GLfloat *v2);
extern void glRecti (GLint x1, GLint y1, GLint x2, GLint y2);
extern void glRectiv (const GLint *v1, const GLint *v2);
extern void glRects (GLshort x1, GLshort y1, GLshort x2, GLshort y2);
extern void glRectsv (const GLshort *v1, const GLshort *v2);
extern GLint glRenderMode (GLenum mode);
extern void glResetHistogram (GLenum target);
extern void glResetMinmax (GLenum target);
extern void glRotated (GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
extern void glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
extern void glScaled (GLdouble x, GLdouble y, GLdouble z);
extern void glScalef (GLfloat x, GLfloat y, GLfloat z);
extern void glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
extern void glSelectBuffer (GLsizei size, GLuint *buffer);
extern void glSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column);
extern void glShadeModel (GLenum mode);
extern void glStencilFunc (GLenum func, GLint ref, GLuint mask);
extern void glStencilMask (GLuint mask);
extern void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
extern void glTexCoord1d (GLdouble s);
extern void glTexCoord1dv (const GLdouble *v);
extern void glTexCoord1f (GLfloat s);
extern void glTexCoord1fv (const GLfloat *v);
extern void glTexCoord1i (GLint s);
extern void glTexCoord1iv (const GLint *v);
extern void glTexCoord1s (GLshort s);
extern void glTexCoord1sv (const GLshort *v);
extern void glTexCoord2d (GLdouble s, GLdouble t);
extern void glTexCoord2dv (const GLdouble *v);
extern void glTexCoord2f (GLfloat s, GLfloat t);
extern void glTexCoord2fv (const GLfloat *v);
extern void glTexCoord2i (GLint s, GLint t);
extern void glTexCoord2iv (const GLint *v);
extern void glTexCoord2s (GLshort s, GLshort t);
extern void glTexCoord2sv (const GLshort *v);
extern void glTexCoord3d (GLdouble s, GLdouble t, GLdouble r);
extern void glTexCoord3dv (const GLdouble *v);
extern void glTexCoord3f (GLfloat s, GLfloat t, GLfloat r);
extern void glTexCoord3fv (const GLfloat *v);
extern void glTexCoord3i (GLint s, GLint t, GLint r);
extern void glTexCoord3iv (const GLint *v);
extern void glTexCoord3s (GLshort s, GLshort t, GLshort r);
extern void glTexCoord3sv (const GLshort *v);
extern void glTexCoord4d (GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern void glTexCoord4dv (const GLdouble *v);
extern void glTexCoord4f (GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void glTexCoord4fv (const GLfloat *v);
extern void glTexCoord4i (GLint s, GLint t, GLint r, GLint q);
extern void glTexCoord4iv (const GLint *v);
extern void glTexCoord4s (GLshort s, GLshort t, GLshort r, GLshort q);
extern void glTexCoord4sv (const GLshort *v);
extern void glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glTexEnvf (GLenum target, GLenum pname, GLfloat param);
extern void glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glTexEnvi (GLenum target, GLenum pname, GLint param);
extern void glTexEnviv (GLenum target, GLenum pname, const GLint *params);
extern void glTexGend (GLenum coord, GLenum pname, GLdouble param);
extern void glTexGendv (GLenum coord, GLenum pname, const GLdouble *params);
extern void glTexGenf (GLenum coord, GLenum pname, GLfloat param);
extern void glTexGenfv (GLenum coord, GLenum pname, const GLfloat *params);
extern void glTexGeni (GLenum coord, GLenum pname, GLint param);
extern void glTexGeniv (GLenum coord, GLenum pname, const GLint *params);
extern void glTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexParameterf (GLenum target, GLenum pname, GLfloat param);
extern void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glTexParameteri (GLenum target, GLenum pname, GLint param);
extern void glTexParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTranslated (GLdouble x, GLdouble y, GLdouble z);
extern void glTranslatef (GLfloat x, GLfloat y, GLfloat z);
extern void glVertex2d (GLdouble x, GLdouble y);
extern void glVertex2dv (const GLdouble *v);
extern void glVertex2f (GLfloat x, GLfloat y);
extern void glVertex2fv (const GLfloat *v);
extern void glVertex2i (GLint x, GLint y);
extern void glVertex2iv (const GLint *v);
extern void glVertex2s (GLshort x, GLshort y);
extern void glVertex2sv (const GLshort *v);
extern void glVertex3d (GLdouble x, GLdouble y, GLdouble z);
extern void glVertex3dv (const GLdouble *v);
extern void glVertex3f (GLfloat x, GLfloat y, GLfloat z);
extern void glVertex3fv (const GLfloat *v);
extern void glVertex3i (GLint x, GLint y, GLint z);
extern void glVertex3iv (const GLint *v);
extern void glVertex3s (GLshort x, GLshort y, GLshort z);
extern void glVertex3sv (const GLshort *v);
extern void glVertex4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glVertex4dv (const GLdouble *v);
extern void glVertex4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glVertex4fv (const GLfloat *v);
extern void glVertex4i (GLint x, GLint y, GLint z, GLint w);
extern void glVertex4iv (const GLint *v);
extern void glVertex4s (GLshort x, GLshort y, GLshort z, GLshort w);
extern void glVertex4sv (const GLshort *v);
extern void glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glViewport (GLint x, GLint y, GLsizei width, GLsizei height);

extern void glSampleCoverage (GLclampf value, GLboolean invert);
extern void glSamplePass (GLenum pass);

extern void glLoadTransposeMatrixf (const GLfloat *m);
extern void glLoadTransposeMatrixd (const GLdouble *m);
extern void glMultTransposeMatrixf (const GLfloat *m);
extern void glMultTransposeMatrixd (const GLdouble *m);

extern void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glGetCompressedTexImage (GLenum target, GLint lod, GLvoid *img);

extern void glActiveTexture (GLenum texture);
extern void glClientActiveTexture (GLenum texture);
extern void glMultiTexCoord1d (GLenum target, GLdouble s);
extern void glMultiTexCoord1dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord1f (GLenum target, GLfloat s);
extern void glMultiTexCoord1fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord1i (GLenum target, GLint s);
extern void glMultiTexCoord1iv (GLenum target, const GLint *v);
extern void glMultiTexCoord1s (GLenum target, GLshort s);
extern void glMultiTexCoord1sv (GLenum target, const GLshort *v);
extern void glMultiTexCoord2d (GLenum target, GLdouble s, GLdouble t);
extern void glMultiTexCoord2dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t);
extern void glMultiTexCoord2fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord2i (GLenum target, GLint s, GLint t);
extern void glMultiTexCoord2iv (GLenum target, const GLint *v);
extern void glMultiTexCoord2s (GLenum target, GLshort s, GLshort t);
extern void glMultiTexCoord2sv (GLenum target, const GLshort *v);
extern void glMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t, GLdouble r);
extern void glMultiTexCoord3dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t, GLfloat r);
extern void glMultiTexCoord3fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint r);
extern void glMultiTexCoord3iv (GLenum target, const GLint *v);
extern void glMultiTexCoord3s (GLenum target, GLshort s, GLshort t, GLshort r);
extern void glMultiTexCoord3sv (GLenum target, const GLshort *v);
extern void glMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern void glMultiTexCoord4dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void glMultiTexCoord4fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord4i (GLenum target, GLint, GLint s, GLint t, GLint r);
extern void glMultiTexCoord4iv (GLenum target, const GLint *v);
extern void glMultiTexCoord4s (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
extern void glMultiTexCoord4sv (GLenum target, const GLshort *v);

extern void glFogCoordf (GLfloat coord);
extern void glFogCoordfv (const GLfloat *coord);
extern void glFogCoordd (GLdouble coord);
extern void glFogCoorddv (const GLdouble * coord);
extern void glFogCoordPointer (GLenum type, GLsizei stride, const GLvoid *pointer);

extern void glSecondaryColor3b (GLbyte red, GLbyte green, GLbyte blue);
extern void glSecondaryColor3bv (const GLbyte *v);
extern void glSecondaryColor3d (GLdouble red, GLdouble green, GLdouble blue);
extern void glSecondaryColor3dv (const GLdouble *v);
extern void glSecondaryColor3f (GLfloat red, GLfloat green, GLfloat blue);
extern void glSecondaryColor3fv (const GLfloat *v);
extern void glSecondaryColor3i (GLint red, GLint green, GLint blue);
extern void glSecondaryColor3iv (const GLint *v);
extern void glSecondaryColor3s (GLshort red, GLshort green, GLshort blue);
extern void glSecondaryColor3sv (const GLshort *v);
extern void glSecondaryColor3ub (GLubyte red, GLubyte green, GLubyte blue);
extern void glSecondaryColor3ubv (const GLubyte *v);
extern void glSecondaryColor3ui (GLuint red, GLuint green, GLuint blue);
extern void glSecondaryColor3uiv (const GLuint *v);
extern void glSecondaryColor3us (GLushort red, GLushort green, GLushort blue);
extern void glSecondaryColor3usv (const GLushort *v);
extern void glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);

extern void glPointParameterf (GLenum pname, GLfloat param);
extern void glPointParameterfv (GLenum pname, const GLfloat *params);
extern void glPointParameteri (GLenum pname, GLint param);
extern void glPointParameteriv (GLenum pname, const GLint *params);

extern void glBlendFuncSeparate (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);

extern void glMultiDrawArrays (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
extern void glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount);

extern void glWindowPos2d (GLdouble x, GLdouble y);
extern void glWindowPos2dv (const GLdouble *v);
extern void glWindowPos2f (GLfloat x, GLfloat y);
extern void glWindowPos2fv (const GLfloat *v);
extern void glWindowPos2i (GLint x, GLint y);
extern void glWindowPos2iv (const GLint *v);
extern void glWindowPos2s (GLshort x, GLshort y);
extern void glWindowPos2sv (const GLshort *v);
extern void glWindowPos3d (GLdouble x, GLdouble y, GLdouble z);
extern void glWindowPos3dv (const GLdouble *v);
extern void glWindowPos3f (GLfloat x, GLfloat y, GLfloat z);
extern void glWindowPos3fv (const GLfloat *v);
extern void glWindowPos3i (GLint x, GLint y, GLint z);
extern void glWindowPos3iv (const GLint *v);
extern void glWindowPos3s (GLshort x, GLshort y, GLshort z);
extern void glWindowPos3sv (const GLshort *v);

extern void glGenQueries(GLsizei n, GLuint *ids);
extern void glDeleteQueries(GLsizei n, const GLuint *ids);
extern GLboolean glIsQuery(GLuint id);
extern void glBeginQuery(GLenum target, GLuint id);
extern void glEndQuery(GLenum target);
extern void glGetQueryiv(GLenum target, GLenum pname, GLint *params);
extern void glGetQueryObjectiv(GLuint id, GLenum pname, GLint *params);
extern void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params);

extern void glBindBuffer (GLenum target, GLuint buffer);
extern void glDeleteBuffers (GLsizei n, const GLuint *buffers);
extern void glGenBuffers (GLsizei n, GLuint *buffers);
extern GLboolean glIsBuffer (GLuint buffer);
extern void glBufferData (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage);
extern void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data);
extern void glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data);
extern GLvoid * glMapBuffer (GLenum target, GLenum access);
extern GLboolean glUnmapBuffer (GLenum target);
extern void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetBufferPointerv (GLenum target, GLenum pname, GLvoid **params);

extern void glDrawBuffers (GLsizei n, const GLenum *bufs);
extern void glVertexAttrib1d (GLuint index, GLdouble x);
extern void glVertexAttrib1dv (GLuint index, const GLdouble *v);
extern void glVertexAttrib1f (GLuint index, GLfloat x);
extern void glVertexAttrib1fv (GLuint index, const GLfloat *v);
extern void glVertexAttrib1s (GLuint index, GLshort x);
extern void glVertexAttrib1sv (GLuint index, const GLshort *v);
extern void glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y);
extern void glVertexAttrib2dv (GLuint index, const GLdouble *v);
extern void glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y);
extern void glVertexAttrib2fv (GLuint index, const GLfloat *v);
extern void glVertexAttrib2s (GLuint index, GLshort x, GLshort y);
extern void glVertexAttrib2sv (GLuint index, const GLshort *v);
extern void glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern void glVertexAttrib3dv (GLuint index, const GLdouble *v);
extern void glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern void glVertexAttrib3fv (GLuint index, const GLfloat *v);
extern void glVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z);
extern void glVertexAttrib3sv (GLuint index, const GLshort *v);
extern void glVertexAttrib4Nbv (GLuint index, const GLbyte *v);
extern void glVertexAttrib4Niv (GLuint index, const GLint *v);
extern void glVertexAttrib4Nsv (GLuint index, const GLshort *v);
extern void glVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
extern void glVertexAttrib4Nubv (GLuint index, const GLubyte *v);
extern void glVertexAttrib4Nuiv (GLuint index, const GLuint *v);
extern void glVertexAttrib4Nusv (GLuint index, const GLushort *v);
extern void glVertexAttrib4bv (GLuint index, const GLbyte *v);
extern void glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glVertexAttrib4dv (GLuint index, const GLdouble *v);
extern void glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glVertexAttrib4fv (GLuint index, const GLfloat *v);
extern void glVertexAttrib4iv (GLuint index, const GLint *v);
extern void glVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
extern void glVertexAttrib4sv (GLuint index, const GLshort *v);
extern void glVertexAttrib4ubv (GLuint index, const GLubyte *v);
extern void glVertexAttrib4uiv (GLuint index, const GLuint *v);
extern void glVertexAttrib4usv (GLuint index, const GLushort *v);
extern void glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
extern void glEnableVertexAttribArray (GLuint index);
extern void glDisableVertexAttribArray (GLuint index);
extern void glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params);
extern void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params);
extern void glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params);
extern void glGetVertexAttribPointerv (GLuint index, GLenum pname, GLvoid* *pointer);
extern void glDeleteShader (GLuint shader);
extern void glDetachShader (GLuint program, GLuint shader);
extern GLuint glCreateShader (GLenum type);
extern void glShaderSource (GLuint shader, GLsizei count, const GLchar* *string, const GLint *length);
extern void glCompileShader (GLuint shader);
extern GLuint glCreateProgram (void);
extern void glAttachShader (GLuint program, GLuint shader);
extern void glLinkProgram (GLuint program);
extern void glUseProgram (GLuint program);
extern void glDeleteProgram (GLuint program);
extern void glValidateProgram (GLuint program);
extern void glUniform1f (GLint location, GLfloat v0);
extern void glUniform2f (GLint location, GLfloat v0, GLfloat v1);
extern void glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern void glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern void glUniform1i (GLint location, GLint v0);
extern void glUniform2i (GLint location, GLint v0, GLint v1);
extern void glUniform3i (GLint location, GLint v0, GLint v1, GLint v2);
extern void glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern void glUniform1fv (GLint location, GLsizei count, const GLfloat *value);
extern void glUniform2fv (GLint location, GLsizei count, const GLfloat *value);
extern void glUniform3fv (GLint location, GLsizei count, const GLfloat *value);
extern void glUniform4fv (GLint location, GLsizei count, const GLfloat *value);
extern void glUniform1iv (GLint location, GLsizei count, const GLint *value);
extern void glUniform2iv (GLint location, GLsizei count, const GLint *value);
extern void glUniform3iv (GLint location, GLsizei count, const GLint *value);
extern void glUniform4iv (GLint location, GLsizei count, const GLint *value);
extern void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern GLboolean glIsShader (GLuint shader);
extern GLboolean glIsProgram (GLuint program);
extern void glGetShaderiv (GLuint shader, GLenum pname, GLint *params);
extern void glGetProgramiv (GLuint program, GLenum pname, GLint *params);
extern void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
extern void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
extern void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
extern GLint glGetUniformLocation (GLuint program, const GLchar *name);
extern void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
extern void glGetUniformfv (GLuint program, GLint location, GLfloat *params);
extern void glGetUniformiv (GLuint program, GLint location, GLint *params);
extern void glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
extern void glBindAttribLocation (GLuint program, GLuint index, const GLchar *name);
extern void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
extern GLint glGetAttribLocation (GLuint program, const GLchar *name);
extern void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask);
extern void glStencilOpSeparate (GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
extern void glStencilMaskSeparate (GLenum face, GLuint mask);

extern void glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
# 60 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 2 3
# 1 "/System/Library/Frameworks/OpenGL.framework/Headers/glu.h" 1 3
# 227 "/System/Library/Frameworks/OpenGL.framework/Headers/glu.h" 3
typedef struct GLUnurbs GLUnurbs;
typedef struct GLUquadric GLUquadric;
typedef struct GLUtesselator GLUtesselator;

typedef struct GLUnurbs GLUnurbsObj;
typedef struct GLUquadric GLUquadricObj;
typedef struct GLUtesselator GLUtesselatorObj;
typedef struct GLUtesselator GLUtriangulatorObj;




extern void gluBeginCurve (GLUnurbs* nurb);
extern void gluBeginPolygon (GLUtesselator* tess);
extern void gluBeginSurface (GLUnurbs* nurb);
extern void gluBeginTrim (GLUnurbs* nurb);
extern GLint gluBuild1DMipmapLevels (GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data);
extern GLint gluBuild1DMipmaps (GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, const void *data);
extern GLint gluBuild2DMipmapLevels (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data);
extern GLint gluBuild2DMipmaps (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *data);
extern GLint gluBuild3DMipmapLevels (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data);
extern GLint gluBuild3DMipmaps (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
extern GLboolean gluCheckExtension (const GLubyte *extName, const GLubyte *extString);
extern void gluCylinder (GLUquadric* quad, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks);
extern void gluDeleteNurbsRenderer (GLUnurbs* nurb);
extern void gluDeleteQuadric (GLUquadric* quad);
extern void gluDeleteTess (GLUtesselator* tess);
extern void gluDisk (GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops);
extern void gluEndCurve (GLUnurbs* nurb);
extern void gluEndPolygon (GLUtesselator* tess);
extern void gluEndSurface (GLUnurbs* nurb);
extern void gluEndTrim (GLUnurbs* nurb);
extern const GLubyte * gluErrorString (GLenum error);
extern void gluGetNurbsProperty (GLUnurbs* nurb, GLenum property, GLfloat* data);
extern const GLubyte * gluGetString (GLenum name);
extern void gluGetTessProperty (GLUtesselator* tess, GLenum which, GLdouble* data);
extern void gluLoadSamplingMatrices (GLUnurbs* nurb, const GLfloat *model, const GLfloat *perspective, const GLint *view);
extern void gluLookAt (GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ, GLdouble centerX, GLdouble centerY, GLdouble centerZ, GLdouble upX, GLdouble upY, GLdouble upZ);
extern GLUnurbs* gluNewNurbsRenderer (void);
extern GLUquadric* gluNewQuadric (void);
extern GLUtesselator* gluNewTess (void);
extern void gluNextContour (GLUtesselator* tess, GLenum type);
extern void gluNurbsCallback (GLUnurbs* nurb, GLenum which, GLvoid (*CallBackFunc)());
extern void gluNurbsCallbackData (GLUnurbs* nurb, GLvoid* userData);
extern void gluNurbsCallbackDataEXT (GLUnurbs* nurb, GLvoid* userData);
extern void gluNurbsCurve (GLUnurbs* nurb, GLint knotCount, GLfloat *knots, GLint stride, GLfloat *control, GLint order, GLenum type);
extern void gluNurbsProperty (GLUnurbs* nurb, GLenum property, GLfloat value);
extern void gluNurbsSurface (GLUnurbs* nurb, GLint sKnotCount, GLfloat* sKnots, GLint tKnotCount, GLfloat* tKnots, GLint sStride, GLint tStride, GLfloat* control, GLint sOrder, GLint tOrder, GLenum type);
extern void gluOrtho2D (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top);
extern void gluPartialDisk (GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops, GLdouble start, GLdouble sweep);
extern void gluPerspective (GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar);
extern void gluPickMatrix (GLdouble x, GLdouble y, GLdouble delX, GLdouble delY, GLint *viewport);
extern GLint gluProject (GLdouble objX, GLdouble objY, GLdouble objZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* winX, GLdouble* winY, GLdouble* winZ);
extern void gluPwlCurve (GLUnurbs* nurb, GLint count, GLfloat* data, GLint stride, GLenum type);
extern void gluQuadricCallback (GLUquadric* quad, GLenum which, GLvoid (*CallBackFunc)());
extern void gluQuadricDrawStyle (GLUquadric* quad, GLenum draw);
extern void gluQuadricNormals (GLUquadric* quad, GLenum normal);
extern void gluQuadricOrientation (GLUquadric* quad, GLenum orientation);
extern void gluQuadricTexture (GLUquadric* quad, GLboolean texture);
extern GLint gluScaleImage (GLenum format, GLsizei wIn, GLsizei hIn, GLenum typeIn, const void *dataIn, GLsizei wOut, GLsizei hOut, GLenum typeOut, GLvoid* dataOut);
extern void gluSphere (GLUquadric* quad, GLdouble radius, GLint slices, GLint stacks);
extern void gluTessBeginContour (GLUtesselator* tess);
extern void gluTessBeginPolygon (GLUtesselator* tess, GLvoid* data);
extern void gluTessCallback (GLUtesselator* tess, GLenum which, GLvoid (*CallBackFunc)());
extern void gluTessEndContour (GLUtesselator* tess);
extern void gluTessEndPolygon (GLUtesselator* tess);
extern void gluTessNormal (GLUtesselator* tess, GLdouble valueX, GLdouble valueY, GLdouble valueZ);
extern void gluTessProperty (GLUtesselator* tess, GLenum which, GLdouble data);
extern void gluTessVertex (GLUtesselator* tess, GLdouble *location, GLvoid* data);
extern GLint gluUnProject (GLdouble winX, GLdouble winY, GLdouble winZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* objX, GLdouble* objY, GLdouble* objZ);
extern GLint gluUnProject4 (GLdouble winX, GLdouble winY, GLdouble winZ, GLdouble clipW, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble nearPlane, GLdouble farPlane, GLdouble* objX, GLdouble* objY, GLdouble* objZ, GLdouble* objW);
# 61 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 2 3
# 257 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 3
extern void *glutStrokeRoman;
extern void *glutStrokeMonoRoman;






extern void *glutBitmap9By15;
extern void *glutBitmap8By13;
extern void *glutBitmapTimesRoman10;
extern void *glutBitmapTimesRoman24;
extern void *glutBitmapHelvetica10;
extern void *glutBitmapHelvetica12;
extern void *glutBitmapHelvetica18;
# 420 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 3
extern void glutInit(int *argcp, char **argv);
extern void glutInitDisplayMode(unsigned int mode);

extern void glutInitDisplayString(const char *string);

extern void glutInitWindowPosition(int x, int y);
extern void glutInitWindowSize(int width, int height);
extern void glutMainLoop(void);


extern int glutCreateWindow(const char *title);
extern int glutCreateSubWindow(int win, int x, int y, int width, int height);
extern void glutDestroyWindow(int win);
extern void glutPostRedisplay(void);

extern void glutPostWindowRedisplay(int win);

extern void glutSwapBuffers(void);
extern int glutGetWindow(void);
extern void glutSetWindow(int win);
extern void glutSetWindowTitle(const char *title);
extern void glutSetIconTitle(const char *title);
extern void glutPositionWindow(int x, int y);
extern void glutReshapeWindow(int width, int height);
extern void glutPopWindow(void);
extern void glutPushWindow(void);
extern void glutIconifyWindow(void);
extern void glutShowWindow(void);
extern void glutHideWindow(void);

extern void glutFullScreen(void);
extern void glutSetCursor(int cursor);

extern void glutWarpPointer(int x, int y);


extern void glutSurfaceTexture (GLenum target, GLenum internalformat, int surfacewin);



extern void glutWMCloseFunc(void (*func)(void));
extern void glutCheckLoop(void);




extern void glutEstablishOverlay(void);
extern void glutRemoveOverlay(void);
extern void glutUseLayer(GLenum layer);
extern void glutPostOverlayRedisplay(void);

extern void glutPostWindowOverlayRedisplay(int win);

extern void glutShowOverlay(void);
extern void glutHideOverlay(void);



extern int glutCreateMenu(void (*)(int));
extern void glutDestroyMenu(int menu);
extern int glutGetMenu(void);
extern void glutSetMenu(int menu);
extern void glutAddMenuEntry(const char *label, int value);
extern void glutAddSubMenu(const char *label, int submenu);
extern void glutChangeToMenuEntry(int item, const char *label, int value);
extern void glutChangeToSubMenu(int item, const char *label, int submenu);
extern void glutRemoveMenuItem(int item);
extern void glutAttachMenu(int button);
extern void glutDetachMenu(int button);


extern void glutDisplayFunc(void (*func)(void));
extern void glutReshapeFunc(void (*func)(int width, int height));
extern void glutKeyboardFunc(void (*func)(unsigned char key, int x, int y));
extern void glutMouseFunc(void (*func)(int button, int state, int x, int y));
extern void glutMotionFunc(void (*func)(int x, int y));
extern void glutPassiveMotionFunc(void (*func)(int x, int y));
extern void glutEntryFunc(void (*func)(int state));
extern void glutVisibilityFunc(void (*func)(int state));
extern void glutIdleFunc(void (*func)(void));
extern void glutTimerFunc(unsigned int millis, void (*func)(int value), int value);
extern void glutMenuStateFunc(void (*func)(int state));

extern void glutSpecialFunc(void (*func)(int key, int x, int y));
extern void glutSpaceballMotionFunc(void (*func)(int x, int y, int z));
extern void glutSpaceballRotateFunc(void (*func)(int x, int y, int z));
extern void glutSpaceballButtonFunc(void (*func)(int button, int state));
extern void glutButtonBoxFunc(void (*func)(int button, int state));
extern void glutDialsFunc(void (*func)(int dial, int value));
extern void glutTabletMotionFunc(void (*func)(int x, int y));
extern void glutTabletButtonFunc(void (*func)(int button, int state, int x, int y));

extern void glutMenuStatusFunc(void (*func)(int status, int x, int y));
extern void glutOverlayDisplayFunc(void (*func)(void));

extern void glutWindowStatusFunc(void (*func)(int state));


extern void glutKeyboardUpFunc(void (*func)(unsigned char key, int x, int y));
extern void glutSpecialUpFunc(void (*func)(int key, int x, int y));
extern void glutJoystickFunc(void (*func)(unsigned int buttonMask, int x, int y, int z), int pollInterval);





extern void glutSetColor(int, GLfloat red, GLfloat green, GLfloat blue);
extern GLfloat glutGetColor(int ndx, int component);
extern void glutCopyColormap(int win);


extern int glutGet(GLenum type);
extern int glutDeviceGet(GLenum type);


extern int glutExtensionSupported(const char *name);


extern int glutGetModifiers(void);
extern int glutLayerGet(GLenum type);


extern void * glutGetProcAddress(const char *procName);



extern void glutBitmapCharacter(void *font, int character);
extern int glutBitmapWidth(void *font, int character);
extern void glutStrokeCharacter(void *font, int character);
extern int glutStrokeWidth(void *font, int character);

extern int glutBitmapLength(void *font, const unsigned char *string);
extern int glutStrokeLength(void *font, const unsigned char *string);



extern void glutWireSphere(GLdouble radius, GLint slices, GLint stacks);
extern void glutSolidSphere(GLdouble radius, GLint slices, GLint stacks);
extern void glutWireCone(GLdouble base, GLdouble height, GLint slices, GLint stacks);
extern void glutSolidCone(GLdouble base, GLdouble height, GLint slices, GLint stacks);
extern void glutWireCube(GLdouble size);
extern void glutSolidCube(GLdouble size);
extern void glutWireTorus(GLdouble innerRadius, GLdouble outerRadius, GLint sides, GLint rings);
extern void glutSolidTorus(GLdouble innerRadius, GLdouble outerRadius, GLint sides, GLint rings);
extern void glutWireDodecahedron(void);
extern void glutSolidDodecahedron(void);
extern void glutWireTeapot(GLdouble size);
extern void glutSolidTeapot(GLdouble size);
extern void glutWireOctahedron(void);
extern void glutSolidOctahedron(void);
extern void glutWireTetrahedron(void);
extern void glutSolidTetrahedron(void);
extern void glutWireIcosahedron(void);
extern void glutSolidIcosahedron(void);



extern int glutVideoResizeGet(GLenum param);
extern void glutSetupVideoResizing(void);
extern void glutStopVideoResizing(void);
extern void glutVideoResize(int x, int y, int width, int height);
extern void glutVideoPan(int x, int y, int width, int height);


extern void glutReportErrors(void);
# 600 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 3
extern void glutIgnoreKeyRepeat(int ignore);
extern void glutSetKeyRepeat(int repeatMode);
extern void glutForceJoystickFunc(void);
# 614 "/System/Library/Frameworks/GLUT.framework/Headers/glut.h" 3
extern void glutGameModeString(const char *string);
extern int glutEnterGameMode(void);
extern void glutLeaveGameMode(void);
extern int glutGameModeGet(GLenum mode);
# 2 "test.c" 2

void display(void)
{
  glClear(0x00004000);
  glFlush();
}

void init(void)
{
  glClearColor(0.0, 0.0, 1.0, 1.0);
}

int main (int ac, char **av)
{
  glutInit(&ac, av);
  glutCreateWindow("Hello world!");
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}
