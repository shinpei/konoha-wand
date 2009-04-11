#include <konoha.h>
#include <wand/MagickWand.h>

/* Boolean MagickWand.adaptiveBlueImage(Float f1, Float f2) */

METHOD MagickWand_adaptiveBlueImage(Ctx *ctx, knh_sfp_t* sfp)
{
	float f1 = p_float(sfp[0]);
	float f2 = p_float(sfp[1]);
	int ret = MagickAdAptiveBlueImAge(f1 ,f2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* String MagickWand.describeImage(self) */

METHOD MagickWand_describeImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *ret = MagickDescribeImage(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getImageAttribute(self, String s1) */

METHOD MagickWand_getImageAttribute(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	char *ret = MagickGetImageAttribute(self ,s1 );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* Int MagickWand.getImageIndex(self) */

METHOD MagickWand_getImageIndex(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetImaGeIndex(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* String MagickWand.getFilename(self) */

METHOD MagickWand_getFilename(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *ret = MagickGetFilename(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getFormat(self) */

METHOD MagickWand_getFormat(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *ret = MagickGetFormat(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getFont(self) */

METHOD MagickWand_getFont(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *ret = MagickGetFont(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getHomeURL() */

METHOD MagickWand_getHomeURL(Ctx *ctx, knh_sfp_t* sfp)
{
	char *ret = MagickGetHomeURL();

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getCopyright() */

METHOD MagickWand_getCopyright(Ctx *ctx, knh_sfp_t* sfp)
{
	char *ret = MagickGetCopyriGht();

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getPackageName() */

METHOD MagickWand_getPackageName(Ctx *ctx, knh_sfp_t* sfp)
{
	char *ret = MagickGetPackaGeName();

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getQuantumDepth(int f1) */

METHOD MagickWand_getQuantumDepth(Ctx *ctx, knh_sfp_t* sfp)
{
	int f1 = p_int(sfp[0]);
	char *ret = MagickGetQuantumDepth(f1 );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getQuantumRange(int f1) */

METHOD MagickWand_getQuantumRange(Ctx *ctx, knh_sfp_t* sfp)
{
	int f1 = p_int(sfp[0]);
	char *ret = MagickGetQuantumRanGe(f1 );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getRelesaseDate() */

METHOD MagickWand_getRelesaseDate(Ctx *ctx, knh_sfp_t* sfp)
{
	char *ret = MagickGetRelesaseDate();

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getVersion(int f1) */

METHOD MagickWand_getVersion(Ctx *ctx, knh_sfp_t* sfp)
{
	int f1 = p_int(sfp[0]);
	char *ret = MagickGetVersion(f1 );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* Float MagickWand.getPointsize(self) */

METHOD MagickWand_getPointsize(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	double ret = MagickGetPointsize(self );

	KNH_RETURN_Float(ctx, sfp, ret);
}

/* Boolean MagickWand.deleteOption(self, String s1) */

METHOD MagickWand_deleteOption(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	int ret = MagickDeleteOption(self ,s1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.deleteImageProperty(self, String s1) */

METHOD MagickWand_deleteImageProperty(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	int ret = MagickDeleteImageProperty(self ,s1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.getAntialias(self) */

METHOD MagickWand_getAntialias(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetAntialias(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.getSize(self, int f1, int f2) */

METHOD MagickWand_getSize(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int f1 = p_int(sfp[1]);
	int f2 = p_int(sfp[2]);
	int ret = MagickGetSize(self ,f1 ,f2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.getSizeOffset(self, int f1) */

METHOD MagickWand_getSizeOffset(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int f1 = p_int(sfp[1]);
	int ret = MagickGetSizeOffset(self ,f1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setAntialias(self, Boolean b1) */

METHOD MagickWand_setAntialias(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int *b1 = p_int(sfp[1]);
	int ret = MagickSetAntialiaS(self ,b1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setCompressionQuality(self, Float f1) */

METHOD MagickWand_setCompressionQuality(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	float f1 = p_float(sfp[1]);
	int ret = MagickSetCompreSSionQuality(self ,f1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setDepth(self, Float f1) */

METHOD MagickWand_setDepth(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	float f1 = p_float(sfp[1]);
	int ret = MagickSetDepth(self ,f1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setFilename(self, String s1) */

METHOD MagickWand_setFilename(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	int ret = MagickSetFilename(self ,s1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setFormat(self, String s1) */

METHOD MagickWand_setFormat(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	int ret = MagickSetFormat(self ,s1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setFont(self, String s1) */

METHOD MagickWand_setFont(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	int ret = MagickSetFont(self ,s1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setPointSize(self, Float f1) */

METHOD MagickWand_setPointSize(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	float f1 = p_float(sfp[1]);
	int ret = MagickSetPointSize(self ,f1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setResolution(self, Float f1, Float f2) */

METHOD MagickWand_setResolution(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	float f1 = p_float(sfp[1]);
	float f2 = p_float(sfp[2]);
	int ret = MagickSetReSolution(self ,f1 ,f2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setSize(self, int f1, int f2) */

METHOD MagickWand_setSize(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int f1 = p_int(sfp[1]);
	int f2 = p_int(sfp[2]);
	int ret = MagickSetSize(self ,f1 ,f2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Float MagickWand.getCompressionQuality(self) */

METHOD MagickWand_getCompressionQuality(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	double ret = MagickGetCompressionQuality(self );

	KNH_RETURN_Float(ctx, sfp, ret);
}

/* String MagickWand.getImageFilename(self) */

METHOD MagickWand_getImageFilename(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *ret = MagickGetImageFilename(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getImageFormat(self) */

METHOD MagickWand_getImageFormat(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *ret = MagickGetImageFormat(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getImageSignature(self) */

METHOD MagickWand_getImageSignature(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *ret = MagickGetImageSiGnature(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.identifyImage(self) */

METHOD MagickWand_identifyImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *ret = MagickIdentIfyImage(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* MagickWand MagickWand.appendImages(self, Boolean bool) */

METHOD MagickWand_appendImages(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int *bool = p_int(sfp[1]);
	MagickWand *ret = MagickAppendImAges(self ,bool );

	KNH_RETURN(ctx, sfp, ret);
}

/* MagickWand MagickWand.getImages(self) */

METHOD MagickWand_getImages(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	MagickWand *ret = MagickGetImages(self );

	KNH_RETURN(ctx, sfp, ret);
}

/* Int MagickWand.getImageColors(self) */

METHOD MagickWand_getImageColors(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetImageColors(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int MagickWand.getImageCompressionQuality(self) */

METHOD MagickWand_getImageCompressionQuality(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetImageCompressionQuality(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int MagickWand.getImageDelay(self) */

METHOD MagickWand_getImageDelay(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetImageDelay(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int MagickWand.getImageDepth(self) */

METHOD MagickWand_getImageDepth(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetImageDepth(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int MagickWand.getImageHeight(self) */

METHOD MagickWand_getImageHeight(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetImageHeiGht(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int MagickWand.getImageIterations(self) */

METHOD MagickWand_getImageIterations(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetImageIterations(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int MagickWand.getImageScene(self) */

METHOD MagickWand_getImageScene(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetImageScene(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int MagickWand.getImageTicksPerSecond(self) */

METHOD MagickWand_getImageTicksPerSecond(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetImageTicksPerSecond(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int MagickWand.getImageWidth(self) */

METHOD MagickWand_getImageWidth(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetImageWidth(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int MagickWand.getNumberImages(self) */

METHOD MagickWand_getNumberImages(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetNumberImages(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Int MagickWand.getIteratorIndex(self) */

METHOD MagickWand_getIteratorIndex(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetIteratorIndex(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Boolean MagickWand.isMagickWand(self) */

METHOD MagickWand_isMagickWand(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickIsMagIckWand(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setIteratorIndex(self, int i1) */

METHOD MagickWand_setIteratorIndex(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int i1 = p_int(sfp[1]);
	int ret = MagickSetIteratorIndex(self ,i1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* MagickWand MagickWand.new() */

METHOD MagickWand_new(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *ret = MagickNew();

	KNH_RETURN(ctx, sfp, ret);
}

/* MagickWand MagickWand.clone(self) */

METHOD MagickWand_clone(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	MagickWand *ret = MagickClone(self );

	KNH_RETURN(ctx, sfp, ret);
}

/* MagickWand MagickWand.destroy(self) */

METHOD MagickWand_destroy(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	MagickWand *ret = MagickDestroy(self );

	KNH_RETURN(ctx, sfp, ret);
}

/* void MagickWand.clear(self) */

METHOD MagickWand_clear(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);

	KNH_RETURN_void(ctx, sfp);
}

/* void MagickWand.genesis() */

METHOD MagickWand_genesis(Ctx *ctx, knh_sfp_t* sfp)
{

	KNH_RETURN_void(ctx, sfp);
}

/* void MagickWand.terminus() */

METHOD MagickWand_terminus(Ctx *ctx, knh_sfp_t* sfp)
{

	KNH_RETURN_void(ctx, sfp);
}

/* void MagickWand.resetIterator(self) */

METHOD MagickWand_resetIterator(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);

	KNH_RETURN_void(ctx, sfp);
}

/* void MagickWand.setFirstIterator(self) */

METHOD MagickWand_setFirstIterator(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);

	KNH_RETURN_void(ctx, sfp);
}

/* void MagickWand.setLastIterator(self) */

METHOD MagickWand_setLastIterator(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);

	KNH_RETURN_void(ctx, sfp);
}
