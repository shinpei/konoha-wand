// struct MagickWand
class MagickWand;
// struct ImageType
class MagickImage;
// struct PixelWand
class MagickColor; 
// struct CompressionType
class MagickCompressionType

// struct DrawingWand
class DrawingWand;





Boolean MagickWand.adaptiveBlueImage(Float f1, Float f2);


String MagickWand.describeImage(self);
String MagickWand.getImageAttribute(self, String s1);


Int MagickWand.getImageIndex(self);


String MagickWand.getFilename(self);
String MagickWand.getFormat(self);
String MagickWand.getFont(self);
String MagickWand.getHomeURL(self);
//String[] MagickWand.getImageProfiles(self, String s1, Float f1);


String MagickWand.getCopyright();
String MagickWand.getPackageName();
String MagickWand.getQuantumDepth(Float f1);
String MagickWand.getQuantumRange(Float f1);
String MagickWand.getRelesaseDate();
String MagickWand.getVersion(Float f1);

Float MagickWand.getPointsize(self);

Boolean MagickWand.deleteOption(self, String s1);
Boolean MagickWand.deleteImageProperty(self, String s1);
Boolean MagickWand.getAntialias(self);
Boolean MagickWand.getSize(self, Float f1, Float f2);
Boolean MagickWand.getSizeOffset(self, Float f1);
Boolean MagickWand.setAntialias(self, Boolean b1);
Boolean MagickWand.setBackgroundColor(self, MagickColor color);
Boolean MagickWand.setCompressionQuality(self, Float f1);
Boolean MagickWand.setDepth(self, Float f1);
Boolean MagickWand.setFilename(self, String s1);
Boolean MagickWand.setFormat(self, String s1);
Boolean MagickWand.setFont(self, String s1);
Boolean MagickWand.setPointSize(self, Float f1);
Boolean MagickWand.setResolution(self, Float f1, Float f2);
Boolean MagickWand.setSize(self, Float f1, Float f2);
Boolean MagickWand.setType(self, MagickImage img);

Boolean MagickWand.setCompression(self, MagickCompressionType comtype);

//String MagickWand.getImageProfile(self, String s1, Int size);
//String MagickWand.removeImageProfile(self, String s1, Int size);

Float MagickWand.getCompressionQuality(self);

String MagickWand.getImageFilename(self);
String MagickWand.getImageFormat(self);
String MagickWand.getImageSignature(self);
String MagickWand.identifyImage(self);


MagickWand MagickWand.appendImages(self, Boolean);
MagickWand MagickWand.getImages(self);



Int MagickWand.getImageColors(self);
Int MagickWand.getImageCompressionQuality(self);
Int MagickWand.getImageDelay(self);
//Int MagickWand.getImageChannelDepth(self, ChannelType);
Int MagickWand.getImageDepth(self);
Int MagickWand.getImageHeight(self);
Int MagickWand.getImageIterations(self);
Int MagickWand.getImageScene(self);
Int MagickWand.getImageTicksPerSecond(self);
Int MagickWand.getImageWidth(self);
Int MagickWand.getNumberImages(self);


Int MagickWand.getIteratorIndex(self);

Boolean MagickWand.isMagickWand(self);
Boolean MagickWand.clearException(self);
Boolean MagickWand.setIteratorIndex(int l);


MagickWand MagickWand.new();
MagickWand MagickWand.clone(self);
MagickWand MagickWand.destroy(self);
MagickWand MagickWand.newFromImage(MagickImage img);



void Magick.clear(self);
void Magick.genesis();
void Magick.terminus();
void Magick.resetIterator(self);
void Magick.setFirstIterator(self);
void Magick.setLastIterator(self);



