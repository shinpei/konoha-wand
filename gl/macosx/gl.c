#include <konoha.h>
#include <GLUT/glut.h>
#include <OpenGL/gl.h>

/* void GL.glVertexBlendARB(Int i0) */

METHOD GL_glVertexBlendARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glVertexBlendARB(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos2dARB(Float f0, Float f1) */

METHOD GL_glWindowPos2dARB(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glWindowPos2dARB(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos2fARB(Float f0, Float f1) */

METHOD GL_glWindowPos2fARB(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glWindowPos2fARB(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos2iARB(Int i0, Int i1) */

METHOD GL_glWindowPos2iARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glWindowPos2iARB(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos2sARB(Int i0, Int i1) */

METHOD GL_glWindowPos2sARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glWindowPos2sARB(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos3dARB(Float f0, Float f1, Float f2) */

METHOD GL_glWindowPos3dARB(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glWindowPos3dARB(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos3fARB(Float f0, Float f1, Float f2) */

METHOD GL_glWindowPos3fARB(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glWindowPos3fARB(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos3iARB(Int i0, Int i1, Int i2) */

METHOD GL_glWindowPos3iARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glWindowPos3iARB(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos3sARB(Int i0, Int i1, Int i2) */

METHOD GL_glWindowPos3sARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glWindowPos3sARB(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib1dARB(Int i0, Float f1) */

METHOD GL_glVertexAttrib1dARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	glVertexAttrib1dARB(i0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib1fARB(Int i0, Float f1) */

METHOD GL_glVertexAttrib1fARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	glVertexAttrib1fARB(i0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib1sARB(Int i0, Int i1) */

METHOD GL_glVertexAttrib1sARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glVertexAttrib1sARB(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib2dARB(Int i0, Float f1, Float f2) */

METHOD GL_glVertexAttrib2dARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glVertexAttrib2dARB(i0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib2fARB(Int i0, Float f1, Float f2) */

METHOD GL_glVertexAttrib2fARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glVertexAttrib2fARB(i0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib2sARB(Int i0, Int i1, Int i2) */

METHOD GL_glVertexAttrib2sARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glVertexAttrib2sARB(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib3dARB(Int i0, Float f1, Float f2, Float f3) */

METHOD GL_glVertexAttrib3dARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glVertexAttrib3dARB(i0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib3fARB(Int i0, Float f1, Float f2, Float f3) */

METHOD GL_glVertexAttrib3fARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glVertexAttrib3fARB(i0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib3sARB(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glVertexAttrib3sARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glVertexAttrib3sARB(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib4dARB(Int i0, Float f1, Float f2, Float f3, Float f4) */

METHOD GL_glVertexAttrib4dARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	float f4 = p_float(sfp[5]);
	glVertexAttrib4dARB(i0 ,f1 ,f2 ,f3 ,f4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib4fARB(Int i0, Float f1, Float f2, Float f3, Float f4) */

METHOD GL_glVertexAttrib4fARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	float f4 = p_float(sfp[5]);
	glVertexAttrib4fARB(i0 ,f1 ,f2 ,f3 ,f4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib4sARB(Int i0, Int i1, Int i2, Int i3, Int i4) */

METHOD GL_glVertexAttrib4sARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	glVertexAttrib4sARB(i0 ,i1 ,i2 ,i3 ,i4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glDisableVertexAttribArrayARB(Int i0) */

METHOD GL_glDisableVertexAttribArrayARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glDisableVertexAttribArrayARB(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glEnableVertexAttribArrayARB(Int i0) */

METHOD GL_glEnableVertexAttribArrayARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glEnableVertexAttribArrayARB(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform1fARB(Int i0, Float f1) */

METHOD GL_glUniform1fARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	glUniform1fARB(i0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform2fARB(Int i0, Float f1, Float f2) */

METHOD GL_glUniform2fARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glUniform2fARB(i0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform3fARB(Int i0, Float f1, Float f2, Float f3) */

METHOD GL_glUniform3fARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glUniform3fARB(i0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform4fARB(Int i0, Float f1, Float f2, Float f3, Float f4) */

METHOD GL_glUniform4fARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	float f4 = p_float(sfp[5]);
	glUniform4fARB(i0 ,f1 ,f2 ,f3 ,f4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform1iARB(Int i0, Int i1) */

METHOD GL_glUniform1iARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glUniform1iARB(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform2iARB(Int i0, Int i1, Int i2) */

METHOD GL_glUniform2iARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glUniform2iARB(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform3iARB(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glUniform3iARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glUniform3iARB(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform4iARB(Int i0, Int i1, Int i2, Int i3, Int i4) */

METHOD GL_glUniform4iARB(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	glUniform4iARB(i0 ,i1 ,i2 ,i3 ,i4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUnlockArraysEXT() */

METHOD GL_glUnlockArraysEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	glUnlockArraysEXT();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSecondaryColor3dEXT(Float f0, Float f1, Float f2) */

METHOD GL_glSecondaryColor3dEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glSecondaryColor3dEXT(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSecondaryColor3fEXT(Float f0, Float f1, Float f2) */

METHOD GL_glSecondaryColor3fEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glSecondaryColor3fEXT(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSecondaryColor3iEXT(Int i0, Int i1, Int i2) */

METHOD GL_glSecondaryColor3iEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glSecondaryColor3iEXT(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSecondaryColor3sEXT(Int i0, Int i1, Int i2) */

METHOD GL_glSecondaryColor3sEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glSecondaryColor3sEXT(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSecondaryColor3uiEXT(Int i0, Int i1, Int i2) */

METHOD GL_glSecondaryColor3uiEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glSecondaryColor3uiEXT(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glFogCoordfEXT(Float f0) */

METHOD GL_glFogCoordfEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glFogCoordfEXT(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glFogCoorddEXT(Float f0) */

METHOD GL_glFogCoorddEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glFogCoorddEXT(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glEndTransformFeedbackEXT() */

METHOD GL_glEndTransformFeedbackEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	glEndTransformFeedbackEXT();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniformBufferEXT(Int i0, Int i1, Int i2) */

METHOD GL_glUniformBufferEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glUniformBufferEXT(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* Int GL.glGetUniformBufferSizeEXT(Int i0, Int i1) */

METHOD GL_glGetUniformBufferSizeEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int ret = glGetUniformBufferSizeEXT(i0 ,i1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void GL.glClearColorIiEXT(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glClearColorIiEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glClearColorIiEXT(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glClearColorIuiEXT(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glClearColorIuiEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glClearColorIuiEXT(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttribI1iEXT(Int i0, Int i1) */

METHOD GL_glVertexAttribI1iEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glVertexAttribI1iEXT(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttribI2iEXT(Int i0, Int i1, Int i2) */

METHOD GL_glVertexAttribI2iEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glVertexAttribI2iEXT(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttribI3iEXT(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glVertexAttribI3iEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glVertexAttribI3iEXT(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttribI4iEXT(Int i0, Int i1, Int i2, Int i3, Int i4) */

METHOD GL_glVertexAttribI4iEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	glVertexAttribI4iEXT(i0 ,i1 ,i2 ,i3 ,i4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttribI1uiEXT(Int i0, Int i1) */

METHOD GL_glVertexAttribI1uiEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glVertexAttribI1uiEXT(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttribI2uiEXT(Int i0, Int i1, Int i2) */

METHOD GL_glVertexAttribI2uiEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glVertexAttribI2uiEXT(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttribI3uiEXT(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glVertexAttribI3uiEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glVertexAttribI3uiEXT(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttribI4uiEXT(Int i0, Int i1, Int i2, Int i3, Int i4) */

METHOD GL_glVertexAttribI4uiEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	glVertexAttribI4uiEXT(i0 ,i1 ,i2 ,i3 ,i4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform1uiEXT(Int i0, Int i1) */

METHOD GL_glUniform1uiEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glUniform1uiEXT(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform2uiEXT(Int i0, Int i1, Int i2) */

METHOD GL_glUniform2uiEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glUniform2uiEXT(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform3uiEXT(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glUniform3uiEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glUniform3uiEXT(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform4uiEXT(Int i0, Int i1, Int i2, Int i3, Int i4) */

METHOD GL_glUniform4uiEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	glUniform4uiEXT(i0 ,i1 ,i2 ,i3 ,i4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glGetUniformuivEXT(Int i0, Int i1, Int i2) */

METHOD GL_glGetUniformuivEXT(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glGetUniformuivEXT(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glBindVertexArrayAPPLE(Int i0) */

METHOD GL_glBindVertexArrayAPPLE(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glBindVertexArrayAPPLE(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSetFenceAPPLE(Int i0) */

METHOD GL_glSetFenceAPPLE(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glSetFenceAPPLE(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glFinishFenceAPPLE(Int i0) */

METHOD GL_glFinishFenceAPPLE(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glFinishFenceAPPLE(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glFlushRenderAPPLE() */

METHOD GL_glFlushRenderAPPLE(Ctx *ctx, knh_sfp_t* sfp)
{
	glFlushRenderAPPLE();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glFinishRenderAPPLE() */

METHOD GL_glFinishRenderAPPLE(Ctx *ctx, knh_sfp_t* sfp)
{
	glFinishRenderAPPLE();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSwapAPPLE() */

METHOD GL_glSwapAPPLE(Ctx *ctx, knh_sfp_t* sfp)
{
	glSwapAPPLE();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glArrayElement(Int i0) */

METHOD GL_glArrayElement(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glArrayElement(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glCallList(Int i0) */

METHOD GL_glCallList(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glCallList(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glClearAccum(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glClearAccum(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glClearAccum(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glClearIndex(Float f0) */

METHOD GL_glClearIndex(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glClearIndex(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glClearStencil(Int i0) */

METHOD GL_glClearStencil(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glClearStencil(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glColor3d(Float f0, Float f1, Float f2) */

METHOD GL_glColor3d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glColor3d(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glColor3f(Float f0, Float f1, Float f2) */

METHOD GL_glColor3f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glColor3f(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glColor3i(Int i0, Int i1, Int i2) */

METHOD GL_glColor3i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glColor3i(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glColor3s(Int i0, Int i1, Int i2) */

METHOD GL_glColor3s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glColor3s(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glColor3ui(Int i0, Int i1, Int i2) */

METHOD GL_glColor3ui(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glColor3ui(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glColor4d(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glColor4d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glColor4d(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glColor4f(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glColor4f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glColor4f(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glColor4i(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glColor4i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glColor4i(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glColor4s(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glColor4s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glColor4s(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glColor4ui(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glColor4ui(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glColor4ui(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glEnd() */

METHOD GL_glEnd(Ctx *ctx, knh_sfp_t* sfp)
{
	glEnd();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glEndList() */

METHOD GL_glEndList(Ctx *ctx, knh_sfp_t* sfp)
{
	glEndList();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glEvalCoord1d(Float f0) */

METHOD GL_glEvalCoord1d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glEvalCoord1d(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glEvalCoord1f(Float f0) */

METHOD GL_glEvalCoord1f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glEvalCoord1f(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glEvalCoord2d(Float f0, Float f1) */

METHOD GL_glEvalCoord2d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glEvalCoord2d(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glEvalCoord2f(Float f0, Float f1) */

METHOD GL_glEvalCoord2f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glEvalCoord2f(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glEvalPoint1(Int i0) */

METHOD GL_glEvalPoint1(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glEvalPoint1(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glEvalPoint2(Int i0, Int i1) */

METHOD GL_glEvalPoint2(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glEvalPoint2(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glFinish() */

METHOD GL_glFinish(Ctx *ctx, knh_sfp_t* sfp)
{
	glFinish();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glFlush() */

METHOD GL_glFlush(Ctx *ctx, knh_sfp_t* sfp)
{
	glFlush();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glFrustum(Float f0, Float f1, Float f2, Float f3, Float f4, Float f5) */

METHOD GL_glFrustum(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	float f4 = p_float(sfp[5]);
	float f5 = p_float(sfp[6]);
	glFrustum(f0 ,f1 ,f2 ,f3 ,f4 ,f5 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glIndexMask(Int i0) */

METHOD GL_glIndexMask(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glIndexMask(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glIndexd(Float f0) */

METHOD GL_glIndexd(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glIndexd(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glIndexf(Float f0) */

METHOD GL_glIndexf(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glIndexf(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glIndexi(Int i0) */

METHOD GL_glIndexi(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glIndexi(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glIndexs(Int i0) */

METHOD GL_glIndexs(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glIndexs(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glInitNames() */

METHOD GL_glInitNames(Ctx *ctx, knh_sfp_t* sfp)
{
	glInitNames();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glLineWidth(Float f0) */

METHOD GL_glLineWidth(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glLineWidth(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glListBase(Int i0) */

METHOD GL_glListBase(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glListBase(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glLoadIdentity() */

METHOD GL_glLoadIdentity(Ctx *ctx, knh_sfp_t* sfp)
{
	glLoadIdentity();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glLoadName(Int i0) */

METHOD GL_glLoadName(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glLoadName(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glMapGrid1d(Int i0, Float f1, Float f2) */

METHOD GL_glMapGrid1d(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glMapGrid1d(i0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glMapGrid1f(Int i0, Float f1, Float f2) */

METHOD GL_glMapGrid1f(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glMapGrid1f(i0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glMapGrid2d(Int i0, Float f1, Float f2, Int i3, Float f4, Float f5) */

METHOD GL_glMapGrid2d(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	int i3 = p_int(sfp[4]);
	float f4 = p_float(sfp[5]);
	float f5 = p_float(sfp[6]);
	glMapGrid2d(i0 ,f1 ,f2 ,i3 ,f4 ,f5 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glMapGrid2f(Int i0, Float f1, Float f2, Int i3, Float f4, Float f5) */

METHOD GL_glMapGrid2f(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	int i3 = p_int(sfp[4]);
	float f4 = p_float(sfp[5]);
	float f5 = p_float(sfp[6]);
	glMapGrid2f(i0 ,f1 ,f2 ,i3 ,f4 ,f5 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glNormal3d(Float f0, Float f1, Float f2) */

METHOD GL_glNormal3d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glNormal3d(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glNormal3f(Float f0, Float f1, Float f2) */

METHOD GL_glNormal3f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glNormal3f(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glNormal3i(Int i0, Int i1, Int i2) */

METHOD GL_glNormal3i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glNormal3i(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glNormal3s(Int i0, Int i1, Int i2) */

METHOD GL_glNormal3s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glNormal3s(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glOrtho(Float f0, Float f1, Float f2, Float f3, Float f4, Float f5) */

METHOD GL_glOrtho(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	float f4 = p_float(sfp[5]);
	float f5 = p_float(sfp[6]);
	glOrtho(f0 ,f1 ,f2 ,f3 ,f4 ,f5 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glPassThrough(Float f0) */

METHOD GL_glPassThrough(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glPassThrough(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glPixelZoom(Float f0, Float f1) */

METHOD GL_glPixelZoom(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glPixelZoom(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glPointSize(Float f0) */

METHOD GL_glPointSize(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glPointSize(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glPolygonOffset(Float f0, Float f1) */

METHOD GL_glPolygonOffset(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glPolygonOffset(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glPopAttrib() */

METHOD GL_glPopAttrib(Ctx *ctx, knh_sfp_t* sfp)
{
	glPopAttrib();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glPopClientAttrib() */

METHOD GL_glPopClientAttrib(Ctx *ctx, knh_sfp_t* sfp)
{
	glPopClientAttrib();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glPopMatrix() */

METHOD GL_glPopMatrix(Ctx *ctx, knh_sfp_t* sfp)
{
	glPopMatrix();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glPopName() */

METHOD GL_glPopName(Ctx *ctx, knh_sfp_t* sfp)
{
	glPopName();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glPushMatrix() */

METHOD GL_glPushMatrix(Ctx *ctx, knh_sfp_t* sfp)
{
	glPushMatrix();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glPushName(Int i0) */

METHOD GL_glPushName(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glPushName(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos2d(Float f0, Float f1) */

METHOD GL_glRasterPos2d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glRasterPos2d(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos2f(Float f0, Float f1) */

METHOD GL_glRasterPos2f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glRasterPos2f(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos2i(Int i0, Int i1) */

METHOD GL_glRasterPos2i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glRasterPos2i(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos2s(Int i0, Int i1) */

METHOD GL_glRasterPos2s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glRasterPos2s(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos3d(Float f0, Float f1, Float f2) */

METHOD GL_glRasterPos3d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glRasterPos3d(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos3f(Float f0, Float f1, Float f2) */

METHOD GL_glRasterPos3f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glRasterPos3f(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos3i(Int i0, Int i1, Int i2) */

METHOD GL_glRasterPos3i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glRasterPos3i(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos3s(Int i0, Int i1, Int i2) */

METHOD GL_glRasterPos3s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glRasterPos3s(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos4d(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glRasterPos4d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glRasterPos4d(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos4f(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glRasterPos4f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glRasterPos4f(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos4i(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glRasterPos4i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glRasterPos4i(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRasterPos4s(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glRasterPos4s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glRasterPos4s(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRectd(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glRectd(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glRectd(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRectf(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glRectf(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glRectf(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRecti(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glRecti(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glRecti(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRects(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glRects(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glRects(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRotated(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glRotated(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glRotated(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glRotatef(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glRotatef(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glRotatef(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glScaled(Float f0, Float f1, Float f2) */

METHOD GL_glScaled(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glScaled(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glScalef(Float f0, Float f1, Float f2) */

METHOD GL_glScalef(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glScalef(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glStencilMask(Int i0) */

METHOD GL_glStencilMask(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glStencilMask(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord1d(Float f0) */

METHOD GL_glTexCoord1d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glTexCoord1d(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord1f(Float f0) */

METHOD GL_glTexCoord1f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glTexCoord1f(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord1i(Int i0) */

METHOD GL_glTexCoord1i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glTexCoord1i(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord1s(Int i0) */

METHOD GL_glTexCoord1s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glTexCoord1s(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord2d(Float f0, Float f1) */

METHOD GL_glTexCoord2d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glTexCoord2d(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord2f(Float f0, Float f1) */

METHOD GL_glTexCoord2f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glTexCoord2f(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord2i(Int i0, Int i1) */

METHOD GL_glTexCoord2i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glTexCoord2i(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord2s(Int i0, Int i1) */

METHOD GL_glTexCoord2s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glTexCoord2s(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord3d(Float f0, Float f1, Float f2) */

METHOD GL_glTexCoord3d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glTexCoord3d(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord3f(Float f0, Float f1, Float f2) */

METHOD GL_glTexCoord3f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glTexCoord3f(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord3i(Int i0, Int i1, Int i2) */

METHOD GL_glTexCoord3i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glTexCoord3i(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord3s(Int i0, Int i1, Int i2) */

METHOD GL_glTexCoord3s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glTexCoord3s(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord4d(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glTexCoord4d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glTexCoord4d(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord4f(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glTexCoord4f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glTexCoord4f(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord4i(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glTexCoord4i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glTexCoord4i(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTexCoord4s(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glTexCoord4s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glTexCoord4s(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTranslated(Float f0, Float f1, Float f2) */

METHOD GL_glTranslated(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glTranslated(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glTranslatef(Float f0, Float f1, Float f2) */

METHOD GL_glTranslatef(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glTranslatef(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertex2d(Float f0, Float f1) */

METHOD GL_glVertex2d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glVertex2d(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertex2f(Float f0, Float f1) */

METHOD GL_glVertex2f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glVertex2f(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertex2i(Int i0, Int i1) */

METHOD GL_glVertex2i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glVertex2i(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertex2s(Int i0, Int i1) */

METHOD GL_glVertex2s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glVertex2s(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertex3d(Float f0, Float f1, Float f2) */

METHOD GL_glVertex3d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glVertex3d(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}



/* void GL.glVertex3i(Int i0, Int i1, Int i2) */

METHOD GL_glVertex3i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glVertex3i(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertex3s(Int i0, Int i1, Int i2) */

METHOD GL_glVertex3s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glVertex3s(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertex4d(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glVertex4d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glVertex4d(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertex4f(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_glVertex4f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glVertex4f(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertex4i(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glVertex4i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glVertex4i(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertex4s(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glVertex4s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glVertex4s(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glFogCoordf(Float f0) */

METHOD GL_glFogCoordf(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glFogCoordf(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glFogCoordd(Float f0) */

METHOD GL_glFogCoordd(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glFogCoordd(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSecondaryColor3d(Float f0, Float f1, Float f2) */

METHOD GL_glSecondaryColor3d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glSecondaryColor3d(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSecondaryColor3f(Float f0, Float f1, Float f2) */

METHOD GL_glSecondaryColor3f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glSecondaryColor3f(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSecondaryColor3i(Int i0, Int i1, Int i2) */

METHOD GL_glSecondaryColor3i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glSecondaryColor3i(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSecondaryColor3s(Int i0, Int i1, Int i2) */

METHOD GL_glSecondaryColor3s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glSecondaryColor3s(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glSecondaryColor3ui(Int i0, Int i1, Int i2) */

METHOD GL_glSecondaryColor3ui(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glSecondaryColor3ui(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos2d(Float f0, Float f1) */

METHOD GL_glWindowPos2d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glWindowPos2d(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos2f(Float f0, Float f1) */

METHOD GL_glWindowPos2f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	glWindowPos2f(f0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos2i(Int i0, Int i1) */

METHOD GL_glWindowPos2i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glWindowPos2i(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos2s(Int i0, Int i1) */

METHOD GL_glWindowPos2s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glWindowPos2s(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos3d(Float f0, Float f1, Float f2) */

METHOD GL_glWindowPos3d(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glWindowPos3d(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos3f(Float f0, Float f1, Float f2) */

METHOD GL_glWindowPos3f(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glWindowPos3f(f0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos3i(Int i0, Int i1, Int i2) */

METHOD GL_glWindowPos3i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glWindowPos3i(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glWindowPos3s(Int i0, Int i1, Int i2) */

METHOD GL_glWindowPos3s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glWindowPos3s(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib1d(Int i0, Float f1) */

METHOD GL_glVertexAttrib1d(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	glVertexAttrib1d(i0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib1f(Int i0, Float f1) */

METHOD GL_glVertexAttrib1f(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	glVertexAttrib1f(i0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib1s(Int i0, Int i1) */

METHOD GL_glVertexAttrib1s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glVertexAttrib1s(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib2d(Int i0, Float f1, Float f2) */

METHOD GL_glVertexAttrib2d(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glVertexAttrib2d(i0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib2f(Int i0, Float f1, Float f2) */

METHOD GL_glVertexAttrib2f(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glVertexAttrib2f(i0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib2s(Int i0, Int i1, Int i2) */

METHOD GL_glVertexAttrib2s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glVertexAttrib2s(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib3d(Int i0, Float f1, Float f2, Float f3) */

METHOD GL_glVertexAttrib3d(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glVertexAttrib3d(i0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib3f(Int i0, Float f1, Float f2, Float f3) */

METHOD GL_glVertexAttrib3f(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glVertexAttrib3f(i0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib3s(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glVertexAttrib3s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glVertexAttrib3s(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib4d(Int i0, Float f1, Float f2, Float f3, Float f4) */

METHOD GL_glVertexAttrib4d(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	float f4 = p_float(sfp[5]);
	glVertexAttrib4d(i0 ,f1 ,f2 ,f3 ,f4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib4f(Int i0, Float f1, Float f2, Float f3, Float f4) */

METHOD GL_glVertexAttrib4f(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	float f4 = p_float(sfp[5]);
	glVertexAttrib4f(i0 ,f1 ,f2 ,f3 ,f4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glVertexAttrib4s(Int i0, Int i1, Int i2, Int i3, Int i4) */

METHOD GL_glVertexAttrib4s(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	glVertexAttrib4s(i0 ,i1 ,i2 ,i3 ,i4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glEnableVertexAttribArray(Int i0) */

METHOD GL_glEnableVertexAttribArray(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glEnableVertexAttribArray(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glDisableVertexAttribArray(Int i0) */

METHOD GL_glDisableVertexAttribArray(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glDisableVertexAttribArray(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glDeleteShader(Int i0) */

METHOD GL_glDeleteShader(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glDeleteShader(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glDetachShader(Int i0, Int i1) */

METHOD GL_glDetachShader(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glDetachShader(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glCompileShader(Int i0) */

METHOD GL_glCompileShader(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glCompileShader(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* Int GL.glCreateProgram() */

METHOD GL_glCreateProgram(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = glCreateProgram();

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void GL.glAttachShader(Int i0, Int i1) */

METHOD GL_glAttachShader(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glAttachShader(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glLinkProgram(Int i0) */

METHOD GL_glLinkProgram(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glLinkProgram(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUseProgram(Int i0) */

METHOD GL_glUseProgram(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glUseProgram(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glDeleteProgram(Int i0) */

METHOD GL_glDeleteProgram(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glDeleteProgram(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glValidateProgram(Int i0) */

METHOD GL_glValidateProgram(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glValidateProgram(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform1f(Int i0, Float f1) */

METHOD GL_glUniform1f(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	glUniform1f(i0 ,f1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform2f(Int i0, Float f1, Float f2) */

METHOD GL_glUniform2f(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	glUniform2f(i0 ,f1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform3f(Int i0, Float f1, Float f2, Float f3) */

METHOD GL_glUniform3f(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glUniform3f(i0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform4f(Int i0, Float f1, Float f2, Float f3, Float f4) */

METHOD GL_glUniform4f(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	float f4 = p_float(sfp[5]);
	glUniform4f(i0 ,f1 ,f2 ,f3 ,f4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform1i(Int i0, Int i1) */

METHOD GL_glUniform1i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glUniform1i(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform2i(Int i0, Int i1, Int i2) */

METHOD GL_glUniform2i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glUniform2i(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform3i(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glUniform3i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glUniform3i(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glUniform4i(Int i0, Int i1, Int i2, Int i3, Int i4) */

METHOD GL_glUniform4i(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	glUniform4i(i0 ,i1 ,i2 ,i3 ,i4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glGetUniformfv(Int i0, Int i1, Float f2) */

METHOD GL_glGetUniformfv(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	float f2 = p_float(sfp[3]);
	glGetUniformfv(i0 ,i1 ,f2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glGetUniformiv(Int i0, Int i1, Int i2) */

METHOD GL_glGetUniformiv(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glGetUniformiv(i0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.gluLookAt(Float f0, Float f1, Float f2, Float f3, Float f4, Float f5, Float f6, Float f7, Float f8) */

METHOD GL_gluLookAt(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	float f4 = p_float(sfp[5]);
	float f5 = p_float(sfp[6]);
	float f6 = p_float(sfp[7]);
	float f7 = p_float(sfp[8]);
	float f8 = p_float(sfp[9]);
	gluLookAt(f0 ,f1 ,f2 ,f3 ,f4 ,f5 ,f6 ,f7 ,f8 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.gluOrtho2D(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_gluOrtho2D(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	gluOrtho2D(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.gluPerspective(Float f0, Float f1, Float f2, Float f3) */

METHOD GL_gluPerspective(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	gluPerspective(f0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.gluPickMatrix(Float f0, Float f1, Float f2, Float f3, Int i4) */

METHOD GL_gluPickMatrix(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	int i4 = p_int(sfp[5]);
	gluPickMatrix(f0 ,f1 ,f2 ,f3 ,i4 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutInitWindowPosition(Int i0, Int i1) */

METHOD GL_glutInitWindowPosition(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glutInitWindowPosition(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutInitWindowSize(Int i0, Int i1) */

METHOD GL_glutInitWindowSize(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glutInitWindowSize(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutMainLoop() */

METHOD GL_glutMainLoop(Ctx *ctx, knh_sfp_t* sfp)
{
	glutMainLoop();

	KNH_RETURN_void(ctx, sfp);
}

/* Int GL.glutCreateSubWindow(Int i0, Int i1, Int i2, Int i3, Int i4) */

METHOD GL_glutCreateSubWindow(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	int i4 = p_int(sfp[5]);
	int ret = glutCreateSubWindow(i0 ,i1 ,i2 ,i3 ,i4 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void GL.glutDestroyWindow(Int i0) */

METHOD GL_glutDestroyWindow(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutDestroyWindow(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutPostRedisplay() */

METHOD GL_glutPostRedisplay(Ctx *ctx, knh_sfp_t* sfp)
{
	glutPostRedisplay();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutPostWindowRedisplay(Int i0) */

METHOD GL_glutPostWindowRedisplay(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutPostWindowRedisplay(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSwapBuffers() */

METHOD GL_glutSwapBuffers(Ctx *ctx, knh_sfp_t* sfp)
{
	glutSwapBuffers();

	KNH_RETURN_void(ctx, sfp);
}

/* Int GL.glutGetWindow() */

METHOD GL_glutGetWindow(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = glutGetWindow();

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void GL.glutSetWindow(Int i0) */

METHOD GL_glutSetWindow(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutSetWindow(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutPositionWindow(Int i0, Int i1) */

METHOD GL_glutPositionWindow(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glutPositionWindow(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutReshapeWindow(Int i0, Int i1) */

METHOD GL_glutReshapeWindow(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glutReshapeWindow(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutPopWindow() */

METHOD GL_glutPopWindow(Ctx *ctx, knh_sfp_t* sfp)
{
	glutPopWindow();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutPushWindow() */

METHOD GL_glutPushWindow(Ctx *ctx, knh_sfp_t* sfp)
{
	glutPushWindow();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutIconifyWindow() */

METHOD GL_glutIconifyWindow(Ctx *ctx, knh_sfp_t* sfp)
{
	glutIconifyWindow();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutShowWindow() */

METHOD GL_glutShowWindow(Ctx *ctx, knh_sfp_t* sfp)
{
	glutShowWindow();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutHideWindow() */

METHOD GL_glutHideWindow(Ctx *ctx, knh_sfp_t* sfp)
{
	glutHideWindow();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutFullScreen() */

METHOD GL_glutFullScreen(Ctx *ctx, knh_sfp_t* sfp)
{
	glutFullScreen();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSetCursor(Int i0) */

METHOD GL_glutSetCursor(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutSetCursor(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutWarpPointer(Int i0, Int i1) */

METHOD GL_glutWarpPointer(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	glutWarpPointer(i0 ,i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutCheckLoop() */

METHOD GL_glutCheckLoop(Ctx *ctx, knh_sfp_t* sfp)
{
	glutCheckLoop();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutEstablishOverlay() */

METHOD GL_glutEstablishOverlay(Ctx *ctx, knh_sfp_t* sfp)
{
	glutEstablishOverlay();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutRemoveOverlay() */

METHOD GL_glutRemoveOverlay(Ctx *ctx, knh_sfp_t* sfp)
{
	glutRemoveOverlay();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutPostOverlayRedisplay() */

METHOD GL_glutPostOverlayRedisplay(Ctx *ctx, knh_sfp_t* sfp)
{
	glutPostOverlayRedisplay();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutPostWindowOverlayRedisplay(Int i0) */

METHOD GL_glutPostWindowOverlayRedisplay(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutPostWindowOverlayRedisplay(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutShowOverlay() */

METHOD GL_glutShowOverlay(Ctx *ctx, knh_sfp_t* sfp)
{
	glutShowOverlay();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutHideOverlay() */

METHOD GL_glutHideOverlay(Ctx *ctx, knh_sfp_t* sfp)
{
	glutHideOverlay();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutDestroyMenu(Int i0) */

METHOD GL_glutDestroyMenu(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutDestroyMenu(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* Int GL.glutGetMenu() */

METHOD GL_glutGetMenu(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = glutGetMenu();

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void GL.glutSetMenu(Int i0) */

METHOD GL_glutSetMenu(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutSetMenu(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutRemoveMenuItem(Int i0) */

METHOD GL_glutRemoveMenuItem(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutRemoveMenuItem(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutAttachMenu(Int i0) */

METHOD GL_glutAttachMenu(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutAttachMenu(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutDetachMenu(Int i0) */

METHOD GL_glutDetachMenu(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutDetachMenu(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSetColor(Int i0, Float f1, Float f2, Float f3) */

METHOD GL_glutSetColor(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	float f1 = p_float(sfp[2]);
	float f2 = p_float(sfp[3]);
	float f3 = p_float(sfp[4]);
	glutSetColor(i0 ,f1 ,f2 ,f3 );

	KNH_RETURN_void(ctx, sfp);
}

/* Float GL.glutGetColor(Int i0, Int i1) */

METHOD GL_glutGetColor(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	double ret = glutGetColor(i0 ,i1 );

	KNH_RETURN_Float(ctx, sfp, ret);
}

/* void GL.glutCopyColormap(Int i0) */

METHOD GL_glutCopyColormap(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutCopyColormap(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* Int GL.glutGetModifiers() */

METHOD GL_glutGetModifiers(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = glutGetModifiers();

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void GL.glutBitmapCharacter(, Int i1) */

METHOD GL_glutBitmapCharacter(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[1]);
	glutBitmapCharacter(i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* Int GL.glutBitmapWidth(, Int i1) */

METHOD GL_glutBitmapWidth(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[1]);
	int ret = glutBitmapWidth(i1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void GL.glutStrokeCharacter(, Int i1) */

METHOD GL_glutStrokeCharacter(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[1]);
	glutStrokeCharacter(i1 );

	KNH_RETURN_void(ctx, sfp);
}

/* Int GL.glutStrokeWidth(, Int i1) */

METHOD GL_glutStrokeWidth(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[1]);
	int ret = glutStrokeWidth(i1 );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void GL.glutWireSphere(Float f0, Int i1, Int i2) */

METHOD GL_glutWireSphere(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glutWireSphere(f0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSolidSphere(Float f0, Int i1, Int i2) */

METHOD GL_glutSolidSphere(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	glutSolidSphere(f0 ,i1 ,i2 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutWireCone(Float f0, Float f1, Int i2, Int i3) */

METHOD GL_glutWireCone(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glutWireCone(f0 ,f1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSolidCone(Float f0, Float f1, Int i2, Int i3) */

METHOD GL_glutSolidCone(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glutSolidCone(f0 ,f1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutWireCube(Float f0) */

METHOD GL_glutWireCube(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glutWireCube(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSolidCube(Float f0) */

METHOD GL_glutSolidCube(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glutSolidCube(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutWireTorus(Float f0, Float f1, Int i2, Int i3) */

METHOD GL_glutWireTorus(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glutWireTorus(f0 ,f1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSolidTorus(Float f0, Float f1, Int i2, Int i3) */

METHOD GL_glutSolidTorus(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	float f1 = p_float(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glutSolidTorus(f0 ,f1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutWireDodecahedron() */

METHOD GL_glutWireDodecahedron(Ctx *ctx, knh_sfp_t* sfp)
{
	glutWireDodecahedron();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSolidDodecahedron() */

METHOD GL_glutSolidDodecahedron(Ctx *ctx, knh_sfp_t* sfp)
{
	glutSolidDodecahedron();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutWireTeapot(Float f0) */

METHOD GL_glutWireTeapot(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glutWireTeapot(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSolidTeapot(Float f0) */

METHOD GL_glutSolidTeapot(Ctx *ctx, knh_sfp_t* sfp)
{
	float f0 = p_float(sfp[1]);
	glutSolidTeapot(f0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutWireOctahedron() */

METHOD GL_glutWireOctahedron(Ctx *ctx, knh_sfp_t* sfp)
{
	glutWireOctahedron();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSolidOctahedron() */

METHOD GL_glutSolidOctahedron(Ctx *ctx, knh_sfp_t* sfp)
{
	glutSolidOctahedron();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutWireTetrahedron() */

METHOD GL_glutWireTetrahedron(Ctx *ctx, knh_sfp_t* sfp)
{
	glutWireTetrahedron();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSolidTetrahedron() */

METHOD GL_glutSolidTetrahedron(Ctx *ctx, knh_sfp_t* sfp)
{
	glutSolidTetrahedron();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutWireIcosahedron() */

METHOD GL_glutWireIcosahedron(Ctx *ctx, knh_sfp_t* sfp)
{
	glutWireIcosahedron();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSolidIcosahedron() */

METHOD GL_glutSolidIcosahedron(Ctx *ctx, knh_sfp_t* sfp)
{
	glutSolidIcosahedron();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSetupVideoResizing() */

METHOD GL_glutSetupVideoResizing(Ctx *ctx, knh_sfp_t* sfp)
{
	glutSetupVideoResizing();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutStopVideoResizing() */

METHOD GL_glutStopVideoResizing(Ctx *ctx, knh_sfp_t* sfp)
{
	glutStopVideoResizing();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutVideoResize(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glutVideoResize(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glutVideoResize(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutVideoPan(Int i0, Int i1, Int i2, Int i3) */

METHOD GL_glutVideoPan(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	int i1 = p_int(sfp[2]);
	int i2 = p_int(sfp[3]);
	int i3 = p_int(sfp[4]);
	glutVideoPan(i0 ,i1 ,i2 ,i3 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutReportErrors() */

METHOD GL_glutReportErrors(Ctx *ctx, knh_sfp_t* sfp)
{
	glutReportErrors();

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutIgnoreKeyRepeat(Int i0) */

METHOD GL_glutIgnoreKeyRepeat(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutIgnoreKeyRepeat(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutSetKeyRepeat(Int i0) */

METHOD GL_glutSetKeyRepeat(Ctx *ctx, knh_sfp_t* sfp)
{
	int i0 = p_int(sfp[1]);
	glutSetKeyRepeat(i0 );

	KNH_RETURN_void(ctx, sfp);
}

/* void GL.glutForceJoystickFunc() */

METHOD GL_glutForceJoystickFunc(Ctx *ctx, knh_sfp_t* sfp)
{
	glutForceJoystickFunc();

	KNH_RETURN_void(ctx, sfp);
}

/* Int GL.glutEnterGameMode() */

METHOD GL_glutEnterGameMode(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = glutEnterGameMode();

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* void GL.glutLeaveGameMode() */

METHOD GL_glutLeaveGameMode(Ctx *ctx, knh_sfp_t* sfp)
{
	glutLeaveGameMode();

	KNH_RETURN_void(ctx, sfp);
}
