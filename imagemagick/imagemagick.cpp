# 1 "imagemagick.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "imagemagick.c"
# 1 "/usr/local/include/konoha.h" 1 3
# 32 "/usr/local/include/konoha.h" 3
# 1 "/usr/local/include/konoha/konoha_dev.h" 1 3
# 31 "/usr/local/include/konoha/konoha_dev.h" 3
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

# 32 "/usr/local/include/konoha/konoha_dev.h" 2 3
# 1 "/usr/include/ctype.h" 1 3 4
# 30 "/usr/include/ctype.h" 3 4

# 41 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 42 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
# 96 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__));
extern int isalpha (int) __attribute__ ((__nothrow__));
extern int iscntrl (int) __attribute__ ((__nothrow__));
extern int isdigit (int) __attribute__ ((__nothrow__));
extern int islower (int) __attribute__ ((__nothrow__));
extern int isgraph (int) __attribute__ ((__nothrow__));
extern int isprint (int) __attribute__ ((__nothrow__));
extern int ispunct (int) __attribute__ ((__nothrow__));
extern int isspace (int) __attribute__ ((__nothrow__));
extern int isupper (int) __attribute__ ((__nothrow__));
extern int isxdigit (int) __attribute__ ((__nothrow__));



extern int tolower (int __c) __attribute__ ((__nothrow__));


extern int toupper (int __c) __attribute__ ((__nothrow__));


# 142 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
# 323 "/usr/include/ctype.h" 3 4

# 33 "/usr/local/include/konoha/konoha_dev.h" 2 3
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (__const char *__assertion, __const char *__file,
      unsigned int __line, __const char *__function)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
      unsigned int __line,
      __const char *__function)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



# 34 "/usr/local/include/konoha/konoha_dev.h" 2 3
# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stdarg.h" 1 3 4
# 105 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 35 "/usr/local/include/konoha/konoha_dev.h" 2 3
# 1 "/usr/include/setjmp.h" 1 3 4
# 28 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 29 "/usr/include/bits/setjmp.h" 3 4
typedef int __jmp_buf[6];
# 31 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 32 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));




extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
# 78 "/usr/include/setjmp.h" 3 4




extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 110 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



# 36 "/usr/local/include/konoha/konoha_dev.h" 2 3







# 1 "/usr/local/include/konoha/konoha_config.h" 1 3
# 31 "/usr/local/include/konoha/konoha_config.h" 3
# 1 "/usr/local/include/konoha/license.h" 1 3
# 32 "/usr/local/include/konoha/konoha_config.h" 2 3
# 44 "/usr/local/include/konoha/konoha_dev.h" 2 3

# 1 "/usr/local/include/konoha/konoha_deps.h" 1 3


# 1 "/usr/local/include/konoha/konoha_t.h" 1 3
# 32 "/usr/local/include/konoha/konoha_t.h" 3
# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/limits.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 153 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/bits/local_lim.h" 2 3 4
# 154 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/limits.h" 2 3 4
# 33 "/usr/local/include/konoha/konoha_t.h" 2 3
# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/float.h" 1 3 4
# 34 "/usr/local/include/konoha/konoha_t.h" 2 3



# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 126 "/usr/include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;
# 138 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 38 "/usr/local/include/konoha/konoha_t.h" 2 3

# 1 "/usr/include/inttypes.h" 1 3 4
# 35 "/usr/include/inttypes.h" 3 4
typedef long int __gwchar_t;
# 274 "/usr/include/inttypes.h" 3 4

# 288 "/usr/include/inttypes.h" 3 4
typedef struct
  {
    long long int quot;
    long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern intmax_t wcstoimax (__const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__));


extern uintmax_t wcstoumax (__const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__));
# 442 "/usr/include/inttypes.h" 3 4

# 40 "/usr/local/include/konoha/konoha_t.h" 2 3
# 69 "/usr/local/include/konoha/konoha_t.h" 3
typedef int knh_bool_t;
typedef int knh_boolean_t;





typedef int16_t knh_int16_t;
typedef uint16_t knh_uint16_t;
typedef int16_t knh_short_t;
typedef uint16_t knh_ushort_t;
typedef int32_t knh_int32_t;
typedef uint32_t knh_uint32_t;
typedef int64_t knh_int64_t;
typedef uint64_t knh_uint64_t;

typedef intptr_t knh_intptr_t;
typedef uintptr_t knh_uintptr_t;
typedef knh_intptr_t knh_index_t;
# 124 "/usr/local/include/konoha/konoha_t.h" 3
typedef knh_int64_t knh_int_t;
typedef knh_uint64_t knh_uint_t;
# 183 "/usr/local/include/konoha/konoha_t.h" 3
typedef double knh_float_t;
# 204 "/usr/local/include/konoha/konoha_t.h" 3
typedef unsigned char knh_uchar_t;

typedef struct {
 knh_uchar_t *buf;
 size_t len;
} knh_bytes_t;







typedef struct {
 char *name;
 knh_int_t ivalue;
} knh_IntConstData_t;

typedef struct {
 char *name;
 knh_float_t fvalue;
} knh_FloatConstData_t;

typedef struct {
 char *name;
 char *value;
} knh_StringConstData_t;





typedef knh_ushort_t knh_flag_t;
# 263 "/usr/local/include/konoha/konoha_t.h" 3
typedef const struct knh_Context_t Ctx;

typedef knh_uint16_t knh_struct_t ;
typedef knh_uint16_t knh_class_t;
typedef knh_uint16_t knh_type_t;
typedef knh_uint16_t knh_expt_t;
# 291 "/usr/local/include/konoha/konoha_t.h" 3
typedef knh_ushort_t knh_fieldn_t;
typedef knh_ushort_t knh_methodn_t;
# 337 "/usr/local/include/konoha/konoha_t.h" 3
typedef knh_ushort_t knh_lock_t;







typedef struct knh_hObject_t {
 knh_ushort_t magic; knh_flag_t flag;
 knh_class_t bcid; knh_class_t cid;
 knh_ushort_t ctxid; knh_lock_t lock;

 knh_uintptr_t refc;

 void *meta;
} knh_hObject_t ;

typedef struct knh_Object_t {
 knh_hObject_t h;
 void *ref;
 void *ref2_unused;
 void *ref3_unused;
} knh_Object_t ;
# 377 "/usr/local/include/konoha/konoha_t.h" 3
typedef knh_ushort_t knh_fileid_t;
typedef knh_ushort_t knh_sline_t;

typedef struct {
 knh_hObject_t h;
 void *ref;
 knh_fileid_t fileid;
 knh_sline_t line;
} knh_FileLine_t ;
# 402 "/usr/local/include/konoha/konoha_t.h" 3
typedef knh_int_t knh_thread_t;
typedef knh_int_t knh_thread_key_t;
typedef knh_int_t knh_mutex_t;


typedef struct knh_Thread_t {
 knh_hObject_t h;
 knh_thread_t thid;
} knh_Thread_t ;
# 419 "/usr/local/include/konoha/konoha_t.h" 3
typedef void (*knh_fmutexlock)(Ctx *ctx, knh_lock_t lock, knh_Object_t *o);
typedef void (*knh_fmutexunlock)(Ctx *ctx, knh_lock_t lock);

typedef struct knh_LockTable_t {
 knh_lock_t lock; knh_flag_t flag;
 knh_mutex_t mutex;
 knh_fmutexlock flock;
 knh_fmutexunlock funlock;
 int ctxid;
 size_t count;
 struct knh_String_t *name;
 union {
  knh_Object_t *sharedObject;
  struct knh_LockTable_t *unused;
 };
} knh_LockTable_t;
# 448 "/usr/local/include/konoha/konoha_t.h" 3
typedef unsigned char knh_code_t;

typedef struct knh_sfp_t {
 union {
  void *ref;
  knh_Object_t *o;
  struct knh_Int_t *i;
  struct knh_Float_t *f;
  struct knh_Class_t *c;
  struct knh_String_t *s;
  struct knh_Bytes_t *ba;
  struct knh_Iterator_t *it;
  struct knh_Closure_t *cc;
  struct knh_Glue_t *glue;
  struct knh_OutputStream_t *w;
  struct knh_Method_t *mtd;
  struct knh_Mapper_t *mpr;
  struct knh_Exception_t *e;
  struct knh_ExceptionHandler_t *hdr;
 };
 union {
  knh_boolean_t bvalue;
  knh_int_t ivalue;
  knh_float_t fvalue;
  knh_uint64_t data;
  knh_code_t *pc;
 };
} knh_sfp_t;
# 495 "/usr/local/include/konoha/konoha_t.h" 3
char *konoha_geStructTableName(Ctx *ctx, knh_struct_t sid);


typedef void (*knh_fgchook)(Ctx *ctx);
typedef void (*knh_ftraverse)(Ctx *ctx, knh_Object_t *);
typedef int (*knh_finit)(Ctx *);

typedef knh_uintptr_t knh_hcode_t;




typedef void (*knh_fstruct_init)(Ctx *, knh_Object_t *, int);
typedef void (*knh_fstruct_traverse)(Ctx *, knh_Object_t*, knh_ftraverse);
typedef int (*knh_fstruct_compareTo)(knh_Object_t*, knh_Object_t*);
typedef knh_hcode_t (*knh_fstruct_hashCode)(Ctx *ctx, knh_Object_t *);
typedef knh_Object_t* (*knh_fstruct_copy)(Ctx *, knh_Object_t *);
typedef void (*knh_fstruct_newClass)(Ctx *ctx, knh_class_t cid);
typedef struct knh_String_t* (*knh_fstruct_getkey)(Ctx *ctx, knh_sfp_t *lsfp);

typedef struct {
 knh_fstruct_traverse ftraverse;
 knh_fstruct_compareTo fcompareTo;
 knh_fstruct_init finit;
 knh_fstruct_getkey fgetkey;
 size_t size;
 knh_flag_t flag;
 knh_struct_t sid;
 knh_fstruct_hashCode fhashCode;
 knh_fstruct_copy fcopy;
 knh_fstruct_newClass fnewClass;
 char *name;
} knh_StructTable_t ;
# 537 "/usr/local/include/konoha/konoha_t.h" 3
typedef knh_Object_t* (*knh_fdefault)(Ctx *ctx, knh_class_t cid);

typedef struct {
 knh_flag_t cflag; knh_flag_t oflag;
 knh_class_t bcid; knh_class_t supcid;
 knh_class_t p1; knh_type_t p2;
 knh_ushort_t offset; knh_struct_t sid;
 knh_ushort_t size; knh_ushort_t bsize;
 union {
  knh_short_t keyidx;
  knh_type_t r0;
 };
 union {
  knh_short_t keyidx2;
  knh_type_t p3;
 };
 struct knh_String_t *sname;
 struct knh_String_t *lname;
 struct knh_Class_t *class_cid;
 struct knh_ClassStruct_t *cstruct;
 struct knh_ClassMap_t *cmap;
 struct knh_Object_t *cspec;
 knh_fdefault fdefault;
 knh_mutex_t dataLock;
 struct knh_Array_t *dataList;
 struct knh_DictMap_t *dataMap;
} knh_ClassTable_t;
# 573 "/usr/local/include/konoha/konoha_t.h" 3
typedef struct {
 knh_flag_t flag;
 knh_expt_t parent;
 struct knh_String_t *name;
} knh_ExptTable_t;




typedef struct {
 size_t usedMemorySize;
 size_t usedObjectSize;
 size_t mtdCacheHit;
 size_t mtdCacheMiss;
 size_t fmtCacheHit;
 size_t fmtCacheMiss;
 size_t mprCacheHit;
 size_t mprCacheMiss;
} knh_ctxstat_t;
# 652 "/usr/local/include/konoha/konoha_t.h" 3
typedef struct knh_ObjectPageTable_t {
 int ctxid;
 void *thead;
} knh_ObjectPageTable_t ;



typedef struct {

 size_t threadSize;
 knh_LockTable_t *LockTable;
 knh_LockTable_t *unusedLockTable;
 knh_ObjectPageTable_t *ObjectPageTable; size_t ObjectPageTableSize;
 knh_StructTable_t *StructTable; size_t StructTableSize;
 knh_ClassTable_t *ClassTable; size_t ClassTableSize;
 knh_ExptTable_t *ExptTable; size_t ExptTableSize;


 knh_Object_t *constNull;
 knh_Object_t *constVoid;
 knh_Object_t *constTrue;
 knh_Object_t *constFalse;
 struct knh_Float_t *constFloat0;
 struct knh_Int_t **tInt;
 struct knh_String_t **tString;
} knh_ctxshare_t ;



typedef struct knh_Context_t {
 knh_hObject_t h;
 knh_Object_t *unusedObject;
 size_t unusedObjectSize;


 knh_sfp_t* stack;
 knh_sfp_t* esp;
 size_t stacksize;
 knh_ftraverse fsweep;


 size_t cachesize;
 struct knh_Method_t **mtdCache;
 struct knh_Method_t **fmtCache;
 struct knh_Mapper_t **mprCache;


 knh_ctxshare_t *share;
 knh_ctxstat_t *stat;

 knh_flag_t flag;
 knh_ushort_t ctxid;
 char* cwd;
 knh_thread_t threadid;
 struct knh_Context_t *parent;

 struct knh_System_t* sys;
 struct knh_String_t* enc;
 struct knh_InputStream_t* in;
 struct knh_OutputStream_t* out;
 struct knh_OutputStream_t* err;
 struct knh_Bytes_t* bufa;
 struct knh_OutputStream_t* bufw;
 struct knh_Bytes_t* bconvbuf;
 struct knh_DictMap_t* props;

 struct knh_NameSpace_t *ns;
 struct knh_DictMap_t *tsymbolDictMap;
 struct knh_Asm_t *cmpr;



} knh_Context_t ;





typedef struct konoha_t {
 knh_uintptr_t magic;
 Ctx *ctx;
} konoha_t ;
# 753 "/usr/local/include/konoha/konoha_t.h" 3
typedef struct {
 size_t pos;
 struct knh_Bytes_t *ba;
 struct knh_OutputStream_t *w;
} knh_cwb_t;
# 766 "/usr/local/include/konoha/konoha_t.h" 3
typedef void __attribute__((fastcall)) (*knh_fmethod)(Ctx *, knh_sfp_t *);





typedef void __attribute__((fastcall)) (*knh_fmapper)(Ctx *, knh_sfp_t *);
# 781 "/usr/local/include/konoha/konoha_t.h" 3
typedef struct {
 int type;
 char *name;
} knh_drvapi_t ;
# 799 "/usr/local/include/konoha/konoha_t.h" 3
struct knh_BytesConv_t;
typedef size_t (*knh_fbcnv)(Ctx *ctx, struct knh_BytesConv_t *o, knh_bytes_t t, struct knh_Bytes_t *ba);

typedef struct {
 int type;
 char *name;
 knh_fbcnv fbconv;
 knh_fbcnv fbconv_inverse;
} knh_bconv_driapi_t;




typedef knh_intptr_t knh_io_t;

typedef knh_io_t (*f_io_open)(Ctx *ctx, struct knh_InputStream_t *in, struct knh_OutputStream_t *out, knh_bytes_t urn, char *mode);
typedef knh_intptr_t (*f_io_read)(Ctx *ctx, knh_io_t fd, char *buf, size_t bufsiz);
typedef knh_intptr_t (*f_io_write)(Ctx *ctx, knh_io_t fd, char *buf, size_t bufsiz);
typedef void (*f_io_close)(Ctx *ctx, knh_io_t fd);

typedef struct {
 int type; char *name;
 size_t bufsiz;
 f_io_open fopen;
 f_io_read fread;
 f_io_write fwrite;
 f_io_close fclose;
} knh_iodrv_t;




typedef knh_Object_t* (*knh_fparser)(Ctx *, struct knh_String_t *p);

typedef struct {
 int type;
 char *name;
 knh_type_t rtype;
 knh_fparser parser;
} knh_parser_drvapi_t;




typedef void knh_regex_t;





typedef struct {
 int rm_so;
 int rm_eo;
 knh_bytes_t rm_name;
} knh_regmatch_t;

typedef knh_regex_t* (*knh_fregmalloc)(Ctx *);
typedef int (*knh_fregcomp)(Ctx *, knh_regex_t *, char *pattern, int flags);
typedef int (*knh_fregexec)(Ctx *, knh_regex_t *, char *str, size_t nmatch, knh_regmatch_t p[], int flags);
typedef void (*knh_fregfree)(Ctx *, knh_regex_t *);

typedef struct {
 int type;
 char *name;
 knh_fregmalloc regmalloc;
 knh_fregcomp regcomp;
 knh_fregexec regexec;
 knh_fregfree regfree;
} knh_regex_drvapi_t;




typedef void knh_db_t;
typedef void knh_dbcur_t;
struct knh_ResultSet_t;
typedef knh_db_t* (*knh_fdbopen)(Ctx *ctx, knh_bytes_t url);
typedef knh_dbcur_t* (*knh_fdbquery)(Ctx *ctx, knh_db_t *, knh_bytes_t query, struct knh_ResultSet_t*);
typedef void (*knh_fdbclose)(Ctx *ctx, knh_db_t *);

typedef int (*knh_fdbcurnext)(Ctx *, knh_dbcur_t *, struct knh_ResultSet_t*);
typedef void (*knh_fdbcurfree)(knh_dbcur_t *);

typedef struct {
 int type;
 char *name;
 knh_fdbopen dbopen;
 knh_fdbquery dbquery;
 knh_fdbclose dbclose;
 knh_fdbcurnext dbcurnext;
 knh_fdbcurfree dbcurfree;
} knh_db_drvapi_t;
# 4 "/usr/local/include/konoha/konoha_deps.h" 2 3
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stddef.h" 1 3 4
# 326 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stddef.h" 3 4
typedef long int wchar_t;
# 34 "/usr/include/stdlib.h" 2 3 4


# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;



# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 182 "/usr/include/stdlib.h" 3 4


extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 62 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 100 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 75 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 93 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 105 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 201 "/usr/include/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 121 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);



# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__));
# 224 "/usr/include/sys/types.h" 2 3 4
# 235 "/usr/include/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 36 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;


typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;




typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 321 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 498 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));

# 543 "/usr/include/stdlib.h" 3 4


extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 583 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 594 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 614 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 640 "/usr/include/stdlib.h" 3 4





extern int system (__const char *__command) ;

# 662 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);
# 680 "/usr/include/stdlib.h" 3 4



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 699 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;












extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 735 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 840 "/usr/include/stdlib.h" 3 4
extern int posix_openpt (int __oflag) ;
# 875 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 891 "/usr/include/stdlib.h" 3 4

# 5 "/usr/local/include/konoha/konoha_deps.h" 2 3
# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 82 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

# 130 "/usr/include/string.h" 3 4
extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 165 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 181 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 240 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 254 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 270 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 294 "/usr/include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 331 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 354 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 432 "/usr/include/string.h" 3 4

# 6 "/usr/local/include/konoha/konoha_deps.h" 2 3
# 206 "/usr/local/include/konoha/konoha_deps.h" 3
# 1 "/usr/include/dlfcn.h" 1 3 4
# 26 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stddef.h" 1 3 4
# 27 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/bits/dlfcn.h" 1 3 4
# 30 "/usr/include/dlfcn.h" 2 3 4
# 54 "/usr/include/dlfcn.h" 3 4




extern void *dlopen (__const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      __const char *__restrict __name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 84 "/usr/include/dlfcn.h" 3 4
extern char *dlerror (void) __attribute__ ((__nothrow__));
# 190 "/usr/include/dlfcn.h" 3 4

# 207 "/usr/local/include/konoha/konoha_deps.h" 2 3
# 46 "/usr/local/include/konoha/konoha_dev.h" 2 3

# 1 "/usr/local/include/konoha/gen/konoha_class_.h" 1 3
# 31 "/usr/local/include/konoha/gen/konoha_class_.h" 3
# 1 "/usr/local/include/konoha/konoha_t.h" 1 3
# 32 "/usr/local/include/konoha/gen/konoha_class_.h" 2 3
# 1 "/usr/local/include/konoha/class/konoha.h" 1 3
# 60 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_ObjectField_t {
 knh_hObject_t h;
 knh_Object_t **fields;
 size_t bsize;
} knh_ObjectField_t ;
# 79 "/usr/local/include/konoha/class/konoha.h" 3
struct knh_Glue_t;
typedef void (*knh_fgfree)(Ctx *, struct knh_Glue_t *o);

typedef struct knh_Glue_t {
 knh_hObject_t h;
 void *ptr;
 knh_fgfree gfree;
} knh_Glue_t ;



typedef knh_Glue_t knh_Any_t;
typedef knh_Glue_t knh_This_t;
typedef knh_Glue_t knh_Any0_t;
typedef knh_Glue_t knh_Any1_t;
typedef knh_Glue_t knh_Any2_t;
typedef knh_Glue_t knh_Any3_t;





typedef struct knh_Nue_t {
 knh_hObject_t h;
 knh_uchar_t *str;
 size_t size;
 struct knh_String_t *orign;
} knh_Nue_t;




typedef struct {
 union {
  knh_boolean_t bvalue;
  knh_int_t ivalue;
  knh_float_t fvalue;
  knh_uint64_t data;
 };
} knh_nObject_t ;

typedef struct knh_Boolean_t {
 knh_hObject_t h;
 knh_nObject_t n;
} knh_Boolean_t;




typedef struct knh_Number_t {
 knh_hObject_t h;
 knh_nObject_t n;
} knh_Number_t;





typedef struct knh_Int_t {
 knh_hObject_t h;
 knh_nObject_t n;
} knh_Int_t;

typedef knh_Int_t knh_IntX_t;





typedef struct knh_Float_t {
 knh_hObject_t h;
 knh_nObject_t n;
} knh_Float_t;

typedef knh_Float_t knh_FloatX_t;







typedef struct knh_String_t {
 knh_hObject_t h;
 knh_uchar_t *str;
 size_t size;
 struct knh_String_t *orign;
} knh_String_t;

typedef knh_String_t knh_StringX_t;





typedef struct knh_Bytes_t {
 knh_hObject_t h;
 knh_uchar_t *buf;
 size_t size;
 size_t capacity;
} knh_Bytes_t ;




typedef struct knh_Tuple2_t {
 knh_hObject_t h;
 knh_Object_t *first;
 knh_Object_t *second;
} knh_Tuple2_t;




typedef struct knh_Range_t {
 knh_hObject_t h;
 knh_Object_t *start;
 knh_Object_t *end;
} knh_Range_t;
# 206 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_Array_t {
 knh_hObject_t h;
 struct knh_Object_t **list;
 size_t size;
 size_t capacity;
} knh_Array_t;







typedef struct knh_IArray_t {
 knh_hObject_t h;
 knh_int_t *ilist;
 size_t size;
 size_t capacity;
} knh_IArray_t;







typedef struct knh_FArray_t {
 knh_hObject_t h;
 knh_float_t *flist;
 size_t size;
 size_t capacity;
} knh_FArray_t;







typedef void __attribute__((fastcall)) (*knh_fitrnext)(Ctx *, knh_sfp_t *, int n);


typedef struct knh_Iterator {
 knh_fitrnext fnext;
 knh_Object_t* source;
 size_t pos;
 union {
  void* ref;
  knh_code_t *pc;
 };
 size_t count;
 size_t start;
 size_t end;
 knh_Object_t* prefetch;
} knh_Iterator_struct;
# 270 "/usr/local/include/konoha/class/konoha.h" 3
typedef int (*knh_fbytescmp)(knh_bytes_t, knh_bytes_t);

typedef struct knh_dict_t {
 struct knh_String_t *key;
 union {
  knh_Object_t *_unused;
  knh_uintptr_t _unused_int;
 };
} knh_dict_t;

typedef struct knh_dictmape_t {
 struct knh_String_t *key;
 knh_Object_t *value;
} knh_dictmape_t;

typedef struct knh_DictMap_t {
 knh_hObject_t h;
 union {
  knh_dictmape_t *list;
  knh_dict_t *_list;
 };
 size_t size;
 knh_fbytescmp fcmp;
} knh_DictMap_t;



typedef struct knh_dictsete_t {
 struct knh_String_t *key;
 knh_uintptr_t value;
} knh_dictsete_t;

typedef struct knh_DictSet_t {
 knh_hObject_t h;
 union {
  knh_dictsete_t *list;
  knh_dict_t *_list;
 };
 size_t size;
 knh_fbytescmp fcmp;
} knh_DictSet_t;



typedef struct knh_hashentry_t {
 knh_hcode_t hcode;
 struct knh_hashentry_t *next;
 knh_Object_t *key;
 union {
  knh_Object_t *value;
  knh_uintptr_t uvalue;
 };
} knh_hashentry_t;

typedef knh_hashentry_t* (*knh_fhashentry_init)(Ctx *);
typedef void (*knh_fhashentry_traverse)(Ctx *, knh_hashentry_t*, knh_ftraverse);

typedef struct {
 size_t size;
 knh_fhashentry_init finit;
 knh_fhashentry_traverse ftraverse;
} knh_hash_op ;
# 341 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct {
 knh_hashentry_t** array;
 size_t hmax;
 size_t capacity;
 size_t size;
 knh_hashentry_t* unused_first;
 char** tables;
 size_t tables_capacity;
 size_t tables_size;
 char* tables_first;
 char *DBG_name;
} knh_Hash_struct;

typedef knh_Hash_struct knh_HashMap_struct;
typedef knh_Hash_struct knh_HashSet_struct;

typedef struct {
 knh_hObject_t h;
 knh_Hash_struct *b;
 knh_fstruct_compareTo fcmp;
 knh_hash_op *hashop;
} knh_Hash_t ;




typedef struct knh_DictIdx_t {
 knh_hObject_t h;
 struct knh_Array_t *terms;
 struct knh_DictSet_t *termsDictSet;
 knh_intptr_t offset;
} knh_DictIdx_t;
# 388 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_Class_t {
 knh_hObject_t h;
 knh_class_t cid;
 knh_type_t type;
} knh_Class_t;
# 409 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_cfield_t {
 knh_flag_t flag ;
 knh_type_t type ;
 knh_fieldn_t fn ;
 knh_Object_t *value;
} knh_cfield_t ;

typedef struct knh_ClassStruct_t {
 knh_hObject_t h;
 knh_cfield_t* fields;

 size_t fsize;
 knh_Array_t* methods;
} knh_ClassStruct_t;




typedef struct {
 knh_type_t type;
 knh_fieldn_t fn;
} knh_mparam_t ;



typedef struct knh_MethodField_t {
 knh_hObject_t h;
 knh_type_t rtype; knh_ushort_t psize;
 union {
  knh_mparam_t* mparams;
  knh_mparam_t p0;
 };
 knh_mparam_t p1;
} knh_MethodField_t;
# 457 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_Method {
 knh_flag_t flag; knh_class_t cid;
 knh_methodn_t mn; knh_ushort_t delta;
 struct knh_MethodField_t* mf;
 knh_fmethod fproceed;
 void* code;
} knh_Method_struct;
# 478 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_Mapper {
 knh_flag_t flag; knh_ushort_t size;
 knh_class_t scid; knh_class_t tcid;

 union {
  knh_Object_t* mapdata;
  struct knh_Mapper_t *m1;
 };
 struct knh_Mapper_t *m2;
} knh_Mapper_struct;





typedef struct knh_ClassMap {
 struct knh_Mapper_t** maplist;
 knh_ushort_t size;
 knh_ushort_t capacity;
} knh_ClassMap_struct ;






typedef struct knh_Closure {
 knh_Object_t* base;
 struct knh_Method_t* mtd;
 size_t stacksize;
 knh_sfp_t *stack;
} knh_Closure_struct ;




typedef float knh_affinefloat_t;

typedef struct knh_AffineConv_t {
 knh_hObject_t h;
 knh_affinefloat_t scale;
 knh_affinefloat_t shift;
} knh_AffineConv_t;






typedef struct {
 knh_flag_t flag;
 knh_class_t cid;
 knh_String_t* urn;
 knh_String_t* tag;
 knh_Object_t* defvalue;
} knh_hClassSpec_struct;

typedef struct knh_ClassSpec_t {
 knh_hObject_t h;
 knh_hClassSpec_struct *b;
} knh_ClassSpec_t ;


typedef knh_ClassSpec_t* (*knh_fspec)(Ctx *ctx, knh_class_t bcid, char *extra);





struct knh_IntUnit_t;
typedef knh_bool_t (*knh_fenumchk)(struct knh_IntUnit_t *, knh_int_t v);
typedef int (*knh_fenumcmp)(struct knh_IntUnit_t *, knh_int_t v1, knh_int_t v2);
typedef void (*knh_fenumfmt)(struct knh_IntUnit_t *, char *buf, size_t bufsiz, knh_int_t v);

typedef struct knh_IntUnit {
 knh_hClassSpec_struct spec;
 knh_fenumchk fchk;
 knh_fenumcmp fcmp;
 knh_fenumfmt ffmt;
 knh_int_t min;
 knh_int_t max;
 knh_int_t step;
} knh_IntUnit_struct;




struct knh_FloatUnit_t;
typedef knh_bool_t (*knh_funitchk)(struct knh_FloatUnit_t *, knh_float_t v);
typedef int (*knh_funitcmp)(struct knh_FloatUnit_t *, knh_float_t v1, knh_float_t v2);
typedef void (*knh_funitfmt)(struct knh_FloatUnit_t *, char *buf, size_t bufsiz, knh_float_t v);

typedef struct knh_FloatUnit {
 knh_hClassSpec_struct spec;
 knh_funitchk fchk;
 knh_funitcmp fcmp;
 knh_funitfmt ffmt;
 knh_float_t min;
 knh_float_t max;
 knh_float_t step;
 char* FMT;
} knh_FloatUnit_struct;




typedef struct {
 knh_hObject_t h;
 knh_regex_t *reg;
 knh_regex_drvapi_t *df;
 struct knh_String_t *pattern;
} knh_Regex_t;
# 598 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_BytesConv {
 struct knh_String_t *name;
 knh_fbcnv fbconv;



} knh_BytesConv_struct;




struct knh_StringUnit_t;
typedef knh_String_t *(*knh_fvcabnew)(Ctx *, knh_class_t cid, knh_bytes_t, struct knh_String_t *);
typedef int (*knh_fvcabcmp)(struct knh_StringUnit_t *, knh_bytes_t, knh_bytes_t);

typedef struct knh_StringUnit {
 knh_hClassSpec_struct spec;
 knh_fvcabnew fnew;
 knh_fvcabcmp fcmp;
 knh_fbcnv fbconv;
 struct knh_BytesConv_t *bconv;
 knh_ushort_t bytelen;
 knh_ushort_t charlen;
 knh_Object_t* pattern;
 struct knh_DictIdx_t* vocabDictIdx;
} knh_StringUnit_struct;
# 632 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_InputStream {
 union {
  knh_io_t fd;
  FILE *fp;
 };
 knh_iodrv_t driver;
 union {
  struct knh_Bytes_t *ba;
  struct knh_String_t *str;
 };
 char *buf;
 size_t bufpos;
 size_t bufend;
 size_t bufsiz;
 knh_String_t *enc;
 struct knh_BytesConv_t* bconv;
 knh_String_t* urn;
 knh_fileid_t fileid;
 knh_ushort_t prev;
 size_t line;
 size_t size;
} knh_InputStream_struct;







typedef struct knh_OutputStream {
 knh_io_t fd;
 knh_iodrv_t driver;
 knh_Bytes_t* ba;
 knh_String_t *enc;
 struct knh_BytesConv_t* bconv;
 knh_String_t* urn;
 size_t size;
 size_t line;
 knh_String_t* NEWLINE;
 knh_String_t* TAB;
 knh_short_t indent;
 knh_flag_t flag;
} knh_OutputStream_struct;





typedef struct knh_Connection {
 knh_db_t *conn;
 knh_db_drvapi_t *df;
 knh_String_t *urn;
} knh_Connection_struct;
# 695 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct {
 knh_type_t type;
 knh_ushort_t ctype;
 knh_String_t *name;
 size_t start;
 size_t len;
 int dbtype;
} knh_dbschema_t;

typedef struct knh_ResultSet {
 struct knh_Connection_t *conn;
 knh_dbcur_t *dbcur;
 knh_fdbcurfree dbcur_free;
 knh_String_t *tableName;
 knh_class_t tcid;
 knh_ushort_t column_size;
 knh_dbschema_t *column;
 knh_Bytes_t *databuf;
 size_t count;
} knh_ResultSet_struct;
# 734 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_Exception {
 knh_flag_t flag;
 knh_expt_t eid;
 knh_String_t* message;
 knh_Object_t* bag;
 knh_Array_t* traces;
 char* file;
 int line;
} knh_Exception_struct;






typedef struct knh_ExceptionHandler {
 jmp_buf jmpbuf;
 knh_sfp_t *esp;
 knh_code_t *pc;
 struct knh_Exception_t* caught;
} knh_ExceptionHandler_struct;






typedef struct knh_Script_t {
 knh_hObject_t h;
 knh_Object_t **fields;
} knh_Script_t ;
# 785 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_NameSpace {
 struct knh_NameSpace_t* parent;
 knh_String_t* nsname;
 knh_Array_t* imports;
 struct knh_DictSet_t* name2cidDictSet;
 struct knh_DictSet_t* func2cidDictSet;
 struct knh_DictMap_t* lconstDictMap;
 struct knh_DictMap_t* tag2urnDictMap;
 struct knh_Script_t* script;


} knh_NameSpace_struct;




typedef struct knh_System {
 knh_uintptr_t sysid;
 size_t ctxcount;

 struct knh_NameSpace_t* ns;
 struct knh_DictMap_t* props;
 struct knh_InputStream_t* in;
 struct knh_OutputStream_t* out;
 struct knh_OutputStream_t* err;
 struct knh_String_t* enc;
 knh_String_t *homeDir;

 struct knh_DictMap_t *GlobalConstDictMap;
 struct knh_DictIdx_t *FileNameDictIdx;
 struct knh_DictIdx_t *FieldNameDictIdx;
 struct knh_HashMap_t* MethodFieldHashMap;
 struct knh_DictSet_t *ExptNameDictSet;
 struct knh_DictMap_t* NameSpaceTableDictMap;
 struct knh_DictMap_t* URNAliasDictMap;
 struct knh_DictSet_t *DriversTableDictSet;
 struct knh_DictSet_t *SpecFuncDictSet;
 struct knh_Array_t *UsingResources;


 struct knh_DictMap_t *sysnsDictMap_UNUSED;
 struct knh_DictSet_t *funcDictSet_UNUSED;

} knh_System_struct;
# 33 "/usr/local/include/konoha/gen/konoha_class_.h" 2 3
# 1 "/usr/local/include/konoha/class/konohac.h" 1 3
# 32 "/usr/local/include/konoha/class/konohac.h" 3
# 1 "/usr/local/include/konoha/class/konoha.h" 1 3
# 33 "/usr/local/include/konoha/class/konohac.h" 2 3
# 42 "/usr/local/include/konoha/class/konohac.h" 3
typedef knh_ushort_t knh_token_t;
typedef knh_ushort_t knh_stmt_t;
# 64 "/usr/local/include/konoha/class/konohac.h" 3
typedef struct knh_Token {
 knh_type_t type;
 union {
  knh_token_t tt_next;
  knh_short_t index;
  knh_methodn_t mn;
  knh_token_t tt_op;
  knh_fieldn_t fn;
  knh_class_t cid;
 };
 union {
  knh_Object_t* data;
  struct knh_Array_t* list;
  struct knh_String_t* text;
  struct knh_Token_t* token;
  struct knh_Method_t* mtd;
  struct knh_Int_t *num;
 };
} knh_Token_struct;

typedef struct knh_tokens_t {
 struct knh_Token_t** ts;
 int meta;
 int c;
 int e;
} knh_tokens_t;
# 120 "/usr/local/include/konoha/class/konohac.h" 3
typedef struct knh_Stmt {
 knh_type_t type;
 knh_short_t line_end;
 knh_ushort_t size;
 knh_ushort_t capacity;
 union {
  knh_Object_t** terms;
  struct knh_Token_t** tokens;
  struct knh_Stmt_t** stmts;
 };
 union {
  struct knh_DictMap_t* metaDictMap;
  struct knh_String_t* errMsg;
 };
 struct knh_Stmt_t* next;
} knh_Stmt_struct;
# 148 "/usr/local/include/konoha/class/konohac.h" 3
typedef unsigned char knh_opcode_t;
typedef int knh_labelid_t;
typedef knh_short_t knh_sfi_t;

typedef struct {
 knh_sfi_t i;
 size_t n;
} knh_sfx_t;

typedef struct {

 void *codeaddr;

 knh_opcode_t opcode;

 void *jumpaddr;

 union {
  knh_labelid_t a1;
  knh_code_t *jumppc;
 };
 void *nextaddr;
} knh_kode_t;
# 198 "/usr/local/include/konoha/class/konohac.h" 3
typedef struct {
 int offset;
 struct knh_Token_t *tklabel;
} knh_labeltbl_t ;

typedef knh_uint64_t knh_rtti_t;

typedef struct knh_Asm {
 knh_flag_t flag;
 knh_class_t this_cid;
 struct knh_NameSpace_t *ns;
 struct knh_Method_t *mtd;
 knh_type_t rtype;
 knh_ushort_t vars_size;
 knh_cfield_t* vars;
 knh_rtti_t nnrtti0;
 knh_rtti_t nnrtti;
 int level;
 knh_Array_t *registeredStmts;
 int stack;
 int globalidx;
 int llstep;

 struct knh_DictSet_t* name2labelIdDictSet;
 size_t labelmax;
 size_t labelcapacity;
 knh_labeltbl_t *labels;
 knh_Array_t* lstacks;
 struct knh_Stmt_t* finallyStmt;

 knh_fileid_t fileid;
 knh_sline_t line;
 struct knh_Bytes_t* elf;
 struct knh_Bytes_t* dwarf;
 knh_kode_t *prev_op;

 void *dlhdr;
 struct knh_Array_t *constPools;
 struct knh_Array_t *exportsMethods;
} knh_Asm_struct;






typedef struct {
 knh_ushort_t offset;
 knh_ushort_t line;
} knh_dwarf_t;

typedef struct knh_KLRCode {
 knh_code_t* code;
 size_t size;
 knh_fileid_t fileid;

 knh_dwarf_t* dwarf;
 size_t dsize;
} knh_KLRCode_struct;
# 34 "/usr/local/include/konoha/gen/konoha_class_.h" 2 3
# 3201 "/usr/local/include/konoha/gen/konoha_class_.h" 3
typedef struct knh_Iterator_t {
 knh_hObject_t h;
 knh_Iterator_struct *b;
 knh_fitrnext fnext_1;
} knh_Iterator_t;

typedef struct knh_HashMap_t {
 knh_hObject_t h;
 knh_HashMap_struct *b;
} knh_HashMap_t;

typedef struct knh_HashSet_t {
 knh_hObject_t h;
 knh_HashSet_struct *b;
} knh_HashSet_t;

typedef struct knh_Method_t {
 knh_hObject_t h;
 knh_Method_struct *b;
 knh_fmethod fcall_1;
 knh_code_t *pc_start;
} knh_Method_t;

typedef struct knh_Mapper_t {
 knh_hObject_t h;
 knh_Mapper_struct *b;
 knh_fmapper fmap_1;
} knh_Mapper_t;

typedef struct knh_ClassMap_t {
 knh_hObject_t h;
 knh_ClassMap_struct *b;
} knh_ClassMap_t;

typedef struct knh_Closure_t {
 knh_hObject_t h;
 knh_Closure_struct *b;
 knh_fmethod finvoke_1;
 knh_fmethod fcallcc_2;
} knh_Closure_t;

typedef struct knh_IntUnit_t {
 knh_hObject_t h;
 knh_IntUnit_struct *b;
} knh_IntUnit_t;

typedef struct knh_FloatUnit_t {
 knh_hObject_t h;
 knh_FloatUnit_struct *b;
} knh_FloatUnit_t;

typedef struct knh_BytesConv_t {
 knh_hObject_t h;
 knh_BytesConv_struct *b;
} knh_BytesConv_t;

typedef struct knh_StringUnit_t {
 knh_hObject_t h;
 knh_StringUnit_struct *b;
} knh_StringUnit_t;

typedef struct knh_InputStream_t {
 knh_hObject_t h;
 knh_InputStream_struct *b;
} knh_InputStream_t;

typedef struct knh_OutputStream_t {
 knh_hObject_t h;
 knh_OutputStream_struct *b;
} knh_OutputStream_t;

typedef struct knh_Connection_t {
 knh_hObject_t h;
 knh_Connection_struct *b;
} knh_Connection_t;

typedef struct knh_ResultSet_t {
 knh_hObject_t h;
 knh_ResultSet_struct *b;
} knh_ResultSet_t;

typedef struct knh_Exception_t {
 knh_hObject_t h;
 knh_Exception_struct *b;
} knh_Exception_t;

typedef struct knh_ExceptionHandler_t {
 knh_hObject_t h;
 knh_ExceptionHandler_struct *b;
} knh_ExceptionHandler_t;

typedef struct knh_NameSpace_t {
 knh_hObject_t h;
 knh_NameSpace_struct *b;
} knh_NameSpace_t;

typedef struct knh_System_t {
 knh_hObject_t h;
 knh_System_struct *b;
} knh_System_t;

typedef struct knh_Token_t {
 knh_hObject_t h;
 knh_Token_struct *b;
 knh_fileid_t fileid;
 knh_ushort_t line;
 knh_flag_t flag;
 knh_token_t tt;
} knh_Token_t;

typedef struct knh_Stmt_t {
 knh_hObject_t h;
 knh_Stmt_struct *b;
 knh_fileid_t fileid;
 knh_ushort_t line;
 knh_flag_t flag;
 knh_stmt_t stt;
} knh_Stmt_t;

typedef struct knh_Asm_t {
 knh_hObject_t h;
 knh_Asm_struct *b;
} knh_Asm_t;

typedef struct knh_KLRCode_t {
 knh_hObject_t h;
 knh_KLRCode_struct *b;
} knh_KLRCode_t;
# 48 "/usr/local/include/konoha/konoha_dev.h" 2 3
# 1 "/usr/local/include/konoha/gen/konoha_knhapi_.h" 1 3
# 31 "/usr/local/include/konoha/gen/konoha_knhapi_.h" 3
# 1 "/usr/local/include/konoha/gen/konoha_class_.h" 1 3
# 32 "/usr/local/include/konoha/gen/konoha_knhapi_.h" 2 3
# 171 "/usr/local/include/konoha/gen/konoha_knhapi_.h" 3
void konoha_addIODriver(Ctx *ctx, char *alias, knh_iodrv_t *d);
void konoha_addRegexDriver(Ctx *ctx, char *alias, knh_regex_drvapi_t *d);
void konoha_addDBDriver(Ctx *ctx, char *alias, knh_db_drvapi_t *d);
void knh_Glue_init(Ctx *ctx, knh_Glue_t *g, void *ptr, knh_fgfree gfree);
knh_Object_t* new_Glue(Ctx *ctx, char *lname, void *ptr, knh_fgfree gfree);
knh_OutputStream_t* new_FileOutputStream(Ctx *ctx, knh_bytes_t file, char *mode);
knh_OutputStream_t* new_BytesOutputStream(Ctx *ctx, knh_Bytes_t *ba);
knh_Array_t* new_Array(Ctx *ctx, knh_class_t p1, size_t capacity);
void knh_Array_add(Ctx *ctx, knh_Array_t *o, knh_Object_t *value);
knh_String_t* new_String__fbcnv(Ctx *ctx, knh_String_t *s, knh_fbcnv fbcnv, knh_BytesConv_t *bc);
knh_String_t* new_String(Ctx *ctx, knh_bytes_t t, knh_String_t *orign);
knh_bytes_t knh_String_tobytes(knh_String_t *o);
knh_bytes_t knh_StringNULL_tobytes(knh_String_t *o, knh_bytes_t def);
void konoha_addParserDriver(Ctx *ctx, char *alias, knh_parser_drvapi_t *d);
void konoha_addAffineMapper(Ctx *ctx, knh_class_t scid, char *text, knh_float_t scale, knh_float_t shift);
knh_bytes_t new_bytes(char *c);
knh_bytes_t new_bytes__2(char *buf, size_t len);
int knh_bytes_indexOf(knh_bytes_t base, knh_bytes_t delim);
int knh_bytes_strcmp(knh_bytes_t v1, knh_bytes_t v2);
int knh_bytes_strcasecmp(knh_bytes_t v1, knh_bytes_t v2);
knh_bool_t knh_bytes_equals(knh_bytes_t v1, knh_bytes_t v2);
knh_bool_t knh_bytes_equalsIgnoreCase(knh_bytes_t v1, knh_bytes_t v2);
knh_bool_t knh_bytes_startsWith(knh_bytes_t v1, knh_bytes_t v2);
knh_bool_t knh_bytes_endsWith(knh_bytes_t v1, knh_bytes_t v2);
knh_index_t knh_bytes_index(knh_bytes_t v, knh_intptr_t ch);
knh_index_t knh_bytes_rindex(knh_bytes_t v, knh_intptr_t ch);
knh_bytes_t knh_bytes_first(knh_bytes_t t, knh_intptr_t loc);
knh_bytes_t knh_bytes_last(knh_bytes_t t, knh_intptr_t loc);
knh_bytes_t knh_bytes_skipscheme(knh_bytes_t t);
char* knh_format_bytes(char *buf, size_t bufsiz, knh_bytes_t t);
knh_intptr_t knh_bytes_toint(knh_bytes_t t);
knh_float_t knh_bytes_tofloat(knh_bytes_t t);
knh_int64_t knh_bytes_toint64(knh_bytes_t t);
knh_ClassSpec_t* new_Vocabulary(Ctx *ctx, char *lang, char *defval, ...);
void konoha_addVocabularyMapper(Ctx *ctx, knh_class_t scid, char *text);
void knh_ResultSet_initColumn(Ctx *ctx, knh_ResultSet_t *o, size_t column_size);
void knh_ResultSet_setName(Ctx *ctx, knh_ResultSet_t *o, size_t n, knh_String_t *name);
void knh_ResultSet_initData(Ctx *ctx, knh_ResultSet_t *o);
void knh_ResultSet_setInt(Ctx *ctx, knh_ResultSet_t *o, size_t n, knh_int_t value);
void knh_ResultSet_setFloat(Ctx *ctx, knh_ResultSet_t *o, size_t n, knh_float_t value);
void knh_ResultSet_setText(Ctx *ctx, knh_ResultSet_t *o, size_t n, knh_bytes_t t);
void knh_ResultSet_setBlob(Ctx *ctx, knh_ResultSet_t *o, size_t n, knh_bytes_t t);
void knh_ResultSet_setNULL(Ctx *ctx, knh_ResultSet_t *o, size_t n);
void knh_putsfp(Ctx *ctx, knh_sfp_t *lsfp, int n, knh_Object_t *obj);
void knh_Closure_invokesfp(Ctx *ctx, knh_Closure_t *c, knh_sfp_t *lsfp, int argc);
knh_sfp_t* knh_Closure_invokef(Ctx *ctx, knh_Closure_t *c, const char *fmt, ...);
knh_ClassSpec_t* new_Unit(Ctx *ctx, char *tag, knh_float_t min, knh_float_t max, knh_float_t defv, knh_float_t step);
knh_InputStream_t* new_FileInputStream(Ctx *ctx, knh_bytes_t file);
knh_InputStream_t* new_BytesInputStream(Ctx *ctx, knh_Bytes_t *ba, size_t s, size_t e);
knh_InputStream_t* new_StringInputStream(Ctx *ctx, knh_String_t *str, size_t s, size_t e);
knh_Exception_t* new_Exception(Ctx *ctx, knh_String_t *msg);
knh_Exception_t* new_Exception__b(Ctx *ctx, knh_bytes_t msg);
void knh_perrno(Ctx *ctx, char *emsg, char *func, char *file, int line);
void knh_throw_OutOfIndex(Ctx *ctx, knh_int_t n, size_t max, char *file, int line);
knh_Bytes_t* new_Bytes(Ctx *ctx, size_t capacity);
knh_bytes_t knh_Bytes_tobytes(knh_Bytes_t *o);
void knh_Bytes_clear(knh_Bytes_t *o, size_t pos);
void knh_Bytes_putc(Ctx *ctx, knh_Bytes_t *o, int ch);
void knh_Bytes_write(Ctx *ctx, knh_Bytes_t *o, knh_bytes_t v);
void knh_putc(Ctx *ctx, knh_OutputStream_t *w, int ch);
void knh_write(Ctx *ctx, knh_OutputStream_t *w, knh_bytes_t s);
void knh_flush(Ctx *ctx, knh_OutputStream_t *w);
void knh_print(Ctx *ctx, knh_OutputStream_t *w, knh_bytes_t s);
void knh_println(Ctx *ctx, knh_OutputStream_t *w, knh_bytes_t s);
void knh_write_EOL(Ctx *ctx, knh_OutputStream_t *w);
void knh_write_TAB(Ctx *ctx, knh_OutputStream_t *w);
void knh_write_BOL(Ctx *ctx, knh_OutputStream_t *w);
void knh_format(Ctx *ctx, knh_OutputStream_t *w, knh_methodn_t mn, knh_Object_t *o, knh_Object_t *m);
void knh_printf(Ctx *ctx, knh_OutputStream_t *w, char *fmt, ...);
void konoha_says(Ctx *ctx, int type, char *fmt, ...);
void konoha_addAliasURN(Ctx *ctx, char *alias, char *urn);
void konoha_loadIntConstData(Ctx *ctx, knh_IntConstData_t *data);
void konoha_loadFloatConstData(Ctx *ctx, knh_FloatConstData_t *data);
void konoha_loadStringConstData(Ctx *ctx, knh_StringConstData_t *data);
void konoha_addClassSpecFunc(Ctx *ctx, char *urn, knh_fspec func);
void knh_sfp_boxing(Ctx *ctx, knh_sfp_t *sfp);
void knh_sfp_unboxing(Ctx *ctx, knh_sfp_t *sfp);
void knh_esp1_sformat(Ctx *ctx, knh_Method_t *mtd, knh_OutputStream_t *w, knh_Object_t *m);
void knh_esp1_format(Ctx *ctx, knh_methodn_t mn, knh_OutputStream_t *w, knh_Object_t *m);
void knh_throw_TODO(Ctx *ctx, char *file, int line, char *func);
void knh_throwException(Ctx *ctx, knh_Exception_t *e, char *file, int line);
void knh_throw__s(Ctx *ctx, char *msg, char *file, int line);
void knh_throw(Ctx *ctx, knh_Object_t *e, char *file, int line);
void konoha_throwSecurityException(void);
knh_Object_t* new_Object_boxing(Ctx *ctx, knh_class_t cid, knh_sfp_t *sfp);
char* KNH_SAFEFILE(char *file);
Ctx* konoha_getCurrentContext(void);
Ctx* konoha_getThreadContext(Ctx *ctx);
int konoha_isDebugMode();
int konoha_parseopt(konoha_t konoha, int argc, char **argv);
char* konoha_eval(konoha_t konoha, char *script);
void konoha_readFile(Ctx *ctx, char *fpath);
void konoha_read(konoha_t konoha, char *fpath);
int konoha_main(konoha_t konoha, int argc, char **argv);
void konoha_shell(konoha_t konoha);
konoha_t konoha_open(size_t stacksize);
void konoha_close(konoha_t konoha);
void konoha_SETv(Ctx *ctx, knh_Object_t **v, knh_Object_t *o);
void konoha_FINALv(Ctx *ctx, knh_Object_t **v);
char* knh_format_ospath(Ctx *ctx, char *buf, size_t bufsiz, knh_bytes_t path);
# 49 "/usr/local/include/konoha/konoha_dev.h" 2 3





# 1 "/usr/local/include/konoha/konoha_glue.h" 1 3
# 55 "/usr/local/include/konoha/konoha_dev.h" 2 3
# 1 "/usr/local/include/konoha/konoha_gc.h" 1 3
# 56 "/usr/local/include/konoha/konoha_dev.h" 2 3
# 1 "/usr/local/include/konoha/konohac_t.h" 1 3
# 45 "/usr/local/include/konoha/konohac_t.h" 3
int knh_Method_pctoline(knh_Method_t *mtd, knh_code_t *pc);
# 57 "/usr/local/include/konoha/konoha_dev.h" 2 3







# 1 "/usr/local/include/konoha/konoha_vm.h" 1 3
# 65 "/usr/local/include/konoha/konoha_dev.h" 2 3
# 1 "/usr/local/include/konoha/konoha_macros.h" 1 3
# 66 "/usr/local/include/konoha/konoha_dev.h" 2 3
# 1 "/usr/local/include/konoha/konoha_debug.h" 1 3
# 67 "/usr/local/include/konoha/konoha_dev.h" 2 3
# 33 "/usr/local/include/konoha.h" 2 3
# 2 "imagemagick.c" 2
# 1 "/usr/include/wand/MagickWand.h" 1 3 4
# 29 "/usr/include/wand/MagickWand.h" 3 4
# 1 "/usr/include/magick/magick-config.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/magick/magick-config.h" 2 3 4


# 1 "/usr/include/magick/magick-config-32.h" 1 3 4
# 8 "/usr/include/magick/magick-config.h" 2 3 4
# 30 "/usr/include/wand/MagickWand.h" 2 3 4
# 137 "/usr/include/wand/MagickWand.h" 3 4
typedef struct _MagickWand
  MagickWand;

# 1 "/usr/include/magick/MagickCore.h" 1 3 4
# 141 "/usr/include/magick/MagickCore.h" 3 4
# 1 "/usr/include/magick/magick-type.h" 1 3 4
# 62 "/usr/include/magick/magick-type.h" 3 4
typedef double MagickRealType;




typedef unsigned short Quantum;


typedef unsigned long QuantumAny;
# 117 "/usr/include/magick/magick-type.h" 3 4
typedef unsigned int MagickStatusType;


typedef long long MagickOffsetType;
typedef unsigned long long MagickSizeType;
# 138 "/usr/include/magick/magick-type.h" 3 4
typedef enum
{
  UndefinedChannel,
  RedChannel = 0x0001,
  GrayChannel = 0x0001,
  CyanChannel = 0x0001,
  GreenChannel = 0x0002,
  MagentaChannel = 0x0002,
  BlueChannel = 0x0004,
  YellowChannel = 0x0004,
  AlphaChannel = 0x0008,
  OpacityChannel = 0x0008,
  MatteChannel = 0x0008,
  BlackChannel = 0x0020,
  IndexChannel = 0x0020,
  AllChannels = 0xff,
  DefaultChannels = (AllChannels &~ OpacityChannel)
} ChannelType;

typedef enum
{
  UndefinedClass,
  DirectClass,
  PseudoClass
} ClassType;

typedef enum
{
  MagickFalse = 0,
  MagickTrue = 1
} MagickBooleanType;

typedef struct _BlobInfo BlobInfo;

typedef struct _ExceptionInfo ExceptionInfo;

typedef struct _Image Image;

typedef struct _ImageInfo ImageInfo;
# 142 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/animate.h" 1 3 4
# 25 "/usr/include/magick/animate.h" 3 4
extern MagickBooleanType
  AnimateImages(const ImageInfo *,Image *);
# 143 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/annotate.h" 1 3 4
# 25 "/usr/include/magick/annotate.h" 3 4
# 1 "/usr/include/magick/draw.h" 1 3 4
# 25 "/usr/include/magick/draw.h" 3 4
# 1 "/usr/include/magick/geometry.h" 1 3 4
# 25 "/usr/include/magick/geometry.h" 3 4
typedef enum
{

  NoValue = 0x0000,

  PsiValue = 0x0001,
  XValue = 0x0001,

  XiValue = 0x0002,
  YValue = 0x0002,

  RhoValue = 0x0004,
  WidthValue = 0x0004,

  SigmaValue = 0x0008,
  HeightValue = 0x0008,
  ChiValue = 0x0010,
  XiNegative = 0x0020,

  XNegative = 0x0020,
  PsiNegative = 0x0040,

  YNegative = 0x0040,
  ChiNegative = 0x0080,
  PercentValue = 0x1000,
  AspectValue = 0x2000,
  LessValue = 0x4000,
  GreaterValue = 0x8000,
  AreaValue = 0x10000,
  DecimalValue = 0x20000,

  AllValues = 0x7fffffff
} GeometryFlags;
# 73 "/usr/include/magick/geometry.h" 3 4
typedef enum
{
  UndefinedGravity,
  ForgetGravity = 0,
  NorthWestGravity = 1,
  NorthGravity = 2,
  NorthEastGravity = 3,
  WestGravity = 4,
  CenterGravity = 5,
  EastGravity = 6,
  SouthWestGravity = 7,
  SouthGravity = 8,
  SouthEastGravity = 9,
  StaticGravity = 10
} GravityType;

typedef struct _AffineMatrix
{
  double
    sx,
    rx,
    ry,
    sy,
    tx,
    ty;
} AffineMatrix;

typedef struct _GeometryInfo
{
  double
    rho,
    sigma,
    xi,
    psi,
    chi;
} GeometryInfo;

typedef struct _RectangleInfo
{
  unsigned long
    width,
    height;

  long
    x,
    y;
} RectangleInfo;

extern char
  *GetPageGeometry(const char *);

extern MagickBooleanType
  IsGeometry(const char *),
  IsSceneGeometry(const char *,const MagickBooleanType);

extern MagickStatusType
  GetGeometry(const char *,long *,long *,unsigned long *,unsigned long *),
  ParseAbsoluteGeometry(const char *,RectangleInfo *),
  ParseAffineGeometry(const char *,AffineMatrix *),
  ParseGeometry(const char *,GeometryInfo *),
  ParseGravityGeometry(Image *,const char *,RectangleInfo *),
  ParseMetaGeometry(const char *,long *,long *,unsigned long *,unsigned long *),
  ParsePageGeometry(Image *,const char *,RectangleInfo *),
  ParseSizeGeometry(Image *,const char *,RectangleInfo *);

extern void
  GravityAdjustGeometry(const unsigned long,const unsigned long,
    const GravityType,RectangleInfo *),
  SetGeometry(const Image *,RectangleInfo *),
  SetGeometryInfo(GeometryInfo *);
# 26 "/usr/include/magick/draw.h" 2 3 4
# 1 "/usr/include/magick/image.h" 1 3 4
# 25 "/usr/include/magick/image.h" 3 4
# 1 "/usr/include/magick/color.h" 1 3 4
# 25 "/usr/include/magick/color.h" 3 4
# 1 "/usr/include/magick/pixel.h" 1 3 4
# 25 "/usr/include/magick/pixel.h" 3 4
# 1 "/usr/include/magick/colorspace.h" 1 3 4
# 25 "/usr/include/magick/colorspace.h" 3 4
typedef enum
{
  UndefinedColorspace,
  RGBColorspace,
  GRAYColorspace,
  TransparentColorspace,
  OHTAColorspace,
  LabColorspace,
  XYZColorspace,
  YCbCrColorspace,
  YCCColorspace,
  YIQColorspace,
  YPbPrColorspace,
  YUVColorspace,
  CMYKColorspace,
  sRGBColorspace,
  HSBColorspace,
  HSLColorspace,
  HWBColorspace,
  Rec601LumaColorspace,
  Rec601YCbCrColorspace,
  Rec709LumaColorspace,
  Rec709YCbCrColorspace,
  LogColorspace,
  CMYColorspace
} ColorspaceType;

extern MagickBooleanType
  RGBTransformImage(Image *,const ColorspaceType),
  SetImageColorspace(Image *,const ColorspaceType),
  TransformRGBImage(Image *,const ColorspaceType);
# 26 "/usr/include/magick/pixel.h" 2 3 4
# 1 "/usr/include/magick/constitute.h" 1 3 4
# 25 "/usr/include/magick/constitute.h" 3 4
typedef enum
{
  UndefinedPixel,
  CharPixel,
  DoublePixel,
  FloatPixel,
  IntegerPixel,
  LongPixel,
  QuantumPixel,
  ShortPixel
} StorageType;

extern Image
  *ConstituteImage(const unsigned long,const unsigned long,const char *,
    const StorageType,const void *,ExceptionInfo *),
  *PingImage(const ImageInfo *,ExceptionInfo *),
  *ReadImage(const ImageInfo *,ExceptionInfo *),
  *ReadInlineImage(const ImageInfo *,const char *,ExceptionInfo *);

extern MagickBooleanType
  WriteImage(const ImageInfo *,Image *),
  WriteImages(const ImageInfo *,Image *,const char *,ExceptionInfo *);

extern void
  DestroyConstitute(void);
# 27 "/usr/include/magick/pixel.h" 2 3 4

typedef struct _LongPixelPacket
{
  unsigned long
    red,
    green,
    blue,
    opacity,
    index;
} LongPixelPacket;

typedef struct _MagickPixelPacket
{
  ClassType
    storage_class;

  ColorspaceType
    colorspace;

  MagickBooleanType
    matte;

  double
    fuzz;

  unsigned long
    depth;

  MagickRealType
    red,
    green,
    blue,
    opacity,
    index;
} MagickPixelPacket;

typedef Quantum IndexPacket;

typedef struct _PixelPacket
{







  Quantum
    blue,
    green,
    red,
    opacity;

} PixelPacket;

extern MagickBooleanType
  ExportImagePixels(const Image *,const long,const long,const unsigned long,
    const unsigned long,const char *,const StorageType,void *,ExceptionInfo *),
  ImportImagePixels(Image *,const long,const long,const unsigned long,
    const unsigned long,const char *,const StorageType,const void *);

extern void
  GetMagickPixelPacket(const Image *,MagickPixelPacket *);
# 26 "/usr/include/magick/color.h" 2 3 4
# 1 "/usr/include/magick/exception.h" 1 3 4
# 26 "/usr/include/magick/exception.h" 3 4
# 1 "/usr/include/magick/semaphore.h" 1 3 4
# 25 "/usr/include/magick/semaphore.h" 3 4
typedef struct SemaphoreInfo
  SemaphoreInfo;

extern MagickBooleanType
  LockSemaphoreInfo(SemaphoreInfo *),
  UnlockSemaphoreInfo(SemaphoreInfo *);

extern SemaphoreInfo
  *AllocateSemaphoreInfo(void),
  *DestroySemaphoreInfo(SemaphoreInfo *);

extern void
  AcquireSemaphoreInfo(SemaphoreInfo **),
  DestroySemaphore(void),
  InitializeSemaphore(void),
  RelinquishSemaphoreInfo(SemaphoreInfo *);
# 27 "/usr/include/magick/exception.h" 2 3 4

typedef enum
{
  UndefinedException,
  WarningException = 300,
  ResourceLimitWarning = 300,
  TypeWarning = 305,
  OptionWarning = 310,
  DelegateWarning = 315,
  MissingDelegateWarning = 320,
  CorruptImageWarning = 325,
  FileOpenWarning = 330,
  BlobWarning = 335,
  StreamWarning = 340,
  CacheWarning = 345,
  CoderWarning = 350,
  ModuleWarning = 355,
  DrawWarning = 360,
  ImageWarning = 365,
  WandWarning = 370,
  XServerWarning = 380,
  MonitorWarning = 385,
  RegistryWarning = 390,
  ConfigureWarning = 395,
  ErrorException = 400,
  ResourceLimitError = 400,
  TypeError = 405,
  OptionError = 410,
  DelegateError = 415,
  MissingDelegateError = 420,
  CorruptImageError = 425,
  FileOpenError = 430,
  BlobError = 435,
  StreamError = 440,
  CacheError = 445,
  CoderError = 450,
  ModuleError = 455,
  DrawError = 460,
  ImageError = 465,
  WandError = 470,
  XServerError = 480,
  MonitorError = 485,
  RegistryError = 490,
  ConfigureError = 495,
  FatalErrorException = 700,
  ResourceLimitFatalError = 700,
  TypeFatalError = 705,
  OptionFatalError = 710,
  DelegateFatalError = 715,
  MissingDelegateFatalError = 720,
  CorruptImageFatalError = 725,
  FileOpenFatalError = 730,
  BlobFatalError = 735,
  StreamFatalError = 740,
  CacheFatalError = 745,
  CoderFatalError = 750,
  ModuleFatalError = 755,
  DrawFatalError = 760,
  ImageFatalError = 765,
  WandFatalError = 770,
  XServerFatalError = 780,
  MonitorFatalError = 785,
  RegistryFatalError = 790,
  ConfigureFatalError = 795
} ExceptionType;

struct _ExceptionInfo
{
  ExceptionType
    severity;

  int
    error_number;

  char
    *reason,
    *description;

  void
    *exceptions;

  MagickBooleanType
    relinquish;

  SemaphoreInfo
    *semaphore;

  unsigned long
    signature;
};

typedef void
  (*ErrorHandler)(const ExceptionType,const char *,const char *);

typedef void
  (*FatalErrorHandler)(const ExceptionType,const char *,const char *);

typedef void
  (*WarningHandler)(const ExceptionType,const char *,const char *);

extern char
  *GetExceptionMessage(const int);

extern const char
  *GetLocaleExceptionMessage(const ExceptionType,const char *);

extern ErrorHandler
  SetErrorHandler(ErrorHandler);

extern ExceptionInfo
  *AcquireExceptionInfo(void),
  *DestroyExceptionInfo(ExceptionInfo *);

extern FatalErrorHandler
  SetFatalErrorHandler(FatalErrorHandler);

extern MagickBooleanType
  ThrowException(ExceptionInfo *,const ExceptionType,const char *,
    const char *),
  ThrowMagickException(ExceptionInfo *,const char *,const char *,
    const unsigned long,const ExceptionType,const char *,const char *,...)
    __attribute__((format (printf,7,8))),
  ThrowMagickExceptionList(ExceptionInfo *,const char *,const char *,
    const unsigned long,const ExceptionType,const char *,const char *,va_list)
    __attribute__((format (printf,7,0)));

extern void
  CatchException(ExceptionInfo *),
  ClearMagickException(ExceptionInfo *),
  GetExceptionInfo(ExceptionInfo *),
  InheritException(ExceptionInfo *,const ExceptionInfo *),
  MagickError(const ExceptionType,const char *,const char *),
  MagickFatalError(const ExceptionType,const char *,const char *),
  MagickWarning(const ExceptionType,const char *,const char *);

extern WarningHandler
  SetWarningHandler(WarningHandler);
# 27 "/usr/include/magick/color.h" 2 3 4

typedef enum
{
  UndefinedCompliance,
  NoCompliance = 0x0000,
  SVGCompliance = 0x0001,
  X11Compliance = 0x0002,
  XPMCompliance = 0x0004,
  AllCompliance = 0x7fffffff
} ComplianceType;

typedef struct _ColorInfo
{
  char
    *path,
    *name;

  ComplianceType
    compliance;

  MagickPixelPacket
    color;

  MagickBooleanType
    stealth;

  struct _ColorInfo
    *previous,
    *next;

  unsigned long
    signature;
} ColorInfo;

typedef struct _ColorPacket
{
  PixelPacket
    pixel;

  IndexPacket
    index;

  MagickSizeType
    count;
} ColorPacket;

typedef struct _ErrorInfo
{
  double
    mean_error_per_pixel,
    normalized_mean_error,
    normalized_maximum_error;
} ErrorInfo;

extern char
  **GetColorList(const char *,unsigned long *,ExceptionInfo *);

extern const ColorInfo
  *GetColorInfo(const char *,ExceptionInfo *),
  **GetColorInfoList(const char *,unsigned long *,ExceptionInfo *);

extern ColorPacket
  *GetImageHistogram(const Image *,unsigned long *,ExceptionInfo *);

extern Image
  *UniqueImageColors(const Image *,ExceptionInfo *);

extern MagickBooleanType
  IsColorSimilar(const Image *,const PixelPacket *,const PixelPacket *),
  IsGrayImage(const Image *,ExceptionInfo *),
  IsHistogramImage(const Image *,ExceptionInfo *),
  IsImageSimilar(const Image *,const Image *,long *x,long *y,ExceptionInfo *),
  IsMagickColorSimilar(const MagickPixelPacket *,const MagickPixelPacket *),
  IsMonochromeImage(const Image *,ExceptionInfo *),
  IsOpacitySimilar(const Image *,const PixelPacket *,const PixelPacket *),
  IsOpaqueImage(const Image *,ExceptionInfo *),
  IsPaletteImage(const Image *,ExceptionInfo *),
  ListColorInfo(FILE *,ExceptionInfo *),
  QueryColorDatabase(const char *,PixelPacket *,ExceptionInfo *),
  QueryColorname(const Image *,const PixelPacket *,const ComplianceType,char *,
    ExceptionInfo *),
  QueryMagickColor(const char *,MagickPixelPacket *,ExceptionInfo *),
  QueryMagickColorname(const Image *,const MagickPixelPacket *,
    const ComplianceType,const MagickBooleanType,char *,ExceptionInfo *);

extern unsigned long
  GetNumberColors(const Image *,FILE *,ExceptionInfo *);

extern void
  ConcatenateColorComponent(const MagickPixelPacket *,const ChannelType,
    const ComplianceType,char *),
  DestroyColorList(void),
  GetColorTuple(const MagickPixelPacket *,const MagickBooleanType,char *);
# 26 "/usr/include/magick/image.h" 2 3 4




typedef enum
{
  UndefinedAlphaChannel,
  ActivateAlphaChannel,
  DeactivateAlphaChannel,
  ResetAlphaChannel,
  SetAlphaChannel
} AlphaChannelType;

typedef enum
{
  UndefinedType,
  BilevelType,
  GrayscaleType,
  GrayscaleMatteType,
  PaletteType,
  PaletteMatteType,
  TrueColorType,
  TrueColorMatteType,
  ColorSeparationType,
  ColorSeparationMatteType,
  OptimizeType,
  PaletteBilevelMatteType
} ImageType;

typedef enum
{
  UndefinedInterlace,
  NoInterlace,
  LineInterlace,
  PlaneInterlace,
  PartitionInterlace,
  GIFInterlace,
  JPEGInterlace,
  PNGInterlace
} InterlaceType;

typedef enum
{
  UndefinedOrientation,
  TopLeftOrientation,
  TopRightOrientation,
  BottomRightOrientation,
  BottomLeftOrientation,
  LeftTopOrientation,
  RightTopOrientation,
  RightBottomOrientation,
  LeftBottomOrientation
} OrientationType;

typedef enum
{
  UndefinedResolution,
  PixelsPerInchResolution,
  PixelsPerCentimeterResolution
} ResolutionType;

typedef struct _PrimaryInfo
{
  double
    x,
    y,
    z;
} PrimaryInfo;

typedef struct _SegmentInfo
{
  double
    x1,
    y1,
    x2,
    y2;
} SegmentInfo;

typedef enum
{
  UndefinedTransmitType,
  FileTransmitType,
  BlobTransmitType,
  StreamTransmitType,
  ImageTransmitType
} TransmitType;

typedef struct _ChromaticityInfo
{
  PrimaryInfo
    red_primary,
    green_primary,
    blue_primary,
    white_point;
} ChromaticityInfo;

# 1 "/usr/include/magick/blob.h" 1 3 4
# 25 "/usr/include/magick/blob.h" 3 4
# 1 "/usr/include/magick/image.h" 1 3 4
# 26 "/usr/include/magick/blob.h" 2 3 4
# 1 "/usr/include/magick/stream.h" 1 3 4
# 25 "/usr/include/magick/stream.h" 3 4
typedef size_t
  (*StreamHandler)(const Image *,const void *,const size_t);

extern Image
  *ReadStream(const ImageInfo *,StreamHandler,ExceptionInfo *);

extern MagickBooleanType
  WriteStream(const ImageInfo *,Image *,StreamHandler);
# 27 "/usr/include/magick/blob.h" 2 3 4



typedef enum
{
  ReadMode,
  WriteMode,
  IOMode
} MapMode;

extern FILE
  *GetBlobFileHandle(const Image *);

extern Image
  *BlobToImage(const ImageInfo *,const void *,const size_t,ExceptionInfo *),
  *PingBlob(const ImageInfo *,const void *,const size_t,ExceptionInfo *);

extern MagickBooleanType
  BlobToFile(char *,const void *,const size_t,ExceptionInfo *),
  FileToImage(Image *,const char *),
  GetBlobError(const Image *),
  ImageToFile(Image *,char *,ExceptionInfo *),
  InjectImageBlob(const ImageInfo *,Image *,const char *),
  IsBlobExempt(const Image *),
  IsBlobSeekable(const Image *),
  IsBlobTemporary(const Image *);

extern MagickSizeType
  GetBlobSize(const Image *);

extern StreamHandler
  GetBlobStreamHandler(const Image *);

extern unsigned char
  *FileToBlob(const char *,const size_t,size_t *,ExceptionInfo *),
  *GetBlobStreamData(const Image *),
  *ImageToBlob(const ImageInfo *,Image *,size_t *,ExceptionInfo *),
  *ImagesToBlob(const ImageInfo *,Image *,size_t *,ExceptionInfo *);

extern void
  DestroyBlob(Image *),
  SetBlobExempt(Image *,const MagickBooleanType);
# 123 "/usr/include/magick/image.h" 2 3 4

# 1 "/usr/include/magick/cache-view.h" 1 3 4
# 27 "/usr/include/magick/cache-view.h" 3 4
typedef enum
{
  UndefinedVirtualPixelMethod,
  BackgroundVirtualPixelMethod,
  ConstantVirtualPixelMethod,
  DitherVirtualPixelMethod,
  EdgeVirtualPixelMethod,
  MirrorVirtualPixelMethod,
  RandomVirtualPixelMethod,
  TileVirtualPixelMethod,
  TransparentVirtualPixelMethod,
  MaskVirtualPixelMethod,
  BlackVirtualPixelMethod,
  GrayVirtualPixelMethod,
  WhiteVirtualPixelMethod
} VirtualPixelMethod;

typedef struct _ViewInfo
  ViewInfo;

extern const PixelPacket
  *AcquireCacheViewPixels(const ViewInfo *,const long,const long,
    const unsigned long,const unsigned long,ExceptionInfo *);

extern ClassType
  GetCacheViewStorageClass(const ViewInfo *);

extern ColorspaceType
  GetCacheViewColorspace(const ViewInfo *);

extern const IndexPacket
  *AcquireCacheViewIndexes(const ViewInfo *);

extern ExceptionInfo
  *GetCacheViewException(const ViewInfo *);

extern IndexPacket
  *GetCacheViewIndexes(const ViewInfo *);

extern MagickBooleanType
  SetCacheViewStorageClass(ViewInfo *,const ClassType),
  SetCacheViewVirtualPixelMethod(ViewInfo *,const VirtualPixelMethod),
  SyncCacheView(ViewInfo *);

extern PixelPacket
  AcquireOneCacheViewPixel(const ViewInfo *,const long,const long,
    ExceptionInfo *),
  *GetCacheViewPixels(ViewInfo *,const long,const long,const unsigned long,
    const unsigned long),
  GetOneCacheViewPixel(const ViewInfo *,const long,const long),
  *SetCacheView(ViewInfo *,const long,const long,const unsigned long,
    const unsigned long);

extern ViewInfo
  *CloseCacheView(ViewInfo *),
  *CloneCacheView(const ViewInfo *),
  *OpenCacheView(const Image *);
# 125 "/usr/include/magick/image.h" 2 3 4

# 1 "/usr/include/magick/composite.h" 1 3 4
# 25 "/usr/include/magick/composite.h" 3 4
typedef enum
{
  UndefinedCompositeOp,
  NoCompositeOp,
  AddCompositeOp,
  AtopCompositeOp,
  BlendCompositeOp,
  BumpmapCompositeOp,
  ChangeMaskCompositeOp,
  ClearCompositeOp,
  ColorBurnCompositeOp,
  ColorDodgeCompositeOp,
  ColorizeCompositeOp,
  CopyBlackCompositeOp,
  CopyBlueCompositeOp,
  CopyCompositeOp,
  CopyCyanCompositeOp,
  CopyGreenCompositeOp,
  CopyMagentaCompositeOp,
  CopyOpacityCompositeOp,
  CopyRedCompositeOp,
  CopyYellowCompositeOp,
  DarkenCompositeOp,
  DstAtopCompositeOp,
  DstCompositeOp,
  DstInCompositeOp,
  DstOutCompositeOp,
  DstOverCompositeOp,
  DifferenceCompositeOp,
  DisplaceCompositeOp,
  DissolveCompositeOp,
  ExclusionCompositeOp,
  HardLightCompositeOp,
  HueCompositeOp,
  InCompositeOp,
  LightenCompositeOp,
  LinearLightCompositeOp,
  LuminizeCompositeOp,
  MinusCompositeOp,
  ModulateCompositeOp,
  MultiplyCompositeOp,
  OutCompositeOp,
  OverCompositeOp,
  OverlayCompositeOp,
  PlusCompositeOp,
  ReplaceCompositeOp,
  SaturateCompositeOp,
  ScreenCompositeOp,
  SoftLightCompositeOp,
  SrcAtopCompositeOp,
  SrcCompositeOp,
  SrcInCompositeOp,
  SrcOutCompositeOp,
  SrcOverCompositeOp,
  SubtractCompositeOp,
  ThresholdCompositeOp,
  XorCompositeOp,
  DivideCompositeOp
} CompositeOperator;

extern MagickBooleanType
  CompositeImage(Image *,const CompositeOperator,const Image *,const long,
    const long),
  CompositeImageChannel(Image *,const ChannelType,const CompositeOperator,
    const Image *,const long,const long);
# 127 "/usr/include/magick/image.h" 2 3 4
# 1 "/usr/include/magick/compress.h" 1 3 4
# 25 "/usr/include/magick/compress.h" 3 4
typedef enum
{
  UndefinedCompression,
  NoCompression,
  BZipCompression,
  FaxCompression,
  Group4Compression,
  JPEGCompression,
  JPEG2000Compression,
  LosslessJPEGCompression,
  LZWCompression,
  RLECompression,
  ZipCompression
} CompressionType;

typedef struct _Ascii85Info
  Ascii85Info;

extern MagickBooleanType
  HuffmanDecodeImage(Image *),
  HuffmanEncodeImage(const ImageInfo *,Image *),
  Huffman2DEncodeImage(const ImageInfo *,Image *),
  LZWEncodeImage(Image *,const size_t,unsigned char *),
  PackbitsEncodeImage(Image *,const size_t,unsigned char *),
  ZLIBEncodeImage(Image *,const size_t,unsigned char *);

extern void
  Ascii85Encode(Image *,const unsigned char),
  Ascii85Flush(Image *),
  Ascii85Initialize(Image *);
# 128 "/usr/include/magick/image.h" 2 3 4
# 1 "/usr/include/magick/effect.h" 1 3 4
# 25 "/usr/include/magick/effect.h" 3 4
typedef enum
{
  UndefinedNoise,
  UniformNoise,
  GaussianNoise,
  MultiplicativeGaussianNoise,
  ImpulseNoise,
  LaplacianNoise,
  PoissonNoise,
  RandomNoise
} NoiseType;

typedef enum
{
  UndefinedPreview,
  RotatePreview,
  ShearPreview,
  RollPreview,
  HuePreview,
  SaturationPreview,
  BrightnessPreview,
  GammaPreview,
  SpiffPreview,
  DullPreview,
  GrayscalePreview,
  QuantizePreview,
  DespecklePreview,
  ReduceNoisePreview,
  AddNoisePreview,
  SharpenPreview,
  BlurPreview,
  ThresholdPreview,
  EdgeDetectPreview,
  SpreadPreview,
  SolarizePreview,
  ShadePreview,
  RaisePreview,
  SegmentPreview,
  SwirlPreview,
  ImplodePreview,
  WavePreview,
  OilPaintPreview,
  CharcoalDrawingPreview,
  JPEGPreview
} PreviewType;

extern Image
  *AdaptiveBlurImage(const Image *,const double,const double,ExceptionInfo *),
  *AdaptiveBlurImageChannel(const Image *,const ChannelType,const double,
    const double,ExceptionInfo *),
  *AdaptiveSharpenImage(const Image *,const double,const double,
     ExceptionInfo *),
  *AdaptiveSharpenImageChannel(const Image *,const ChannelType,const double,
    const double,ExceptionInfo *),
  *AddNoiseImage(const Image *,const NoiseType,ExceptionInfo *),
  *AddNoiseImageChannel(const Image *,const ChannelType,const NoiseType,
    ExceptionInfo *),
  *BlurImage(const Image *,const double,const double,ExceptionInfo *),
  *BlurImageChannel(const Image *,const ChannelType,const double,const double,
    ExceptionInfo *),
  *DespeckleImage(const Image *,ExceptionInfo *),
  *EdgeImage(const Image *,const double,ExceptionInfo *),
  *EmbossImage(const Image *,const double,const double,ExceptionInfo *),
  *GaussianBlurImage(const Image *,const double,const double,ExceptionInfo *),
  *GaussianBlurImageChannel(const Image *,const ChannelType,const double,
    const double,ExceptionInfo *),
  *MedianFilterImage(const Image *,const double,ExceptionInfo *),
  *MotionBlurImage(const Image *,const double,const double,const double,
    ExceptionInfo *),
  *PreviewImage(const Image *,const PreviewType,ExceptionInfo *),
  *RadialBlurImage(const Image *,const double,ExceptionInfo *),
  *RadialBlurImageChannel(const Image *,const ChannelType,const double,
    ExceptionInfo *),
  *ReduceNoiseImage(const Image *,const double,ExceptionInfo *),
  *ShadeImage(const Image *,const MagickBooleanType,const double,const double,
    ExceptionInfo *),
  *SharpenImage(const Image *,const double,const double,ExceptionInfo *),
  *SharpenImageChannel(const Image *,const ChannelType,const double,
    const double,ExceptionInfo *),
  *SpreadImage(const Image *,const double,ExceptionInfo *),
  *UnsharpMaskImage(const Image *,const double,const double,const double,
    const double,ExceptionInfo *),
  *UnsharpMaskImageChannel(const Image *,const ChannelType,const double,
    const double,const double,const double,ExceptionInfo *);
# 129 "/usr/include/magick/image.h" 2 3 4

# 1 "/usr/include/magick/layer.h" 1 3 4
# 25 "/usr/include/magick/layer.h" 3 4
typedef enum
{
  UnrecognizedDispose,
  UndefinedDispose = 0,
  NoneDispose = 1,
  BackgroundDispose = 2,
  PreviousDispose = 3
} DisposeType;

typedef enum
{
  UndefinedLayer,
  CoalesceLayer,
  CompareAnyLayer,
  CompareClearLayer,
  CompareOverlayLayer,
  DisposeLayer,
  OptimizeLayer,
  OptimizeImageLayer,
  OptimizePlusLayer,
  OptimizeTransLayer,
  RemoveDupsLayer,
  RemoveZeroLayer,
  CompositeLayer,
  MergeLayer,
  FlattenLayer,
  MosaicLayer
} ImageLayerMethod;

extern Image
  *CoalesceImages(const Image *,ExceptionInfo *),
  *DisposeImages(const Image *,ExceptionInfo *),
  *CompareImageLayers(const Image *,const ImageLayerMethod,ExceptionInfo *),
  *DeconstructImages(const Image *,ExceptionInfo *),
  *MergeImageLayers(const Image *,const ImageLayerMethod,ExceptionInfo *),
  *OptimizeImageLayers(const Image *,ExceptionInfo *),
  *OptimizePlusImageLayers(const Image *,ExceptionInfo *);

extern void
  CompositeLayers(Image *,const CompositeOperator,Image *,const long,const long,
    ExceptionInfo *),
  OptimizeImageTransparency(const Image *,ExceptionInfo *),
  RemoveDuplicateLayers(Image **,ExceptionInfo *),
  RemoveZeroDelayLayers(Image **,ExceptionInfo *);
# 131 "/usr/include/magick/image.h" 2 3 4
# 1 "/usr/include/magick/monitor.h" 1 3 4
# 25 "/usr/include/magick/monitor.h" 3 4
typedef MagickBooleanType
  (*MagickProgressMonitor)(const char *,const MagickOffsetType,
    const MagickSizeType,void *);

 MagickProgressMonitor
  SetImageProgressMonitor(Image *,const MagickProgressMonitor,void *),
  SetImageInfoProgressMonitor(ImageInfo *,const MagickProgressMonitor,void *);
# 132 "/usr/include/magick/image.h" 2 3 4

# 1 "/usr/include/magick/profile.h" 1 3 4
# 25 "/usr/include/magick/profile.h" 3 4
# 1 "/usr/include/magick/string_.h" 1 3 4
# 26 "/usr/include/magick/string_.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 31 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stddef.h" 1 3 4
# 40 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 44 "/usr/include/time.h" 2 3 4
# 59 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 132 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 181 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));

# 229 "/usr/include/time.h" 3 4



extern struct tm *gmtime (__const time_t *__timer) __attribute__ ((__nothrow__));



extern struct tm *localtime (__const time_t *__timer) __attribute__ ((__nothrow__));





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__));



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__));





extern char *asctime (__const struct tm *__tp) __attribute__ ((__nothrow__));


extern char *ctime (__const time_t *__timer) __attribute__ ((__nothrow__));







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__));


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__));



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) __attribute__ ((__nothrow__));
# 312 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__));


extern int dysize (int __year) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 327 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__));


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     __attribute__ ((__nothrow__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__));


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__));
# 416 "/usr/include/time.h" 3 4

# 27 "/usr/include/magick/string_.h" 2 3 4


typedef struct _StringInfo
{
  char
    path[4096];

  unsigned char
    *datum;

  size_t
    length;

  unsigned long
    signature;
} StringInfo;

extern char
  *AcquireString(const char *),
  *CloneString(char **,const char *),
  *ConstantString(const char *),
  *DestroyString(char *),
  **DestroyStringList(char **),
  *EscapeString(const char *,const char),
  *FileToString(const char *,const size_t,ExceptionInfo *),
  *GetEnvironmentValue(const char *),
  **StringToArgv(const char *,int *),
  **StringToList(const char *),
  *StringInfoToString(const StringInfo *),
  *StringToken(const char *,char **);

extern const char
  *GetStringInfoPath(const StringInfo *);

extern double
  StringToDouble(const char *,const double);

extern long
  FormatMagickSize(const MagickSizeType,char *),
  FormatMagickString(char *,const size_t,const char *,...)
    __attribute__((format (printf,3,4))),
  FormatMagickStringList(char *,const size_t,const char *,va_list)
    __attribute__((format (printf,3,0))),
  FormatMagickTime(const time_t,const size_t,char *),
  LocaleCompare(const char *,const char *),
  LocaleNCompare(const char *,const char *,const size_t);

extern MagickBooleanType
  ConcatenateString(char **,const char *),
  SubstituteString(char **,const char *,const char *);

extern int
  CompareStringInfo(const StringInfo *,const StringInfo *);

extern size_t
  ConcatenateMagickString(char *,const char *,const size_t),
  CopyMagickString(char *,const char *,const size_t),
  GetStringInfoLength(const StringInfo *);

extern StringInfo
  *AcquireStringInfo(const size_t),
  *CloneStringInfo(const StringInfo *),
  *ConfigureFileToStringInfo(const char *),
  *DestroyStringInfo(StringInfo *),
  *FileToStringInfo(const char *,const size_t,ExceptionInfo *),
  *SplitStringInfo(StringInfo *,const size_t),
  *StringToStringInfo(const char *);

extern unsigned char
  *GetStringInfoDatum(const StringInfo *);

extern void
  ConcatenateStringInfo(StringInfo *,const StringInfo *),
  LocaleLower(char *),
  LocaleUpper(char *),
  PrintStringInfo(FILE *file,const char *,const StringInfo *),
  ResetStringInfo(StringInfo *),
  SetStringInfo(StringInfo *,const StringInfo *),
  SetStringInfoDatum(StringInfo *,const unsigned char *),
  SetStringInfoLength(StringInfo *,const size_t),
  SetStringInfoPath(StringInfo *,const char *),
  StripString(char *);
# 26 "/usr/include/magick/profile.h" 2 3 4

typedef struct _ProfileInfo
{
  char
    *name;

  size_t
    length;

  unsigned char
    *info;

  unsigned long
    signature;
} ProfileInfo;

typedef enum
{
  UndefinedIntent,
  SaturationIntent,
  PerceptualIntent,
  AbsoluteIntent,
  RelativeIntent
} RenderingIntent;

extern char
  *GetNextImageProfile(const Image *);

extern const StringInfo
  *GetImageProfile(const Image *,const char *);

extern MagickBooleanType
  CloneImageProfiles(Image *,const Image *),
  DeleteImageProfile(Image *,const char *),
  ProfileImage(Image *,const char *,const void *,const size_t,
    const MagickBooleanType),
  SetImageProfile(Image *,const char *,const StringInfo *),
  SyncImageProfiles(Image *);

extern StringInfo
  *RemoveImageProfile(Image *,const char *);

extern void
  DestroyImageProfiles(Image *),
  ResetImageProfileIterator(const Image *);
# 134 "/usr/include/magick/image.h" 2 3 4
# 1 "/usr/include/magick/quantum.h" 1 3 4
# 27 "/usr/include/magick/quantum.h" 3 4
typedef enum
{
  UndefinedEndian,
  LSBEndian,
  MSBEndian
} EndianType;

typedef enum
{
  UndefinedQuantum,
  AlphaQuantum,
  BlackQuantum,
  BlueQuantum,
  CMYKAQuantum,
  CMYKQuantum,
  CyanQuantum,
  GrayAlphaQuantum,
  GrayQuantum,
  GreenQuantum,
  IndexAlphaQuantum,
  IndexQuantum,
  MagentaQuantum,
  OpacityQuantum,
  RedQuantum,
  RGBAQuantum,
  RGBOQuantum,
  RGBQuantum,
  YellowQuantum
} QuantumType;

typedef enum
{
  UndefinedQuantumFormat,
  FloatingPointQuantumFormat,
  SignedQuantumFormat,
  UnsignedQuantumFormat
} QuantumFormatType;

typedef struct _QuantumInfo
{
  unsigned long
    quantum;

  QuantumFormatType
    format;

  double
    minimum,
    maximum,
    scale;

  size_t
    pad;

  MagickBooleanType
    min_is_white,
    pack;

  SemaphoreInfo
    *semaphore;

  unsigned long
    signature;
} QuantumInfo;

static inline Quantum RoundToQuantum(const MagickRealType value)
{



  if (value <= 0.0)
    return((Quantum) 0);
  if (value >= 65535UL)
    return((Quantum) 65535UL);
  return((Quantum) (value+0.5));

}
# 119 "/usr/include/magick/quantum.h" 3 4
static inline unsigned char ScaleQuantumToChar(const Quantum quantum)
{

  return((unsigned char) ((quantum+128UL)/257UL));







}
# 160 "/usr/include/magick/quantum.h" 3 4
extern MagickBooleanType
  ExportQuantumPixels(Image *,const QuantumInfo *,const QuantumType,
    const unsigned char *),
  ImportQuantumPixels(Image *,const QuantumInfo *,const QuantumType,
    unsigned char *);

extern QuantumInfo
  *AcquireQuantumInfo(const ImageInfo *),
  *DestroyQuantumInfo(QuantumInfo *);

extern void
  GetQuantumInfo(const ImageInfo *,QuantumInfo *);
# 135 "/usr/include/magick/image.h" 2 3 4
# 1 "/usr/include/magick/resample.h" 1 3 4
# 27 "/usr/include/magick/resample.h" 3 4
typedef enum
{
  UndefinedInterpolatePixel,
  AverageInterpolatePixel,
  BicubicInterpolatePixel,
  BilinearInterpolatePixel,
  FilterInterpolatePixel,
  IntegerInterpolatePixel,
  MeshInterpolatePixel,
  NearestNeighborInterpolatePixel,
  SplineInterpolatePixel
} InterpolatePixelMethod;

typedef struct _ResampleFilter
  ResampleFilter;

extern MagickBooleanType
  SetResampleFilterInterpolateMethod(ResampleFilter *,
    const InterpolatePixelMethod),
  SetResampleFilterVirtualPixelMethod(ResampleFilter *,
    const VirtualPixelMethod);

extern ResampleFilter
  *AcquireResampleFilter(const Image *,ExceptionInfo *),
  *DestroyResampleFilter(ResampleFilter *);

extern void
  ScaleResampleFilter(ResampleFilter *,const double,const double,const double,
    const double);

extern MagickPixelPacket
  ResamplePixelColor(ResampleFilter *,const double,const double);
# 136 "/usr/include/magick/image.h" 2 3 4
# 1 "/usr/include/magick/resize.h" 1 3 4
# 25 "/usr/include/magick/resize.h" 3 4
typedef enum
{
  UndefinedFilter,
  PointFilter,
  BoxFilter,
  TriangleFilter,
  HermiteFilter,
  HanningFilter,
  HammingFilter,
  BlackmanFilter,
  GaussianFilter,
  QuadraticFilter,
  CubicFilter,
  CatromFilter,
  MitchellFilter,
  LanczosFilter,
  BesselFilter,
  SincFilter,
  KaiserFilter,
  WelshFilter,
  ParzenFilter,
  LagrangeFilter,
  BohmanFilter,
  BartlettFilter,
  SentinelFilter
} FilterTypes;

extern Image
  *AdaptiveResizeImage(const Image *,const unsigned long,const unsigned long,
    ExceptionInfo *),
  *MagnifyImage(const Image *,ExceptionInfo *),
  *MinifyImage(const Image *,ExceptionInfo *),
  *ResampleImage(const Image *,const double,const double,const FilterTypes,
    const double,ExceptionInfo *),
  *ResizeImage(const Image *,const unsigned long,const unsigned long,
    const FilterTypes,const double,ExceptionInfo *),
  *SampleImage(const Image *,const unsigned long,const unsigned long,
    ExceptionInfo *),
  *ScaleImage(const Image *,const unsigned long,const unsigned long,
    ExceptionInfo *),
  *ThumbnailImage(const Image *,const unsigned long,const unsigned long,
    ExceptionInfo *),
  *ZoomImage(const Image *,const unsigned long,const unsigned long,
    ExceptionInfo *);
# 137 "/usr/include/magick/image.h" 2 3 4


# 1 "/usr/include/magick/timer.h" 1 3 4
# 25 "/usr/include/magick/timer.h" 3 4
typedef enum
{
  UndefinedTimerState,
  StoppedTimerState,
  RunningTimerState
} TimerState;

typedef struct _Timer
{
  double
    start,
    stop,
    total;
} Timer;

typedef struct _TimerInfo
{
  Timer
    user,
    elapsed;

  TimerState
    state;

  unsigned long
    signature;
} TimerInfo;

extern double
  GetElapsedTime(TimerInfo *),
  GetUserTime(TimerInfo *);

extern MagickBooleanType
  ContinueTimer(TimerInfo *);

extern void
  GetTimerInfo(TimerInfo *),
  ResetTimer(TimerInfo *),
  StartTimer(TimerInfo *,const MagickBooleanType);
# 140 "/usr/include/magick/image.h" 2 3 4

struct _Image
{
  ClassType
    storage_class;

  ColorspaceType
    colorspace;

  CompressionType
    compression;

  unsigned long
    quality;

  OrientationType
    orientation;

  MagickBooleanType
    taint,
    matte;

  unsigned long
    columns,
    rows,
    depth,
    colors;

  PixelPacket
    *colormap,
    background_color,
    border_color,
    matte_color;

  double
    gamma;

  ChromaticityInfo
    chromaticity;

  RenderingIntent
    rendering_intent;

  void
    *profiles;

  ResolutionType
    units;

  char
    *montage,
    *directory,
    *geometry;

  long
    offset;

  double
    x_resolution,
    y_resolution;

  RectangleInfo
    page,
    extract_info,
    tile_info;

  double
    bias,
    blur,
    fuzz;

  FilterTypes
    filter;

  InterlaceType
    interlace;

  EndianType
    endian;

  GravityType
    gravity;

  CompositeOperator
    compose;

  DisposeType
    dispose;

  struct _Image
    *clip_mask;

  unsigned long
    scene,
    delay;

  long
    ticks_per_second;

  unsigned long
    iterations,
    total_colors;

  long
    start_loop;

  ErrorInfo
    error;

  TimerInfo
    timer;

  MagickProgressMonitor
    progress_monitor;

  void
    *client_data,
    *cache,
    *attributes;

  Ascii85Info
    *ascii85;

  BlobInfo
    *blob;

  char
    filename[4096],
    magick_filename[4096],
    magick[4096];

  unsigned long
    magick_columns,
    magick_rows;

  ExceptionInfo
    exception;

  MagickBooleanType
    debug;

  long
    reference_count;

  SemaphoreInfo
    *semaphore;

  ProfileInfo
    color_profile,
    iptc_profile,
    *generic_profile;

  unsigned long
    generic_profiles;

  unsigned long
    signature;

  struct _Image
    *previous,
    *list,
    *next;

  InterpolatePixelMethod
    interpolate;

  MagickBooleanType
    black_point_compensation;

  PixelPacket
    transparent_color;

  struct _Image
    *mask;

  RectangleInfo
    tile_offset;

  void
    *properties,
    *artifacts;
};

struct _ImageInfo
{
  CompressionType
    compression;

  OrientationType
    orientation;

  MagickBooleanType
    temporary,
    adjoin,
    affirm,
    antialias;

  char
    *size,
    *extract,
    *page,
    *scenes;

  unsigned long
    scene,
    number_scenes,
    depth;

  InterlaceType
    interlace;

  EndianType
    endian;

  ResolutionType
    units;

  unsigned long
    quality;

  char
    *sampling_factor,
    *server_name,
    *font,
    *texture,
    *density;

  double
    pointsize,
    fuzz;

  PixelPacket
    background_color,
    border_color,
    matte_color;

  MagickBooleanType
    dither,
    monochrome;

  unsigned long
    colors;

  ColorspaceType
    colorspace;

  ImageType
    type;

  PreviewType
    preview_type;

  long
    group;

  MagickBooleanType
    ping,
    verbose;

  char
    *view,
    *authenticate;

  ChannelType
    channel;

  Image
    *attributes;

  void
    *options;

  MagickProgressMonitor
    progress_monitor;

  void
    *client_data,
    *cache;

  StreamHandler
    stream;

  FILE
    *file;

  void
    *blob;

  size_t
    length;

  char
    magick[4096],
    unique[4096],
    zero[4096],
    filename[4096];

  MagickBooleanType
    debug;

  char
    *tile;

  unsigned long
    subimage,
    subrange;

  PixelPacket
    pen;

  unsigned long
    signature;

  VirtualPixelMethod
    virtual_pixel_method;

  PixelPacket
    transparent_color;

  void
    *profile;
};

extern const IndexPacket
  *AcquireIndexes(const Image *);

extern const PixelPacket
  *AcquireImagePixels(const Image *,const long,const long,const unsigned long,
    const unsigned long,ExceptionInfo *);

extern ExceptionType
  CatchImageException(Image *);

extern Image
  *AllocateImage(const ImageInfo *),
  *AppendImages(const Image *,const MagickBooleanType,ExceptionInfo *),
  *AverageImages(const Image *,ExceptionInfo *),
  *CloneImage(const Image *,const unsigned long,const unsigned long,
    const MagickBooleanType,ExceptionInfo *),
  *CombineImages(const Image *,const ChannelType,ExceptionInfo *),
  *DestroyImage(Image *),
  *GetImageClipMask(const Image *,ExceptionInfo *),
  *GetImageMask(const Image *,ExceptionInfo *),
  *NewMagickImage(const ImageInfo *,const unsigned long,const unsigned long,
    const MagickPixelPacket *),
  *ReferenceImage(Image *),
  *SeparateImages(const Image *,const ChannelType,ExceptionInfo *);

extern ImageInfo
  *AcquireImageInfo(void),
  *CloneImageInfo(const ImageInfo *),
  *DestroyImageInfo(ImageInfo *);

extern ImageType
  GetImageType(const Image *,ExceptionInfo *);

extern IndexPacket
  *GetIndexes(const Image *);

extern long
  InterpretImageFilename(char *,const size_t,const char *,int);

extern MagickBooleanType
  AllocateImageColormap(Image *,const unsigned long),
  ClipImage(Image *),
  ClipImagePath(Image *,const char *,const MagickBooleanType),
  CycleColormapImage(Image *,const long),
  GradientImage(Image *,const PixelPacket *,const PixelPacket *),
  IsTaintImage(const Image *),
  IsMagickConflict(const char *),
  IsHighDynamicRangeImage(const Image *,ExceptionInfo *),
  IsImageObject(const Image *),
  ListMagickInfo(FILE *,ExceptionInfo *),
  ModifyImage(Image **,ExceptionInfo *),
  PlasmaImage(Image *,const SegmentInfo *,unsigned long,unsigned long),
  ResetImagePage(Image *,const char *),
  SeparateImageChannel(Image *,const ChannelType),
  SetImageAlphaChannel(Image *,const AlphaChannelType),
  SetImageBackgroundColor(Image *),
  SetImageClipMask(Image *,const Image *),
  SetImageExtent(Image *,const unsigned long,const unsigned long),
  SetImageInfo(ImageInfo *,const MagickBooleanType,ExceptionInfo *),
  SetImageMask(Image *,const Image *),
  SetImageOpacity(Image *,const Quantum),
  SetImageStorageClass(Image *,const ClassType),
  SetImageType(Image *,const ImageType),
  SortColormapByIntensity(Image *),
  StripImage(Image *),
  SyncImage(Image *),
  SyncImagePixels(Image *),
  TextureImage(Image *,const Image *);

extern MagickPixelPacket
  AcquireOneMagickPixel(const Image *,const long,const long,ExceptionInfo *);

extern PixelPacket
  AcquireOnePixel(const Image *,const long,const long,ExceptionInfo *),
  AcquireOneVirtualPixel(const Image *,const VirtualPixelMethod,const long,
    const long,ExceptionInfo *),
  *GetImagePixels(Image *,const long,const long,const unsigned long,
    const unsigned long),
  GetOnePixel(Image *,const long,const long),
  *GetPixels(const Image *),
  *SetImagePixels(Image *,const long,const long,const unsigned long,
    const unsigned long);

extern VirtualPixelMethod
  GetImageVirtualPixelMethod(const Image *),
  SetImageVirtualPixelMethod(const Image *,const VirtualPixelMethod);

extern void
  AllocateNextImage(const ImageInfo *,Image *),
  DestroyImagePixels(Image *),
  DisassociateImageStream(Image *),
  GetImageException(Image *,ExceptionInfo *),
  GetImageInfo(ImageInfo *),
  SetImageInfoBlob(ImageInfo *,const void *,const size_t),
  SetImageInfoFile(ImageInfo *,FILE *);
# 27 "/usr/include/magick/draw.h" 2 3 4

# 1 "/usr/include/magick/type.h" 1 3 4
# 25 "/usr/include/magick/type.h" 3 4
typedef enum
{
  UndefinedStretch,
  NormalStretch,
  UltraCondensedStretch,
  ExtraCondensedStretch,
  CondensedStretch,
  SemiCondensedStretch,
  SemiExpandedStretch,
  ExpandedStretch,
  ExtraExpandedStretch,
  UltraExpandedStretch,
  AnyStretch
} StretchType;

typedef enum
{
  UndefinedStyle,
  NormalStyle,
  ItalicStyle,
  ObliqueStyle,
  AnyStyle
} StyleType;

typedef struct _TypeInfo
{
  unsigned long
    face;

  char
    *path,
    *name,
    *description,
    *family;

  StyleType
    style;

  StretchType
    stretch;

  unsigned long
    weight;

  char
    *encoding,
    *foundry,
    *format,
    *metrics,
    *glyphs;

  MagickBooleanType
    stealth;

  struct _TypeInfo
    *previous,
    *next;

  unsigned long
    signature;
} TypeInfo;

extern char
  **GetTypeList(const char *,unsigned long *,ExceptionInfo *);

extern MagickBooleanType
  ListTypeInfo(FILE *,ExceptionInfo *);

extern const TypeInfo
  *GetTypeInfo(const char *,ExceptionInfo *),
  *GetTypeInfoByFamily(const char *,const StyleType,const StretchType,
    const unsigned long,ExceptionInfo *),
  **GetTypeInfoList(const char *,unsigned long *,ExceptionInfo *);

 void
  DestroyTypeList(void);
# 29 "/usr/include/magick/draw.h" 2 3 4

typedef enum
{
  UndefinedAlign,
  LeftAlign,
  CenterAlign,
  RightAlign
} AlignType;

typedef enum
{
  UndefinedPathUnits,
  UserSpace,
  UserSpaceOnUse,
  ObjectBoundingBox
} ClipPathUnits;

typedef enum
{
  UndefinedDecoration,
  NoDecoration,
  UnderlineDecoration,
  OverlineDecoration,
  LineThroughDecoration
} DecorationType;

typedef enum
{
  UndefinedRule,

  EvenOddRule,
  NonZeroRule
} FillRule;

typedef enum
{
  UndefinedGradient,
  LinearGradient,
  RadialGradient
} GradientType;

typedef enum
{
  UndefinedCap,
  ButtCap,
  RoundCap,
  SquareCap
} LineCap;

typedef enum
{
  UndefinedJoin,
  MiterJoin,
  RoundJoin,
  BevelJoin
} LineJoin;

typedef enum
{
  UndefinedMethod,
  PointMethod,
  ReplaceMethod,
  FloodfillMethod,
  FillToBorderMethod,
  ResetMethod
} PaintMethod;

typedef enum
{
  UndefinedPrimitive,
  PointPrimitive,
  LinePrimitive,
  RectanglePrimitive,
  RoundRectanglePrimitive,
  ArcPrimitive,
  EllipsePrimitive,
  CirclePrimitive,
  PolylinePrimitive,
  PolygonPrimitive,
  BezierPrimitive,
  ColorPrimitive,
  MattePrimitive,
  TextPrimitive,
  ImagePrimitive,
  PathPrimitive
} PrimitiveType;

typedef enum
{
  UndefinedReference,
  GradientReference
} ReferenceType;

typedef enum
{
  UndefinedSpread,
  PadSpread,
  ReflectSpread,
  RepeatSpread
} SpreadMethod;

typedef struct _StopInfo
{
  MagickPixelPacket
    color;

  MagickRealType
    offset;
} StopInfo;

typedef struct _GradientInfo
{
  GradientType
    type;

  RectangleInfo
    bounding_box;

  SegmentInfo
    gradient_vector;

  StopInfo
    *stops;

  unsigned long
    number_stops;

  SpreadMethod
    spread;

  MagickBooleanType
    debug;

  unsigned long
    signature;
} GradientInfo;

typedef struct _ElementReference
{
  char
    *id;

  ReferenceType
    type;

  GradientInfo
    gradient;

  unsigned long
    signature;

  struct _ElementReference
    *previous,
    *next;
} ElementReference;

typedef struct _DrawInfo
{
  char
    *primitive,
    *geometry;

  RectangleInfo
    viewbox;

  AffineMatrix
    affine;

  GravityType
    gravity;

  PixelPacket
    fill,
    stroke;

  double
    stroke_width;

  GradientInfo
    gradient;

  Image
    *fill_pattern,
    *tile,
    *stroke_pattern;

  MagickBooleanType
    stroke_antialias,
    text_antialias;

  FillRule
    fill_rule;

  LineCap
    linecap;

  LineJoin
    linejoin;

  unsigned long
    miterlimit;

  double
    dash_offset;

  DecorationType
    decorate;

  CompositeOperator
    compose;

  char
    *text;

  unsigned long
    face;

  char
    *font,
    *metrics,
    *family;

  StyleType
    style;

  StretchType
    stretch;

  unsigned long
    weight;

  char
    *encoding;

  double
    pointsize;

  char
    *density;

  AlignType
    align;

  PixelPacket
    undercolor,
    border_color;

  char
    *server_name;

  double
    *dash_pattern;

  char
    *clip_mask;

  SegmentInfo
    bounds;

  ClipPathUnits
    clip_units;

  Quantum
    opacity;

  MagickBooleanType
    render;

  ElementReference
    element_reference;

  MagickBooleanType
    debug;

  unsigned long
    signature;
} DrawInfo;

typedef struct _PointInfo
{
  double
    x,
    y;
} PointInfo;

typedef struct _PrimitiveInfo
{
  PointInfo
    point;

  unsigned long
    coordinates;

  PrimitiveType
    primitive;

  PaintMethod
    method;

  char
    *text;
} PrimitiveInfo;

typedef struct _TypeMetric
{
  PointInfo
    pixels_per_em;

  double
    ascent,
    descent,
    width,
    height,
    max_advance,
    underline_position,
    underline_thickness;

  SegmentInfo
    bounds;

  PointInfo
    origin;
} TypeMetric;

extern DrawInfo
  *AcquireDrawInfo(void),
  *CloneDrawInfo(const ImageInfo *,const DrawInfo *),
  *DestroyDrawInfo(DrawInfo *);

extern MagickBooleanType
  DrawAffineImage(Image *,const Image *,const AffineMatrix *),
  DrawClipPath(Image *,const DrawInfo *,const char *),
  DrawGradientImage(Image *,const DrawInfo *),
  DrawImage(Image *,const DrawInfo *),
  DrawPatternPath(Image *,const DrawInfo *,const char *,Image **),
  DrawPrimitive(Image *,const DrawInfo *,const PrimitiveInfo *);

extern void
  GetAffineMatrix(AffineMatrix *),
  GetDrawInfo(const ImageInfo *,DrawInfo *);
# 26 "/usr/include/magick/annotate.h" 2 3 4

extern long
  FormatMagickCaption(Image *,DrawInfo *,char *,TypeMetric *);

extern MagickBooleanType
  AnnotateImage(Image *,const DrawInfo *),
  GetMultilineTypeMetrics(Image *,const DrawInfo *,TypeMetric *),
  GetTypeMetrics(Image *,const DrawInfo *,TypeMetric *);
# 144 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/artifact.h" 1 3 4
# 25 "/usr/include/magick/artifact.h" 3 4
extern char
  *GetNextImageArtifact(const Image *),
  *RemoveImageArtifact(Image *,const char *);

extern const char
  *GetImageArtifact(const Image *,const char *);

extern MagickBooleanType
  CloneImageArtifacts(Image *,const Image *),
  DefineImageArtifact(Image *,const char *),
  DeleteImageArtifact(Image *,const char *),
  SetImageArtifact(Image *,const char *,const char *);

extern void
  DestroyImageArtifacts(Image *),
  ResetImageArtifactIterator(const Image *);
# 145 "/usr/include/magick/MagickCore.h" 2 3 4

# 1 "/usr/include/magick/cache.h" 1 3 4
# 27 "/usr/include/magick/cache.h" 3 4
extern const PixelPacket
  *AcquireCacheNexus(const Image *,const VirtualPixelMethod,const long,
    const long,const unsigned long,const unsigned long,const unsigned long,
    ExceptionInfo *);

extern MagickSizeType
  GetPixelCacheArea(const Image *);

extern MagickBooleanType
  PersistCache(Image *,const char *,const MagickBooleanType,MagickOffsetType *,
    ExceptionInfo *),
  SyncCacheNexus(Image *,const unsigned long);

extern PixelPacket
  *GetCacheNexus(Image *,const long,const long,const unsigned long,
    const unsigned long,const unsigned long),
  *SetCacheNexus(Image *,const long,const long,const unsigned long,
    const unsigned long,const unsigned long);

extern VirtualPixelMethod
  GetCacheVirtualPixelMethod(const Image *),
  SetCacheVirtualPixelMethod(const Image *,const VirtualPixelMethod);

extern void
  DestroyCacheResources(void);
# 147 "/usr/include/magick/MagickCore.h" 2 3 4

# 1 "/usr/include/magick/coder.h" 1 3 4
# 25 "/usr/include/magick/coder.h" 3 4
typedef struct _CoderInfo
{
  char
    *path,
    *magick,
    *name;

  MagickBooleanType
    stealth;

  struct _CoderInfo
    *previous,
    *next;

  unsigned long
    signature;
} CoderInfo;

extern char
  **GetCoderList(const char *,unsigned long *,ExceptionInfo *);

extern const CoderInfo
  *GetCoderInfo(const char *,ExceptionInfo *),
  **GetCoderInfoList(const char *,unsigned long *,ExceptionInfo *);

extern MagickBooleanType
  ListCoderInfo(FILE *,ExceptionInfo *);

 void
  DestroyCoderList(void);
# 149 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/client.h" 1 3 4
# 25 "/usr/include/magick/client.h" 3 4
extern const char
  *GetClientPath(void),
  *GetClientName(void),
  *SetClientName(const char *),
  *SetClientPath(const char *);
# 150 "/usr/include/magick/MagickCore.h" 2 3 4


# 1 "/usr/include/magick/compare.h" 1 3 4
# 27 "/usr/include/magick/compare.h" 3 4
typedef enum
{
  UndefinedMetric,
  AbsoluteErrorMetric,
  MeanAbsoluteErrorMetric,
  MeanErrorPerPixelMetric,
  MeanSquaredErrorMetric,
  PeakAbsoluteErrorMetric,
  PeakSignalToNoiseRatioMetric,
  RootMeanSquaredErrorMetric
} MetricType;

extern Image
  *CompareImageChannels(Image *,const Image *,const ChannelType,
    const MetricType,double *,ExceptionInfo *),
  *CompareImages(Image *,const Image *,const MetricType,double *,
    ExceptionInfo *);

extern MagickBooleanType
  GetImageChannelDistortion(Image *,const Image *,const ChannelType,
    const MetricType,double *,ExceptionInfo *),
  GetImageDistortion(Image *,const Image *,const MetricType,double *,
    ExceptionInfo *),
  IsImagesEqual(Image *,const Image *);
# 153 "/usr/include/magick/MagickCore.h" 2 3 4


# 1 "/usr/include/magick/configure.h" 1 3 4
# 25 "/usr/include/magick/configure.h" 3 4
# 1 "/usr/include/magick/hashmap.h" 1 3 4
# 30 "/usr/include/magick/hashmap.h" 3 4
typedef struct _HashmapInfo
  HashmapInfo;

typedef struct _LinkedListInfo
  LinkedListInfo;

extern HashmapInfo
  *DestroyHashmap(HashmapInfo *),
  *NewHashmap(const unsigned long,size_t (*)(const void *),
    MagickBooleanType (*)(const void *,const void *),void *(*)(void *),
    void *(*)(void *));

extern LinkedListInfo
  *DestroyLinkedList(LinkedListInfo *,void *(*)(void *)),
  *NewLinkedList(const unsigned long);

extern MagickBooleanType
  AppendValueToLinkedList(LinkedListInfo *,const void *),
  CompareHashmapString(const void *,const void *),
  CompareHashmapStringInfo(const void *,const void *),
  InsertValueInLinkedList(LinkedListInfo *,const unsigned long,const void *),
  InsertValueInSortedLinkedList(LinkedListInfo *,
    int (*)(const void *,const void *),void **,const void *),
  IsHashmapEmpty(const HashmapInfo *),
  IsLinkedListEmpty(const LinkedListInfo *),
  LinkedListToArray(LinkedListInfo *,void **),
  PutEntryInHashmap(HashmapInfo *,const void *,const void *);

extern size_t
  HashPointerType(const void *),
  HashStringType(const void *),
  HashStringInfoType(const void *);

extern unsigned long
  GetNumberOfElementsInLinkedList(const LinkedListInfo *),
  GetNumberOfEntriesInHashmap(const HashmapInfo *);

extern void
  ClearLinkedList(LinkedListInfo *,void *(*)(void *)),
  *GetLastValueInLinkedList(LinkedListInfo *),
  *GetNextKeyInHashmap(HashmapInfo *),
  *GetNextValueInHashmap(HashmapInfo *),
  *GetNextValueInLinkedList(LinkedListInfo *),
  *GetValueFromHashmap(HashmapInfo *,const void *),
  *GetValueFromLinkedList(LinkedListInfo *,const unsigned long),
  *RemoveElementByValueFromLinkedList(LinkedListInfo *,const void *),
  *RemoveElementFromLinkedList(LinkedListInfo *,const unsigned long),
  *RemoveEntryFromHashmap(HashmapInfo *,const void *),
  *RemoveLastElementFromLinkedList(LinkedListInfo *),
  ResetHashmapIterator(HashmapInfo *),
  ResetLinkedListIterator(LinkedListInfo *);
# 26 "/usr/include/magick/configure.h" 2 3 4

typedef struct _ConfigureInfo
{
  char
    *path,
    *name,
    *value;

  MagickBooleanType
    stealth;

  struct _ConfigureInfo
    *previous,
    *next;

  unsigned long
    signature;
} ConfigureInfo;

extern char
  **GetConfigureList(const char *,unsigned long *,ExceptionInfo *);

extern const char
  *GetConfigureValue(const ConfigureInfo *);

extern const ConfigureInfo
  *GetConfigureInfo(const char *,ExceptionInfo *),
  **GetConfigureInfoList(const char *,unsigned long *,ExceptionInfo *);

extern LinkedListInfo
  *DestroyConfigureOptions(LinkedListInfo *),
  *GetConfigurePaths(const char *,ExceptionInfo *),
  *GetConfigureOptions(const char *,ExceptionInfo *);

extern MagickBooleanType
  ListConfigureInfo(FILE *,ExceptionInfo *);

extern void
  DestroyConfigureList(void);
# 156 "/usr/include/magick/MagickCore.h" 2 3 4

# 1 "/usr/include/magick/decorate.h" 1 3 4
# 25 "/usr/include/magick/decorate.h" 3 4
typedef struct _FrameInfo
{
  unsigned long
    width,
    height;

  long
    x,
    y,
    inner_bevel,
    outer_bevel;
} FrameInfo;

extern Image
  *BorderImage(const Image *,const RectangleInfo *,ExceptionInfo *),
  *FrameImage(const Image *,const FrameInfo *,ExceptionInfo *);

extern MagickBooleanType
  RaiseImage(Image *,const RectangleInfo *,const MagickBooleanType);
# 158 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/delegate.h" 1 3 4
# 26 "/usr/include/magick/delegate.h" 3 4
# 1 "/usr/include/ghostscript/iapi.h" 1 3 4
# 102 "/usr/include/ghostscript/iapi.h" 3 4
typedef struct display_callback_s display_callback;


typedef struct gsapi_revision_s {
    const char *product;
    const char *copyright;
    long revision;
    long revisiondate;
} gsapi_revision_t;
# 123 "/usr/include/ghostscript/iapi.h" 3 4
 int
gsapi_revision(gsapi_revision_t *pr, int len);
# 140 "/usr/include/ghostscript/iapi.h" 3 4
 int
gsapi_new_instance(void **pinstance, void *caller_handle);
# 155 "/usr/include/ghostscript/iapi.h" 3 4
 void
gsapi_delete_instance(void *instance);
# 165 "/usr/include/ghostscript/iapi.h" 3 4
 int
gsapi_set_stdio(void *instance,
    int ( * stdin_fn)(void *caller_handle, char *buf, int len),
    int ( * stdout_fn)(void *caller_handle, const char *str, int len),
    int ( * stderr_fn)(void *caller_handle, const char *str, int len));
# 180 "/usr/include/ghostscript/iapi.h" 3 4
 int gsapi_set_poll(void *instance,
    int ( * poll_fn)(void *caller_handle));






 int gsapi_set_display_callback(
   void *instance, display_callback *callback);
# 204 "/usr/include/ghostscript/iapi.h" 3 4
 int gsapi_init_with_args(void *instance,
    int argc, char **argv);
# 216 "/usr/include/ghostscript/iapi.h" 3 4
 int
gsapi_run_string_begin(void *instance,
    int user_errors, int *pexit_code);

 int
gsapi_run_string_continue(void *instance,
    const char *str, unsigned int length, int user_errors, int *pexit_code);

 int
gsapi_run_string_end(void *instance,
    int user_errors, int *pexit_code);

 int
gsapi_run_string_with_length(void *instance,
    const char *str, unsigned int length, int user_errors, int *pexit_code);

 int
gsapi_run_string(void *instance,
    const char *str, int user_errors, int *pexit_code);

 int
gsapi_run_file(void *instance,
    const char *file_name, int user_errors, int *pexit_code);






 int
gsapi_exit(void *instance);



struct vd_trace_interface_s;
 void
gsapi_set_visual_tracer(struct vd_trace_interface_s *I);



typedef int ( * PFN_gsapi_revision)(
    gsapi_revision_t *pr, int len);
typedef int ( * PFN_gsapi_new_instance)(
    void **pinstance, void *caller_handle);
typedef void ( * PFN_gsapi_delete_instance)(
    void *instance);
typedef int ( * PFN_gsapi_set_stdio)(void *instance,
    int ( * stdin_fn)(void *caller_handle, char *buf, int len),
    int ( * stdout_fn)(void *caller_handle, const char *str, int len),
    int ( * stderr_fn)(void *caller_handle, const char *str, int len));
typedef int ( * PFN_gsapi_set_poll)(void *instance,
    int( * poll_fn)(void *caller_handle));
typedef int ( * PFN_gsapi_set_display_callback)(
    void *instance, display_callback *callback);
typedef int ( * PFN_gsapi_init_with_args)(
    void *instance, int argc, char **argv);
typedef int ( * PFN_gsapi_run_string_begin)(
    void *instance, int user_errors, int *pexit_code);
typedef int ( * PFN_gsapi_run_string_continue)(
    void *instance, const char *str, unsigned int length,
    int user_errors, int *pexit_code);
typedef int ( * PFN_gsapi_run_string_end)(
    void *instance, int user_errors, int *pexit_code);
typedef int ( * PFN_gsapi_run_string_with_length)(
    void *instance, const char *str, unsigned int length,
    int user_errors, int *pexit_code);
typedef int ( * PFN_gsapi_run_string)(
    void *instance, const char *str,
    int user_errors, int *pexit_code);
typedef int ( * PFN_gsapi_run_file)(void *instance,
    const char *file_name, int user_errors, int *pexit_code);
typedef int ( * PFN_gsapi_exit)(void *instance);
typedef void ( * PFN_gsapi_set_visual_tracer)
    (struct vd_trace_interface_s *I);
# 27 "/usr/include/magick/delegate.h" 2 3 4
# 1 "/usr/include/ghostscript/ierrors.h" 1 3 4
# 34 "/usr/include/ghostscript/ierrors.h" 3 4
extern const char *const gs_error_names[];
# 28 "/usr/include/magick/delegate.h" 2 3 4




typedef struct gs_main_instance_s gs_main_instance;
# 43 "/usr/include/magick/delegate.h" 3 4
typedef struct _GhostscriptVectors
{
  int
    ( *exit)(gs_main_instance *);

  int
    ( *init_with_args)(gs_main_instance *,int,char **);

  int
    ( *new_instance)(gs_main_instance **,void *);

  int
    ( *run_string)(gs_main_instance *,const char *,int,int *);

  void
    ( *delete_instance)(gs_main_instance *);
} GhostscriptVectors;

typedef struct _DelegateInfo
{
  char
    *path,
    *decode,
    *encode,
    *commands;

  long
    mode;

  MagickBooleanType
    thread_support,
    spawn,
    stealth;

  struct _DelegateInfo
    *previous,
    *next;

  unsigned long
    signature;
} DelegateInfo;

extern char
  *GetDelegateCommand(const ImageInfo *,Image *,const char *,const char *,
    ExceptionInfo *),
  **GetDelegateList(const char *,unsigned long *,ExceptionInfo *);

extern const char
  *GetDelegateCommands(const DelegateInfo *);

extern const DelegateInfo
  *GetDelegateInfo(const char *,const char *,ExceptionInfo *exception),
  **GetDelegateInfoList(const char *,unsigned long *,ExceptionInfo *);

extern long
  GetDelegateMode(const DelegateInfo *);

extern MagickBooleanType
  GetDelegateThreadSupport(const DelegateInfo *),
  InvokeDelegate(ImageInfo *,Image *,const char *,const char *,ExceptionInfo *),
  ListDelegateInfo(FILE *,ExceptionInfo *);

extern void
  DestroyDelegateList(void);
# 159 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/deprecate.h" 1 3 4
# 34 "/usr/include/magick/deprecate.h" 3 4
# 1 "/usr/include/magick/registry.h" 1 3 4
# 25 "/usr/include/magick/registry.h" 3 4
typedef enum
{
  UndefinedRegistryType,
  ImageRegistryType,
  ImageInfoRegistryType,
  StringRegistryType
} RegistryType;

extern char
  *GetNextImageRegistry(void);

extern const void
  *GetImageRegistry(const RegistryType,const char *,ExceptionInfo *);

extern MagickBooleanType
  DefineImageRegistry(const RegistryType,const char *,ExceptionInfo *),
  DeleteImageRegistry(const char *),
  SetImageRegistry(const RegistryType,const char *,const void *,
    ExceptionInfo *);

extern void
  DestroyImageRegistry(void),
  *RemoveImageRegistry(const char *),
  ResetImageRegistryIterator(void);
# 35 "/usr/include/magick/deprecate.h" 2 3 4
# 58 "/usr/include/magick/deprecate.h" 3 4
typedef struct _DoublePixelPacket
{
  double
    red,
    green,
    blue,
    opacity,
    index;
} DoublePixelPacket;

typedef enum
{
  UndefinedMagickLayerMethod
} MagickLayerMethod;



typedef long long ExtendedSignedIntegralType;
typedef unsigned long long ExtendedUnsignedIntegralType;
# 86 "/usr/include/magick/deprecate.h" 3 4
typedef long double ExtendedRationalType;




typedef MagickBooleanType
  (*MonitorHandler)(const char *,const MagickOffsetType,const MagickSizeType,
    ExceptionInfo *);

typedef struct _ImageAttribute
{
  char
    *key,
    *value;

  MagickBooleanType
    compression;

  struct _ImageAttribute
    *previous,
    *next;
} ImageAttribute;

extern char
  *AllocateString(const char *),
  *InterpretImageAttributes(const ImageInfo *,Image *,const char *),
  *PostscriptGeometry(const char *),
  *TranslateText(const ImageInfo *,Image *,const char *);

extern const ImageAttribute
  *GetImageAttribute(const Image *,const char *),
  *GetImageClippingPathAttribute(Image *),
  *GetNextImageAttribute(const Image *);

extern Image
  *GetImageFromMagickRegistry(const char *,long *id,ExceptionInfo *),
  *GetImageList(const Image *,const long,ExceptionInfo *),
  *GetNextImage(const Image *),
  *GetPreviousImage(const Image *),
  *FlattenImages(Image *,ExceptionInfo *),
  *MosaicImages(Image *,ExceptionInfo *),
  *PopImageList(Image **),
  *ShiftImageList(Image **),
  *SpliceImageList(Image *,const long,const unsigned long,const Image *,
    ExceptionInfo *);

extern IndexPacket
  ValidateColormapIndex(Image *,const unsigned long);

extern int
  GetImageGeometry(Image *,const char *,const unsigned int,RectangleInfo *),
  ParseImageGeometry(const char *,long *,long *,unsigned long *,
    unsigned long *);

extern long
  GetImageListIndex(const Image *),
  SetMagickRegistry(const RegistryType,const void *,const size_t,
    ExceptionInfo *);

extern MagickBooleanType
  ClipPathImage(Image *,const char *,const MagickBooleanType),
  CloneImageAttributes(Image *,const Image *),
  ColorFloodfillImage(Image *,const DrawInfo *,const PixelPacket,const long,
    const long,const PaintMethod),
  DeleteImageAttribute(Image *,const char *),
  DeleteMagickRegistry(const long),
  DescribeImage(Image *,FILE *,const MagickBooleanType),
  FormatImageAttribute(Image *,const char *,const char *,...)
    __attribute__((format (printf,3,4))),
  FormatImageAttributeList(Image *,const char *,const char *,va_list)
    __attribute__((format (printf,3,0))),
  FuzzyColorCompare(const Image *,const PixelPacket *,const PixelPacket *),
  FuzzyOpacityCompare(const Image *,const PixelPacket *,const PixelPacket *),
  MagickMonitor(const char *,const MagickOffsetType,const MagickSizeType,
    void *),
  MatteFloodfillImage(Image *,const PixelPacket,const Quantum,const long,
    const long,const PaintMethod),
  OpaqueImage(Image *,const PixelPacket,const PixelPacket),
  PaintFloodfillImage(Image *,const ChannelType,const MagickPixelPacket *,
    const long,const long,const DrawInfo *,const PaintMethod),
  PaintOpaqueImage(Image *,const MagickPixelPacket *,const MagickPixelPacket *),
  PaintOpaqueImageChannel(Image *,const ChannelType,const MagickPixelPacket *,
    const MagickPixelPacket *),
  PaintTransparentImage(Image *,const MagickPixelPacket *,const Quantum),
  PopImagePixels(Image *,const QuantumType,unsigned char *),
  PushImagePixels(Image *,const QuantumType,const unsigned char *),
  SetExceptionInfo(ExceptionInfo *,ExceptionType),
  SetImageAttribute(Image *,const char *,const char *),
  TransparentImage(Image *,const PixelPacket,const Quantum);

extern MonitorHandler
  GetMonitorHandler(void),
  SetMonitorHandler(MonitorHandler);

extern MagickOffsetType
  SizeBlob(const Image *image);

extern MagickPixelPacket
  InterpolatePixelColor(const Image *,ViewInfo *,const InterpolatePixelMethod,
    const double,const double,ExceptionInfo *);

extern PixelPacket
  *GetCacheView(ViewInfo *,const long,const long,const unsigned long,
    const unsigned long);

extern unsigned int
  ChannelImage(Image *,const ChannelType),
  ChannelThresholdImage(Image *,const char *),
  DispatchImage(const Image *,const long,const long,const unsigned long,
    const unsigned long,const char *,const StorageType,void *,ExceptionInfo *),
  FuzzyColorMatch(const PixelPacket *,const PixelPacket *,const double),
  GetNumberScenes(const Image *),
  GetMagickGeometry(const char *,long *,long *,unsigned long *,unsigned long *),
  IsSubimage(const char *,const unsigned int),
  PushImageList(Image **,const Image *,ExceptionInfo *),
  QuantizationError(Image *),
  RandomChannelThresholdImage(Image *,const char *,const char *,
    ExceptionInfo *),
  SetImageList(Image **,const Image *,const long,ExceptionInfo *),
  TransformColorspace(Image *,const ColorspaceType),
  ThresholdImage(Image *,const double),
  ThresholdImageChannel(Image *,const char *),
  UnshiftImageList(Image **,const Image *,ExceptionInfo *);

extern unsigned long
  GetImageListSize(const Image *);

extern void
  *AcquireMemory(const size_t),
  *CloneMemory(void *,const void *,const size_t),
  DestroyImageAttributes(Image *),
  DestroyImages(Image *),
  DestroyMagick(void),
  DestroyMagickRegistry(void),
  *GetConfigureBlob(const char *,char *,size_t *,ExceptionInfo *),
  *GetMagickRegistry(const long,RegistryType *,size_t *,ExceptionInfo *),
  IdentityAffine(AffineMatrix *),
  LiberateMemory(void **),
  LiberateSemaphoreInfo(SemaphoreInfo **),
  FormatString(char *,const char *,...) __attribute__((format (printf,2,3))),
  FormatStringList(char *,const char *,va_list)
    __attribute__((format (printf,2,0))),
  InitializeMagick(const char *),
  ReacquireMemory(void **,const size_t),
  ResetImageAttributeIterator(const Image *),
  SetCacheThreshold(const unsigned long),
  SetImage(Image *,const Quantum),
  Strip(char *),
  TemporaryFilename(char *);
# 160 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/display.h" 1 3 4
# 25 "/usr/include/magick/display.h" 3 4
extern MagickBooleanType
  DisplayImages(const ImageInfo *,Image *),
  RemoteDisplayCommand(const ImageInfo *,const char *,const char *,
    ExceptionInfo *);
# 161 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/distort.h" 1 3 4
# 27 "/usr/include/magick/distort.h" 3 4
typedef enum
{
  UndefinedDistortion,
  AffineDistortion,
  AffineProjectionDistortion,
  ArcDistortion,
  BilinearDistortion,
  PerspectiveDistortion,
  PerspectiveProjectionDistortion,
  ScaleRotateTranslateDistortion
} DistortImageMethod;

extern Image
  *DistortImage(Image *image,const DistortImageMethod,const unsigned long,
    const double *,const MagickBooleanType,ExceptionInfo *exception);
# 162 "/usr/include/magick/MagickCore.h" 2 3 4


# 1 "/usr/include/magick/enhance.h" 1 3 4
# 25 "/usr/include/magick/enhance.h" 3 4
extern MagickBooleanType
  ClutImage(Image *,const Image *),
  ClutImageChannel(Image *,const ChannelType,const Image *),
  ContrastImage(Image *,const MagickBooleanType),
  ContrastStretchImage(Image *,const char *),
  ContrastStretchImageChannel(Image *,const ChannelType,const double,
    const double),
  EqualizeImage(Image *image),
  EqualizeImageChannel(Image *image,const ChannelType),
  GammaImage(Image *,const char *),
  GammaImageChannel(Image *,const ChannelType,const double),
  LevelImage(Image *,const char *),
  LevelImageChannel(Image *,const ChannelType,const double,const double,
    const double),
  LinearStretchImage(Image *,const double,const double),
  ModulateImage(Image *,const char *),
  NegateImage(Image *,const MagickBooleanType),
  NegateImageChannel(Image *,const ChannelType,const MagickBooleanType),
  NormalizeImage(Image *),
  NormalizeImageChannel(Image *,const ChannelType),
  SigmoidalContrastImage(Image *,const MagickBooleanType,const char *),
  SigmoidalContrastImageChannel(Image *,const ChannelType,
    const MagickBooleanType,const double,const double);

extern Image
  *EnhanceImage(const Image *,ExceptionInfo *);
# 165 "/usr/include/magick/MagickCore.h" 2 3 4

# 1 "/usr/include/magick/fx.h" 1 3 4
# 27 "/usr/include/magick/fx.h" 3 4
typedef enum
{
  UndefinedEvaluateOperator,
  AddEvaluateOperator,
  AndEvaluateOperator,
  DivideEvaluateOperator,
  LeftShiftEvaluateOperator,
  MaxEvaluateOperator,
  MinEvaluateOperator,
  MultiplyEvaluateOperator,
  OrEvaluateOperator,
  RightShiftEvaluateOperator,
  SetEvaluateOperator,
  SubtractEvaluateOperator,
  XorEvaluateOperator
} MagickEvaluateOperator;

extern Image
  *CharcoalImage(const Image *,const double,const double,ExceptionInfo *),
  *ColorizeImage(const Image *,const char *,const PixelPacket,ExceptionInfo *),
  *ConvolveImage(const Image *,const unsigned long,const double *,
    ExceptionInfo *),
  *ConvolveImageChannel(const Image *,const ChannelType,const unsigned long,
    const double *,ExceptionInfo *),
  *FxImage(const Image *,const char *,ExceptionInfo *),
  *FxImageChannel(const Image *,const ChannelType,const char *,ExceptionInfo *),
  *ImplodeImage(const Image *,const double,ExceptionInfo *),
  *MorphImages(const Image *,const unsigned long,ExceptionInfo *),
  *PolaroidImage(const Image *,const DrawInfo *,const double,ExceptionInfo *),
  *RecolorImage(const Image *,const unsigned long,const double *,
    ExceptionInfo *),
  *SepiaToneImage(const Image *,const double,ExceptionInfo *),
  *ShadowImage(const Image *,const double,const double,const long,const long,
    ExceptionInfo *),
  *SketchImage(const Image *,const double,const double,const double,
    ExceptionInfo *),
  *SteganoImage(const Image *,const Image *,ExceptionInfo *),
  *StereoImage(const Image *,const Image *,ExceptionInfo *),
  *SwirlImage(const Image *,double,ExceptionInfo *),
  *TintImage(const Image *,const char *,const PixelPacket,ExceptionInfo *),
  *VignetteImage(const Image *,const double,const double,const long,
    const long,ExceptionInfo *),
  *WaveImage(const Image *,const double,const double,ExceptionInfo *);

extern MagickBooleanType
  EvaluateImage(Image *,const MagickEvaluateOperator,const double,
    ExceptionInfo *),
  EvaluateImageChannel(Image *,const ChannelType,const MagickEvaluateOperator,
    const double,ExceptionInfo *),
  SolarizeImage(Image *,const double);
# 167 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/gem.h" 1 3 4
# 25 "/usr/include/magick/gem.h" 3 4
extern double
  ExpandAffine(const AffineMatrix *);

extern unsigned long
  GetOptimalKernelWidth(const double,const double),
  GetOptimalKernelWidth1D(const double,const double),
  GetOptimalKernelWidth2D(const double,const double);

extern void
  ConvertHSBToRGB(const double,const double,const double,Quantum *,Quantum *,
    Quantum *),
  ConvertHSLToRGB(const double,const double,const double,Quantum *,Quantum *,
    Quantum *),
  ConvertHWBToRGB(const double,const double,const double,Quantum *,Quantum *,
    Quantum *),
  ConvertRGBToHSB(const Quantum,const Quantum,const Quantum,double *,double *,
    double *),
  ConvertRGBToHSL(const Quantum,const Quantum,const Quantum,double *,double *,
    double *),
  ConvertRGBToHWB(const Quantum,const Quantum,const Quantum,double *,double *,
    double *);
# 168 "/usr/include/magick/MagickCore.h" 2 3 4


# 1 "/usr/include/magick/identify.h" 1 3 4
# 25 "/usr/include/magick/identify.h" 3 4
extern MagickBooleanType
  IdentifyImage(Image *,FILE *,const MagickBooleanType);
# 171 "/usr/include/magick/MagickCore.h" 2 3 4


# 1 "/usr/include/magick/list.h" 1 3 4
# 25 "/usr/include/magick/list.h" 3 4
extern Image
  *CloneImageList(const Image *,ExceptionInfo *),
  *CloneImages(const Image *,const char *,ExceptionInfo *),
  *DestroyImageList(Image *),
  *GetFirstImageInList(const Image *),
  *GetImageFromList(const Image *,const long),
  *GetLastImageInList(const Image *),
  *GetNextImageInList(const Image *),
  *GetPreviousImageInList(const Image *),
  **ImageListToArray(const Image *,ExceptionInfo *),
  *NewImageList(void),
  *RemoveImageFromList(Image **),
  *RemoveLastImageFromList(Image **),
  *RemoveFirstImageFromList(Image **),
  *SpliceImageIntoList(Image **,const unsigned long,const Image *),
  *SplitImageList(Image *),
  *SyncNextImageInList(const Image *);

extern long
  GetImageIndexInList(const Image *);

extern unsigned long
  GetImageListLength(const Image *);

extern void
  AppendImageToList(Image **,const Image *),
  DeleteImageFromList(Image **),
  DeleteImages(Image **,const char *,ExceptionInfo *),
  InsertImageInList(Image **,Image *),
  PrependImageToList(Image **,Image *),
  ReplaceImageInList(Image **,Image *),
  ReverseImageList(Image **),
  SyncImageList(Image *);
# 174 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/locale_.h" 1 3 4
# 27 "/usr/include/magick/locale_.h" 3 4
typedef struct _LocaleInfo
{
  char
    *path,
    *tag,
    *message;

  MagickBooleanType
    stealth;

  struct _LocaleInfo
    *previous,
    *next;

  unsigned long
    signature;
} LocaleInfo;

extern char
  **GetLocaleList(const char *,unsigned long *,ExceptionInfo *);

extern const char
  *GetLocaleMessage(const char *);

extern const LocaleInfo
  *GetLocaleInfo_(const char *,ExceptionInfo *),
  **GetLocaleInfoList(const char *,unsigned long *,ExceptionInfo *);

extern LinkedListInfo
  *DestroyLocaleOptions(LinkedListInfo *),
  *GetLocaleOptions(const char *,ExceptionInfo *);

extern MagickBooleanType
  ListLocaleInfo(FILE *,ExceptionInfo *);

extern void
  DestroyLocaleList(void);
# 175 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/log.h" 1 3 4
# 45 "/usr/include/magick/log.h" 3 4
typedef enum
{
  UndefinedEvents,
  NoEvents = 0x0000,
  TraceEvent = 0x0001,
  AnnotateEvent = 0x0002,
  BlobEvent = 0x0004,
  CacheEvent = 0x0008,
  CoderEvent = 0x0010,
  ConfigureEvent = 0x0020,
  DeprecateEvent = 0x0040,
  DrawEvent = 0x0080,
  ExceptionEvent = 0x0100,
  LocaleEvent = 0x0200,
  ModuleEvent = 0x0400,
  ResourceEvent = 0x0800,
  TransformEvent = 0x1000,
  UserEvent = 0x2000,
  WandEvent = 0x4000,
  X11Event = 0x8000,
  AllEvents = 0x7fffffff
} LogEventType;

typedef struct _LogInfo
  LogInfo;

extern char
  **GetLogList(const char *,unsigned long *,ExceptionInfo *);

extern const char
  *GetLogName(void),
  *SetLogName(const char *);

extern const LogInfo
  *GetLogInfo(const char *,ExceptionInfo *),
  **GetLogInfoList(const char *,unsigned long *,ExceptionInfo *);

extern LogEventType
  SetLogEventMask(const char *);

extern MagickBooleanType
  IsEventLogging(void),
  ListLogInfo(FILE *,ExceptionInfo *),
  LogMagickEvent(const LogEventType,const char *,const char *,
    const unsigned long,const char *,...)
    __attribute__((format (printf,5,6))),
  LogMagickEventList(const LogEventType,const char *,const char *,
    const unsigned long,const char *,va_list)
    __attribute__((format (printf,5,0)));

extern void
  CloseWizardLog(void),
  DestroyLogList(void),
  SetLogFormat(const char *);
# 176 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/magic.h" 1 3 4
# 25 "/usr/include/magick/magic.h" 3 4
typedef struct _MagicInfo
{
  char
    *path,
    *name,
    *target;

  unsigned char
    *magic;

  size_t
    length;

  MagickOffsetType
    offset;

  MagickBooleanType
    stealth;

  struct _MagicInfo
    *previous,
    *next;

  unsigned long
    signature;
} MagicInfo;

extern char
  **GetMagicList(const char *,unsigned long *,ExceptionInfo *);

extern const char
  *GetMagicName(const MagicInfo *);

extern MagickBooleanType
  ListMagicInfo(FILE *,ExceptionInfo *);

extern const MagicInfo
  *GetMagicInfo(const unsigned char *,const size_t,ExceptionInfo *),
  **GetMagicInfoList(const char *,unsigned long *,ExceptionInfo *);

extern void
  DestroyMagicList(void);
# 177 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/magick.h" 1 3 4
# 25 "/usr/include/magick/magick.h" 3 4
typedef enum
{
  NoThreadSupport = 0x0000,
  DecoderThreadSupport = 0x0001,
  EncoderThreadSupport = 0x0002
} MagickThreadSupport;

typedef Image
  *DecodeImageHandler(const ImageInfo *,ExceptionInfo *);

typedef MagickBooleanType
  EncodeImageHandler(const ImageInfo *,Image *);

typedef MagickBooleanType
  IsImageFormatHandler(const unsigned char *,const size_t);

typedef struct _MagickInfo
{
  char
    *name,
    *description,
    *version,
    *note,
    *module;

  ImageInfo
    *image_info;

  DecodeImageHandler
    *decoder;

  EncodeImageHandler
    *encoder;

  IsImageFormatHandler
    *magick;

  void
    *client_data;

  MagickBooleanType
    adjoin,
    raw,
    endian_support,
    blob_support,
    seekable_stream;

  MagickStatusType
    thread_support;

  MagickBooleanType
    stealth;

  struct _MagickInfo
    *previous,
    *next;

  unsigned long
    signature;
} MagickInfo;

extern char
  **GetMagickList(const char *,unsigned long *,ExceptionInfo *);

extern const char
  *GetImageMagick(const unsigned char *,const size_t),
  *GetMagickDescription(const MagickInfo *);

extern DecodeImageHandler
  *GetImageDecoder(const MagickInfo *);

extern EncodeImageHandler
  *GetImageEncoder(const MagickInfo *);

extern MagickBooleanType
  GetMagickAdjoin(const MagickInfo *),
  GetMagickBlobSupport(const MagickInfo *),
  GetMagickEndianSupport(const MagickInfo *),
  GetMagickSeekableStream(const MagickInfo *),
  IsMagickInstantiated(void),
  UnregisterMagickInfo(const char *);

extern const MagickInfo
  *GetMagickInfo(const char *,ExceptionInfo *),
  **GetMagickInfoList(const char *,unsigned long *,ExceptionInfo *);

extern MagickInfo
  *RegisterMagickInfo(MagickInfo *),
  *SetMagickInfo(const char *);

extern MagickStatusType
  GetMagickThreadSupport(const MagickInfo *);

extern void
  DestroyMagickList(void),
  MagickCoreGenesis(const char *,const MagickBooleanType),
  MagickCoreTerminus(void);
# 178 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/matrix.h" 1 3 4
# 25 "/usr/include/magick/matrix.h" 3 4
extern double
  **AcquireMagickMatrix(const unsigned long,const unsigned long),
  **RelinquishMagickMatrix(double **,const unsigned long);

extern MagickBooleanType
  GaussJordanElimination(double **,double **,const unsigned long,
       const unsigned long);

extern void
  LeastSquaresAddTerms(double **,double **,const double *,const double *,
       const unsigned long, const unsigned long);
# 179 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/memory_.h" 1 3 4
# 25 "/usr/include/magick/memory_.h" 3 4
extern void
  *AcquireMagickMemory(const size_t),
  *AcquireQuantumMemory(const size_t,const size_t),
  *CopyMagickMemory(void *,const void *,const size_t),
  DestroyMagickMemory(void),
  *RelinquishMagickMemory(void *),
  *ResetMagickMemory(void *,int,const size_t),
  *ResizeMagickMemory(void *,const size_t),
  *ResizeQuantumMemory(void *,const size_t,const size_t);
# 180 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/module.h" 1 3 4
# 26 "/usr/include/magick/module.h" 3 4
# 1 "/usr/include/magick/version.h" 1 3 4
# 59 "/usr/include/magick/version.h" 3 4
extern char
  *GetMagickHomeURL(void);

extern const char
  *GetMagickCopyright(void),
  *GetMagickPackageName(void),
  *GetMagickQuantumDepth(unsigned long *),
  *GetMagickQuantumRange(unsigned long *),
  *GetMagickReleaseDate(void),
  *GetMagickVersion(unsigned long *);
# 27 "/usr/include/magick/module.h" 2 3 4






typedef enum
{
  MagickImageCoderModule,
  MagickImageFilterModule
} MagickModuleType;

typedef struct _ModuleInfo
{
  char
    *path,
    *tag;

  void
    *handle,
    (*unregister_module)(void);

  unsigned long
    (*register_module)(void);

  time_t
    load_time;

  MagickBooleanType
    stealth;

  struct _ModuleInfo
    *previous,
    *next;

  unsigned long
    signature;
} ModuleInfo;

typedef unsigned long
  ImageFilterHandler(Image **,const int,char **,ExceptionInfo *);

extern char
  **GetModuleList(const char *,unsigned long *,ExceptionInfo *);

extern const ModuleInfo
  *GetModuleInfo(const char *,ExceptionInfo *),
  **GetModuleInfoList(const char *,unsigned long *,ExceptionInfo *);

extern MagickBooleanType
  InvokeDynamicImageFilter(const char *,Image **,const int,char **,
    ExceptionInfo *),
  InvokeStaticImageFilter(const char *,Image **,const int,char **,
    ExceptionInfo *),
  ListModuleInfo(FILE *,ExceptionInfo *),
  OpenModule(const char *,ExceptionInfo *),
  OpenModules(ExceptionInfo *);

extern void
  DestroyModuleList(void),
  RegisterStaticModules(void),
  UnregisterStaticModules(void);
# 181 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/mime.h" 1 3 4
# 25 "/usr/include/magick/mime.h" 3 4
typedef struct _MimeInfo
  MimeInfo;

extern char
  **GetMimeList(const char *,unsigned long *,ExceptionInfo *),
  *MagickToMime(const char *);

extern const char
  *GetMimeDescription(const MimeInfo *),
  *GetMimeType(const MimeInfo *);

extern MagickBooleanType
  ListMimeInfo(FILE *,ExceptionInfo *),
  LoadMimeLists(const char *,ExceptionInfo *);

extern const MimeInfo
  *GetMimeInfo(const char *,const unsigned char *,const size_t,ExceptionInfo *),
  **GetMimeInfoList(const char *,unsigned long *,ExceptionInfo *);

extern void
  DestroyMimeList(void);
# 182 "/usr/include/magick/MagickCore.h" 2 3 4

# 1 "/usr/include/magick/montage.h" 1 3 4
# 25 "/usr/include/magick/montage.h" 3 4
typedef enum
{
  UndefinedMode,
  FrameMode,
  UnframeMode,
  ConcatenateMode
} MontageMode;

typedef struct _MontageInfo
{
  char
    *geometry,
    *tile,
    *title,
    *frame,
    *texture,
    *font;

  double
    pointsize;

  unsigned long
    border_width;

  MagickBooleanType
    shadow;

  PixelPacket
    fill,
    stroke,
    background_color,
    border_color,
    matte_color;

  GravityType
    gravity;

  char
    filename[4096];

  MagickBooleanType
    debug;

  unsigned long
    signature;
} MontageInfo;

extern Image
  *MontageImages(const Image *,const MontageInfo *,ExceptionInfo *),
  *MontageImageList(const ImageInfo *,const MontageInfo *,const Image *,
    ExceptionInfo *);

extern MontageInfo
  *CloneMontageInfo(const ImageInfo *,const MontageInfo *),
  *DestroyMontageInfo(MontageInfo *);

extern void
  GetMontageInfo(const ImageInfo *,MontageInfo *);
# 184 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/option.h" 1 3 4
# 25 "/usr/include/magick/option.h" 3 4
typedef enum
{
  MagickUndefinedOptions = -1,
  MagickAlignOptions = 0,
  MagickAlphaOptions,
  MagickBooleanOptions,
  MagickChannelOptions,
  MagickClassOptions,
  MagickClipPathOptions,
  MagickColorspaceOptions,
  MagickCommandOptions,
  MagickComposeOptions,
  MagickCompressOptions,
  MagickDataTypeOptions,
  MagickDebugOptions,
  MagickDecorateOptions,
  MagickDisposeOptions,
  MagickDistortOptions,
  MagickEndianOptions,
  MagickEvaluateOptions,
  MagickFillRuleOptions,
  MagickFilterOptions,
  MagickFontsOptions,
  MagickGravityOptions,
  MagickIntentOptions,
  MagickInterlaceOptions,
  MagickInterpolateOptions,
  MagickLayerOptions,
  MagickLineCapOptions,
  MagickLineJoinOptions,
  MagickListOptions,
  MagickLogEventOptions,
  MagickMetricOptions,
  MagickMethodOptions,
  MagickModeOptions,
  MagickMogrifyOptions,
  MagickNoiseOptions,
  MagickOrientationOptions,
  MagickPreviewOptions,
  MagickPrimitiveOptions,
  MagickQuantumFormatOptions,
  MagickResolutionOptions,
  MagickResourceOptions,
  MagickStorageOptions,
  MagickStretchOptions,
  MagickStyleOptions,
  MagickTypeOptions,
  MagickVirtualPixelOptions,

  MagickCoderOptions,
  MagickColorOptions,
  MagickConfigureOptions,
  MagickDelegateOptions,
  MagickFontOptions,
  MagickFormatOptions,
  MagickMimeOptions,
  MagickLocaleOptions,
  MagickLogOptions,
  MagickMagicOptions,
  MagickModuleOptions,

  MagickThresholdOptions
} MagickOption;

typedef struct _OptionInfo
{
  const char
    *mnemonic;

  long
    type;
} OptionInfo;

extern char
  **GetMagickOptions(const MagickOption),
  *GetNextImageOption(const ImageInfo *),
  *RemoveImageOption(ImageInfo *,const char *);

extern const char
  *GetImageOption(const ImageInfo *,const char *),
  *MagickOptionToMnemonic(const MagickOption,const long);

extern long
  ParseChannelOption(const char *),
  ParseMagickOption(const MagickOption,const MagickBooleanType,const char *);

extern MagickBooleanType
  CloneImageOptions(ImageInfo *,const ImageInfo *),
  DefineImageOption(ImageInfo *,const char *),
  DeleteImageOption(ImageInfo *,const char *),
  IsMagickOption(const char *),
  ListMagickOptions(FILE *,const MagickOption,ExceptionInfo *),
  SetImageOption(ImageInfo *,const char *,const char *),
  SyncImageOptions(const ImageInfo *,Image *);

extern void
  DestroyImageOptions(ImageInfo *),
  ResetImageOptionIterator(const ImageInfo *);
# 185 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/paint.h" 1 3 4
# 28 "/usr/include/magick/paint.h" 3 4
extern Image
  *OilPaintImage(const Image *,const double,ExceptionInfo *);

extern MagickBooleanType
  FloodfillPaintImage(Image *,const ChannelType,const DrawInfo *,
    const MagickPixelPacket *,const long,const long,const MagickBooleanType),
  OpaquePaintImage(Image *,const MagickPixelPacket *,const MagickPixelPacket *,
    const MagickBooleanType),
  OpaquePaintImageChannel(Image *,const ChannelType,const MagickPixelPacket *,
    const MagickPixelPacket *,const MagickBooleanType),
  TransparentPaintImage(Image *,const MagickPixelPacket *,
    const Quantum,const MagickBooleanType);
# 186 "/usr/include/magick/MagickCore.h" 2 3 4

# 1 "/usr/include/magick/prepress.h" 1 3 4
# 25 "/usr/include/magick/prepress.h" 3 4
extern double
  GetImageTotalInkDensity(Image *image);
# 188 "/usr/include/magick/MagickCore.h" 2 3 4

# 1 "/usr/include/magick/property.h" 1 3 4
# 25 "/usr/include/magick/property.h" 3 4
extern char
  *GetNextImageProperty(const Image *),
  *InterpretImageProperties(const ImageInfo *,Image *,const char *),
  *RemoveImageProperty(Image *,const char *);

extern const char
  *GetImageProperty(const Image *,const char *);

extern MagickBooleanType
  CloneImageProperties(Image *,const Image *),
  DefineImageProperty(Image *,const char *),
  DeleteImageProperty(Image *,const char *),
  FormatImageProperty(Image *,const char *,const char *,...)
    __attribute__((format (printf,3,4))),
  FormatImagePropertyList(Image *,const char *,const char *,va_list)
    __attribute__((format (printf,3,0))),
  SetImageProperty(Image *,const char *,const char *);

extern void
  DestroyImageProperties(Image *),
  ResetImagePropertyIterator(const Image *);
# 190 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/quantize.h" 1 3 4
# 27 "/usr/include/magick/quantize.h" 3 4
typedef struct _QuantizeInfo
{
  unsigned long
    number_colors;

  unsigned long
    tree_depth;

  MagickBooleanType
    dither;

  ColorspaceType
    colorspace;

  MagickBooleanType
    measure_error;

  unsigned long
    signature;
} QuantizeInfo;

extern MagickBooleanType
  GetImageQuantizeError(Image *),
  MapImage(Image *,const Image *,const MagickBooleanType),
  MapImages(Image *,const Image *,const MagickBooleanType),
  PosterizeImage(Image *,const unsigned long,const MagickBooleanType),
  QuantizeImage(const QuantizeInfo *,Image *),
  QuantizeImages(const QuantizeInfo *,Image *);

extern QuantizeInfo
  *AcquireQuantizeInfo(const ImageInfo *),
  *CloneQuantizeInfo(const QuantizeInfo *),
  *DestroyQuantizeInfo(QuantizeInfo *);

extern void
  CompressImageColormap(Image *),
  GetQuantizeInfo(QuantizeInfo *);
# 191 "/usr/include/magick/MagickCore.h" 2 3 4


# 1 "/usr/include/magick/random_.h" 1 3 4
# 25 "/usr/include/magick/random_.h" 3 4
extern double
  GetRandomValue(void);

extern void
  DestroyRandomReservoir(void),
  DistillRandomEvent(const unsigned char *,const size_t),
  GetRandomKey(unsigned char *,const size_t),
  SeedRandomReservoir(const unsigned long);
# 194 "/usr/include/magick/MagickCore.h" 2 3 4


# 1 "/usr/include/magick/resource_.h" 1 3 4
# 25 "/usr/include/magick/resource_.h" 3 4
typedef enum
{
  UndefinedResource,
  AreaResource,
  DiskResource,
  FileResource,
  MapResource,
  MemoryResource
} ResourceType;



extern int
  AcquireUniqueFileResource(char *);

extern MagickBooleanType
  AcquireMagickResource(const ResourceType,const MagickSizeType),
  RelinquishUniqueFileResource(const char *),
  ListMagickResourceInfo(FILE *,ExceptionInfo *),
  SetMagickResourceLimit(const ResourceType,const MagickSizeType);

extern MagickSizeType
  GetMagickResource(const ResourceType),
  GetMagickResourceLimit(const ResourceType);

extern void
  AsynchronousDestroyMagickResources(void),
  DestroyMagickResources(void),
  InitializeMagickResources(void),
  RelinquishMagickResource(const ResourceType,const MagickSizeType);
# 197 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/segment.h" 1 3 4
# 25 "/usr/include/magick/segment.h" 3 4
extern MagickPixelPacket
  GetImageDynamicThreshold(const Image *,const double,const double,
    ExceptionInfo *);

extern MagickBooleanType
  SegmentImage(Image *,const ColorspaceType,const MagickBooleanType,
    const double,const double);
# 198 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/shear.h" 1 3 4
# 25 "/usr/include/magick/shear.h" 3 4
extern Image
  *AffineTransformImage(const Image *,const AffineMatrix *,ExceptionInfo *),
  *RotateImage(const Image *,const double,ExceptionInfo *),
  *ShearImage(const Image *,const double,const double,ExceptionInfo *);
# 199 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/signature.h" 1 3 4
# 27 "/usr/include/magick/signature.h" 3 4
typedef struct _SignatureInfo
{
  unsigned long
    digest[8],
    low_order,
    high_order;

  long
    offset;

  unsigned char
    message[64];

  MagickBooleanType
    lsb_first;

  unsigned long
    signature;
} SignatureInfo;

extern MagickBooleanType
  SignatureImage(Image *);

extern void
  FinalizeSignature(SignatureInfo *),
  GetSignatureInfo(SignatureInfo *),
  UpdateSignature(SignatureInfo *,const unsigned char *,const size_t);
# 200 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/splay-tree.h" 1 3 4
# 25 "/usr/include/magick/splay-tree.h" 3 4
typedef struct _SplayTreeInfo
  SplayTreeInfo;

extern MagickBooleanType
  AddValueToSplayTree(SplayTreeInfo *,const void *,const void *),
  DeleteNodeByValueFromSplayTree(SplayTreeInfo *,const void *),
  DeleteNodeFromSplayTree(SplayTreeInfo *,const void *);

extern int
  CompareSplayTreeString(const void *,const void *),
  CompareSplayTreeStringInfo(const void *,const void *);

extern SplayTreeInfo
  *CloneSplayTree(SplayTreeInfo *,void *(*)(void *),void *(*)(void *)),
  *DestroySplayTree(SplayTreeInfo *),
  *NewSplayTree(int (*)(const void *,const void *),void *(*)(void *),
    void *(*)(void *));

extern unsigned long
  GetNumberOfNodesInSplayTree(const SplayTreeInfo *);

extern void
  *GetNextKeyInSplayTree(SplayTreeInfo *),
  *GetNextValueInSplayTree(SplayTreeInfo *),
  *GetValueFromSplayTree(SplayTreeInfo *,const void *),
  *RemoveNodeByValueFromSplayTree(SplayTreeInfo *,const void *),
  *RemoveNodeFromSplayTree(SplayTreeInfo *,const void *),
  ResetSplayTreeIterator(SplayTreeInfo *);
# 201 "/usr/include/magick/MagickCore.h" 2 3 4

# 1 "/usr/include/magick/statistic.h" 1 3 4
# 25 "/usr/include/magick/statistic.h" 3 4
typedef struct _ChannelStatistics
{
  unsigned long
    depth;

  double
    minima,
    maxima,
    mean,
    standard_deviation;
} ChannelStatistics;

extern ChannelStatistics
  *GetImageChannelStatistics(const Image *,ExceptionInfo *);

extern MagickBooleanType
  GetImageChannelExtrema(const Image *,const ChannelType,unsigned long *,
    unsigned long *,ExceptionInfo *),
  GetImageChannelMean(const Image *,const ChannelType,double *,double *,
    ExceptionInfo *),
  GetImageChannelRange(const Image *,const ChannelType,double *,double *,
    ExceptionInfo *),
  GetImageExtrema(const Image *,unsigned long *,unsigned long *,
    ExceptionInfo *),
  GetImageRange(const Image *,double *,double *,ExceptionInfo *),
  GetImageMean(const Image *,double *,double *,ExceptionInfo *),
  SetImageChannelDepth(Image *,const ChannelType,const unsigned long),
  SetImageDepth(Image *,const unsigned long);

extern RectangleInfo
  GetImageBoundingBox(const Image *,ExceptionInfo *exception);

extern unsigned long
  GetImageChannelDepth(const Image *,const ChannelType,ExceptionInfo *),
  GetImageDepth(const Image *,ExceptionInfo *),
  GetImageQuantumDepth(const Image *,const MagickBooleanType);
# 203 "/usr/include/magick/MagickCore.h" 2 3 4


# 1 "/usr/include/magick/token.h" 1 3 4
# 28 "/usr/include/magick/token.h" 3 4
typedef struct _TokenInfo
  TokenInfo;

extern int
  Tokenizer(TokenInfo *,const unsigned int,char *,const size_t,const char *,
    const char *,const char *,const char *,const char,char *,int *,char *);

extern MagickBooleanType
  GlobExpression(const char *,const char *,const MagickBooleanType),
  IsGlob(const char *);

extern TokenInfo
  *AcquireTokenInfo(void),
  *DestroyTokenInfo(TokenInfo *);

extern void
  GetMagickToken(const char *,const char **,char *);
# 206 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/transform.h" 1 3 4
# 25 "/usr/include/magick/transform.h" 3 4
extern Image
  *ChopImage(const Image *,const RectangleInfo *,ExceptionInfo *),
  *ConsolidateCMYKImages(const Image *,ExceptionInfo *),
  *CropImage(const Image *,const RectangleInfo *,ExceptionInfo *),
  *ExcerptImage(const Image *,const RectangleInfo *,ExceptionInfo *),
  *ExtentImage(const Image *,const RectangleInfo *,ExceptionInfo *),
  *FlipImage(const Image *,ExceptionInfo *),
  *FlopImage(const Image *,ExceptionInfo *),
  *RollImage(const Image *,const long,const long,ExceptionInfo *),
  *ShaveImage(const Image *,const RectangleInfo *,ExceptionInfo *),
  *SpliceImage(const Image *,const RectangleInfo *,ExceptionInfo *),
  *TransposeImage(const Image *,ExceptionInfo *),
  *TransverseImage(const Image *,ExceptionInfo *),
  *TrimImage(const Image *,ExceptionInfo *);

extern MagickBooleanType
  TransformImage(Image **,const char *,const char *),
  TransformImages(Image **,const char *,const char *);
# 207 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/threshold.h" 1 3 4
# 25 "/usr/include/magick/threshold.h" 3 4
typedef struct _ThresholdMap
  ThresholdMap;

extern Image
  *AdaptiveThresholdImage(const Image *,const unsigned long,const unsigned long,
    const long,ExceptionInfo *);

extern ThresholdMap
  *DestroyThresholdMap(ThresholdMap *),
  *GetThresholdMap(const char *,ExceptionInfo *);

extern MagickBooleanType
  BilevelImage(Image *,const double),
  BilevelImageChannel(Image *,const ChannelType,const double),
  BlackThresholdImage(Image *,const char *),
  ListThresholdMaps(FILE *,ExceptionInfo *),
  OrderedDitherImage(Image *),
  OrderedDitherImageChannel(Image *,const ChannelType,ExceptionInfo *),
  OrderedPosterizeImage(Image *,const char *,ExceptionInfo *),
  OrderedPosterizeImageChannel(Image *,const ChannelType,const char *,
    ExceptionInfo *),
  RandomThresholdImage(Image *,const char *,ExceptionInfo *),
  RandomThresholdImageChannel(Image *,const ChannelType,const char *,
    ExceptionInfo *),
  WhiteThresholdImage(Image *,const char *);
# 208 "/usr/include/magick/MagickCore.h" 2 3 4

# 1 "/usr/include/magick/utility.h" 1 3 4
# 25 "/usr/include/magick/utility.h" 3 4
typedef enum
{
  UndefinedPath,
  MagickPath,
  RootPath,
  HeadPath,
  TailPath,
  BasePath,
  ExtensionPath,
  SubimagePath,
  CanonicalPath
} PathType;

extern char
  *Base64Encode(const unsigned char *,const size_t,size_t *),
  **GetPathComponents(const char *,unsigned long *),
  **ListFiles(const char *,const char *,unsigned long *);

extern FILE
  *MagickOpenStream(const char *,const char *);

extern int
  SystemCommand(const MagickBooleanType,const char *);

extern MagickBooleanType
  AcquireUniqueFilename(char *),
  AcquireUniqueSymbolicLink(const char *,char *),
  ExpandFilenames(int *,char ***),
  GetExecutionPath(char *,const size_t),
  IsAccessible(const char *),
  IsMagickTrue(const char *);

extern unsigned char
  *Base64Decode(const char *, size_t *);

extern unsigned long
  MultilineCensus(const char *);

extern void
  AppendImageFormat(const char *,char *),
  ChopPathComponents(char *,const unsigned long),
  ExpandFilename(char *),
  GetPathComponent(const char *,PathType,char *);
# 210 "/usr/include/magick/MagickCore.h" 2 3 4

# 1 "/usr/include/magick/xml-tree.h" 1 3 4
# 28 "/usr/include/magick/xml-tree.h" 3 4
typedef struct _XMLTreeInfo
  XMLTreeInfo;

extern char
  *CanonicalXMLContent(const char *,const MagickBooleanType),
  *XMLTreeInfoToXML(XMLTreeInfo *);

extern const char
  *GetXMLTreeAttribute(XMLTreeInfo *,const char *),
  *GetXMLTreeContent(XMLTreeInfo *),
  **GetXMLTreeProcessingInstructions(XMLTreeInfo *,const char *),
  *GetXMLTreeTag(XMLTreeInfo *);

extern MagickBooleanType
  GetXMLTreeAttributes(const XMLTreeInfo *,SplayTreeInfo *);

extern XMLTreeInfo
  *AddChildToXMLTree(XMLTreeInfo *,const char *,const size_t),
  *AddPathToXMLTree(XMLTreeInfo *,const char *,const size_t),
  *DestroyXMLTree(XMLTreeInfo *),
  *GetNextXMLTreeTag(XMLTreeInfo *),
  *GetXMLTreeChild(XMLTreeInfo *,const char *),
  *GetXMLTreeOrdered(XMLTreeInfo *),
  *GetXMLTreePath(XMLTreeInfo *,const char *),
  *GetXMLTreeSibling(XMLTreeInfo *),
  *InsertTagIntoXMLTree(XMLTreeInfo *,XMLTreeInfo *,const size_t),
  *NewXMLTree(const char *,ExceptionInfo *),
  *NewXMLTreeTag(const char *),
  *ParseTagFromXMLTree(XMLTreeInfo *),
  *PruneTagFromXMLTree(XMLTreeInfo *),
  *SetXMLTreeAttribute(XMLTreeInfo *,const char *,const char *),
  *SetXMLTreeContent(XMLTreeInfo *,const char *);
# 212 "/usr/include/magick/MagickCore.h" 2 3 4
# 1 "/usr/include/magick/xwindow.h" 1 3 4
# 25 "/usr/include/magick/xwindow.h" 3 4
typedef struct _XImportInfo
{
  MagickBooleanType
    frame,
    borders,
    screen,
    descend,
    silent;
} XImportInfo;

extern Image
  *XImportImage(const ImageInfo *,XImportInfo *);

extern void
  XGetImportInfo(XImportInfo *);
# 213 "/usr/include/magick/MagickCore.h" 2 3 4
# 141 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/animate.h" 1 3 4
# 25 "/usr/include/wand/animate.h" 3 4
extern MagickBooleanType
  AnimateImageCommand(ImageInfo *,int,char **,char **,ExceptionInfo *);
# 142 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/compare.h" 1 3 4
# 25 "/usr/include/wand/compare.h" 3 4
extern MagickBooleanType
  CompareImageCommand(ImageInfo *,int,char **,char **,ExceptionInfo *);
# 143 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/composite.h" 1 3 4
# 25 "/usr/include/wand/composite.h" 3 4
extern MagickBooleanType
  CompositeImageCommand(ImageInfo *,int,char **,char **,ExceptionInfo *);
# 144 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/conjure.h" 1 3 4
# 25 "/usr/include/wand/conjure.h" 3 4
extern MagickBooleanType
  ConjureImageCommand(ImageInfo *,int,char **,char **,ExceptionInfo *);
# 145 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/convert.h" 1 3 4
# 25 "/usr/include/wand/convert.h" 3 4
extern MagickBooleanType
  ConvertImageCommand(ImageInfo *,int,char **,char **,ExceptionInfo *);
# 146 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/deprecate.h" 1 3 4
# 27 "/usr/include/wand/deprecate.h" 3 4
# 1 "/usr/include/wand/drawing-wand.h" 1 3 4
# 25 "/usr/include/wand/drawing-wand.h" 3 4
# 1 "/usr/include/wand/pixel-wand.h" 1 3 4
# 25 "/usr/include/wand/pixel-wand.h" 3 4
typedef struct _PixelWand
  PixelWand;

extern char
  *PixelGetColorAsNormalizedString(const PixelWand *),
  *PixelGetColorAsString(const PixelWand *),
  *PixelGetException(const PixelWand *,ExceptionType *);

extern double
  PixelGetAlpha(const PixelWand *),
  PixelGetBlack(const PixelWand *),
  PixelGetBlue(const PixelWand *),
  PixelGetCyan(const PixelWand *),
  PixelGetFuzz(const PixelWand *),
  PixelGetGreen(const PixelWand *),
  PixelGetMagenta(const PixelWand *),
  PixelGetOpacity(const PixelWand *),
  PixelGetRed(const PixelWand *),
  PixelGetYellow(const PixelWand *);

extern ExceptionType
  PixelGetExceptionType(const PixelWand *);

extern IndexPacket
  PixelGetIndex(const PixelWand *);

extern MagickBooleanType
  IsPixelWand(const PixelWand *),
  IsPixelWandSimilar(PixelWand *,PixelWand *,const double),
  PixelClearException(PixelWand *),
  PixelSetColor(PixelWand *,const char *);

extern PixelWand
  *ClonePixelWand(const PixelWand *),
  **ClonePixelWands(const PixelWand **,const unsigned long),
  *DestroyPixelWand(PixelWand *),
  **DestroyPixelWands(PixelWand **,const unsigned long),
  *NewPixelWand(void),
  **NewPixelWands(const unsigned long);

extern Quantum
  PixelGetAlphaQuantum(const PixelWand *),
  PixelGetBlackQuantum(const PixelWand *),
  PixelGetBlueQuantum(const PixelWand *),
  PixelGetCyanQuantum(const PixelWand *),
  PixelGetGreenQuantum(const PixelWand *),
  PixelGetMagentaQuantum(const PixelWand *),
  PixelGetOpacityQuantum(const PixelWand *),
  PixelGetRedQuantum(const PixelWand *),
  PixelGetYellowQuantum(const PixelWand *);

extern unsigned long
  PixelGetColorCount(const PixelWand *);

extern void
  ClearPixelWand(PixelWand *),
  PixelGetHSL(const PixelWand *,double *,double *,double *),
  PixelGetMagickColor(const PixelWand *,MagickPixelPacket *),
  PixelGetQuantumColor(const PixelWand *,PixelPacket *),
  PixelSetAlpha(PixelWand *,const double),
  PixelSetAlphaQuantum(PixelWand *,const Quantum),
  PixelSetBlack(PixelWand *,const double),
  PixelSetBlackQuantum(PixelWand *,const Quantum),
  PixelSetBlue(PixelWand *,const double),
  PixelSetBlueQuantum(PixelWand *,const Quantum),
  PixelSetColorFromWand(PixelWand *,const PixelWand *),
  PixelSetColorCount(PixelWand *,const unsigned long),
  PixelSetCyan(PixelWand *,const double),
  PixelSetCyanQuantum(PixelWand *,const Quantum),
  PixelSetFuzz(PixelWand *,const double),
  PixelSetGreen(PixelWand *,const double),
  PixelSetGreenQuantum(PixelWand *,const Quantum),
  PixelSetHSL(PixelWand *,const double,const double,const double),
  PixelSetIndex(PixelWand *,const IndexPacket),
  PixelSetMagenta(PixelWand *,const double),
  PixelSetMagentaQuantum(PixelWand *,const Quantum),
  PixelSetMagickColor(PixelWand *,const MagickPixelPacket *),
  PixelSetOpacity(PixelWand *,const double),
  PixelSetOpacityQuantum(PixelWand *,const Quantum),
  PixelSetQuantumColor(PixelWand *,const PixelPacket *),
  PixelSetRed(PixelWand *,const double),
  PixelSetRedQuantum(PixelWand *,const Quantum),
  PixelSetYellow(PixelWand *,const double),
  PixelSetYellowQuantum(PixelWand *,const Quantum);
# 26 "/usr/include/wand/drawing-wand.h" 2 3 4

typedef struct _DrawingWand
  DrawingWand;

extern AlignType
  DrawGetTextAlignment(const DrawingWand *);

extern char
  *DrawGetClipPath(const DrawingWand *),
  *DrawGetException(const DrawingWand *,ExceptionType *),
  *DrawGetFont(const DrawingWand *),
  *DrawGetFontFamily(const DrawingWand *),
  *DrawGetTextEncoding(const DrawingWand *),
  *DrawGetVectorGraphics(DrawingWand *);

extern ClipPathUnits
  DrawGetClipUnits(const DrawingWand *);

extern DecorationType
  DrawGetTextDecoration(const DrawingWand *);

extern double
  DrawGetFillOpacity(const DrawingWand *),
  DrawGetFontSize(const DrawingWand *),
  *DrawGetStrokeDashArray(const DrawingWand *,unsigned long *),
  DrawGetStrokeDashOffset(const DrawingWand *),
  DrawGetStrokeOpacity(const DrawingWand *),
  DrawGetStrokeWidth(const DrawingWand *);

extern DrawInfo
  *PeekDrawingWand(const DrawingWand *);

extern DrawingWand
  *CloneDrawingWand(const DrawingWand *),
  *DestroyDrawingWand(DrawingWand *),
  *DrawAllocateWand(const DrawInfo *,Image *),
  *NewDrawingWand(void);

extern ExceptionType
  DrawGetExceptionType(const DrawingWand *);

extern FillRule
  DrawGetClipRule(const DrawingWand *),
  DrawGetFillRule(const DrawingWand *);

extern GravityType
  DrawGetGravity(const DrawingWand *);

extern LineCap
  DrawGetStrokeLineCap(const DrawingWand *);

extern LineJoin
  DrawGetStrokeLineJoin(const DrawingWand *);

extern MagickBooleanType
  DrawClearException(DrawingWand *),
  DrawComposite(DrawingWand *,const CompositeOperator,const double,const double,
    const double,const double,MagickWand *),
  DrawGetStrokeAntialias(const DrawingWand *),
  DrawGetTextAntialias(const DrawingWand *),
  DrawPopPattern(DrawingWand *),
  DrawPushPattern(DrawingWand *,const char *,const double,const double,
    const double,const double),
  DrawRender(DrawingWand *),
  DrawSetClipPath(DrawingWand *,const char *),
  DrawSetFillPatternURL(DrawingWand *,const char *),
  DrawSetFont(DrawingWand *,const char *),
  DrawSetFontFamily(DrawingWand *,const char *),
  DrawSetStrokeDashArray(DrawingWand *,const unsigned long,const double *),
  DrawSetStrokePatternURL(DrawingWand *,const char *),
  DrawSetVectorGraphics(DrawingWand *,const char *),
  IsDrawingWand(const DrawingWand *),
  PopDrawingWand(DrawingWand *),
  PushDrawingWand(DrawingWand *);

extern StretchType
  DrawGetFontStretch(const DrawingWand *);

extern StyleType
  DrawGetFontStyle(const DrawingWand *);

extern unsigned long
  DrawGetFontWeight(const DrawingWand *),
  DrawGetStrokeMiterLimit(const DrawingWand *);

extern void
  ClearDrawingWand(DrawingWand *),
  DrawAffine(DrawingWand *,const AffineMatrix *),
  DrawAnnotation(DrawingWand *,const double,const double,const unsigned char *),
  DrawArc(DrawingWand *,const double,const double,const double,const double,
    const double,const double),
  DrawBezier(DrawingWand *,const unsigned long,const PointInfo *),
  DrawCircle(DrawingWand *,const double,const double,const double,const double),
  DrawColor(DrawingWand *,const double,const double,const PaintMethod),
  DrawComment(DrawingWand *,const char *),
  DrawEllipse(DrawingWand *,const double,const double,const double,const double,
    const double,const double),
  DrawGetFillColor(const DrawingWand *,PixelWand *),
  DrawGetStrokeColor(const DrawingWand *,PixelWand *),
  DrawGetTextUnderColor(const DrawingWand *,PixelWand *),
  DrawLine(DrawingWand *,const double, const double,const double,const double),
  DrawMatte(DrawingWand *,const double,const double,const PaintMethod),
  DrawPathClose(DrawingWand *),
  DrawPathCurveToAbsolute(DrawingWand *,const double,const double,const double,
    const double,const double,const double),
  DrawPathCurveToRelative(DrawingWand *,const double,const double,const double,
    const double,const double, const double),
  DrawPathCurveToQuadraticBezierAbsolute(DrawingWand *,const double,
    const double,const double,const double),
  DrawPathCurveToQuadraticBezierRelative(DrawingWand *,const double,
    const double,const double,const double),
  DrawPathCurveToQuadraticBezierSmoothAbsolute(DrawingWand *,const double,
    const double),
  DrawPathCurveToQuadraticBezierSmoothRelative(DrawingWand *,const double,
    const double),
  DrawPathCurveToSmoothAbsolute(DrawingWand *,const double,const double,
    const double,const double),
  DrawPathCurveToSmoothRelative(DrawingWand *,const double,const double,
    const double,const double),
  DrawPathEllipticArcAbsolute(DrawingWand *,const double,const double,
    const double,const MagickBooleanType,const MagickBooleanType,const double,
    const double),
  DrawPathEllipticArcRelative(DrawingWand *,const double,const double,
    const double,const MagickBooleanType,const MagickBooleanType,const double,
    const double),
  DrawPathFinish(DrawingWand *),
  DrawPathLineToAbsolute(DrawingWand *,const double,const double),
  DrawPathLineToRelative(DrawingWand *,const double,const double),
  DrawPathLineToHorizontalAbsolute(DrawingWand *,const double),
  DrawPathLineToHorizontalRelative(DrawingWand *,const double),
  DrawPathLineToVerticalAbsolute(DrawingWand *,const double),
  DrawPathLineToVerticalRelative(DrawingWand *,const double),
  DrawPathMoveToAbsolute(DrawingWand *,const double,const double),
  DrawPathMoveToRelative(DrawingWand *,const double,const double),
  DrawPathStart(DrawingWand *),
  DrawPoint(DrawingWand *,const double,const double),
  DrawPolygon(DrawingWand *,const unsigned long,const PointInfo *),
  DrawPolyline(DrawingWand *,const unsigned long,const PointInfo *),
  DrawPopClipPath(DrawingWand *),
  DrawPopDefs(DrawingWand *),
  DrawPushClipPath(DrawingWand *,const char *),
  DrawPushDefs(DrawingWand *),
  DrawRectangle(DrawingWand *,const double,const double,const double,
    const double),
  DrawResetVectorGraphics(DrawingWand *),
  DrawRotate(DrawingWand *,const double),
  DrawRoundRectangle(DrawingWand *,double,double,double,double,double,double),
  DrawScale(DrawingWand *,const double,const double),
  DrawSetClipRule(DrawingWand *,const FillRule),
  DrawSetClipUnits(DrawingWand *,const ClipPathUnits),
  DrawSetFillColor(DrawingWand *,const PixelWand *),
  DrawSetFillOpacity(DrawingWand *,const double),
  DrawSetFillRule(DrawingWand *,const FillRule),
  DrawSetFontSize(DrawingWand *,const double),
  DrawSetFontStretch(DrawingWand *,const StretchType),
  DrawSetFontStyle(DrawingWand *,const StyleType),
  DrawSetFontWeight(DrawingWand *,const unsigned long),
  DrawSetGravity(DrawingWand *,const GravityType),
  DrawSetStrokeAntialias(DrawingWand *,const MagickBooleanType),
  DrawSetStrokeColor(DrawingWand *,const PixelWand *),
  DrawSetStrokeDashOffset(DrawingWand *,const double dashoffset),
  DrawSetStrokeLineCap(DrawingWand *,const LineCap),
  DrawSetStrokeLineJoin(DrawingWand *,const LineJoin),
  DrawSetStrokeMiterLimit(DrawingWand *,const unsigned long),
  DrawSetStrokeOpacity(DrawingWand *, const double),
  DrawSetStrokeWidth(DrawingWand *,const double),
  DrawSetTextAlignment(DrawingWand *,const AlignType),
  DrawSetTextAntialias(DrawingWand *,const MagickBooleanType),
  DrawSetTextDecoration(DrawingWand *,const DecorationType),
  DrawSetTextEncoding(DrawingWand *,const char *),
  DrawSetTextUnderColor(DrawingWand *,const PixelWand *),
  DrawSetViewbox(DrawingWand *,unsigned long,unsigned long,unsigned long,
    unsigned long),
  DrawSkewX(DrawingWand *,const double),
  DrawSkewY(DrawingWand *,const double),
  DrawTranslate(DrawingWand *,const double,const double);
# 28 "/usr/include/wand/deprecate.h" 2 3 4
# 1 "/usr/include/wand/magick-wand.h" 1 3 4
# 22 "/usr/include/wand/magick-wand.h" 3 4
# 1 "/usr/include/wand/MagickWand.h" 1 3 4
# 23 "/usr/include/wand/magick-wand.h" 2 3 4
# 29 "/usr/include/wand/deprecate.h" 2 3 4
# 1 "/usr/include/wand/pixel-iterator.h" 1 3 4
# 28 "/usr/include/wand/pixel-iterator.h" 3 4
typedef struct _PixelIterator
  PixelIterator;

extern char
  *PixelGetIteratorException(const PixelIterator *,ExceptionType *);

extern ExceptionType
  PixelGetIteratorExceptionType(const PixelIterator *);

extern long
  PixelGetIteratorRow(PixelIterator *);

extern MagickBooleanType
  IsPixelIterator(const PixelIterator *),
  PixelClearIteratorException(PixelIterator *),
  PixelSetIteratorRow(PixelIterator *,const long),
  PixelSyncIterator(PixelIterator *);

extern PixelIterator
  *ClonePixelIterator(const PixelIterator *),
  *DestroyPixelIterator(PixelIterator *),
  *NewPixelIterator(MagickWand *),
  *NewPixelRegionIterator(MagickWand *,const long,const long,
    const unsigned long,const unsigned long);

extern PixelWand
  **PixelGetCurrentIteratorRow(PixelIterator *,unsigned long *),
  **PixelGetNextIteratorRow(PixelIterator *,unsigned long *),
  **PixelGetPreviousIteratorRow(PixelIterator *,unsigned long *);

extern void
  ClearPixelIterator(PixelIterator *),
  PixelResetIterator(PixelIterator *),
  PixelSetFirstIteratorRow(PixelIterator *),
  PixelSetLastIteratorRow(PixelIterator *);
# 30 "/usr/include/wand/deprecate.h" 2 3 4


typedef struct _DrawingWand
  *DrawContext;

extern double
  DrawGetFillAlpha(const DrawingWand *),
  DrawGetStrokeAlpha(const DrawingWand *);

extern DrawInfo
  *DrawPeekGraphicWand(const DrawingWand *);

extern char
  *MagickDescribeImage(MagickWand *),
  *MagickGetImageAttribute(MagickWand *,const char *),
  *PixelIteratorGetException(const PixelIterator *,ExceptionType *);

extern long
  MagickGetImageIndex(MagickWand *);

extern MagickBooleanType
  MagickClipPathImage(MagickWand *,const char *,const MagickBooleanType),
  MagickColorFloodfillImage(MagickWand *,const PixelWand *,const double,
    const PixelWand *,const long,const long),
  MagickGetImageChannelExtrema(MagickWand *,const ChannelType,unsigned long *,
    unsigned long *),
  MagickGetImageExtrema(MagickWand *,unsigned long *,unsigned long *),
  MagickMatteFloodfillImage(MagickWand *,const double,const double,
    const PixelWand *,const long,const long),
  MagickOpaqueImage(MagickWand *,const PixelWand *,const PixelWand *,
    const double),
  MagickPaintFloodfillImage(MagickWand *,const ChannelType,const PixelWand *,
    const double,const PixelWand *,const long,const long),
  MagickPaintOpaqueImage(MagickWand *,const PixelWand *,const PixelWand *,
    const double),
  MagickPaintOpaqueImageChannel(MagickWand *,const ChannelType,
    const PixelWand *,const PixelWand *,const double),
  MagickPaintTransparentImage(MagickWand *,const PixelWand *,const double,
    const double),
  MagickSetImageAttribute(MagickWand *,const char *,const char *),
  MagickSetImageIndex(MagickWand *,const long),
  MagickSetImageOption(MagickWand *,const char *,const char *,const char *),
  MagickTransparentImage(MagickWand *,const PixelWand *,const double,
    const double);

extern MagickWand
  *MagickFlattenImages(MagickWand *),
  *MagickMosaicImages(MagickWand *),
  *MagickRegionOfInterestImage(MagickWand *,const unsigned long,
    const unsigned long,const long,const long);

extern MagickSizeType
  MagickGetImageSize(MagickWand *);

extern PixelWand
  **PixelGetNextRow(PixelIterator *);

extern unsigned char
  *MagickWriteImageBlob(MagickWand *,size_t *);

extern VirtualPixelMethod
  MagickSetImageVirtualPixelMethod(MagickWand *,const VirtualPixelMethod);

extern void
  DrawPopGraphicContext(DrawingWand *),
  DrawPushGraphicContext(DrawingWand *),
  DrawSetFillAlpha(DrawingWand *,const double),
  DrawSetStrokeAlpha(DrawingWand *,const double);
# 147 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/display.h" 1 3 4
# 25 "/usr/include/wand/display.h" 3 4
extern MagickBooleanType
  DisplayImageCommand(ImageInfo *,int,char **,char **,ExceptionInfo *);
# 148 "/usr/include/wand/MagickWand.h" 2 3 4

# 1 "/usr/include/wand/identify.h" 1 3 4
# 25 "/usr/include/wand/identify.h" 3 4
extern MagickBooleanType
  IdentifyImageCommand(ImageInfo *,int,char **,char **,ExceptionInfo *);
# 150 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/import.h" 1 3 4
# 25 "/usr/include/wand/import.h" 3 4
extern MagickBooleanType
  ImportImageCommand(ImageInfo *,int,char **,char **,ExceptionInfo *);
# 151 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/magick-property.h" 1 3 4
# 26 "/usr/include/wand/magick-property.h" 3 4
extern char
  *MagickGetFilename(const MagickWand *),
  *MagickGetFormat(MagickWand *),
  *MagickGetFont(MagickWand *),
  *MagickGetHomeURL(void),
  **MagickGetImageProfiles(MagickWand *,const char *,unsigned long *),
  *MagickGetImageProperty(MagickWand *,const char *),
  **MagickGetImageProperties(MagickWand *,const char *,unsigned long *),
  *MagickGetOption(MagickWand *,const char *),
  **MagickGetOptions(MagickWand *,const char *,unsigned long *),
  *MagickQueryConfigureOption(const char *),
  **MagickQueryConfigureOptions(const char *,unsigned long *),
  **MagickQueryFonts(const char *,unsigned long *),
  **MagickQueryFormats(const char *,unsigned long *);

extern CompressionType
  MagickGetCompression(MagickWand *);

extern const char
  *MagickGetCopyright(void),
  *MagickGetPackageName(void),
  *MagickGetQuantumDepth(unsigned long *),
  *MagickGetQuantumRange(unsigned long *),
  *MagickGetReleaseDate(void),
  *MagickGetVersion(unsigned long *);

extern double
  MagickGetPointsize(MagickWand *),
  *MagickGetSamplingFactors(MagickWand *,unsigned long *),
  *MagickQueryFontMetrics(MagickWand *,const DrawingWand *,const char *),
  *MagickQueryMultilineFontMetrics(MagickWand *,const DrawingWand *,
    const char *);

extern GravityType
  MagickGetGravity(MagickWand *);

extern ImageType
  MagickGetType(MagickWand *);

extern InterlaceType
  MagickGetInterlaceScheme(MagickWand *);

extern InterpolatePixelMethod
  MagickGetInterpolateMethod(MagickWand *);

extern MagickBooleanType
  MagickDeleteOption(MagickWand *,const char *),
  MagickDeleteImageProperty(MagickWand *,const char *),
  MagickGetAntialias(const MagickWand *),
  MagickGetPage(const MagickWand *,unsigned long *,unsigned long *,long *,
    long *),
  MagickGetSize(const MagickWand *,unsigned long *,unsigned long *),
  MagickGetSizeOffset(const MagickWand *,long *),
  MagickProfileImage(MagickWand *,const char *,const void *,const size_t),
  MagickSetAntialias(MagickWand *,const MagickBooleanType),
  MagickSetBackgroundColor(MagickWand *,const PixelWand *),
  MagickSetCompression(MagickWand *,const CompressionType),
  MagickSetCompressionQuality(MagickWand *,const unsigned long),
  MagickSetDepth(MagickWand *,const unsigned long),
  MagickSetFilename(MagickWand *,const char *),
  MagickSetFormat(MagickWand *,const char *),
  MagickSetFont(MagickWand *,const char *),
  MagickSetGravity(MagickWand *,const GravityType),
  MagickSetImageProfile(MagickWand *,const char *,const void *,const size_t),
  MagickSetImageProperty(MagickWand *,const char *,const char *),
  MagickSetInterlaceScheme(MagickWand *,const InterlaceType),
  MagickSetInterpolateMethod(MagickWand *,const InterpolatePixelMethod),
  MagickSetOption(MagickWand *,const char *,const char *),
  MagickSetOrientation(MagickWand *,const OrientationType),
  MagickSetPage(MagickWand *,const unsigned long,const unsigned long,
    const long,const long),
  MagickSetPassphrase(MagickWand *,const char *),
  MagickSetPointsize(MagickWand *,const double),
  MagickSetResolution(MagickWand *,const double,const double),
  MagickSetResourceLimit(const ResourceType type,const MagickSizeType limit),
  MagickSetSamplingFactors(MagickWand *,const unsigned long,const double *),
  MagickSetSize(MagickWand *,const unsigned long,const unsigned long),
  MagickSetSizeOffset(MagickWand *,const unsigned long,const unsigned long,
    const long),
  MagickSetType(MagickWand *,const ImageType);

extern MagickProgressMonitor
  MagickSetProgressMonitor(MagickWand *,const MagickProgressMonitor,void *);

extern PixelWand
  *MagickGetBackgroundColor(MagickWand *);

extern OrientationType
  MagickGetOrientationType(MagickWand *);

extern unsigned char
  *MagickGetImageProfile(MagickWand *,const char *,size_t *),
  *MagickRemoveImageProfile(MagickWand *,const char *,size_t *);

extern unsigned long
  MagickGetCompressionQuality(MagickWand *),
  MagickGetResource(const ResourceType),
  MagickGetResourceLimit(const ResourceType);
# 152 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/magick-image.h" 1 3 4
# 26 "/usr/include/wand/magick-image.h" 3 4
extern ChannelStatistics
  *MagickGetImageChannelStatistics(MagickWand *);

extern char
  *MagickGetImageFilename(MagickWand *),
  *MagickGetImageFormat(MagickWand *),
  *MagickGetImageSignature(MagickWand *),
  *MagickIdentifyImage(MagickWand *);

extern CompositeOperator
  MagickGetImageCompose(MagickWand *);

extern ColorspaceType
  MagickGetImageColorspace(MagickWand *);

extern CompressionType
  MagickGetImageCompression(MagickWand *);

extern DisposeType
  MagickGetImageDispose(MagickWand *);

extern double
  MagickGetImageGamma(MagickWand *),
  MagickGetImageTotalInkDensity(MagickWand *);

extern Image
  *MagickDestroyImage(Image *),
  *GetImageFromMagickWand(MagickWand *);

extern ImageType
  MagickGetImageType(MagickWand *);

extern InterlaceType
  MagickGetImageInterlaceScheme(MagickWand *);

extern InterpolatePixelMethod
  MagickGetImageInterpolateMethod(MagickWand *);

extern MagickBooleanType
  MagickAdaptiveBlurImage(MagickWand *,const double,const double),
  MagickAdaptiveBlurImageChannel(MagickWand *,const ChannelType,const double,
    const double),
  MagickAdaptiveResizeImage(MagickWand *,const unsigned long,
    const unsigned long),
  MagickAdaptiveSharpenImage(MagickWand *,const double,const double),
  MagickAdaptiveSharpenImageChannel(MagickWand *,const ChannelType,const double,
    const double),
  MagickAdaptiveThresholdImage(MagickWand *,const unsigned long,
    const unsigned long,const long),
  MagickAddImage(MagickWand *,const MagickWand *),
  MagickAddNoiseImage(MagickWand *,const NoiseType),
  MagickAddNoiseImageChannel(MagickWand *,const ChannelType,const NoiseType),
  MagickAffineTransformImage(MagickWand *,const DrawingWand *),
  MagickAnnotateImage(MagickWand *,const DrawingWand *,const double,
    const double,const double,const char *),
  MagickAnimateImages(MagickWand *,const char *),
  MagickBlackThresholdImage(MagickWand *,const PixelWand *),
  MagickBlurImage(MagickWand *,const double,const double),
  MagickBlurImageChannel(MagickWand *,const ChannelType,const double,
    const double),
  MagickBorderImage(MagickWand *,const PixelWand *,const unsigned long,
    const unsigned long),
  MagickCharcoalImage(MagickWand *,const double,const double),
  MagickChopImage(MagickWand *,const unsigned long,const unsigned long,
    const long,const long),
  MagickClipImage(MagickWand *),
  MagickClipImagePath(MagickWand *,const char *,const MagickBooleanType),
  MagickClutImage(MagickWand *,const MagickWand *),
  MagickClutImageChannel(MagickWand *,const ChannelType,const MagickWand *),
  MagickColorizeImage(MagickWand *,const PixelWand *,const PixelWand *),
  MagickCommentImage(MagickWand *,const char *),
  MagickCompositeImage(MagickWand *,const MagickWand *,const CompositeOperator,
    const long,const long),
  MagickCompositeImageChannel(MagickWand *,const ChannelType,const MagickWand *, const CompositeOperator,const long,const long),
  MagickConstituteImage(MagickWand *,const unsigned long,const unsigned long,
    const char *,const StorageType,const void *),
  MagickContrastImage(MagickWand *,const MagickBooleanType),
  MagickContrastStretchImage(MagickWand *,const double,const double),
  MagickContrastStretchImageChannel(MagickWand *,const ChannelType,const double,
    const double),
  MagickConvolveImage(MagickWand *,const unsigned long,const double *),
  MagickConvolveImageChannel(MagickWand *,const ChannelType,const unsigned long,
    const double *),
  MagickCropImage(MagickWand *,const unsigned long,const unsigned long,
    const long,const long),
  MagickCycleColormapImage(MagickWand *,const long),
  MagickDespeckleImage(MagickWand *),
  MagickDisplayImage(MagickWand *,const char *),
  MagickDisplayImages(MagickWand *,const char *),
  MagickDistortImage(MagickWand *,const DistortImageMethod,const unsigned long,
    const double *,const MagickBooleanType),
  MagickDrawImage(MagickWand *,const DrawingWand *),
  MagickEdgeImage(MagickWand *,const double),
  MagickEmbossImage(MagickWand *,const double,const double),
  MagickEnhanceImage(MagickWand *),
  MagickEqualizeImage(MagickWand *),
  MagickEqualizeImageChannel(MagickWand *,const ChannelType),
  MagickEvaluateImage(MagickWand *,const MagickEvaluateOperator,const double),
  MagickEvaluateImageChannel(MagickWand *,const ChannelType,
    const MagickEvaluateOperator,const double),
  MagickExtentImage(MagickWand *,const unsigned long,const unsigned long,
    const long,const long),
  MagickFlipImage(MagickWand *),
  MagickFloodfillPaintImage(MagickWand *,const ChannelType,const PixelWand *,
    const double,const PixelWand *,const long,const long,
    const MagickBooleanType),
  MagickFlopImage(MagickWand *),
  MagickFrameImage(MagickWand *,const PixelWand *,const unsigned long,
    const unsigned long,const long,const long),
  MagickGammaImage(MagickWand *,const double),
  MagickGammaImageChannel(MagickWand *,const ChannelType,const double),
  MagickGaussianBlurImage(MagickWand *,const double,const double),
  MagickGaussianBlurImageChannel(MagickWand *,const ChannelType,const double,
    const double),
  MagickGetImageBackgroundColor(MagickWand *,PixelWand *),
  MagickGetImageBluePrimary(MagickWand *,double *,double *),
  MagickGetImageBorderColor(MagickWand *,PixelWand *),
  MagickGetImageChannelDistortion(MagickWand *,const MagickWand *,
    const ChannelType, const MetricType,double *),
  MagickGetImageDistortion(MagickWand *,const MagickWand *,const MetricType,
    double *),
  MagickGetImageChannelMean(MagickWand *,const ChannelType,double *,double *),
  MagickGetImageChannelRange(MagickWand *,const ChannelType,double *,double *),
  MagickGetImageColormapColor(MagickWand *,const unsigned long,PixelWand *),
  MagickGetImageGreenPrimary(MagickWand *,double *,double *),
  MagickGetImageMatte(MagickWand *),
  MagickGetImageMatteColor(MagickWand *,PixelWand *),
  MagickGetImageLength(MagickWand *,MagickSizeType *),
  MagickGetImagePage(MagickWand *,unsigned long *,unsigned long *,long *,
    long *),
  MagickGetImagePixelColor(MagickWand *,const long,const long,PixelWand *),
  MagickGetImagePixels(MagickWand *,const long,const long,const unsigned long,
    const unsigned long,const char *,const StorageType,void *),
  MagickGetImageRange(MagickWand *,double *,double *),
  MagickGetImageRedPrimary(MagickWand *,double *,double *),
  MagickGetImageResolution(MagickWand *,double *,double *),
  MagickGetImageWhitePoint(MagickWand *,double *,double *),
  MagickHasNextImage(MagickWand *),
  MagickHasPreviousImage(MagickWand *),
  MagickImplodeImage(MagickWand *,const double),
  MagickLabelImage(MagickWand *,const char *),
  MagickLevelImage(MagickWand *,const double,const double,const double),
  MagickLevelImageChannel(MagickWand *,const ChannelType,const double,
    const double,const double),
  MagickLinearStretchImage(MagickWand *,const double,const double),
  MagickMagnifyImage(MagickWand *),
  MagickMapImage(MagickWand *,const MagickWand *,const MagickBooleanType),
  MagickMedianFilterImage(MagickWand *,const double),
  MagickMinifyImage(MagickWand *),
  MagickModulateImage(MagickWand *,const double,const double,const double),
  MagickMotionBlurImage(MagickWand *,const double,const double,const double),
  MagickNegateImage(MagickWand *,const MagickBooleanType),
  MagickNegateImageChannel(MagickWand *,const ChannelType,
    const MagickBooleanType),
  MagickNewImage(MagickWand *,const unsigned long,const unsigned long,
    const PixelWand *),
  MagickNextImage(MagickWand *),
  MagickNormalizeImage(MagickWand *),
  MagickNormalizeImageChannel(MagickWand *,const ChannelType),
  MagickOilPaintImage(MagickWand *,const double),
  MagickOpaquePaintImage(MagickWand *,const PixelWand *,const PixelWand *,
    const double,const MagickBooleanType),
  MagickOpaquePaintImageChannel(MagickWand *,const ChannelType,
    const PixelWand *,const PixelWand *,const double,const MagickBooleanType),
  MagickOrderedPosterizeImage(MagickWand *,const char *),
  MagickOrderedPosterizeImageChannel(MagickWand *,const ChannelType,
    const char *),
  MagickTransparentPaintImage(MagickWand *,const PixelWand *,
    const double,const double,const MagickBooleanType invert),
  MagickPingImage(MagickWand *,const char *),
  MagickPingImageBlob(MagickWand *,const void *,const size_t),
  MagickPingImageFile(MagickWand *,FILE *),
  MagickPolaroidImage(MagickWand *,const DrawingWand *,const double),
  MagickPosterizeImage(MagickWand *,const unsigned long,
    const MagickBooleanType),
  MagickPreviousImage(MagickWand *),
  MagickQuantizeImage(MagickWand *,const unsigned long,const ColorspaceType,
    const unsigned long,const MagickBooleanType,const MagickBooleanType),
  MagickQuantizeImages(MagickWand *,const unsigned long,const ColorspaceType,
    const unsigned long,const MagickBooleanType,const MagickBooleanType),
  MagickRadialBlurImage(MagickWand *,const double),
  MagickRadialBlurImageChannel(MagickWand *,const ChannelType,const double),
  MagickRaiseImage(MagickWand *,const unsigned long,const unsigned long,
    const long,const long,const MagickBooleanType),
  MagickRandomThresholdImage(MagickWand *,const double,const double),
  MagickRandomThresholdImageChannel(MagickWand *,const ChannelType,const double,
    const double),
  MagickReadImage(MagickWand *,const char *),
  MagickReadImageBlob(MagickWand *,const void *,const size_t),
  MagickReadImageFile(MagickWand *,FILE *),
  MagickRecolorImage(MagickWand *,const unsigned long,const double *),
  MagickReduceNoiseImage(MagickWand *,const double),
  MagickRemoveImage(MagickWand *),
  MagickResampleImage(MagickWand *,const double,const double,const FilterTypes,
    const double),
  MagickResizeImage(MagickWand *,const unsigned long,const unsigned long,
    const FilterTypes,const double),
  MagickRollImage(MagickWand *,const long,const long),
  MagickRotateImage(MagickWand *,const PixelWand *,const double),
  MagickSampleImage(MagickWand *,const unsigned long,const unsigned long),
  MagickScaleImage(MagickWand *,const unsigned long,const unsigned long),
  MagickSegmentImage(MagickWand *,const ColorspaceType,const MagickBooleanType,
    const double,const double),
  MagickSeparateImageChannel(MagickWand *,const ChannelType),
  MagickSepiaToneImage(MagickWand *,const double),
  MagickSetImage(MagickWand *,const MagickWand *),
  MagickSetImageAlphaChannel(MagickWand *,const AlphaChannelType),
  MagickSetImageBackgroundColor(MagickWand *,const PixelWand *),
  MagickSetImageBias(MagickWand *,const double),
  MagickSetImageBluePrimary(MagickWand *,const double,const double),
  MagickSetImageBorderColor(MagickWand *,const PixelWand *),
  MagickSetImageChannelDepth(MagickWand *,const ChannelType,
    const unsigned long),
  MagickSetImageClipMask(MagickWand *,const MagickWand *),
  MagickSetImageColormapColor(MagickWand *,const unsigned long,
    const PixelWand *),
  MagickSetImageCompose(MagickWand *,const CompositeOperator),
  MagickSetImageCompression(MagickWand *,const CompressionType),
  MagickSetImageDelay(MagickWand *,const unsigned long),
  MagickSetImageDepth(MagickWand *,const unsigned long),
  MagickSetImageDispose(MagickWand *,const DisposeType),
  MagickSetImageColorspace(MagickWand *,const ColorspaceType),
  MagickSetImageCompressionQuality(MagickWand *,const unsigned long),
  MagickSetImageGreenPrimary(MagickWand *,const double,const double),
  MagickSetImageGamma(MagickWand *,const double),
  MagickSetImageExtent(MagickWand *,const unsigned long,const unsigned long),
  MagickSetImageFilename(MagickWand *,const char *),
  MagickSetImageFormat(MagickWand *,const char *),
  MagickSetImageInterlaceScheme(MagickWand *,const InterlaceType),
  MagickSetImageInterpolateMethod(MagickWand *,
    const InterpolatePixelMethod),
  MagickSetImageIterations(MagickWand *,const unsigned long),
  MagickSetImageMatte(MagickWand *,const MagickBooleanType),
  MagickSetImageMatteColor(MagickWand *,const PixelWand *),
  MagickSetImageOpacity(MagickWand *,const double),
  MagickSetImageOrientation(MagickWand *,const OrientationType),
  MagickSetImagePage(MagickWand *,const unsigned long,const unsigned long,
    const long,const long),
  MagickResetImagePage(MagickWand *,const char *),
  MagickSetImagePixels(MagickWand *,const long,const long,const unsigned long,
    const unsigned long,const char *,const StorageType,const void *),
  MagickSetImageRedPrimary(MagickWand *,const double,const double),
  MagickSetImageRenderingIntent(MagickWand *,const RenderingIntent),
  MagickSetImageResolution(MagickWand *,const double,const double),
  MagickSetImageScene(MagickWand *,const unsigned long),
  MagickSetImageTicksPerSecond(MagickWand *,const long),
  MagickSetImageType(MagickWand *,const ImageType),
  MagickSetImageUnits(MagickWand *,const ResolutionType),
  MagickSetImageWhitePoint(MagickWand *,const double,const double),
  MagickShadeImage(MagickWand *,const MagickBooleanType,const double,const
    double),
  MagickShadowImage(MagickWand *,const double,const double,const long,
    const long),
  MagickSharpenImage(MagickWand *,const double,const double),
  MagickSharpenImageChannel(MagickWand *,const ChannelType,const double,
    const double),
  MagickShaveImage(MagickWand *,const unsigned long,const unsigned long),
  MagickShearImage(MagickWand *,const PixelWand *,const double,const double),
  MagickSigmoidalContrastImage(MagickWand *,const MagickBooleanType,
    const double,const double),
  MagickSigmoidalContrastImageChannel(MagickWand *,const ChannelType,
    const MagickBooleanType,const double,const double),
  MagickSketchImage(MagickWand *,const double,const double,const double),
  MagickSolarizeImage(MagickWand *,const double),
  MagickSpliceImage(MagickWand *,const unsigned long,const unsigned long,
    const long,const long),
  MagickSpreadImage(MagickWand *,const double),
  MagickStripImage(MagickWand *),
  MagickSwirlImage(MagickWand *,const double),
  MagickTintImage(MagickWand *,const PixelWand *,const PixelWand *),
  MagickTransposeImage(MagickWand *),
  MagickTransverseImage(MagickWand *),
  MagickThresholdImage(MagickWand *,const double),
  MagickThresholdImageChannel(MagickWand *,const ChannelType,const double),
  MagickThumbnailImage(MagickWand *,const unsigned long,const unsigned long),
  MagickTrimImage(MagickWand *,const double),
  MagickUniqueImageColors(MagickWand *),
  MagickUnsharpMaskImage(MagickWand *,const double,const double,const double,
    const double),
  MagickUnsharpMaskImageChannel(MagickWand *,const ChannelType,const double,
    const double,const double,const double),
  MagickVignetteImage(MagickWand *,const double,const double,
    const long,const long),
  MagickWaveImage(MagickWand *,const double,const double),
  MagickWhiteThresholdImage(MagickWand *,const PixelWand *),
  MagickWriteImage(MagickWand *,const char *),
  MagickWriteImageFile(MagickWand *,FILE *),
  MagickWriteImages(MagickWand *,const char *,const MagickBooleanType),
  MagickWriteImagesFile(MagickWand *,FILE *);

 MagickProgressMonitor
  MagickSetImageProgressMonitor(MagickWand *,const MagickProgressMonitor,
    void *);

extern MagickWand
  *MagickAppendImages(MagickWand *,const MagickBooleanType),
  *MagickAverageImages(MagickWand *),
  *MagickCoalesceImages(MagickWand *),
  *MagickCombineImages(MagickWand *,const ChannelType),
  *MagickCompareImageChannels(MagickWand *,const MagickWand *,const ChannelType,
    const MetricType,double *),
  *MagickCompareImages(MagickWand *,const MagickWand *,const MetricType,
    double *),
  *MagickCompareImageLayers(MagickWand *,const ImageLayerMethod),
  *MagickDeconstructImages(MagickWand *),
  *MagickFxImage(MagickWand *,const char *),
  *MagickFxImageChannel(MagickWand *,const ChannelType,const char *),
  *MagickGetImage(MagickWand *),
  *MagickGetImageClipMask(MagickWand *),
  *MagickGetImageRegion(MagickWand *,const unsigned long,const unsigned long,
    const long,const long),
  *MagickMergeImageLayers(MagickWand *,const ImageLayerMethod),
  *MagickMorphImages(MagickWand *,const unsigned long),
  *MagickMontageImage(MagickWand *,const DrawingWand *,const char *,
    const char *,const MontageMode,const char *),
  *MagickOptimizeImageLayers(MagickWand *),
  *MagickPreviewImages(MagickWand *wand,const PreviewType),
  *MagickSteganoImage(MagickWand *,const MagickWand *,const long),
  *MagickStereoImage(MagickWand *,const MagickWand *),
  *MagickTextureImage(MagickWand *,const MagickWand *),
  *MagickTransformImage(MagickWand *,const char *,const char *),
  *NewMagickWandFromImage(const Image *);

extern OrientationType
  MagickGetImageOrientation(MagickWand *);

extern PixelWand
  **MagickGetImageHistogram(MagickWand *,unsigned long *);

extern RenderingIntent
  MagickGetImageRenderingIntent(MagickWand *);

extern ResolutionType
  MagickGetImageUnits(MagickWand *);

extern unsigned char
  *MagickGetImageBlob(MagickWand *,size_t *),
  *MagickGetImagesBlob(MagickWand *,size_t *);

extern unsigned long
  MagickGetImageColors(MagickWand *),
  MagickGetImageCompressionQuality(MagickWand *),
  MagickGetImageDelay(MagickWand *),
  MagickGetImageChannelDepth(MagickWand *,const ChannelType),
  MagickGetImageDepth(MagickWand *),
  MagickGetImageHeight(MagickWand *),
  MagickGetImageIterations(MagickWand *),
  MagickGetImageScene(MagickWand *),
  MagickGetImageTicksPerSecond(MagickWand *),
  MagickGetImageWidth(MagickWand *),
  MagickGetNumberImages(MagickWand *);

extern VirtualPixelMethod
  MagickGetImageVirtualPixelMethod(MagickWand *);
# 153 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/mogrify.h" 1 3 4
# 25 "/usr/include/wand/mogrify.h" 3 4
extern MagickBooleanType
  MogrifyImage(ImageInfo *,const int,const char **,Image **,ExceptionInfo *),
  MogrifyImageCommand(ImageInfo *,int,char **,char **,ExceptionInfo *),
  MogrifyImageInfo(ImageInfo *,const int,const char **,ExceptionInfo *),
  MogrifyImageList(ImageInfo *,const int,const char **,Image **,
    ExceptionInfo *),
  MogrifyImages(ImageInfo *,const int,const char **,Image **,ExceptionInfo *);
# 154 "/usr/include/wand/MagickWand.h" 2 3 4
# 1 "/usr/include/wand/montage.h" 1 3 4
# 25 "/usr/include/wand/montage.h" 3 4
extern MagickBooleanType
  MontageImageCommand(ImageInfo *,int,char **,char **,ExceptionInfo *);
# 155 "/usr/include/wand/MagickWand.h" 2 3 4


# 1 "/usr/include/wand/stream.h" 1 3 4
# 25 "/usr/include/wand/stream.h" 3 4
extern MagickBooleanType
  StreamImageCommand(ImageInfo *,int,char **,char **,ExceptionInfo *);
# 158 "/usr/include/wand/MagickWand.h" 2 3 4

extern char
  *MagickGetException(const MagickWand *,ExceptionType *);

extern ExceptionType
  MagickGetExceptionType(const MagickWand *);

extern long
  MagickGetIteratorIndex(MagickWand *);

extern MagickBooleanType
  IsMagickWand(const MagickWand *),
  MagickClearException(MagickWand *),
  MagickSetIteratorIndex(MagickWand *,const long);

extern MagickWand
  *CloneMagickWand(const MagickWand *),
  *DestroyMagickWand(MagickWand *),
  *NewMagickWand(void),
 *NewMagickWandFromImage(const Image *);

extern void
  ClearMagickWand(MagickWand *),
  MagickWandGenesis(void),
  MagickWandTerminus(void),
  *MagickRelinquishMemory(void *),
  MagickResetIterator(MagickWand *),
  MagickSetFirstIterator(MagickWand *),
  MagickSetLastIterator(MagickWand *);
# 3 "imagemagick.c" 2
