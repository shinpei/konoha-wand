import gd.*

GdImage gd = new GdImage(100, 100)
white = gd.gdImageColorAllocate(255,255,255)

black = gd.gdImageColorAllocate(0,0,0)
red = gd.gdImageColorAllocate(255,0,0)

gd.gdImageLine(0,0,100,100,black);

