# 1 "curses.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "curses.c"
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
 struct knh_DictMap_t *constPool;
 knh_fdefault fdefault;
 knh_mutex_t dataLock;
 struct knh_Array_t *dataList;
 struct knh_DictMap_t *dataMap;
} knh_ClassTable_t;
# 574 "/usr/local/include/konoha/konoha_t.h" 3
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
# 653 "/usr/local/include/konoha/konoha_t.h" 3
typedef struct knh_ObjectPageTable_t {
 int ctxid;
 char *thead;
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
# 754 "/usr/local/include/konoha/konoha_t.h" 3
typedef struct {
 size_t pos;
 struct knh_Bytes_t *ba;
 struct knh_OutputStream_t *w;
} knh_cwb_t;
# 767 "/usr/local/include/konoha/konoha_t.h" 3
typedef void __attribute__((fastcall)) (*knh_fmethod)(Ctx *, knh_sfp_t *);





typedef void __attribute__((fastcall)) (*knh_fmapper)(Ctx *, knh_sfp_t *);
# 782 "/usr/local/include/konoha/konoha_t.h" 3
typedef struct {
 int type;
 char *name;
} knh_drvapi_t ;
# 800 "/usr/local/include/konoha/konoha_t.h" 3
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
# 211 "/usr/local/include/konoha/konoha_deps.h" 3
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

# 212 "/usr/local/include/konoha/konoha_deps.h" 2 3
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
# 78 "/usr/local/include/konoha/class/konoha.h" 3
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
# 205 "/usr/local/include/konoha/class/konoha.h" 3
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
# 269 "/usr/local/include/konoha/class/konoha.h" 3
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
# 340 "/usr/local/include/konoha/class/konoha.h" 3
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
# 387 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_Class_t {
 knh_hObject_t h;
 knh_class_t cid;
 knh_type_t type;
} knh_Class_t;
# 408 "/usr/local/include/konoha/class/konoha.h" 3
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
# 456 "/usr/local/include/konoha/class/konoha.h" 3
typedef struct knh_Method {
 knh_flag_t flag; knh_class_t cid;
 knh_methodn_t mn; knh_ushort_t delta;
 struct knh_MethodField_t* mf;
 knh_fmethod fproceed;
 void* code;
} knh_Method_struct;
# 477 "/usr/local/include/konoha/class/konoha.h" 3
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
# 597 "/usr/local/include/konoha/class/konoha.h" 3
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
# 631 "/usr/local/include/konoha/class/konoha.h" 3
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
# 694 "/usr/local/include/konoha/class/konoha.h" 3
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
# 733 "/usr/local/include/konoha/class/konoha.h" 3
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
# 784 "/usr/local/include/konoha/class/konoha.h" 3
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
# 192 "/usr/local/include/konoha/class/konohac.h" 3
typedef struct {
 knh_short_t level;
 knh_short_t varidx;
 struct knh_Stmt_t *stmt;
} knh_asmreg_t ;

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
 int stack;
 int globalidx;
 int llstep;

 knh_asmreg_t *regs;
 knh_ushort_t regs_size;
 knh_ushort_t regs_usedsize;

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
# 3206 "/usr/local/include/konoha/gen/konoha_class_.h" 3
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
 knh_fileid_t fileid;
 knh_ushort_t line;
} knh_Asm_t;

typedef struct knh_KLRCode_t {
 knh_hObject_t h;
 knh_KLRCode_struct *b;
 knh_fileid_t fileid;
 knh_ushort_t line;
} knh_KLRCode_t;
# 48 "/usr/local/include/konoha/konoha_dev.h" 2 3
# 1 "/usr/local/include/konoha/gen/konoha_knhapi_.h" 1 3
# 31 "/usr/local/include/konoha/gen/konoha_knhapi_.h" 3
# 1 "/usr/local/include/konoha/gen/konoha_class_.h" 1 3
# 32 "/usr/local/include/konoha/gen/konoha_knhapi_.h" 2 3
# 171 "/usr/local/include/konoha/gen/konoha_knhapi_.h" 3
void konoha_addAffineMapper(Ctx *ctx, knh_class_t scid, char *text, knh_float_t scale, knh_float_t shift);
knh_Array_t* new_Array(Ctx *ctx, knh_class_t p1, size_t capacity);
void knh_Array_add(Ctx *ctx, knh_Array_t *o, knh_Object_t *value);
knh_Bytes_t* new_Bytes(Ctx *ctx, size_t capacity);
knh_bytes_t knh_Bytes_tobytes(knh_Bytes_t *o);
void knh_Bytes_clear(knh_Bytes_t *o, size_t pos);
void knh_Bytes_putc(Ctx *ctx, knh_Bytes_t *o, int ch);
void knh_Bytes_write(Ctx *ctx, knh_Bytes_t *o, knh_bytes_t v);
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
knh_String_t* new_String__fbcnv(Ctx *ctx, knh_String_t *s, knh_fbcnv fbcnv, knh_BytesConv_t *bc);
void knh_putsfp(Ctx *ctx, knh_sfp_t *lsfp, int n, knh_Object_t *obj);
void knh_Closure_invokesfp(Ctx *ctx, knh_Closure_t *c, knh_sfp_t *lsfp, int argc);
knh_sfp_t* knh_Closure_invokef(Ctx *ctx, knh_Closure_t *c, const char *fmt, ...);
knh_Exception_t* new_Exception(Ctx *ctx, knh_String_t *msg);
knh_Exception_t* new_Exception__b(Ctx *ctx, knh_bytes_t msg);
void knh_perrno(Ctx *ctx, char *emsg, char *func, char *file, int line);
void knh_throw_OutOfIndex(Ctx *ctx, knh_int_t n, size_t max, char *file, int line);
knh_ClassSpec_t* new_Unit(Ctx *ctx, char *tag, knh_float_t min, knh_float_t max, knh_float_t defv, knh_float_t step);
knh_InputStream_t* new_FileInputStream(Ctx *ctx, knh_bytes_t file);
knh_InputStream_t* new_BytesInputStream(Ctx *ctx, knh_Bytes_t *ba, size_t s, size_t e);
knh_InputStream_t* new_StringInputStream(Ctx *ctx, knh_String_t *str, size_t s, size_t e);
void knh_Glue_init(Ctx *ctx, knh_Glue_t *g, void *ptr, knh_fgfree gfree);
knh_Object_t* new_Glue(Ctx *ctx, char *lname, void *ptr, knh_fgfree gfree);
knh_OutputStream_t* new_FileOutputStream(Ctx *ctx, knh_bytes_t file, char *mode);
knh_OutputStream_t* new_BytesOutputStream(Ctx *ctx, knh_Bytes_t *ba);
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
void knh_ResultSet_initColumn(Ctx *ctx, knh_ResultSet_t *o, size_t column_size);
void knh_ResultSet_setName(Ctx *ctx, knh_ResultSet_t *o, size_t n, knh_String_t *name);
void knh_ResultSet_initData(Ctx *ctx, knh_ResultSet_t *o);
void knh_ResultSet_setInt(Ctx *ctx, knh_ResultSet_t *o, size_t n, knh_int_t value);
void knh_ResultSet_setFloat(Ctx *ctx, knh_ResultSet_t *o, size_t n, knh_float_t value);
void knh_ResultSet_setText(Ctx *ctx, knh_ResultSet_t *o, size_t n, knh_bytes_t t);
void knh_ResultSet_setBlob(Ctx *ctx, knh_ResultSet_t *o, size_t n, knh_bytes_t t);
void knh_ResultSet_setNULL(Ctx *ctx, knh_ResultSet_t *o, size_t n);
knh_String_t* new_String(Ctx *ctx, knh_bytes_t t, knh_String_t *orign);
knh_bytes_t knh_String_tobytes(knh_String_t *o);
knh_bytes_t knh_StringNULL_tobytes(knh_String_t *o, knh_bytes_t def);
void konoha_addParserDriver(Ctx *ctx, char *alias, knh_parser_drvapi_t *d);
knh_ClassSpec_t* new_Vocabulary(Ctx *ctx, char *lang, char *defval, ...);
void konoha_addVocabularyMapper(Ctx *ctx, knh_class_t scid, char *text);
void konoha_addAliasURN(Ctx *ctx, char *alias, char *urn);
void konoha_addDBDriver(Ctx *ctx, char *alias, knh_db_drvapi_t *d);
void konoha_addIODriver(Ctx *ctx, char *alias, knh_iodrv_t *d);
void konoha_addRegexDriver(Ctx *ctx, char *alias, knh_regex_drvapi_t *d);
char* knh_format_ospath(Ctx *ctx, char *buf, size_t bufsiz, knh_bytes_t path);
Ctx* konoha_getCurrentContext(void);
Ctx* konoha_getThreadContext(Ctx *ctx);
int konoha_isDebugMode();
int konoha_parseopt(konoha_t konoha, int argc, char **argv);
char* konoha_eval(konoha_t konoha, char *script);
void konoha_readFile(Ctx *ctx, char *fpath);
void konoha_read(konoha_t konoha, char *fpath);
int konoha_main(konoha_t konoha, int argc, char **argv);
void konoha_shell(konoha_t konoha);
void konoha_SETv(Ctx *ctx, knh_Object_t **v, knh_Object_t *o);
void konoha_FINALv(Ctx *ctx, knh_Object_t **v);
char* KNH_SAFEFILE(char *file);
knh_Object_t* new_Object_boxing(Ctx *ctx, knh_class_t cid, knh_sfp_t *sfp);
void knh_sfp_boxing(Ctx *ctx, knh_sfp_t *sfp);
void knh_sfp_unboxing(Ctx *ctx, knh_sfp_t *sfp);
void knh_esp1_sformat(Ctx *ctx, knh_Method_t *mtd, knh_OutputStream_t *w, knh_Object_t *m);
void knh_esp1_format(Ctx *ctx, knh_methodn_t mn, knh_OutputStream_t *w, knh_Object_t *m);
void knh_throw_TODO(Ctx *ctx, char *file, int line, char *func);
void knh_throwException(Ctx *ctx, knh_Exception_t *e, char *file, int line);
void knh_throw__s(Ctx *ctx, char *msg, char *file, int line);
void knh_throw(Ctx *ctx, knh_Object_t *e, char *file, int line);
void konoha_throwSecurityException(void);
void konoha_loadIntConstData(Ctx *ctx, knh_IntConstData_t *data);
void konoha_loadFloatConstData(Ctx *ctx, knh_FloatConstData_t *data);
void konoha_loadStringConstData(Ctx *ctx, knh_StringConstData_t *data);
void konoha_addClassSpecFunc(Ctx *ctx, char *urn, knh_fspec func);
konoha_t konoha_open(size_t stacksize);
void konoha_close(konoha_t konoha);
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
# 2 "curses.c" 2
# 1 "/usr/include/ncurses.h" 1 3 4
# 66 "/usr/include/ncurses.h" 3 4
# 1 "/usr/include/ncurses_dll.h" 1 3 4
# 67 "/usr/include/ncurses.h" 2 3 4
# 136 "/usr/include/ncurses.h" 3 4
typedef unsigned long chtype;
typedef unsigned long mmask_t;



# 1 "/usr/include/unctrl.h" 1 3 4
# 54 "/usr/include/unctrl.h" 3 4
# 1 "/usr/include/curses.h" 1 3 4
# 55 "/usr/include/unctrl.h" 2 3 4


 char * unctrl (chtype);
# 142 "/usr/include/ncurses.h" 2 3 4
# 165 "/usr/include/ncurses.h" 3 4
typedef unsigned char NCURSES_BOOL;
# 175 "/usr/include/ncurses.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.3.0/include/stdbool.h" 1 3 4
# 176 "/usr/include/ncurses.h" 2 3 4
# 231 "/usr/include/ncurses.h" 3 4
extern chtype acs_map[];
# 321 "/usr/include/ncurses.h" 3 4
typedef struct screen SCREEN;
typedef struct _win_st WINDOW;

typedef chtype attr_t;
# 363 "/usr/include/ncurses.h" 3 4
struct ldat;

struct _win_st
{
 short _cury, _curx;


 short _maxy, _maxx;
 short _begy, _begx;

 short _flags;


 attr_t _attrs;
 chtype _bkgd;


 _Bool _notimeout;
 _Bool _clear;
 _Bool _leaveok;
 _Bool _scroll;
 _Bool _idlok;
 _Bool _idcok;
 _Bool _immed;
 _Bool _sync;
 _Bool _use_keypad;
 int _delay;

 struct ldat *_line;


 short _regtop;
 short _regbottom;


 int _parx;
 int _pary;
 WINDOW *_parent;


 struct pdat
 {
     short _pad_y, _pad_x;
     short _pad_top, _pad_left;
     short _pad_bottom, _pad_right;
 } _pad;

 short _yoffset;







};
# 519 "/usr/include/ncurses.h" 3 4
extern int addch (const chtype);
extern int addchnstr (const chtype *, int);
extern int addchstr (const chtype *);
extern int addnstr (const char *, int);
extern int addstr (const char *);
extern int attroff (int);
extern int attron (int);
extern int attrset (int);
extern int attr_get (attr_t *, short *, void *);
extern int attr_off (attr_t, void *);
extern int attr_on (attr_t, void *);
extern int attr_set (attr_t, short, void *);
extern int baudrate (void);
extern int beep (void);
extern int bkgd (chtype);
extern void bkgdset (chtype);
extern int border (chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype);
extern int box (WINDOW *, chtype, chtype);
extern _Bool can_change_color (void);
extern int cbreak (void);
extern int chgat (int, attr_t, short, const void *);
extern int clear (void);
extern int clearok (WINDOW *,_Bool);
extern int clrtobot (void);
extern int clrtoeol (void);
extern int color_content (short,short*,short*,short*);
extern int color_set (short,void*);
extern int COLOR_PAIR (int);
extern int copywin (const WINDOW*,WINDOW*,int,int,int,int,int,int,int);
extern int curs_set (int);
extern int def_prog_mode (void);
extern int def_shell_mode (void);
extern int delay_output (int);
extern int delch (void);
extern void delscreen (SCREEN *);
extern int delwin (WINDOW *);
extern int deleteln (void);
extern WINDOW * derwin (WINDOW *,int,int,int,int);
extern int doupdate (void);
extern WINDOW * dupwin (WINDOW *);
extern int echo (void);
extern int echochar (const chtype);
extern int erase (void);
extern int endwin (void);
extern char erasechar (void);
extern void filter (void);
extern int flash (void);
extern int flushinp (void);
extern chtype getbkgd (WINDOW *);
extern int getch (void);
extern int getnstr (char *, int);
extern int getstr (char *);
extern WINDOW * getwin (FILE *);
extern int halfdelay (int);
extern _Bool has_colors (void);
extern _Bool has_ic (void);
extern _Bool has_il (void);
extern int hline (chtype, int);
extern void idcok (WINDOW *, _Bool);
extern int idlok (WINDOW *, _Bool);
extern void immedok (WINDOW *, _Bool);
extern chtype inch (void);
extern int inchnstr (chtype *, int);
extern int inchstr (chtype *);
extern WINDOW * initscr (void);
extern int init_color (short,short,short,short);
extern int init_pair (short,short,short);
extern int innstr (char *, int);
extern int insch (chtype);
extern int insdelln (int);
extern int insertln (void);
extern int insnstr (const char *, int);
extern int insstr (const char *);
extern int instr (char *);
extern int intrflush (WINDOW *,_Bool);
extern _Bool isendwin (void);
extern _Bool is_linetouched (WINDOW *,int);
extern _Bool is_wintouched (WINDOW *);
extern char * keyname (int);
extern int keypad (WINDOW *,_Bool);
extern char killchar (void);
extern int leaveok (WINDOW *,_Bool);
extern char * longname (void);
extern int meta (WINDOW *,_Bool);
extern int move (int, int);
extern int mvaddch (int, int, const chtype);
extern int mvaddchnstr (int, int, const chtype *, int);
extern int mvaddchstr (int, int, const chtype *);
extern int mvaddnstr (int, int, const char *, int);
extern int mvaddstr (int, int, const char *);
extern int mvchgat (int, int, int, attr_t, short, const void *);
extern int mvcur (int,int,int,int);
extern int mvdelch (int, int);
extern int mvderwin (WINDOW *, int, int);
extern int mvgetch (int, int);
extern int mvgetnstr (int, int, char *, int);
extern int mvgetstr (int, int, char *);
extern int mvhline (int, int, chtype, int);
extern chtype mvinch (int, int);
extern int mvinchnstr (int, int, chtype *, int);
extern int mvinchstr (int, int, chtype *);
extern int mvinnstr (int, int, char *, int);
extern int mvinsch (int, int, chtype);
extern int mvinsnstr (int, int, const char *, int);
extern int mvinsstr (int, int, const char *);
extern int mvinstr (int, int, char *);
extern int mvprintw (int,int, const char *,...)
  ;
extern int mvscanw (int,int, char *,...)
  ;
extern int mvvline (int, int, chtype, int);
extern int mvwaddch (WINDOW *, int, int, const chtype);
extern int mvwaddchnstr (WINDOW *, int, int, const chtype *, int);
extern int mvwaddchstr (WINDOW *, int, int, const chtype *);
extern int mvwaddnstr (WINDOW *, int, int, const char *, int);
extern int mvwaddstr (WINDOW *, int, int, const char *);
extern int mvwchgat (WINDOW *, int, int, int, attr_t, short, const void *);
extern int mvwdelch (WINDOW *, int, int);
extern int mvwgetch (WINDOW *, int, int);
extern int mvwgetnstr (WINDOW *, int, int, char *, int);
extern int mvwgetstr (WINDOW *, int, int, char *);
extern int mvwhline (WINDOW *, int, int, chtype, int);
extern int mvwin (WINDOW *,int,int);
extern chtype mvwinch (WINDOW *, int, int);
extern int mvwinchnstr (WINDOW *, int, int, chtype *, int);
extern int mvwinchstr (WINDOW *, int, int, chtype *);
extern int mvwinnstr (WINDOW *, int, int, char *, int);
extern int mvwinsch (WINDOW *, int, int, chtype);
extern int mvwinsnstr (WINDOW *, int, int, const char *, int);
extern int mvwinsstr (WINDOW *, int, int, const char *);
extern int mvwinstr (WINDOW *, int, int, char *);
extern int mvwprintw (WINDOW*,int,int, const char *,...)
  ;
extern int mvwscanw (WINDOW *,int,int, char *,...)
  ;
extern int mvwvline (WINDOW *,int, int, chtype, int);
extern int napms (int);
extern WINDOW * newpad (int,int);
extern SCREEN * newterm ( char *,FILE *,FILE *);
extern WINDOW * newwin (int,int,int,int);
extern int nl (void);
extern int nocbreak (void);
extern int nodelay (WINDOW *,_Bool);
extern int noecho (void);
extern int nonl (void);
extern void noqiflush (void);
extern int noraw (void);
extern int notimeout (WINDOW *,_Bool);
extern int overlay (const WINDOW*,WINDOW *);
extern int overwrite (const WINDOW*,WINDOW *);
extern int pair_content (short,short*,short*);
extern int PAIR_NUMBER (int);
extern int pechochar (WINDOW *, const chtype);
extern int pnoutrefresh (WINDOW*,int,int,int,int,int,int);
extern int prefresh (WINDOW *,int,int,int,int,int,int);
extern int printw (const char *,...)
  ;
extern int putwin (WINDOW *, FILE *);
extern void qiflush (void);
extern int raw (void);
extern int redrawwin (WINDOW *);
extern int refresh (void);
extern int resetty (void);
extern int reset_prog_mode (void);
extern int reset_shell_mode (void);
extern int ripoffline (int, int (*)(WINDOW *, int));
extern int savetty (void);
extern int scanw ( char *,...)
  ;
extern int scr_dump (const char *);
extern int scr_init (const char *);
extern int scrl (int);
extern int scroll (WINDOW *);
extern int scrollok (WINDOW *,_Bool);
extern int scr_restore (const char *);
extern int scr_set (const char *);
extern int setscrreg (int,int);
extern SCREEN * set_term (SCREEN *);
extern int slk_attroff (const chtype);
extern int slk_attr_off (const attr_t, void *);
extern int slk_attron (const chtype);
extern int slk_attr_on (attr_t,void*);
extern int slk_attrset (const chtype);
extern attr_t slk_attr (void);
extern int slk_attr_set (const attr_t,short,void*);
extern int slk_clear (void);
extern int slk_color (short);
extern int slk_init (int);
extern char * slk_label (int);
extern int slk_noutrefresh (void);
extern int slk_refresh (void);
extern int slk_restore (void);
extern int slk_set (int,const char *,int);
extern int slk_touch (void);
extern int standout (void);
extern int standend (void);
extern int start_color (void);
extern WINDOW * subpad (WINDOW *, int, int, int, int);
extern WINDOW * subwin (WINDOW *, int, int, int, int);
extern int syncok (WINDOW *, _Bool);
extern chtype termattrs (void);
extern char * termname (void);
extern void timeout (int);
extern int touchline (WINDOW *, int, int);
extern int touchwin (WINDOW *);
extern int typeahead (int);
extern int ungetch (int);
extern int untouchwin (WINDOW *);
extern void use_env (_Bool);
extern int vidattr (chtype);
extern int vidputs (chtype, int (*)(int));
extern int vline (chtype, int);
extern int vwprintw (WINDOW *, const char *,va_list);
extern int vw_printw (WINDOW *, const char *,va_list);
extern int vwscanw (WINDOW *, char *,va_list);
extern int vw_scanw (WINDOW *, char *,va_list);
extern int waddch (WINDOW *, const chtype);
extern int waddchnstr (WINDOW *,const chtype *,int);
extern int waddchstr (WINDOW *,const chtype *);
extern int waddnstr (WINDOW *,const char *,int);
extern int waddstr (WINDOW *,const char *);
extern int wattron (WINDOW *, int);
extern int wattroff (WINDOW *, int);
extern int wattrset (WINDOW *, int);
extern int wattr_get (WINDOW *, attr_t *, short *, void *);
extern int wattr_on (WINDOW *, attr_t, void *);
extern int wattr_off (WINDOW *, attr_t, void *);
extern int wattr_set (WINDOW *, attr_t, short, void *);
extern int wbkgd (WINDOW *, chtype);
extern void wbkgdset (WINDOW *,chtype);
extern int wborder (WINDOW *,chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype);
extern int wchgat (WINDOW *, int, attr_t, short, const void *);
extern int wclear (WINDOW *);
extern int wclrtobot (WINDOW *);
extern int wclrtoeol (WINDOW *);
extern int wcolor_set (WINDOW*,short,void*);
extern void wcursyncup (WINDOW *);
extern int wdelch (WINDOW *);
extern int wdeleteln (WINDOW *);
extern int wechochar (WINDOW *, const chtype);
extern int werase (WINDOW *);
extern int wgetch (WINDOW *);
extern int wgetnstr (WINDOW *,char *,int);
extern int wgetstr (WINDOW *, char *);
extern int whline (WINDOW *, chtype, int);
extern chtype winch (WINDOW *);
extern int winchnstr (WINDOW *, chtype *, int);
extern int winchstr (WINDOW *, chtype *);
extern int winnstr (WINDOW *, char *, int);
extern int winsch (WINDOW *, chtype);
extern int winsdelln (WINDOW *,int);
extern int winsertln (WINDOW *);
extern int winsnstr (WINDOW *, const char *,int);
extern int winsstr (WINDOW *, const char *);
extern int winstr (WINDOW *, char *);
extern int wmove (WINDOW *,int,int);
extern int wnoutrefresh (WINDOW *);
extern int wprintw (WINDOW *, const char *,...)
  ;
extern int wredrawln (WINDOW *,int,int);
extern int wrefresh (WINDOW *);
extern int wscanw (WINDOW *, char *,...)
  ;
extern int wscrl (WINDOW *,int);
extern int wsetscrreg (WINDOW *,int,int);
extern int wstandout (WINDOW *);
extern int wstandend (WINDOW *);
extern void wsyncdown (WINDOW *);
extern void wsyncup (WINDOW *);
extern void wtimeout (WINDOW *,int);
extern int wtouchln (WINDOW *,int,int,int);
extern int wvline (WINDOW *,chtype,int);




extern int tigetflag ( char *);
extern int tigetnum ( char *);
extern char * tigetstr ( char *);
extern int putp (const char *);


extern char * tparm ( char *, ...);
# 810 "/usr/include/ncurses.h" 3 4
extern int getattrs (const WINDOW *);
extern int getcurx (const WINDOW *);
extern int getcury (const WINDOW *);
extern int getbegx (const WINDOW *);
extern int getbegy (const WINDOW *);
extern int getmaxx (const WINDOW *);
extern int getmaxy (const WINDOW *);
extern int getparx (const WINDOW *);
extern int getpary (const WINDOW *);
# 833 "/usr/include/ncurses.h" 3 4
typedef int (*NCURSES_CALLBACK)(WINDOW *, void *);
extern _Bool is_term_resized (int, int);
extern char * keybound (int, int);
extern const char * curses_version (void);
extern int assume_default_colors (int, int);
extern int define_key (const char *, int);
extern int key_defined (const char *);
extern int keyok (int, _Bool);
extern int resize_term (int, int);
extern int resizeterm (int, int);
extern int set_escdelay (int);
extern int set_tabsize (int);
extern int use_default_colors (void);
extern int use_extended_names (_Bool);
extern int use_legacy_coding (int);
extern int use_screen (SCREEN *, NCURSES_CALLBACK, void *);
extern int use_window (WINDOW *, NCURSES_CALLBACK, void *);
extern int wresize (WINDOW *, int, int);
extern void nofilter(void);





extern WINDOW * wgetparent (const WINDOW *);
extern _Bool is_cleared (const WINDOW *);
extern _Bool is_idcok (const WINDOW *);
extern _Bool is_idlok (const WINDOW *);
extern _Bool is_immedok (const WINDOW *);
extern _Bool is_keypad (const WINDOW *);
extern _Bool is_leaveok (const WINDOW *);
extern _Bool is_nodelay (const WINDOW *);
extern _Bool is_notimeout (const WINDOW *);
extern _Bool is_scrollok (const WINDOW *);
extern _Bool is_syncok (const WINDOW *);
extern int wgetscrreg (const WINDOW *, int *, int *);
# 1196 "/usr/include/ncurses.h" 3 4
extern WINDOW * curscr;
extern WINDOW * newscr;
extern WINDOW * stdscr;
extern char ttytype[];
extern int COLORS;
extern int COLOR_PAIRS;
extern int COLS;
extern int ESCDELAY;
extern int LINES;
extern int TABSIZE;
# 1661 "/usr/include/ncurses.h" 3 4
typedef struct
{
    short id;
    int x, y, z;
    mmask_t bstate;
}
MEVENT;

extern int getmouse (MEVENT *);
extern int ungetmouse (MEVENT *);
extern mmask_t mousemask (mmask_t, mmask_t *);
extern _Bool wenclose (const WINDOW *, int, int);
extern int mouseinterval (int);
extern _Bool wmouse_trafo (const WINDOW*, int*, int*, _Bool);
extern _Bool mouse_trafo (int*, int*, _Bool);





extern int mcprint (char *, int);
extern int has_key (int);



extern void _tracef (const char *, ...) ;
extern void _tracedump (const char *, WINDOW *);
extern char * _traceattr (attr_t);
extern char * _traceattr2 (int, chtype);
extern char * _nc_tracebits (void);
extern char * _tracechar (int);
extern char * _tracechtype (chtype);
extern char * _tracechtype2 (int, chtype);
# 1703 "/usr/include/ncurses.h" 3 4
extern char * _tracemouse (const MEVENT *);
extern void trace (const unsigned int);
# 3 "curses.c" 2


void __attribute__((fastcall)) Curses_new(Ctx *ctx, knh_sfp_t *sfp)
{
  WINDOW *win;
  knh_Glue_t *glue = sfp[0].glue;

  win = newwin(((knh_int_t)(sfp[1]).ivalue), ((knh_int_t)(sfp[2]).ivalue),
      ((knh_int_t)(sfp[3]).ivalue), ((knh_int_t)(sfp[4]).ivalue));
  glue->ptr = (void*)win;
  { knh_Int_t *n_ = (knh_Int_t*)sfp[0].o; { knh_Object_t *v2_ = (knh_Object_t*)n_; ; ; sfp[-1].o = v2_; }; sfp[-1].data = (n_)->n.data; return; };
}

void __attribute__((fastcall)) Curses_initscr(Ctx *ctx, knh_sfp_t *sfp)
{
  initscr();
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_noecho(Ctx *ctx, knh_sfp_t *sfp)
{
  cbreak();
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_cbreak(Ctx *ctx, knh_sfp_t *sfp)
{
  cbreak();
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_clear(Ctx *ctx, knh_sfp_t *sfp)
{
  wclear(stdscr);
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_keypad(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  keypad(win, ((knh_int_t)(sfp[1]).ivalue));
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_mvprintw(Ctx *ctx, knh_sfp_t *sfp)
{
  mvprintw(0,0, "hello");
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_refresh(Ctx *ctx, knh_sfp_t *sfp)
{
  wrefresh(stdscr);
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_box(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  wborder(win, ((knh_int_t)(sfp[1]).ivalue), ((knh_int_t)(sfp[1]).ivalue), ((knh_int_t)(sfp[2]).ivalue), ((knh_int_t)(sfp[2]).ivalue), 0, 0, 0, 0);
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_wattron(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  wattr_on(win, (attr_t)(((knh_int_t)(sfp[1]).ivalue)), ((void *)0));
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_wattroff(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  wattr_off(win, (attr_t)(((knh_int_t)(sfp[1]).ivalue)), ((void *)0));
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_endwin(Ctx *ctx, knh_sfp_t *sfp)
{
  endwin();
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_clrtoeol(Ctx *ctx, knh_sfp_t *sfp)
{
  wclrtoeol(stdscr);
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_wrefresh(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  wrefresh(win);
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

void __attribute__((fastcall)) Curses_mvwprintw(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  WINDOW *win = (WINDOW *)glue->ptr;
  knh_Array_t *a = (knh_Array_t*)sfp[4].o;

  mvwprintw(win, ((knh_int_t)(sfp[1]).ivalue), ((knh_int_t)(sfp[2]).ivalue),
   ((char*)((sfp[3].s)->str)),
   (void *)(a)->list[(0)]);
  { { knh_Object_t *v2_ = (knh_Object_t*)(ctx->share->constVoid); ; ; sfp[-1].o = v2_; }; return; };
}

static
knh_IntConstData_t IntConstData[] = {
  {"curses.Curses.A_REVERSE", ((1UL) << ((10) + 8))},
  {((void *)0)},
};

int init(Ctx *ctx)
{
  konoha_says(ctx, 3, "loading curses...");
  konoha_loadIntConstData(ctx, IntConstData);
  return 1;
}
