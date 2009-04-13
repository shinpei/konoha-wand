xo# 1 "gd.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "gd.c"
# 1 "/usr/include/gd.h" 1 3 4
# 92 "/usr/include/gd.h" 3 4
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 335 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 360 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 361 "/usr/include/sys/cdefs.h" 2 3 4
# 336 "/usr/include/features.h" 2 3 4
# 359 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 360 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stddef.h" 3 4
typedef unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 78 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 416 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 458 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 488 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 76 "/usr/include/stdio.h" 2 3 4
# 89 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 141 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 142 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));














extern FILE *tmpfile (void) ;
# 188 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 206 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 231 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 245 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 274 "/usr/include/stdio.h" 3 4

# 285 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
# 306 "/usr/include/stdio.h" 3 4



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 400 "/usr/include/stdio.h" 3 4





extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
# 443 "/usr/include/stdio.h" 3 4

# 506 "/usr/include/stdio.h" 3 4





extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 530 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 541 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 574 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 655 "/usr/include/stdio.h" 3 4





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;

# 708 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 744 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 763 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 786 "/usr/include/stdio.h" 3 4

# 795 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 825 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 844 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 884 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 914 "/usr/include/stdio.h" 3 4

# 93 "/usr/include/gd.h" 2 3 4
# 1 "/usr/include/gd_io.h" 1 3 4
# 14 "/usr/include/gd_io.h" 3 4
typedef struct gdIOCtx
{
  int (*getC) (struct gdIOCtx *);
  int (*getBuf) (struct gdIOCtx *, void *, int);

  void (*putC) (struct gdIOCtx *, int);
  int (*putBuf) (struct gdIOCtx *, const void *, int);


  int (*seek) (struct gdIOCtx *, const int);

  long (*tell) (struct gdIOCtx *);

  void (*gd_free) (struct gdIOCtx *);

}
gdIOCtx;

typedef struct gdIOCtx *gdIOCtxPtr;

void Putword (int w, gdIOCtx * ctx);
void Putchar (int c, gdIOCtx * ctx);

 void gdPutC (const unsigned char c, gdIOCtx * ctx);
 int gdPutBuf (const void *, int, gdIOCtx *);
 void gdPutWord (int w, gdIOCtx * ctx);
 void gdPutInt (int w, gdIOCtx * ctx);

 int gdGetC (gdIOCtx * ctx);
 int gdGetBuf (void *, int, gdIOCtx *);
 int gdGetByte (int *result, gdIOCtx * ctx);
 int gdGetWord (int *result, gdIOCtx * ctx);
 int gdGetInt (int *result, gdIOCtx * ctx);

 int gdSeek (gdIOCtx * ctx, const int offset);
 long gdTell (gdIOCtx * ctx);
# 94 "/usr/include/gd.h" 2 3 4
# 138 "/usr/include/gd.h" 3 4
   extern int gdAlphaBlend (int dest, int src);

  typedef struct gdImageStruct
  {

    unsigned char **pixels;
    int sx;
    int sy;



    int colorsTotal;
    int red[256];
    int green[256];
    int blue[256];
    int open[256];
# 164 "/usr/include/gd.h" 3 4
    int transparent;
    int *polyInts;
    int polyAllocated;
    struct gdImageStruct *brush;
    struct gdImageStruct *tile;
    int brushColorMap[256];
    int tileColorMap[256];
    int styleLength;
    int stylePos;
    int *style;
    int interlace;

    int thick;
# 185 "/usr/include/gd.h" 3 4
    int alpha[256];


    int trueColor;
    int **tpixels;






    int alphaBlendingFlag;



    int saveAlphaFlag;






    int AA;
    int AA_color;
    int AA_dont_blend;




    int cx1;
    int cy1;
    int cx2;
    int cy2;
  }
  gdImage;

  typedef gdImage *gdImagePtr;

  typedef struct
  {

    int nchars;

    int offset;

    int w;
    int h;



    char *data;
  }
  gdFont;


  typedef gdFont *gdFontPtr;
# 263 "/usr/include/gd.h" 3 4
extern gdImagePtr gdImageCreate (int sx, int sy);





extern gdImagePtr gdImageCreateTrueColor (int sx, int sy);






extern gdImagePtr gdImageCreateFromPng (FILE * fd);
extern gdImagePtr gdImageCreateFromPngCtx (gdIOCtxPtr in);
extern gdImagePtr gdImageCreateFromPngPtr (int size, void *data);


extern gdImagePtr gdImageCreateFromGif (FILE * fd);
extern gdImagePtr gdImageCreateFromGifCtx (gdIOCtxPtr in);
extern gdImagePtr gdImageCreateFromGifPtr (int size, void *data);
extern gdImagePtr gdImageCreateFromWBMP (FILE * inFile);
extern gdImagePtr gdImageCreateFromWBMPCtx (gdIOCtx * infile);
extern gdImagePtr gdImageCreateFromWBMPPtr (int size, void *data);
extern gdImagePtr gdImageCreateFromJpeg (FILE * infile);
extern gdImagePtr gdImageCreateFromJpegCtx (gdIOCtx * infile);
extern gdImagePtr gdImageCreateFromJpegPtr (int size, void *data);






  typedef struct
  {
    int (*source) (void *context, char *buffer, int len);
    void *context;
  }
  gdSource, *gdSourcePtr;


extern gdImagePtr gdImageCreateFromPngSource (gdSourcePtr in);

extern gdImagePtr gdImageCreateFromGd (FILE * in);
extern gdImagePtr gdImageCreateFromGdCtx (gdIOCtxPtr in);
extern gdImagePtr gdImageCreateFromGdPtr (int size, void *data);

extern gdImagePtr gdImageCreateFromGd2 (FILE * in);
extern gdImagePtr gdImageCreateFromGd2Ctx (gdIOCtxPtr in);
extern gdImagePtr gdImageCreateFromGd2Ptr (int size, void *data);

extern gdImagePtr gdImageCreateFromGd2Part (FILE * in, int srcx, int srcy, int w,
           int h);
extern gdImagePtr gdImageCreateFromGd2PartCtx (gdIOCtxPtr in, int srcx, int srcy,
       int w, int h);
extern gdImagePtr gdImageCreateFromGd2PartPtr (int size, void *data, int srcx, int srcy,
       int w, int h);

extern gdImagePtr gdImageCreateFromXbm (FILE * in);


extern gdImagePtr gdImageCreateFromXpm (char *filename);

extern void gdImageDestroy (gdImagePtr im);
# 335 "/usr/include/gd.h" 3 4
extern void gdImageSetPixel (gdImagePtr im, int x, int y, int color);


extern int gdImageGetPixel (gdImagePtr im, int x, int y);
extern int gdImageGetTrueColorPixel (gdImagePtr im, int x, int y);

extern void gdImageAABlend (gdImagePtr im);
extern void gdImageLine (gdImagePtr im, int x1, int y1, int x2, int y2, int color);
extern void gdImageDashedLine (gdImagePtr im, int x1, int y1, int x2, int y2, int color);


extern void gdImageRectangle (gdImagePtr im, int x1, int y1, int x2, int y2, int color);

extern void gdImageFilledRectangle (gdImagePtr im, int x1, int y1, int x2, int y2, int color);
extern void gdImageSetClip(gdImagePtr im, int x1, int y1, int x2, int y2);
extern void gdImageGetClip(gdImagePtr im, int *x1P, int *y1P, int *x2P, int *y2P);
extern int gdImageBoundsSafe (gdImagePtr im, int x, int y);
extern void gdImageChar (gdImagePtr im, gdFontPtr f, int x, int y, int c, int color);
extern void gdImageCharUp (gdImagePtr im, gdFontPtr f, int x, int y, int c, int color);
extern void gdImageString (gdImagePtr im, gdFontPtr f, int x, int y, unsigned char *s, int color);
extern void gdImageStringUp (gdImagePtr im, gdFontPtr f, int x, int y, unsigned char *s, int color);
extern void gdImageString16 (gdImagePtr im, gdFontPtr f, int x, int y, unsigned short *s, int color);
extern void gdImageStringUp16 (gdImagePtr im, gdFontPtr f, int x, int y, unsigned short *s, int color);






extern int gdFontCacheSetup (void);



extern void gdFontCacheShutdown (void);



extern void gdFreeFontCache (void);


extern char * gdImageStringTTF (gdImage * im, int *brect, int fg, char *fontlist,
     double ptsize, double angle, int x, int y,
     char *string);


extern char * gdImageStringFT (gdImage * im, int *brect, int fg, char *fontlist,
    double ptsize, double angle, int x, int y,
    char *string);




  typedef struct
  {
    int flags;
    double linespacing;
    int charmap;




    int hdpi;
    int vdpi;
    char *xshow;







    char *fontpath;
# 429 "/usr/include/gd.h" 3 4
  }
  gdFTStringExtra, *gdFTStringExtraPtr;
# 455 "/usr/include/gd.h" 3 4
extern int gdFTUseFontConfig(int flag);
# 464 "/usr/include/gd.h" 3 4
extern char * gdImageStringFTEx (gdImage * im, int *brect, int fg, char *fontlist,
      double ptsize, double angle, int x, int y,
      char *string, gdFTStringExtraPtr strex);


  typedef struct
  {
    int x, y;
  }
  gdPoint, *gdPointPtr;

extern void gdImagePolygon (gdImagePtr im, gdPointPtr p, int n, int c);
extern void gdImageOpenPolygon (gdImagePtr im, gdPointPtr p, int n, int c);
extern void gdImageFilledPolygon (gdImagePtr im, gdPointPtr p, int n, int c);



extern int gdImageColorAllocate (gdImagePtr im, int r, int g, int b);

extern int gdImageColorAllocateAlpha (gdImagePtr im, int r, int g, int b, int a);

extern int gdImageColorClosest (gdImagePtr im, int r, int g, int b);




extern int gdImageColorClosestAlpha (gdImagePtr im, int r, int g, int b, int a);

extern int gdImageColorClosestHWB (gdImagePtr im, int r, int g, int b);

extern int gdImageColorExact (gdImagePtr im, int r, int g, int b);

extern int gdImageColorExactAlpha (gdImagePtr im, int r, int g, int b, int a);

extern int gdImageColorResolve (gdImagePtr im, int r, int g, int b);

extern int gdImageColorResolveAlpha (gdImagePtr im, int r, int g, int b, int a);
# 518 "/usr/include/gd.h" 3 4
extern void gdImageColorDeallocate (gdImagePtr im, int color);
# 540 "/usr/include/gd.h" 3 4
extern gdImagePtr gdImageCreatePaletteFromTrueColor (gdImagePtr im, int ditherFlag,
      int colorsWanted);

extern void gdImageTrueColorToPalette (gdImagePtr im, int ditherFlag,
      int colorsWanted);
# 555 "/usr/include/gd.h" 3 4
extern void gdImageColorTransparent (gdImagePtr im, int color);

extern void gdImagePaletteCopy (gdImagePtr dst, gdImagePtr src);
extern void gdImageGif (gdImagePtr im, FILE * out);
extern void gdImagePng (gdImagePtr im, FILE * out);
extern void gdImagePngCtx (gdImagePtr im, gdIOCtx * out);
extern void gdImageGifCtx (gdImagePtr im, gdIOCtx * out);





extern void gdImagePngEx (gdImagePtr im, FILE * out, int level);
extern void gdImagePngCtxEx (gdImagePtr im, gdIOCtx * out, int level);

extern void gdImageWBMP (gdImagePtr image, int fg, FILE * out);
extern void gdImageWBMPCtx (gdImagePtr image, int fg, gdIOCtx * out);



extern void gdFree (void *m);


extern void * gdImageWBMPPtr (gdImagePtr im, int *size, int fg);



extern void gdImageJpeg (gdImagePtr im, FILE * out, int quality);
extern void gdImageJpegCtx (gdImagePtr im, gdIOCtx * out, int quality);


extern void * gdImageJpegPtr (gdImagePtr im, int *size, int quality);




enum {
 gdDisposalUnknown,
 gdDisposalNone,
 gdDisposalRestoreBackground,
 gdDisposalRestorePrevious
};

extern void gdImageGifAnimBegin(gdImagePtr im, FILE *outFile, int GlobalCM, int Loops);
extern void gdImageGifAnimAdd(gdImagePtr im, FILE *outFile, int LocalCM, int LeftOfs, int TopOfs, int Delay, int Disposal, gdImagePtr previm);
extern void gdImageGifAnimEnd(FILE *outFile);
extern void gdImageGifAnimBeginCtx(gdImagePtr im, gdIOCtx *out, int GlobalCM, int Loops);
extern void gdImageGifAnimAddCtx(gdImagePtr im, gdIOCtx *out, int LocalCM, int LeftOfs, int TopOfs, int Delay, int Disposal, gdImagePtr previm);
extern void gdImageGifAnimEndCtx(gdIOCtx *out);
extern void * gdImageGifAnimBeginPtr(gdImagePtr im, int *size, int GlobalCM, int Loops);
extern void * gdImageGifAnimAddPtr(gdImagePtr im, int *size, int LocalCM, int LeftOfs, int TopOfs, int Delay, int Disposal, gdImagePtr previm);
extern void * gdImageGifAnimEndPtr(int *size);






  typedef struct
  {
    int (*sink) (void *context, const char *buffer, int len);
    void *context;
  }
  gdSink, *gdSinkPtr;

extern void gdImagePngToSink (gdImagePtr im, gdSinkPtr out);

extern void gdImageGd (gdImagePtr im, FILE * out);
extern void gdImageGd2 (gdImagePtr im, FILE * out, int cs, int fmt);


extern void * gdImageGifPtr (gdImagePtr im, int *size);


extern void * gdImagePngPtr (gdImagePtr im, int *size);
extern void * gdImagePngPtrEx (gdImagePtr im, int *size, int level);


extern void * gdImageGdPtr (gdImagePtr im, int *size);


extern void * gdImageGd2Ptr (gdImagePtr im, int cs, int fmt, int *size);

extern void gdImageEllipse (gdImagePtr im, int cx, int cy, int w, int h, int color);

extern void gdImageFilledArc (gdImagePtr im, int cx, int cy, int w, int h, int s,
    int e, int color, int style);
extern void gdImageArc (gdImagePtr im, int cx, int cy, int w, int h, int s, int e,
     int color);
extern void gdImageEllipse(gdImagePtr im, int cx, int cy, int w, int h, int color);
extern void gdImageFilledEllipse (gdImagePtr im, int cx, int cy, int w, int h,
        int color);
extern void gdImageFillToBorder (gdImagePtr im, int x, int y, int border,
       int color);
extern void gdImageFill (gdImagePtr im, int x, int y, int color);
extern void gdImageCopy (gdImagePtr dst, gdImagePtr src, int dstX, int dstY,
      int srcX, int srcY, int w, int h);
extern void gdImageCopyMerge (gdImagePtr dst, gdImagePtr src, int dstX, int dstY,
    int srcX, int srcY, int w, int h, int pct);
extern void gdImageCopyMergeGray (gdImagePtr dst, gdImagePtr src, int dstX,
        int dstY, int srcX, int srcY, int w, int h,
        int pct);




extern void gdImageCopyResized (gdImagePtr dst, gdImagePtr src, int dstX, int dstY,
      int srcX, int srcY, int dstW, int dstH, int srcW,
      int srcH);
# 692 "/usr/include/gd.h" 3 4
extern void gdImageCopyResampled (gdImagePtr dst, gdImagePtr src, int dstX,
        int dstY, int srcX, int srcY, int dstW, int dstH,
        int srcW, int srcH);
# 703 "/usr/include/gd.h" 3 4
extern void gdImageCopyRotated (gdImagePtr dst,
      gdImagePtr src,
      double dstX, double dstY,
      int srcX, int srcY,
      int srcWidth, int srcHeight, int angle);

extern void gdImageSetBrush (gdImagePtr im, gdImagePtr brush);
extern void gdImageSetTile (gdImagePtr im, gdImagePtr tile);
extern void gdImageSetAntiAliased (gdImagePtr im, int c);
extern void gdImageSetAntiAliasedDontBlend (gdImagePtr im, int c, int dont_blend);
extern void gdImageSetStyle (gdImagePtr im, int *style, int noOfPixels);


extern void gdImageSetThickness (gdImagePtr im, int thickness);

extern void gdImageInterlace (gdImagePtr im, int interlaceArg);
extern void gdImageAlphaBlending (gdImagePtr im, int alphaBlendingArg);
extern void gdImageSaveAlpha (gdImagePtr im, int saveAlphaArg);
# 753 "/usr/include/gd.h" 3 4
extern gdIOCtx * gdNewFileCtx (FILE *);






extern gdIOCtx * gdNewDynamicCtx (int size, void *data);
# 769 "/usr/include/gd.h" 3 4
extern gdIOCtx * gdNewDynamicCtxEx (int size, void *data, int freeFlag);
extern gdIOCtx * gdNewSSCtx (gdSourcePtr in, gdSinkPtr out);
extern void * gdDPExtractData (struct gdIOCtx *ctx, int *size);
# 784 "/usr/include/gd.h" 3 4
extern int gdImageCompare (gdImagePtr im1, gdImagePtr im2);
# 804 "/usr/include/gd.h" 3 4
# 1 "/usr/include/gdfx.h" 1 3 4







# 1 "/usr/include/gd.h" 1 3 4
# 9 "/usr/include/gdfx.h" 2 3 4







 extern gdImagePtr gdImageSquareToCircle(gdImagePtr im, int radius);
# 41 "/usr/include/gdfx.h" 3 4
extern char * gdImageStringFTCircle(
 gdImagePtr im,
 int cx,
 int cy,
 double radius,
 double textRadius,
 double fillPortion,
 char *font,
 double points,
 char *top,
 char *bottom,
 int fgcolor);
# 66 "/usr/include/gdfx.h" 3 4
 extern void gdImageSharpen (gdImagePtr im, int pct);
# 805 "/usr/include/gd.h" 2 3 4
# 1 "gd.c" 2
