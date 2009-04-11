// struct MagickWand
class MagickWand;


Boolean MagickWand.adaptiveBlueImage(Float f1, Float f2);


String MagickWand.describeImage(self);
String MagickWand.getImageAttribute(self, String s1);


Int MagickWand.getImageIndex(self);


String MagickWand.getFilename(self);
String MagickWand.getFormat(self);
String MagickWand.getFont(self);
String MagickWand.getHomeURL();
//String[] MagickWand.getImageProfiles(self, String s1, Float f1);


String MagickWand.getCopyright();
String MagickWand.getPackageName();
String MagickWand.getQuantumDepth(int f1);
String MagickWand.getQuantumRange(int f1);
String MagickWand.getRelesaseDate();
String MagickWand.getVersion(int f1);

Float MagickWand.getPointsize(self);

Boolean MagickWand.deleteOption(self, String s1);
Boolean MagickWand.deleteImageProperty(self, String s1);
Boolean MagickWand.getAntialias(self);
Boolean MagickWand.getSize(self, int f1, int f2);
Boolean MagickWand.getSizeOffset(self, int f1);
Boolean MagickWand.setAntialias(self, Boolean b1);
Boolean MagickWand.setCompressionQuality(self, Float f1);
Boolean MagickWand.setDepth(self, Float f1);
Boolean MagickWand.setFilename(self, String s1);
Boolean MagickWand.setFormat(self, String s1);
Boolean MagickWand.setFont(self, String s1);
Boolean MagickWand.setPointSize(self, Float f1);
Boolean MagickWand.setResolution(self, Float f1, Float f2);
Boolean MagickWand.setSize(self, int f1, int f2);

Float MagickWand.getCompressionQuality(self);

String MagickWand.getImageFilename(self);
String MagickWand.getImageFormat(self);
String MagickWand.getImageSignature(self);
String MagickWand.identifyImage(self);


MagickWand MagickWand.appendImages(self, Boolean bool);
MagickWand MagickWand.getImages(self);

Int MagickWand.getImageColors(self);
Int MagickWand.getImageCompressionQuality(self);
Int MagickWand.getImageDelay(self);
Int MagickWand.getImageDepth(self);
Int MagickWand.getImageHeight(self);
Int MagickWand.getImageIterations(self);
Int MagickWand.getImageScene(self);
Int MagickWand.getImageTicksPerSecond(self);
Int MagickWand.getImageWidth(self);
Int MagickWand.getNumberImages(self);


Int MagickWand.getIteratorIndex(self);

Boolean MagickWand.isMagickWand(self);
Boolean MagickWand.setIteratorIndex(self, int i1);


MagickWand MagickWand.new();
MagickWand MagickWand.clone(self);
MagickWand MagickWand.destroy(self);

void MagickWand.clear(self);
void MagickWand.genesis();
void MagickWand.terminus();
void MagickWand.resetIterator(self);
void MagickWand.setFirstIterator(self);
void MagickWand.setLastIterator(self);



