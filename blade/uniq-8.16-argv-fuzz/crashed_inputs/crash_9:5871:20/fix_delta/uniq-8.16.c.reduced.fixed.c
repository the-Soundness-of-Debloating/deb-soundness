#include "argv-fuzz-inl.h"
                     
                               
                        
                
                  
                            
  
typedef unsigned long size_t;
typedef unsigned long __dev_t;
                             
                             
typedef unsigned long __ino_t;
                              
                                
typedef long __off_t;
                         
                        
                      
                        
                      
            
                 
                 
                     
                   
                 
                 
             
                  
                  
                         
                       
                          
                          
                          
                                        
  
typedef __ino_t ino_t;
typedef __dev_t dev_t;
              
              
struct hash_tuning {
  float shrink_threshold;
  float shrink_factor;
  float growth_threshold;
  float growth_factor;
  _Bool is_n_buckets;
};
                                       
                  
struct hash_table;
typedef struct hash_table Hash_table;
struct ino_map;
struct ino_map;
typedef size_t hashint;
struct di_ent {
  dev_t dev;
  struct hash_table *ino_set;
};
struct di_set {
  struct hash_table *dev_map;
  struct ino_map *ino_map;
  struct di_ent *probe;
};
typedef unsigned long uintmax_t;
struct dev_ino {
  ino_t st_ino;
  dev_t st_dev;
};
struct cycle_check_state {
  struct dev_ino dev_ino;
  uintmax_t chdir_counter;
  int magic;
};
typedef long __off64_t;
struct _IO_FILE;
                
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
                  
                           
                         
           
  
struct _IO_FILE {
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
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
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[(15UL * sizeof(int) - 4UL * sizeof(void *)) - sizeof(size_t)];
};
typedef __off_t off_t;
              
         
  
                      
                          
                 
                 
                  
                            
                                      
                       
                      
  
typedef long ptrdiff_t;
                          
                   
                       
                  
                 
  
                                                     
                                 
                              
                                   
                 
                        
                   
  
                
               
                
                  
                  
                       
                           
                     
                           
  
                    
                     
                        
                                      
                                  
                             
                             
                          
  
                                           
                            
                              
                 
              
  
                  
                 
                     
                                
                      
  
               
                
                
                          
                       
                   
  
                   
                   
                               
                             
                            
                       
                   
  
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
                     
                     
enum argv_iter_err {
  AI_ERR_OK = 1,
  AI_ERR_EOF = 2,
  AI_ERR_MEM = 3,
  AI_ERR_READ = 4
};
                     
           
                  
            
                 
                  
           
  
enum quoting_style {
  literal_quoting_style = 0,
  shell_quoting_style = 1,
  shell_always_quoting_style = 2,
  c_quoting_style = 3,
  c_maybe_quoting_style = 4,
  escape_quoting_style = 5,
  locale_quoting_style = 6,
  clocale_quoting_style = 7,
  custom_quoting_style = 8
};
enum strtol_error {
  LONGINT_OK = 0,
  LONGINT_OVERFLOW = 1,
  LONGINT_INVALID_SUFFIX_CHAR = 2,
  LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
  LONGINT_INVALID = 4
};
typedef enum strtol_error strtol_error;
struct option {
                  
              
            
          
};
                     
                      
                          
               
                 
                     
                        
                       
                 
  
                             
               
               
                               
                        
                                  
  
                           
                          
                            
                             
                
                 
              
                 
                     
                    
                                                                      
                  
                                                    
                                           
                     
  
                                       
                
                            
                             
                           
                
                  
                    
                    
                 
                
                
                     
               
                      
                     
                               
                          
                           
                           
                           
                   
  
                              
                              
                        
                    
                      
                           
                                    
                                       
                             
                       
  
                                                             
                     
           
          
  
                     
           
          
  
                      
           
          
  
                      
           
          
  
                      
           
          
  
                      
           
          
  
                      
           
          
  
                      
           
          
  
typedef int wchar_t;
                    
typedef unsigned int wint_t;
                             
                
                 
                 
                 
                  
               
                
                   
                    
                       
                         
                   
                       
                 
                      
                   
                        
                    
                                
                                
                              
                                  
                                     
  
                                             
                       
                      
                        
                
                          
            
                      
                 
                           
                          
                                    
                
                  
                           
             
                     
                       
                               
                  
                                     
                               
                           
                                
                                         
  
                                
                
                           
  
                                                 
                                  
               
                
                               
  
                                                   
                                       
                        
                      
            
                          
                        
                         
                              
                            
                             
                  
                   
  
                                                             
                                        
               
                      
                          
                              
                                     
  
                                                               
                               
                  
           
             
  
                           
                
                  
                        
  
              
            
                 
              
  
              
                
                  
                 
                 
                 
               
                 
  
              
                
                  
                 
                
  
                              
union __anonunion___value_23 {
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_22 {
  int __count;
  union __anonunion___value_23 __value;
};
typedef struct __anonstruct___mbstate_t_22 __mbstate_t;
typedef __mbstate_t mbstate_t;
               
                  
               
                 
             
               
  
                     
                    
                 
                  
                  
                    
  
                                           
                          
                      
                      
                         
                     
                 
  
           
             
             
              
              
             
              
              
              
               
                 
                      
  
                                  
                                                              
  
                                                    
                            
                    
                       
  
                                          
                
               
                
                
                          
               
                
  
                                                                   
                      
                      
                                                   
                  
             
                                   
                
  
                                                                                     
               
          
                     
  
                               
                     
                   
               
               
                
                 
  
                   
                    
                    
                
                      
  
                 
             
             
             
             
             
                    
                  
                      
  
                        
                              
                 
                     
                 
  
                          
                    
               
                          
                    
                  
                 
  
                          
         
             
              
  
               
                                 
                               
  
                         
           
          
  
                         
           
          
  
                          
           
          
  
                      
                      
                      
               
  
                              
                   
                    
  
              
                
                 
                   
                
                   
                    
                               
                       
                                     
                          
                            
  
                                 
               
               
                       
              
                              
                   
  
                           
               
                
  
                
                  
                               
                    
                  
                    
                                 
                     
                                                   
                                                   
                  
                                 
                                      
                                
  
              
               
             
                  
                        
                       
                           
  
                   
              
               
  
                                        
                    
                       
                       
                                     
                                                     
                                  
                    
                       
               
               
               
  
                           
                       
                                                                
  
              
                  
                           
                                 
  
                          
                                                               
                     
  
                        
               
                                
                          
                               
  
                    
               
             
  
                              
                      
                                 
                  
                  
  
                      
                       
struct quoting_options {
  enum quoting_style style;
  int flags;
  unsigned int quote_these_too[255UL / (sizeof(int) * 8UL) + 1UL];
  char const *left_quote;
  char const *right_quote;
};
struct slotvec {
  size_t size;
  char *val;
};
                               
                      
                 
                  
                  
                    
  
                                             
                         
                                
                 
             
                
  
                                               
                              
                   
           
            
  
                                           
                                     
            
             
           
            
               
                      
          
  
                                                          
                                       
                    
                   
                 
                  
                 
               
               
             
           
            
               
                          
                    
                      
                  
                    
                   
                          
                   
                    
                    
                                 
  
                                                             
              
              
               
              
                     
                           
                    
  
                              
                                   
                                
                           
               
                          
                     
  
                  
                
                    
                               
  
                                
                                  
                                                         
  
                                                   
                    
                   
                    
                
               
                            
                             
                                    
                              
  
               
                   
                
                 
                 
               
                 
  
                   
                   
                    
          
            
                  
               
                   
  
                               
                
             
             
             
             
                    
                  
                      
  
                               
                     
                      
                      
  
                                                  
                               
                           
             
                         
  
               
             
                                                                                                                                    
  
                                
                                         
                                         
  
                                                        
                          
             
                       
              
                        
             
                
                  
                          
  
                                      
                                  
                  
               
  
                                                             
                                          
                 
              
  
                                                                     
                           
                                            
struct linebuffer {
  size_t size;
  size_t length;
  char *buffer;
};
                                  
                    
                                                                                                 
  
                                                        
                    
            
                    
  
                
                         
                         
                            
  
                         
          
          
  
              
                             
                      
              
  
             
                      
                      
                 
                        
                        
                          
                          
                     
                      
                      
                       
                   
                     
                      
                     
                      
                   
                   
                         
                          
                         
                          
                       
                       
  
            
            
             
               
                  
               
                                             
  
                   
             
                          
  
                   
                            
                                        
                   
                        
                   
                            
                                         
                                                  
                             
                                     
  
                 
             
               
               
  
                           
                             
                              
                
                   
                   
                   
                   
              
                
                   
                   
  
                          
                               
               
  
                                                
                                   
                                   
                        
                   
            
            
                  
  
               
                    
                     
                        
                       
                        
                       
                       
                  
                       
                      
                     
                        
  
                
               
               
  
                 
                          
                       
                      
                       
                               
                      
                      
  
                       
              
                
                  
  
                              
                                   
                              
                 
                 
  
                               
             
                 
                     
  
                            
                 
                 
                     
  
                                 
                 
                 
                
                             
                             
  
                                  
                
                    
  
                                 
               
            
  
                                
                   
               
                     
  
                                
                                      
                                     
                                       
                                 
                                           
                                             
                                           
                                         
  
                                  
               
               
              
                                           
  
                                                   
                                          
                          
                                                 
  
                 
                                                               
                     
               
                            
  
                                 
                                        
                                
  
                                                               
enum __anonenum_fadvice_t_19 {
  FADVISE_NORMAL = 0,
  FADVISE_SEQUENTIAL = 2,
  FADVISE_NOREUSE = 5,
  FADVISE_DONTNEED = 4,
  FADVISE_WILLNEED = 3,
  FADVISE_RANDOM = 1
};
                                               
               
               
                
                      
              
  
                        
                          
                       
                       
  
                   
                   
                     
  
                        
                    
                             
  
                        
                               
                         
              
                           
  
               
                               
                               
  
enum countmode {
  count_occurrences = 0,
  count_none = 1
};
enum delimit_method {
  DM_NONE = 0,
  DM_PREPEND = 1,
  DM_SEPARATE = 2
};
enum Skip_field_option_type {
  SFO_NONE = 0,
  SFO_OBSOLETE = 1,
  SFO_NEW = 2
};
                                                                                      
                                                                                       
                                                                                                                           
                                                                                                                         
__attribute__((__noreturn__)) void xalloc_die(void);
                                                                 
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__)) malloc)(size_t __size) __attribute__((__malloc__));
                                                                                                                        
                                                                                                                             
                                                                                                            
extern __attribute__((__nothrow__)) int *(__attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
                                                                                                                        
                                                                                                                          
                                                                                                  
                                                                                                             
                                                                                                            
                                                                                                          
                                                                                   
                                                                                           
extern int close(int __fd);
                                                                                                           
                                                                                                         
                                                                                                          
                                                                                  
                                                                                          
                                                                                           
                                                                                                             
                                                                                                          
                                                                                                           
                             
                             
                              
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                      
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                      
                                                                
                                                                      
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                      
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                        
                                                                        
                                                                        
                                                                        
                                                                      
                                                                      
                                                                        
                                                                    
                                                                        
                                                                        
                                                                        
                                                                        
                                                                      
                                                                      
                                                                        
                                                                       
                              
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                 
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__)) free)(void *__ptr);
                                                                                                                        
                                                                                                                   
                                                                                                                    
                                                                                                                        
                                                                                     
extern void error(int __status, int __errnum, char const *__format, ...);
char const *quote(char const *name);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) gettext)(char const *__msgid) __attribute__((__format_arg__(1)));
void close_stdout(void);
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern __attribute__((__noreturn__)) void _exit(int __status);
int close_stream(FILE *stream);
int volatile exit_failure;
                                      
                             
                          
                        
                          
                  
                
               
               
              
               
              
                    
   
     
                                     
     
                       
                         
         
                                       
         
                                
                  
         
              
            
                                                   
                          
       
                        
           
                                                
                                         
                                                               
           
                
           
                                         
                                                  
           
         
         
                                   
         
       
     
     
                                     
     
                       
       
                                 
       
     
           
   
  
extern struct _IO_FILE *stdin;
                            
                                                                                    
                                 
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) ferror_unlocked)(FILE *__stream);
int(__attribute__((__nonnull__(1))) rpl_fclose)(FILE *fp);
                                                                                             
int close_stream(FILE *stream) {
                    
             
                  
              
                    
              
               
               
  {
    {
                              
                                         
                                        
                                        
                                   
                                          
    }
                   
                  
            
                        
                           
                      
                
           
                                         
           
                              
                 
                               
               
                                             
                             
               
             
                        
           
         
       
     
               
  }
}
                                                                                                             
                                                                                    
                                                                               
                                                                     
                                                                                                             
                                                                                                     
                                                                                                                                   
                                                                                                              
                                                                                                      
                                                                                                                                    
                                                                                                                
                                                                                                                                                
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s) __attribute__((__pure__));
                                                                                                                                 
                                                                                                                          
                                                                                                                 
                                                                                              
                                        
                                                                                                              
                                                                                                                   
                                                                                                             
                                                                                                             
                                                                                                                                
                                                                                                                          
                                                                                                                           
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) strdup)(char const *__s) __attribute__((__malloc__));
                                                                                       
                                                                                                    
                                                                                                        
                                                                                                      
                        
                             
                                                                                                       
                                                                                                         
                                                                                                       
                                                                                
                                                                                                                                               
                                                                                                       
                                        
                                                                                                                                
                                                                                                                             
                                                                                                                    
                                            
int c_tolower(int c) __attribute__((__const__));
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
                                                                           
int c_strcasecmp(char const *s1, char const *s2) {
  unsigned char const *p1;
  unsigned char const *p2;
                   
                   
  {
                                   
                                   
                                                 
                 
     
     
                 
                                      
         
                                                  
                                                  
         
                           
                           
         
             
             
                                    
                           
         
       
                                 
     
                               
  }
}
                                                
int c_tolower(int c) {
  int tmp;
  {
    if (c >= 65) {
      if (c <= 90) {
        tmp = (c - 65) + 97;
      } else {
        tmp = c;
      }
    } else {
      tmp = c;
    }
    return (tmp);
  }
}
                                                                 
char *last_component(char const *name) {
  char const *base;
  char const *p;
  _Bool saw_slash;
  {
    base = name + 0;
                         
    {
      while (1) {
                                      
        if (!((int const) * base == 47)) {
          goto while_break;
        }
        base++;
      }
    while_break: /* CIL Label */;
    }
    p = base;
    {
      while (1) {
                                          
        if (!*p) {
          goto while_break___0;
        }
                                    
                               
                
                          
                     
                                 
           
         
        p++;
      }
    while_break___0: /* CIL Label */;
    }
    return ((char *)base);
  }
}
__inline static unsigned char to_uchar(char ch) {
  {
    return ((unsigned char)ch);
  }
}
                             
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                         
                                   
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                      
                                                                                                      
                                                                                                
                                                                                                
                                                                                                    
                                                                                                        
                                                                                               
                                                                                            
                                                                                             
                                                                                                
                                                                                                
                                                                                                
                                                                                                  
                                                                                                        
                                                                                                  
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                  
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                         
                                 
                           
                                                                                               
                                                                                           
                                                                                                                 
                                                                                                              
                                                                                                              
                                                                                                                                   
                                                                                                                        
                                                                                                                              
                                                                                                                
                                                                                                         
                                                                  
                                                                             
                                       
                                         
                                                                                                                                                      
                                                                                                                                                        
                                             
                                               
                                                                                                                
                                                                                                                 
                                                                              
                                                                      
                                                                                        
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist,
                   size_t valsize) __attribute__((__pure__));
void argmatch_invalid(char const *context, char const *value, ptrdiff_t problem);
void argmatch_valid(char const *const *arglist, char const *vallist, size_t valsize);
                                                                                    
                                                  
extern int fputs_unlocked(char const *__restrict __s, FILE *__restrict __stream);
                                                                                                               
                                                                                                               
                                                                                                                                    
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
char const *quote_n(int n, char const *name);
__attribute__((__noreturn__)) void usage(int status);
static void __argmatch_die(void) {
  {
    {
      usage(1);
    }
    return;
  }
}
void (*argmatch_die)(void) = &__argmatch_die;
                                                                                    
                                                             
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist,
                   size_t valsize) {
  size_t i;
  size_t arglen;
  ptrdiff_t matchind;
  _Bool ambiguous;
  int tmp;
  size_t tmp___0;
  int tmp___1;
  {
     
                               
                           
                           
                    
     
    {
      while (1) {
                                      
        if (!*(arglist + i)) {
          goto while_break;
        }
        {
          tmp___1 = strncmp((char const *)*(arglist + i), arg, arglen);
        }
        if (!tmp___1) {
          {
            tmp___0 = strlen((char const *)*(arglist + i));
          }
          if (tmp___0 == arglen) {
            return ((ptrdiff_t)i);
          } else {
            if (matchind == -1L) {
              matchind = (ptrdiff_t)i;
            } else {
              if ((unsigned long)vallist == (unsigned long)((void *)0)) {
                ambiguous = (_Bool)1;
              } else {
                {
                  tmp = memcmp((void const *)(vallist + valsize * (size_t)matchind), (void const *)(vallist + valsize * i),
                               valsize);
                }
                if (tmp) {
                  ambiguous = (_Bool)1;
                }
              }
            }
          }
        }
        i++;
      }
    while_break: /* CIL Label */;
    }
                    
                             
            
                        
     
  }
}
void argmatch_invalid(char const *context, char const *value, ptrdiff_t problem) {
  char const *format;
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char const *tmp___2;
  char *tmp___3;
                    
                    
  {
    if (problem == -1L) {
      {
        tmp = gettext("invalid argument %s for %s");
        tmp___1 = tmp;
      }
    } else {
      {
        tmp___0 = gettext("ambiguous argument %s for %s");
        tmp___1 = tmp___0;
      }
    }
    {
                                     
                                    
                                                                  
      error(0, 0, format, tmp___3, tmp___2);
    }
    return;
  }
}
void argmatch_valid(char const *const *arglist, char const *vallist, size_t valsize) {
  size_t i;
  char const *last_val;
  char *tmp;
  char const *tmp___0;
  char const *tmp___1;
  int tmp___2;
                    
  {
    {
      last_val = (char const *)((void *)0);
      tmp = gettext("Valid arguments are:");
      fputs_unlocked((char const * /* __restrict  */)tmp, (FILE * /* __restrict  */) stderr);
      i = (size_t)0;
    }
    {
      while (1) {
                                      
        if (!*(arglist + i)) {
          goto while_break;
        }
        if (i == 0UL) {
          {
            tmp___0 = quote((char const *)*(arglist + i));
            fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n  - %s",
                    tmp___0);
            last_val = vallist + valsize * i;
          }
        } else {
          {
            tmp___2 = memcmp((void const *)last_val, (void const *)(vallist + valsize * i),
                             valsize);
          }
          if (tmp___2) {
            {
              tmp___0 = quote((char const *)*(arglist + i));
              fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n  - %s",
                      tmp___0);
                                               
            }
          } else {
            {
              tmp___1 = quote((char const *)*(arglist + i));
              fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) ", %s",
                      tmp___1);
            }
          }
        }
        i++;
      }
    while_break: /* CIL Label */;
    }
    {
      putc_unlocked('\n', stderr);
    }
    return;
  }
}
ptrdiff_t __xargmatch_internal(char const *context, char const *arg, char const *const *arglist,
                               char const *vallist, size_t valsize, void (*exit_fn)(void)) {
  ptrdiff_t res;
  ptrdiff_t tmp;
   
     
                                                     
                
     
                    
                   
     
     
                                          
                                                
                   
     
                           
   
}
                                                                                                              
                                                                                                                                   
                                                                                                                            
                                                                                                                   
                                                                                 
                                                                                                          
                                                                                                                                          
                                                                          
                                                                                                                   
                                                                             
                                                    
                                                                                                     
                                                                                                     
                                                    
          
                
   
                                              
               
            
               
     
                              
       
                     
       
     
     
                               
     
                     
   
  
extern __attribute__((__nothrow__)) unsigned short const **(__attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
                                                                                                                
                                                                                                              
                                                                                               
                                                                                     
                                                  
                                                                                
                                                                                                                                               
                                                                                                 
                                                                       
   
                                                                  
                                
                               
     
                                      
                             
   
 
                                                                                   
                   
                   
              
   
                          
     
                 
                                      
                        
                
                       
                           
         
         
                                       
                                                                      
         
       
                                 
     
                 
   
  
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base, unsigned long *val,
                      char const *valid_suffixes) {
  char *t_ptr;
  char **p;
  unsigned long tmp;
                   
  char const *q;
  unsigned char ch;
                                
               
                
               
               
           
               
                        
                
                
  {
                         
                           
                                 
         
                                                                                                                                             
                                         
         
       
            
       
                                                                                                                                           
                                       
       
      
               
              
             
      p = &t_ptr;
      
    q = s;
    ch = (unsigned char)*q;
    {
                
                                      
         
                                    
         
                                                           
                           
         
            
                               
       
                                 
     
                        
                               
     
     
                                   
                   
      tmp = strtoul((char const * /* __restrict  */)s, (char ** /* __restrict  */)p, strtol_base);
    }
                                               
                           
                    
           
                                                         
           
                        
                      
                  
                                     
           
                
                                   
         
              
                                 
       
            
       
                                     
       
                          
         
                                       
         
                             
                                   
         
                              
       
     
                          
                 
                   
      
                         
       
                    
                     
                                                     
       
                     
                   
                                                        
       
       
                                              
       
                    
         
                                            
                          
           
                                           
                         
           
                                           
                         
           
                            
                                 
                                           
                          
           
                            
                                
                                
                      
                     
                            
                                      
         
       
       
                               
                       
         
                               
                           
         
                               
                       
         
                               
                       
         
                               
                       
         
                                
                       
         
                                
                        
         
                               
                        
         
                               
                       
         
                                
                       
         
                               
                       
         
                               
                       
         
                                
                       
         
                                
                        
         
                               
                       
         
                               
                       
         
                            
                               
       
                                            
       
                              
                                   
       
                                             
       
                              
                              
                                   
                              
                               
       
                                                         
       
                              
                                
                                
       
                                                         
       
                              
                               
                               
       
                                                         
       
                              
                                
                                
       
                                                         
       
                              
                               
       
                                                         
       
                              
                                
                                
       
                                                         
       
                              
                                
       
                                          
       
                              
                               
       
                                                         
       
                              
                               
       
                                                         
       
                              
                                     
                   
                                                        
                                        
       
                                                                       
                     
                  
                                                     
       
      
    *val = tmp;
                 
  }
}
extern __attribute__((__nothrow__)) long(__attribute__((__nonnull__(1), __leaf__)) strtol)(char const *__restrict __nptr,
                                                                                           char **__restrict __endptr,
                                                                                           int __base);
                                                                                                                
                                                                                                             
                                                                                              
                                                                                                                   
                                                                                                                                      
                                                                                          
int memcoll(char *s1, size_t s1len, char *s2, size_t s2len);
char *quotearg_n_style_mem(int n, enum quoting_style s, char const *arg, size_t argsize);
int xmemcoll(char *s1, size_t s1len, char *s2, size_t s2len);
static void collate_error(int collation_errno, char const *s1, size_t s1len,
                          char const *s2, size_t s2len) {
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
                    
                    
                    
  {
    {
      tmp = gettext("string comparison failed");
      error(0, collation_errno, (char const *)tmp);
      tmp___0 = gettext("Set LC_ALL=\'C\' to work around the problem.");
      error(0, 0, (char const *)tmp___0);
      tmp___1 = quotearg_n_style_mem(1, (enum quoting_style)6, s2, s2len);
      tmp___2 = quotearg_n_style_mem(0, (enum quoting_style)6, s1, s1len);
      tmp___3 = gettext("The strings compared were %s and %s.");
      error((int)exit_failure, 0, (char const *)tmp___3, tmp___2, tmp___1);
    }
    return;
  }
}
int xmemcoll(char *s1, size_t s1len, char *s2, size_t s2len) {
  int diff;
  int tmp;
  int collation_errno;
  int *tmp___0;
  {
    {
      tmp = memcoll(s1, s1len, s2, s2len);
      diff = tmp;
                                   
      collation_errno = *tmp___0;
    }
    if (collation_errno) {
      {
        collate_error(collation_errno, (char const *)s1, s1len, (char const *)s2,
                      s2len);
      }
    }
    return (diff);
  }
}
                                     
__inline static void *x2nrealloc(void *p, size_t *pn, size_t s) {
  size_t n;
  void *tmp;
  {
    n = *pn;
    if (!p) {
                
        n = 128UL / s;
                          
        
    } else {
                                         
         
                       
         
        
      n += (n + 1UL) / 2UL;
    }
    {
      *pn = n;
      tmp = xrealloc(p, n * s);
    }
    return (tmp);
  }
}
                                                                                           
                                                                                                                        
                                                                                                       
                                                                                                     
                                                                                                         
                                                                       
                         
          
            
   
     
                      
              
     
             
                     
         
                       
         
       
     
               
   
 
                                                                     
void *xrealloc(void *p, size_t n) {
  {
            
              
         
                  
         
                           
       
      
    {
      p = realloc(p, n);
    }
            
              
         
                       
         
       
      
    return (p);
  }
}
void *x2realloc(void *p, size_t *pn) {
  void *tmp;
  {
    {
      tmp = x2nrealloc(p, pn, (size_t)1);
    }
    return (tmp);
  }
}
                                                                                                           
                                                                                                             
                                                                                         
                                                                                            
                                                                 
                                                    
void xalloc_die(void) {
  char *tmp;
                   
  {
    {
      tmp = gettext("memory exhausted");
      error((int)exit_failure, 0, "%s", tmp);
      abort();
    }
  }
}
                                                                                     
                        
                       
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strcmp)(char const *__s1,
                                                                                             char const *__s2) __attribute__((__pure__));
                                                        
                                                                                                            
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                            
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                            
                                                                                                            
                                                                                                            
                                                                                                        
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                        
                                                                                                            
                                                                                                      
                                                                                                    
                                                                                                       
                                                                                                    
                                                                                                          
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                        
                                                                                                       
                                                                                                      
                                                                                                        
                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                        
                                                                                                    
                                                                                                       
                                                                                                        
                                                                                                       
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                         
                                                                                                     
                                                                                                    
                                                                                                     
                                                                                                      
                                                                                                     
                                                                                                    
                                                                                                     
                                                                                                       
                                                                                                     
                                                                                                    
                                                                                                     
                                                                                                       
                                                                                                     
                                                                                                    
                                                                                                      
                                                                                                       
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                        
                                                                                                     
                                                                                                    
                                                                                                     
                                                                                                     
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                        
                                                                                                    
                                                                                                    
                                                                                                       
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                    
                                                                                                        
                                                                                                            
                                                                                                           
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                          
                                                                                                      
                                                                                                     
                                                                                                        
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                     
                                                                                                     
                                                                                                     
                                                                                                    
                                                                                                       
                                                                                                         
                                                                                                    
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                       
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                    
                                                                                                       
                                                                                                           
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                       
                                                                                                    
                                                                                                       
                                                                                                    
                                                                                                     
                                                                                                    
                                                                                                       
                                                                                                    
                                                                                                        
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                        
                                                                                                       
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                            
                                                                                                        
                                                                                                      
                                                                                                      
                                                                                                    
                                                                                                       
                                                                                                    
                                                                                                    
                                                                                                        
                                                                                                        
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                            
                                                                                                    
                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                       
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                        
                                                                                                    
                                                                                                       
                                                                                                        
                                                                                                    
                                                                                                    
                                                                                                       
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                        
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                        
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                        
                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                        
                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                       
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                          
                                                                                                       
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                     
                                                    
                                                                                            
                                                                                            
                                                                                                
                                                                                                  
                                                                                                      
                                                                                                      
                                                                                                      
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                      
                                                                                                    
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                    
                                                                                                      
                                                                                                      
                                                                                                      
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                        
                                                                                                    
                                                                                                         
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void));
                                                                                      
                                                                                   
                                                                      
                                        
                                                                                           
                                                   
                                                                                  
                                                 
                                                                             
                                           
extern int printf(char const *__restrict __format, ...);
char const version_etc_copyright[47];
                                                                                 
                                                                                        
                                                                                
                                                          
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc_arn(FILE *stream, char const *command_name, char const *package,
                     char const *version, char const *const *authors, size_t n_authors) {
  char *tmp;
  char *tmp___0;
                
                
                
                
                
                
  char *tmp___7;
                
                
                 
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    if (command_name) {
      {
        fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */) "%s (%s) %s\n",
                command_name, package, version);
      }
    } else {
      {
        fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */) "%s %s\n",
                package, version);
      }
    }
    {
      tmp = gettext("(C)");
      fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)(version_etc_copyright),
              tmp, 2012);
      tmp___0 = gettext("\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
      fputs_unlocked((char const * /* __restrict  */)tmp___0, (FILE * /* __restrict  */) stream);
    }
    {
                             
                    
       
                             
                    
       
                             
                    
       
                             
                    
       
                             
                    
       
                             
                    
       
                             
                    
       
                             
                    
       
                             
                    
       
                             
                    
       
                          
                            
     
              
     
                            
     
                                            
                                                                                         
                              
     
                        
                            
     
                                                   
                                                                                         
                                              
     
                        
                            
     
                                                        
                                                                                         
                                                              
     
                        
                            
     
                                                             
                                                                                         
                                                                              
     
                        
                            
     
                                                                 
                                                                                         
                                                                                              
     
                        
                            
     
                                                                     
                                                                                         
                                                                                             
                              
     
                        
                            
    {
      tmp___7 = gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
      fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)tmp___7,
              *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
              *(authors + 5), *(authors + 6));
    }
                        
                            
     
                                                                              
                                                                                         
                                                                                             
                                                              
     
                        
                            
     
                                                                                  
                                                                                         
                                                                                             
                                                                              
     
                        
                                    
     
                                                                                           
                                                                                          
                                                                                             
                                                                              
     
                        
                                  
    }
    return;
  }
}
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors) {
  size_t n_authors;
  char const *authtab[10];
                  
                   
  {
    n_authors = (size_t)0;
    {
      while (1) {
                                      
                               
           
                                                          
                                     
           
                                                                    
                             
           
                
                           
         
        n_authors++;
      }
                                 
    }
    {
      version_etc_arn(stream, command_name, package, version, (char const *const *)(authtab),
                      n_authors);
    }
    return;
  }
}
                                                                             
                                                                         
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) {
  va_list authors;
  {
    {
      __builtin_va_start(authors, version);
      version_etc_va(stream, command_name, package, version, authors);
      __builtin_va_end(authors);
    }
    return;
  }
}
char const version_etc_copyright[47] =
    {(char const)'C', (char const)'o', (char const)'p', (char const)'y',
     (char const)'r', (char const)'i', (char const)'g', (char const)'h',
     (char const)'t', (char const)' ', (char const)'%', (char const)'s',
     (char const)' ', (char const)'%', (char const)'d', (char const)' ',
     (char const)'F', (char const)'r', (char const)'e', (char const)'e',
     (char const)' ', (char const)'S', (char const)'o', (char const)'f',
     (char const)'t', (char const)'w', (char const)'a', (char const)'r',
     (char const)'e', (char const)' ', (char const)'F', (char const)'o',
     (char const)'u', (char const)'n', (char const)'d', (char const)'a',
     (char const)'t', (char const)'i', (char const)'o', (char const)'n',
     (char const)',', (char const)' ', (char const)'I', (char const)'n',
     (char const)'c', (char const)'.', (char const)'\000'};
                                                                                                
                                                     
                                                                                                 
                                                                                                       
                                                                                                                            
                                                                                                                            
                                                                                                          
                                                                                                      
                                                                                                                
                                                                                                                            
                                                                                                          
                                  
                                                                                     
                                                                                                            
                                                                                                             
                                                                                                                       
                                                                                      
                                                                                                
                                                                                                          
                                      
                                   
                      
                                  
                           
                                                   
                          
                                             
                                                  
                                                   
                                                     
                                               
                                                                        
                                                                                              
                                                                                   
char const *locale_charset(void);
                           
                   
                             
                                              
                                              
extern __attribute__((__nothrow__)) size_t(__attribute__((__leaf__)) __ctype_get_mb_cur_max)(void);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) mbsinit)(mbstate_t const *__ps) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t(__attribute__((__leaf__)) mbrtowc)(wchar_t *__restrict __pwc,
                                                                              char const *__restrict __s,
                                                                              size_t __n,
                                                                              mbstate_t *__restrict __p);
                                                                                         
                                     
                               
                                
                                
                               
                         
                           
extern int(__attribute__((__nonnull__(1))) open)(char const *__file, int __oflag, ...);
                                                                                                            
                                                                                                          
                               
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                           
                                     
                                                                                              
                                                                                                   
                                                                                                
                                                                                                               
                                                                                                                 
                                                                                   
                                                                                    
                      
                                                                                         
                                                                                                                
                                                                                                            
                                                                                                           
                                                                              
                                             
                                                                                                                   
                                                                                                                      
                                                                                                                                   
                                                                                                                                    
                                                                                                                     
                                                                                                           
                                                                                                                                             
                                                                                                                                                
                                                                                                                                                          
                                                                                                             
                                                                                                                                  
                                                                                                                
                                                                                                                   
                                                                                                                                               
                                                                                                               
                                                                                                                                              
                                                                                                             
                                                                                                                 
                                                                                                 
                                                                                                 
                                                                                                            
                                         
                                                                                  
        
                                                                               
        
                                                                          
                            
                                                                                  
        
                                                                          
                            
                                                                                                   
                                                                                  
        
                                                                          
                            
                                                                                                    
                                                                                  
         
                                                                          
                            
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                   
         
                                                                          
                            
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                   
         
                                                                          
                            
                                                                                                                                      
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                  
         
                                                                               
         
                                                                               
         
                                                                          
                                             
                                                                  
                                                                                                                                      
                                                                                                    
                                                                               
                                                        
                                                                                                 
                                                                                             
                                             
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                                                                                                                                                                                                          
                                                                                                                                                                                                          
                                                                                                                                                                                                         
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                                                                                                                                                                                                         
                                                                                                                                                                                                          
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                                                                                                                                                                                                          
                                                                                                                                                                                                        
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                                                                                                                                                                                                       
                                                                                                                                                                                                        
                                                                                                                                                                                                            
                                                                                                
                                                  
                                                                                                                            
                                                                                                                           
                                                                                                                          
                                                                                                                            
                                                                                                                          
                                                                                                                           
                                                                                                                            
                                                                                                                          
                                                                                                                          
                                                                                                                            
                                                                                                                            
                                                                                                                           
                                                                                                                        
                                                                                                                           
                                                                                                                            
                                                                                                                             
                                                                                                
                                                                                                     
                                                                                                              
                                                                                                           
                                                                                                             
                                                                                    
                                                       
                                
                                                              
                                                            
                                                                                                              
                                                                                                             
                            
                            
                                     
                                         
                                                                                                                        
                                                                                                                              
                                                                                                             
                                 
                                                     
                                                                                         
                                                               
                                         
                                                                                      
                                                                                                  
                                      
                                                                                          
                                                                                                     
                                                                                                  
                                                                                       
                                                                                       
                                                                                                                                
                                                                                                                       
                                                                                    
                                                                                    
                                                                                    
                                                                                    
                                                         
                                        
                                               
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);
                                             
                                                                                          
                                                                                          
                                            
            
                
                
   
                              
       
                         
                      
       
            
       
                                            
                          
       
     
                             
   
  
                                                                                         
                                        
                                                                                                                                                             
                                                                                                                                                              
                                   
                                                
                                                                                                                        
                                                                                                                         
static struct quoting_options default_quoting_options;
int set_char_quoting(struct quoting_options *o, char c, int i) {
  unsigned char uc;
  unsigned int *p;
  struct quoting_options *tmp;
  int shift;
  int r;
  {
                          
            
              
            
                                     
     
    p = tmp->quote_these_too + (unsigned long)uc / (sizeof(int) * 8UL);
    shift = (int)((unsigned long)uc % (sizeof(int) * 8UL));
    r = (int)((*p >> shift) & 1U);
    *p ^= (unsigned int)(((i & 1) ^ r) << shift);
    return (r);
  }
}
static struct quoting_options quoting_options_from_style(enum quoting_style style) {
  struct quoting_options o;
                   
                   
  {
                                    
                
                              
             
     
                 
                                      
                              
                           
         
                                    
              
       
                                 
     
                                             
                                              
                                    
       
                
       
     
                    
    return (o);
  }
}
static char const *gettext_quote(char const *msgid, enum quoting_style s) {
  char const *translation;
  char const *tmp;
  char const *locale_code;
  char const *tmp___0;
  int tmp___1;
  char const *tmp___2;
  int tmp___3;
  char const *tmp___4;
                    
                    
                    
                    
                    
                    
                    
                    
  {
    {
      tmp = (char const *)gettext(msgid);
      translation = tmp;
    }
    if ((unsigned long)translation != (unsigned long)msgid) {
      return (translation);
    }
    {
      locale_code = locale_charset();
                                                   
    }
    if (tmp___1 == 0) {
      if ((int const) * (msgid + 0) == 96) {
        tmp___0 = "\342\200\230";
      } else {
        tmp___0 = "\342\200\231";
      }
      return (tmp___0);
    }
    {
      tmp___3 = c_strcasecmp(locale_code, "GB18030");
    }
    if (tmp___3 == 0) {
      if ((int const) * (msgid + 0) == 96) {
        tmp___2 = "\241\ae";
      } else {
        tmp___2 = "\241\257";
      }
      return (tmp___2);
    }
    if ((unsigned int)s == 7U) {
      tmp___4 = "\"";
    } else {
      tmp___4 = "\'";
    }
    return (tmp___4);
  }
}
static size_t quotearg_buffer_restyled(char *buffer, size_t buffersize, char const *arg,
                                       size_t argsize, enum quoting_style quoting_style,
                                       int flags, unsigned int const *quote_these_too,
                                       char const *left_quote, char const *right_quote) {
  size_t i;
  size_t len;
  char const *quote_string;
  size_t quote_string_len;
  _Bool backslash_escapes;
  _Bool unibyte_locale;
  size_t tmp;
                           
                  
                    
                       
              
              
           
                  
                                 
                    
            
               
                 
           
              
              
              
              
                 
                    
                    
                    
                    
                    
  {
    {
                      
                                     
      quote_string_len = (size_t)0;
      backslash_escapes = (_Bool)0;
      tmp = __ctype_get_mb_cur_max();
      unibyte_locale = (_Bool)(tmp == 1UL);
                                                     
    }
     
                                              
                    
       
                                              
                    
       
                                              
                    
       
                                              
                    
       
                                              
                    
       
                                              
                    
       
                                              
                    
       
                                              
                    
       
                                              
                    
       
                          
                           
                                            
                                    
                           
                                
         
                     
                                          
                                   
                                           
             
                  
                             
           
                                     
         
       
                                   
                          
                                   
                        
                           
                                   
                                    
                        
                           
                           
                           
                                              
         
                                                         
                                                           
         
       
                                
                                  
         
                     
                                              
                                 
                                   
             
             
                         
                                                  
                                       
                                                        
                 
                      
                                     
               
                                             
             
                           
           
                                         
         
       
       
                                     
                                   
                                                
       
                        
                           
                                            
                                    
                           
                                
         
                     
                                              
                                   
                                           
             
                  
                                 
           
                                         
         
       
                          
                                   
                        
                           
                                    
                        
                                    
     
              
     
                                  
     
    i = (size_t)0;
     
                 
                                          
                                              
                                                 
                
                                 
         
                      
                               
         
                                  
                                
                                 
                                                  
               
                                                                                     
                                                   
               
                                 
                                         
                                                 
                 
                                          
               
             
           
         
                                      
         
                            
                            
           
                             
                         
           
                            
                            
           
                            
                            
           
                             
                         
           
                             
                         
           
                             
                         
           
                            
                        
           
                             
                         
           
                             
                         
           
                              
                          
           
                              
                          
           
                             
                         
           
                              
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                              
                         
           
                             
                             
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                                  
                                   
                                  
                                     
                                             
             
             
                         
                                                  
                                       
                                               
                 
                      
                                     
               
                                             
             
                                    
                                                  
                                                            
                   
                               
                                                        
                                             
                                                    
                       
                            
                                           
                     
                                                   
                   
                   
                               
                                                        
                                             
                                                    
                       
                            
                                           
                     
                                                   
                   
                 
               
             
                                   
                  
                            
                          
             
           
                                
                                 
         
                                                  
                            
           
                                                  
                            
           
                                  
                                   
                                   
                                           
           
                                
                                   
                          
                                    
                                                          
                 
                                                              
                                 
                   
                                                              
                                 
                   
                                                              
                                 
                   
                                                              
                                 
                   
                                                              
                                 
                   
                                                              
                                 
                   
                                                              
                                 
                   
                                                              
                                 
                   
                                                              
                                 
                   
                                          
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                           
                                                   
                   
                                                        
                           
                   
                               
                                                        
                                             
                                                    
                       
                            
                                           
                     
                                                   
                   
                   
                               
                                                        
                                             
                                                     
                       
                            
                                           
                     
                                                   
                   
                   
                               
                                                        
                                             
                                                     
                       
                            
                                           
                     
                                                   
                   
                   
                               
                                                         
                                             
                                                    
                       
                            
                                            
                     
                                                    
                   
                                        
                                                   
                                        
                                                  
                 
               
             
           
                                
                                           
                                
                                          
         
                                
                                   
                                   
                        
                                   
                                   
                        
                                
                                   
                        
                                
                                   
                                  
                                
                                   
                                  
                               
                                   
                                  
                                
                                   
                        
                                
                  
                                  
                                     
                                     
                             
               
             
           
                           
                                                  
                                     
                                             
             
           
                 
                                  
                    
                              
           
                                
                                 
                                 
                                                
                                                   
                  
                                     
           
                         
                                  
           
                                 
                                 
                         
                                  
           
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                                  
                                     
                                             
             
           
                                
                                    
                                                  
                                     
                                             
             
             
                         
                                                   
                                       
                                               
                 
                      
                                      
               
                                              
             
             
                         
                                                   
                                       
                                               
                 
                      
                                      
               
                                              
             
             
                         
                                                   
                                       
                                               
                 
                      
                                      
               
                                              
             
           
                                
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                
                                           
                               
             
                            
                                        
                                                                                    
             
                  
             
                                                             
                            
                                   
             
                                                  
               
                                      
               
             
             
                         
                                                   
                 
                                                                                                                       
                                                                                                  
                                  
                 
                                   
                                        
                        
                                                      
                                         
                                          
                          
                                                        
                                           
                       
                                   
                                                             
                                                
                                                    
                                                    
                             
                                  
                                                  
                           
                              
                         
                                                        
                       
                                            
                            
                                               
                                                                
                                        
                           
                                       
                                                                 
                                                 
                                                      
                               
                               
                                                                                
                                                   
                                 
                                                                                
                                                   
                                 
                                                                                
                                                   
                                 
                                                                                
                                                   
                                 
                                                                                 
                                                   
                                 
                                                        
                                                           
                                                           
                                                           
                                                           
                                                           
                                                               
                                                                 
                                                      
                                                                
                               
                                  
                             
                                                            
                           
                         
                       
                       
                                                      
                       
                                     
                                             
                       
                                 
                     
                   
                 
                 
                                                                   
                 
                              
                                        
                 
               
                                              
             
           
                        
                        
                  
                                    
                               
                     
                             
                 
                             
                                                       
                                            
                                       
                                                 
                                                         
                         
                         
                                     
                                                               
                                                   
                                                           
                             
                                  
                                                  
                           
                                                          
                         
                         
                                     
                                                               
                                                   
                                                                           
                             
                                  
                                                  
                           
                                                          
                         
                         
                                     
                                                               
                                                   
                                                                                 
                             
                                  
                                                  
                           
                                                          
                         
                                                               
                              
                                
                       
                            
                       
                                           
                         
                                     
                                                               
                                                   
                                                           
                             
                                  
                                                  
                           
                                                          
                         
                                                  
                       
                     
                                          
                                            
                     
                     
                                 
                                                           
                                               
                                                    
                         
                              
                                              
                       
                                                      
                     
                        
                                                  
                   
                                                  
                 
                             
               
             
           
                                          
         
                                
                      
                
                                   
                 
                                  
                                                                                                                                                       
                            
               
                    
                          
             
                  
                 
                                  
                           
             
           
         
                   
                                 
                                         
         
         
                     
                                               
                                   
                                           
             
                  
                                  
           
                                          
         
                 
                   
                                             
                                 
                                      
           
                
                                
         
                                        
       
             
            
       
                                     
     
                     
                                              
                                 
                                         
         
       
     
                       
                                
         
                     
                                               
                                 
                                    
             
             
                         
                                                   
                                       
                                                        
                 
                      
                                      
               
                                              
             
                           
           
                                          
         
       
     
                           
                                     
     
                 
                               
                                                                                       
                                                                                     
                                                                
   
                     
  }
}
                       
                                
                                                        
                                           
static char *quotearg_n_options(int n, char const *arg, size_t argsize, struct quoting_options const *options) {
        
           
                  
  struct slotvec *sv;
            
                     
              
                          
              
            
  int flags;
               
                 
               
  {
     
                               
               
                           
                   
     
                
       
                
       
     
                       
                             
                                                                              
                                                
                     
              
                     
       
                                               
         
                       
         
       
                         
                                                
              
                     
       
       
                                                                           
                     
       
                         
                       
       
       
                                                                              
                                  
       
     
    {
                            
                          
      flags = (int)(options->flags | 1);
                                                                                                     
                                                                                                 
                                                                                                                
                      
    }
                        
                         
                            
                                                         
         
                            
         
       
       
                               
                            
                                                                                             
                                                                                         
                                                                                                        
       
     
     
                                   
                   
     
                 
  }
}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {
                          
                             
  char *tmp___0;
                   
                   
   
     
                                         
              
                                                                                             
     
                     
   
}
char *quotearg_n_style_mem(int n, enum quoting_style s, char const *arg, size_t argsize) {
  struct quoting_options o;
  struct quoting_options tmp;
  char *tmp___0;
                   
                   
  {
    {
      tmp = quoting_options_from_style(s);
      o = tmp;
      tmp___0 = quotearg_n_options(n, arg, argsize, (struct quoting_options const *)(&o));
    }
    return (tmp___0);
  }
}
char *quotearg_char_mem(char const *arg, size_t argsize, char ch) {
  struct quoting_options options;
  char *tmp;
                   
  {
    {
      options = default_quoting_options;
      set_char_quoting(&options, ch, 1);
      tmp = quotearg_n_options(0, arg, argsize, (struct quoting_options const *)(&options));
    }
                 
  }
}
char *quotearg_char(char const *arg, char ch) {
  char *tmp;
  {
    {
      tmp = quotearg_char_mem(arg, (size_t)-1, ch);
    }
    return (tmp);
  }
}
char *quotearg_colon(char const *arg) {
  char *tmp;
  {
    {
      tmp = quotearg_char(arg, (char)':');
    }
    return (tmp);
  }
}
struct quoting_options quote_quoting_options = {(enum quoting_style)6, 0, {0U}, (char const *)((void *)0), (char const *)((void *)0)};
char const *quote_n(int n,
                    char const *name) {
  char const *tmp;
   
     
                                                                                                                            
     
                 
   
}
char const *quote(char const *name) {
                  
  {
    {
                             
    }
                 
  }
}
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
                                                                                        
char const *program_name;
void set_program_name(char const *argv0);
                                     
                                           
                                                                        
                                                                                                              
                                                                                                                                 
                                                     
void set_program_name(char const *argv0) {
                    
                   
          
              
   
                                                             
       
                                                                                                          
                                                 
                
       
     
     
                                                
     
                                                             
                       
            
                   
     
                             
       
                                                          
       
                         
         
                       
                                                
         
                       
                           
                                                        
         
       
     
                         
                                            
           
   
}
                                                                                                  
                                                                                                   
                                                                                                 
                                                                                                  
                                                                                      
                                                                                             
                                                                                       
                                                                                            
                                                                                                                           
                                                                                                      
int posix2_version(void);
int posix2_version(void) {
  long v;
  char const *s;
  char const *tmp;
  char *e;
  long i;
  long tmp___0;
  long tmp___1;
  long tmp___2;
                    
  {
    {
                  
      tmp = (char const *)getenv("_POSIX2_VERSION");
      s = tmp;
    }
    if (s) {
      if (*s) {
        {
          tmp___0 = strtol((char const * /* __restrict  */)s, (char ** /* __restrict  */)(&e),
                           10);
          i = tmp___0;
        }
        if (!*e) {
          v = i;
        }
      }
    }
    if (v < (-0x7FFFFFFF - 1)) {
      tmp___2 = (-0x7FFFFFFF - 1);
    } else {
      if (v < 2147483647L) {
        tmp___1 = v;
      } else {
        tmp___1 = 2147483647L;
      }
      tmp___2 = tmp___1;
    }
    return ((int)tmp___2);
  }
}
                                                                                            
                                                                                                            
                                                                                                                        
                                                                                                                              
                                                                                        
                                                                                        
                                                                                      
                             
                                                                                        
                                                                                                            
                                                                                                              
                                                                                                         
                                                                                                               
                                                                                                           
                                            
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                  
                                                                                                
                                                                                                
                                                                                                 
                                                                                                
                                                                                                 
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                 
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                   
                                                                                                    
                                                                                                    
                                                     
                                      
                                                                                                 
                                                                                                   
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                 
                                                                                               
                                                                                                 
                                                                                                    
                                                                                                    
                                                                                                  
                                                                                                    
                                                                                                  
                                                                                                    
                                                                                                   
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                   
                                                                                                 
                                                                                                    
                                                                                                  
                                                                                                   
                                                                                                  
                                                                                                   
                                                                                                  
                                                                                                 
                                                                                                   
                                                   
                                         
                                                                                                
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                    
                                                                                                   
                                                                                                  
                                                                                                 
                                                                                                  
                                                                                                   
                                                                                                    
                                                                                                    
                                                                                                   
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                  
                                                                                                    
                                                                                                  
                                                                                                   
                                                                                                    
                                                                                                   
                                                                                                   
                                                                                                  
                                                                                                    
                                                    
                                      
                                                                                                    
                                                                                                    
                                                                                                   
                                                                                                    
                                                                                                   
                                                                                                    
                                                    
                                        
                                                                                             
                                                                                                
                                                                                                  
                                                                                                
                                                                                                
                                                                                               
                                                   
                                        
                                                                                                    
                                                                                                    
                                                                                                      
                                                                                                      
                                                                                                      
                                                                                                     
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                       
                                                                                                      
                                                                                                   
                                                                                                  
                                                                                                    
                                                                                                    
                                                                                                   
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                  
                                                                                                    
                                                                                                    
                                                                                                     
                                                                                                   
                                                                                                      
                             
                                       
                                                                                             
                                                                                             
                                                                                                 
                                                                                                
                                                                                                
                                                                                                 
                                                                                            
                                                                                             
                                                                                             
                                                                                                 
                                                                                                
                                                                                                 
                                                                                               
                                                                                            
                                                                                                
                                                                                                
                                                                                                
                                                                                               
                                                                                            
                                                                                              
                                                                                            
                                                                                               
                                                                                                
                                                                                              
                                                                                               
                                                                                                
                                                                                                
                                                                                                
                            
                                       
                                                                                                   
                                                                                                    
                                                                                                    
                                                                                                
                                                                                                  
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                  
                                                                                                
                                                                                                   
                                                                                                 
                                                                                                 
                                                                                                
                                                                                                    
                                                                                                    
                                                                                                  
                                                                                                   
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                     
                                    
                                                                                                   
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                     
                                    
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                
                                                                                                 
                                                      
                                                         
                                                       
                                                         
                                                                           
                                                    
                                            
                         
                          
                       
                       
                     
                      
                      
                        
                           
                      
                          
                           
                           
                        
                        
                         
                      
                           
                        
                          
                      
                       
                        
                          
                                        
                                         
                      
                       
                            
                      
                     
                      
                        
                     
                        
                     
                                        
                                            
                          
                            
                       
                     
                       
                      
                      
                       
                       
                        
                       
                       
                         
                        
                       
                        
                           
                          
                      
                       
                                        
                                                                   
                                                                  
                                                                   
                                                                                      
                                        
                     
                      
                     
                        
                        
                         
                        
                        
                        
                        
                        
                         
                        
                        
                        
                        
                        
                        
                        
                        
                         
                         
                        
                         
                         
                        
                      
                      
                       
                      
                      
                       
                       
                       
                        
                       
                        
                       
                       
                       
                       
                       
                       
                       
                       
                        
                        
                                        
                                       
                     
                      
                      
                      
                      
                      
                      
                      
                      
                      
                      
                      
                    
                     
                     
                     
                     
                     
                   
                     
                     
                     
                     
                     
                   
                                        
                                                                          
                                                                                                      
                                                                                                             
                                                                                                      
                           
#pragma GCC diagnostic ignored "-Wtype-limits"
                                                                                                    
                                                                                                             
                                                                                                   
                                                                                                         
                                                                                                          
                                                                                            
                                                                                                   
                                                                                                    
                                                                                                         
                                                                                             
                                                                      
                                                                                        
                                                                                              
                                                                               
                                        
                                                                                                               
                                                                                                                                          
                                                                               
                                                 
           
               
             
               
                 
               
               
              
   
     
                 
                                      
         
                                       
                       
                                 
         
                   
                      
                
           
                                         
           
                         
                        
                  
                        
           
         
                      
                           
         
         
                           
                            
                               
                                
                      
                      
                          
                          
         
                            
                                    
         
                            
                     
         
       
                                 
     
                  
   
  
int memcoll(char *s1, size_t s1len, char *s2, size_t s2len) {
  int diff;
          
          
          
              
  {
                        
       
                                                                    
       
                         
         
                                   
                   
                   
         
              
                
       
            
          
                         
                         
                                   
                                   
                                                                                        
                         
                         
     
      
    return (diff);
  }
}
int memcasecmp(void const *vs1, void const *vs2, size_t n) __attribute__((__pure__));
                                                                                     
int memcasecmp(void const *vs1, void const *vs2, size_t n) {
  size_t i;
  char const *s1;
  char const *s2;
  unsigned char u1;
  unsigned char u2;
  int U1;
  int tmp;
  int U2;
  int tmp___0;
  int diff;
  {
    s1 = (char const *)vs1;
    s2 = (char const *)vs2;
    i = (size_t)0;
    {
      while (1) {
                                      
        if (!(i < n)) {
          goto while_break;
        }
        {
          u1 = (unsigned char)*(s1 + i);
          u2 = (unsigned char)*(s2 + i);
          tmp = toupper((int)u1);
          U1 = tmp;
          tmp___0 = toupper((int)u2);
          U2 = tmp___0;
          diff = U1 - U2;
        }
        if (diff) {
          return (diff);
        }
        i++;
      }
    while_break: /* CIL Label */;
    }
    return (0);
  }
}
                                                                                                
                                                                                        
                                                                                        
                                                                                                                   
                                                                                                                                         
                                                                                            
                                                                                                          
                                                                                                          
                                                                                           
                                                                                                    
                                                                                                                
                                                                                           
                                                                                                                         
                                                                                                                              
                                                                                                             
                                                                                               
                                                                                        
                                                                                                                                                                    
                                   
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__)) exit)(int __status);
extern int optind;
                  
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) getopt_long)(int ___argc,
                                                                               char *const *___argv,
                                                                               char const *__shortopts,
                                                                               struct option const *__longopts,
                                                                               int *__longind);
                                                                                   
                                                                                      
                                                                                                     
                                                                                                                               
                                                                                                                                              
                                                                                                                                       
                                                                                                                                          
                                                                                                                                         
                                                                                                                         
                               
                               
                                 
                                  
                                
                                  
                                  
                                  
                                   
                         
                              
                              
                                
                                   
                                 
                                   
                                      
                                      
                         
                           
                                           
                                                                                      
                                                                                                  
                                                                                   
                                           
                                            
                                              
                 
                  
                   
                      
                     
             
                      
                 
                
              
         
           
                
                  
        
                
                
            
            
                    
              
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
   
                                       
                                                          
       
                               
                                                      
       
                                                             
                               
              
                                           
                                 
         
       
       
                          
                          
                               
                               
       
                              
                                                                 
                      
                
                      
         
              
                    
       
       
                            
                                                                                                 
       
                                                                       
         
                                                                                              
                              
         
                        
                                                     
         
         
                                                                                       
                                                                           
         
       
                                                                       
                
              
         
                                                         
         
                     
                  
                
           
                                 
           
                                                                
             
                        
                      
             
                  
                                          
                                 
             
                         
                                              
                 
                                        
                 
                              
                                   
                 
                              
                              
                        
                                
                                
                          
                                 
                                  
                     
                   
                 
                              
                   
                               
                                                        
                       
                                              
                       
                                    
                                             
                              
                                      
                                               
                         
                       
                     
                                                   
                   
                                
                                     
                   
                              
                 
                 
                                
                                                                                                               
                                               
                 
                                  
                                   
                 
                 
                                                    
                                                    
                                        
                 
                                      
                   
                                                       
                                                             
                   
                        
                   
                                                        
                                                                               
                   
                 
                                                                           
                   
                                         
                                              
                   
                                   
                 
                 
                                                                                                      
                                                                 
                                                                                                                                
                 
                      
               
                                         
             
             
                             
             
                                  
                      
                    
                                                   
                                         
             
           
         
         
                                      
         
       
                                                         
     
                
   
  
char const *locale_charset(void) {
                     
                      
             
                 
                 
              
                   
                   
  {
    {
                                              
    }
                                                              
                   
     
     
                                      
     
     
                 
                                      
                                            
                           
         
         
                                             
         
                           
           
                                      
                                              
           
                           
                
                                                  
                                                   
               
                                          
                                                  
               
                               
             
           
         
         
                                
                               
                                    
                                   
         
       
                                 
     
                                           
                        
     
                     
  }
}
                                                                                                         
                                                                                                                
                                                                                                        
                                                                                                              
                                                                                                          
                              
void initbuffer(struct linebuffer *linebuffer);
                                                                                    
                                                        
void initbuffer(struct linebuffer *linebuffer) {
  {
    {
      memset((void *)linebuffer, 0, sizeof(*linebuffer));
    }
           
  }
}
struct linebuffer *readlinebuffer_delim(struct linebuffer *linebuffer, FILE *stream,
                                        char delimiter) {
  int c;
  char *buffer;
  char *p;
  char *end;
         
              
  size_t oldsize;
  char *tmp___1;
  {
    {
      buffer = linebuffer->buffer;
      p = linebuffer->buffer;
      end = buffer + linebuffer->size;
                                  
    }
             
                                                
      
    {
      while (1) {
                      /* CIL Label */;
        {
          c = getc_unlocked(stream);
        }
        if (c == -1) {
                                                           
            return ((struct linebuffer *)((void *)0));
                   
            {
                                                
            }
                         
                                                        
              
            
                                                
                             
           
                             
        }
        if ((unsigned long)p == (unsigned long)end) {
          {
            oldsize = linebuffer->size;
            buffer = (char *)x2realloc((void *)buffer, &linebuffer->size);
            p = buffer + oldsize;
            linebuffer->buffer = buffer;
            end = buffer + linebuffer->size;
          }
        }
        tmp___1 = p;
        p++;
        *tmp___1 = (char)c;
        if (!(c != (int)delimiter)) {
          goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    linebuffer->length = (size_t)(p - buffer);
                        
  }
}
                                                                             
                                                                                                                                              
                                              
                                              
                                              
                                 
                                   
                                  
                                   
                                                                                               
                                   
                                                                      
                                                                        
                      
                                                                                                                                                             
                                                                       
                                                                                      
                                
                                                                                               
                                                                                                      
_Bool hard_locale(int category) {
  _Bool hard;
  char const *p;
                  
  int tmp___0;
  int tmp___1;
  char *locale;
  char *tmp___2;
  int tmp___3;
  int tmp___4;
  {
     
                      
                                                                         
              
     
    if (p) {
      if (1) {
        {
          tmp___0 = strcmp(p, "C");
        }
        if (tmp___0 == 0) {
          hard = (_Bool)0;
        } else {
          {
            tmp___1 = strcmp(p, "POSIX");
          }
          if (tmp___1 == 0) {
            hard = (_Bool)0;
          }
        }
      } else {
        {
          tmp___2 = strdup(p);
          locale = tmp___2;
        }
        if (locale) {
           
                                                       
           
          if (p) {
            {
              tmp___3 = strcmp(p, (char const *)locale);
            }
            if (tmp___3 == 0) {
              hard = (_Bool)0;
            } else {
              goto _L;
            }
          } else {
          _L : {
            p = (char const *)setlocale(category, "POSIX");
          }
            if (p) {
              {
                tmp___4 = strcmp(p, (char const *)locale);
              }
              if (tmp___4 == 0) {
                hard = (_Bool)0;
              }
            }
          }
          {
            setlocale(category, (char const *)locale);
            free((void *)locale);
          }
        }
      }
    }
    return (hard);
  }
}
                           
                                    
                                                                                                      
                                                                                                        
                                           
                                                                                           
                                                                                             
                                                                                      
                                                                                                          
                                                                                      
                                                                                                    
                                                                                                                
                 
                      
                                                                                   
                                                                                                                  
                                                                                                        
                                                                                                                 
                                                                                                                          
                                                                                                                        
                                                                                                                
                                                                                                                   
extern int fseeko(FILE *__stream, __off_t __off, int __whence);
extern __attribute__((__nothrow__)) __off_t(__attribute__((__leaf__)) lseek)(int __fd,
                                                                             __off_t __offset,
                                                                             int __whence);
int(__attribute__((__nonnull__(1))) rpl_fseeko)(FILE *fp, off_t offset, int whence) {
  off_t pos;
  int tmp;
  off_t tmp___0;
  int tmp___1;
  {
    if ((unsigned long)fp->_IO_read_end == (unsigned long)fp->_IO_read_ptr) {
      if ((unsigned long)fp->_IO_write_ptr == (unsigned long)fp->_IO_write_base) {
        if ((unsigned long)fp->_IO_save_base == (unsigned long)((void *)0)) {
          {
            tmp = fileno(fp);
            tmp___0 = lseek(tmp, offset, whence);
            pos = tmp___0;
          }
          if (pos == -1L) {
            return (-1);
          }
                            
                            
          return (0);
        }
      }
    }
    {
                                           
    }
    return (tmp___1);
  }
}
extern FILE *freopen(char const *__restrict __filename, char const *__restrict __modes,
                     FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) dup2)(int __fd,
                                                                        int __fd2);
static _Bool protect_fd(int fd) {
  int value;
  int tmp;
  int *tmp___0;
  {
    {
      tmp = open("/dev/null", 0);
      value = tmp;
    }
    if (value != fd) {
      if (0 <= value) {
        {
          close(value);
          tmp___0 = __errno_location();
          *tmp___0 = 9;
        }
      }
      return ((_Bool)0);
    }
    return ((_Bool)1);
  }
}
FILE *freopen_safer(char const *name, char const *mode, FILE *f) {
                  
                    
                    
  int saved_errno;
         
              
              
              
                
                
                
  int *tmp___6;
               
  {
    {
                           
                             
                             
                     
     
     
                     
                    
       
                     
                    
       
                     
                    
       
                          
                                    
     
                           
     
                         
                               
       
                            
     
                           
     
                         
                               
       
             /* CIL Label */
    {
                           
    }
                        
                              
        
            /* CIL Label */
                       
                  /* CIL Label */;
    }
                      
      {
                                
      }
                   
                    
              
                                
        
             
    _L___0:
                         
        {
                                  
        }
                     
                  
                
                                  
          
               
      _L:
                           
          {
                                    
          }
                       
             
                                                                                                     
                                                        
             
                  
                                    
            
                 
          {
            f = freopen((char const * /* __restrict  */)name, (char const * /* __restrict  */)mode,
                        (FILE * /* __restrict  */) f);
          }
          
        
      
    {
      tmp___6 = __errno_location();
      saved_errno = *tmp___6;
    }
                     
       
                 
       
     
                      
       
                 
       
     
                     
       
                 
       
     
             
       
                                     
                               
       
     
    return (f);
  }
}
                                                                                        
                                          
                                                          
extern int fflush(FILE *__stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) __freading)(FILE *__fp);
__inline static void clear_ungetc_buffer_preserving_position(FILE *fp) {
  {
    if (fp->_flags & 256) {
      {
        rpl_fseeko(fp, (off_t)0, 1);
      }
    }
    return;
  }
}
int rpl_fflush(FILE *stream) {
  int tmp;
  int tmp___0;
  int tmp___1;
  {
    if ((unsigned long)stream == (unsigned long)((void *)0)) {
      {
        tmp = fflush(stream);
      }
      return (tmp);
    } else {
      {
        tmp___0 = __freading(stream);
      }
      if (!(tmp___0 != 0)) {
        {
          tmp = fflush(stream);
        }
        return (tmp);
      }
    }
    {
      clear_ungetc_buffer_preserving_position(stream);
                               
    }
    return (tmp___1);
  }
}
                                           
                                  
extern int fclose(FILE *__stream);
int(__attribute__((__nonnull__(1))) rpl_fclose)(FILE *fp) {
                 
         
             
          
               
              
              
                  
              
               
  {
    {
                     
                 
                      
    }
                
       
                         
       
                   
     
     
                               
     
                       
       
                             
                                                
       
                           
            
                                 
       
                      
           
                                         
                                   
           
         
       
            
              
     
     
                          
     
                           
       
                                     
                               
                    
       
     
                    
  }
}
                                                                                                               
                                                                                                             
                                                                                                          
                                                                                       
                                                                                                                      
                                                                                                                  
                                            
                                          
                                                  
                                          
                                                                                               
                                                    
                                                                                    
                                             
                                            
                                 
                                                     
                                                                                          
                                                                                                
                                                                                             
                                                                                               
                                                                 
                                         
                                                                  
          
          
   
     
                                                        
                
     
           
   
 
                                          
          
   
             
       
                         
                                                  
       
     
           
   
 
                                            
                                                                                                                 
                                                                                                                                                 
                                                                           
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma weak pthread_mutex_init
#pragma weak pthread_mutex_lock
#pragma weak pthread_mutex_unlock
#pragma weak pthread_mutex_destroy
#pragma weak pthread_rwlock_init
#pragma weak pthread_rwlock_rdlock
#pragma weak pthread_rwlock_wrlock
#pragma weak pthread_rwlock_unlock
#pragma weak pthread_rwlock_destroy
#pragma weak pthread_once
#pragma weak pthread_cond_init
#pragma weak pthread_cond_wait
#pragma weak pthread_cond_signal
#pragma weak pthread_cond_broadcast
#pragma weak pthread_cond_destroy
#pragma weak pthread_mutexattr_init
#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
char const *Version = "8.16";
extern char *optarg;
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) textdomain)(char const *__domainname);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) bindtextdomain)(char const *__domainname,
                                                                                     char const *__dirname);
extern int putchar_unlocked(int __c);
extern size_t fwrite_unlocked(void const *__restrict __ptr, size_t __size, size_t __n,
                              FILE *__restrict __stream);
__inline static void emit_ancillary_info(void) {
            
                
  char *tmp___1;
  char *tmp___2;
  char const *lc_messages;
                      
  char *tmp___4;
  char *tmp___5;
  int tmp___6;
  char *tmp___7;
  char *tmp___8;
                    
                    
                    
                    
                    
  {
    {
                                         
                                                    
                                                                                    
      tmp___1 = gettext("%s home page: <%s>\n");
      printf((char const * /* __restrict  */)tmp___1, "GNU coreutils", "http://www.gnu.org/software/coreutils/");
      tmp___2 = gettext("General help using GNU software: <http://www.gnu.org/gethelp/>\n");
                                                                                                 
                                                                      
                            
    }
    if (lc_messages) {
      {
        tmp___6 = strncmp(lc_messages, "en_", sizeof("en_") - 1UL);
      }
      if (tmp___6) {
        {
          tmp___4 = last_component(program_name);
          tmp___5 = gettext("Report %s translation bugs to <http://translationproject.org/team/>\n");
          printf((char const * /* __restrict  */)tmp___5, tmp___4);
        }
      }
    }
    {
      tmp___7 = last_component(program_name);
      tmp___8 = gettext("For complete documentation, run: info coreutils \'%s invocation\'\n");
      printf((char const * /* __restrict  */)tmp___8, tmp___7);
    }
    return;
  }
}
__inline static void emit_try_help(void) {
  char *tmp;
                   
  {
    {
      tmp = gettext("Try \'%s --help\' for more information.\n");
      fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */)tmp, program_name);
    }
    return;
  }
}
static _Bool hard_LC_COLLATE;
static size_t skip_fields;
static size_t skip_chars;
static size_t check_chars;
static enum countmode countmode;
static _Bool output_unique;
static _Bool output_first_repeated;
static _Bool output_later_repeated;
static _Bool ignore_case;
static char const *const delimit_method_string[4] = {(char const * /* const  */) "none", (char const * /* const  */) "prepend", (char const * /* const  */) "separate", (char const * /* const  */)((void *)0)};
static enum delimit_method const delimit_method_map[3] = {(enum delimit_method const)0, (enum delimit_method const)1, (enum delimit_method const)2};
static enum delimit_method delimit_groups;
static struct option const longopts[12] =
    {{"count", 0, (int *)((void *)0), 'c'},
     {"repeated", 0, (int *)((void *)0), 'd'},
     {"all-repeated", 2, (int *)((void *)0), 'D'},
     {"ignore-case", 0, (int *)((void *)0), 'i'},
     {"unique", 0, (int *)((void *)0), 'u'},
     {"skip-fields", 1, (int *)((void *)0), 'f'},
     {"skip-chars", 1, (int *)((void *)0), 's'},
     {"check-chars", 1, (int *)((void *)0), 'w'},
     {"zero-terminated", 0, (int *)((void *)0), 'z'},
     {"help", 0, (int *)((void *)0), -130},
     {"version", 0, (int *)((void *)0), -131},
     {(char const *)((void *)0), 0, (int *)((void *)0), 0}};
                                                     
void usage(int status) {
           
  char *tmp___0;
                
                
                
                
                
                
               
                
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    if (status != 0) {
      {
        emit_try_help();
      }
    } else {
      {
                                                                  
                                                                  
                                                                                                                                                                                                                
        fputs_unlocked((char const * /* __restrict  */)tmp___0, (FILE * /* __restrict  */) stdout);
                                                                                                        
                                                                                                   
                                                                                                                                                     
                                                                                                   
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
                                                                                                   
                                                                                                  
                                                                                                   
                                                                           
                                                                                                   
                                                                                    
                                                                                                   
                                                                                                                                                        
                                                                                                   
                                                                                                                                                                                                                                                     
                                                                                                   
                              
      }
    }
    {
      exit(status);
    }
  }
}
static size_t size_opt(char const *opt, char const *msgid) {
  unsigned long size;
  strtol_error tmp;
                
  unsigned long tmp___1;
                   
  {
    {
      tmp = xstrtoul(opt, (char **)((void *)0), 10, &size, "");
    }
    {
                                   
                    
       
                                    
                    
       
                          
                           
                           
                        
                                    
     
                               
                                          
     
                  /* CIL Label */;
    }
                                       
      tmp___1 = size;
             
                                     
      
    return (tmp___1);
  }
}
static char *__attribute__((__pure__)) find_field(struct linebuffer const *line) {
  size_t count;
  char const *lp;
  size_t size;
  size_t i;
                            
                        
  unsigned short const **tmp___1;
  unsigned char tmp___2;
  size_t tmp___3;
  {
    lp = (char const *)line->buffer;
    size = (size_t)(line->length - 1UL);
    i = (size_t)0;
    count = (size_t)0;
    {
      while (1) {
                      /* CIL Label */;
        if (count < skip_fields) {
                           
                             
            
        } else {
          goto while_break;
        }
        {
                      
                              /* CIL Label */;
            if (i < size) {
              {
                                     
                                                    
               
                                                               
                                     
              }
            } else {
              goto while_break___0;
            }
            i++;
            
        while_break___0: /* CIL Label */;
        }
        {
          while (1) {
                              /* CIL Label */;
            if (i < size) {
              {
                tmp___1 = __ctype_b_loc();
                tmp___2 = to_uchar((char)*(lp + i));
              }
              if ((int const) * (*tmp___1 + (int)tmp___2) & 1) {
                goto while_break___1;
              }
            } else {
              goto while_break___1;
            }
            i++;
          }
        while_break___1: /* CIL Label */;
        }
        count++;
      }
    while_break: /* CIL Label */;
    }
    if (skip_chars < size - i) {
      tmp___3 = skip_chars;
    } else {
      tmp___3 = size - i;
    }
    i += tmp___3;
    return ((char * /* __attribute__((__pure__)) */)(line->buffer + i));
  }
}
static _Bool different(char *old, char *new, size_t oldlen, size_t newlen) {
  int tmp;
  int tmp___0;
              
  int tmp___2;
  int tmp___3;
  {
                              
                           
     
                               
                           
      
    if (ignore_case) {
      if (oldlen != newlen) {
        tmp___0 = 1;
      } else {
        {
          tmp = memcasecmp((void const *)old, (void const *)new, oldlen);
        }
        if (tmp) {
          tmp___0 = 1;
        } else {
                      
        }
      }
      return ((_Bool)tmp___0);
    } else {
      if (hard_LC_COLLATE) {
        {
                                                       
        }
                                       
      } else {
        if (oldlen != newlen) {
          tmp___3 = 1;
        } else {
          {
            tmp___2 = memcmp((void const *)old, (void const *)new, oldlen);
          }
          if (tmp___2) {
            tmp___3 = 1;
          } else {
            tmp___3 = 0;
          }
        }
        return ((_Bool)tmp___3);
      }
    }
  }
}
static void writeline(struct linebuffer const *line, _Bool match, uintmax_t linecount) {
  int tmp;
  int tmp___0;
  {
    if (linecount == 0UL) {
      tmp___0 = (int)output_unique;
    } else {
                    
        tmp = (int)output_first_repeated;
               
                                         
        
      tmp___0 = tmp;
    }
    if (!tmp___0) {
      return;
    }
    if ((unsigned int)countmode == 0U) {
      {
        printf((char const * /* __restrict  */) "%7lu ", linecount + 1UL);
      }
    }
    {
      fwrite_unlocked((void const * /* __restrict  */)line->buffer, sizeof(char), (size_t)line->length,
                      (FILE * /* __restrict  */) stdout);
    }
           
  }
}
static void check_file(char const *infile, char const *outfile, char delimiter) {
  struct linebuffer lb1;
  struct linebuffer lb2;
  struct linebuffer *thisline;
  struct linebuffer *prevline;
          
              
  FILE *tmp___1;
              
              
                
  char *prevfield;
  size_t prevlen;
  char *thisfield;
  size_t thislen;
  struct linebuffer *tmp___5;
  struct linebuffer *_tmp;
  _Bool tmp___6;
              
  char *prevfield___0;
  size_t prevlen___0;
  uintmax_t match_count;
  _Bool first_delimiter;
  struct linebuffer *tmp___8;
  _Bool match;
  char *thisfield___0;
  size_t thislen___0;
              
  struct linebuffer *tmp___10;
  _Bool tmp___11;
  int tmp___12;
  struct linebuffer *_tmp___0;
              
                 
               
               
                    
                    
                    
                    
  {
    {
                                    
    }
                           
      {
        tmp___1 = freopen_safer(infile, "r", stdin);
      }
                    
         
                                   
                                       
         
        
      
    {
                                    
    }
                          
       
                                                      
       
                     
         
                                       
                                            
         
       
     
    {
                                   
      thisline = &lb1;
      prevline = &lb2;
      initbuffer(thisline);
      initbuffer(prevline);
    }
    if (output_unique) {
      if (output_first_repeated) {
        if ((unsigned int)countmode == 1U) {
          {
            while (1) {
                            /* CIL Label */;
              {
                                               
              }
                           
                                 
                
              {
                tmp___5 = readlinebuffer_delim(thisline, stdin, delimiter);
              }
              if ((unsigned long)tmp___5 == (unsigned long)((struct linebuffer *)0)) {
                goto while_break;
              }
              {
                thisfield = (char *)find_field((struct linebuffer const *)thisline);
                thislen = (thisline->length - 1UL) - (size_t)(thisfield - thisline->buffer);
              }
              if (prevline->length == 0UL) {
                goto _L;
              } else {
                {
                  tmp___6 = different(thisfield, prevfield, thislen, prevlen);
                }
                if (tmp___6) {
                _L : {
                  fwrite_unlocked((void const * /* __restrict  */)thisline->buffer, sizeof(char),
                                  thisline->length, (FILE * /* __restrict  */) stdout);
                }
                  {
                                
                                        /* CIL Label */;
                      _tmp = prevline;
                      prevline = thisline;
                      thisline = _tmp;
                                          
                      
                                   /* CIL Label */;
                  }
                  prevfield = thisfield;
                  prevlen = thislen;
                }
              }
            }
          while_break: /* CIL Label */;
          }
        } else {
          goto _L___2;
        }
      } else {
        goto _L___2;
      }
    } else {
    _L___2 : {
      match_count = (uintmax_t)0;
      first_delimiter = (_Bool)1;
      tmp___8 = readlinebuffer_delim(prevline, stdin, delimiter);
    }
                                                                             
                        
        
      {
        prevfield___0 = (char *)find_field((struct linebuffer const *)prevline);
        prevlen___0 = (prevline->length - 1UL) - (size_t)(prevfield___0 - prevline->buffer);
      }
      {
        while (1) {
                            /* CIL Label */;
          {
                                            
          }
                        
                                 
            
          {
            tmp___10 = readlinebuffer_delim(thisline, stdin, delimiter);
          }
          if ((unsigned long)tmp___10 == (unsigned long)((struct linebuffer *)0)) {
            {
                                               
            }
                         
                              
              
            goto while_break___1;
          }
          {
            thisfield___0 = (char *)find_field((struct linebuffer const *)thisline);
            thislen___0 = (thisline->length - 1UL) - (size_t)(thisfield___0 - thisline->buffer);
            tmp___11 = different(thisfield___0, prevfield___0, thislen___0, prevlen___0);
          }
          if (tmp___11) {
            tmp___12 = 0;
          } else {
            tmp___12 = 1;
          }
          match = (_Bool)tmp___12;
          match_count += (uintmax_t)match;
                                                   
                          
           
                                                   
                         
                                
                                           
               
                    
                                       
                                                         
                   
                                                     
                   
                        
                                                           
                                           
                       
                                                         
                       
                     
                   
                 
               
             
            
          if (!match) {
            goto _L___0;
          } else {
            if (output_later_repeated) {
            _L___0 : {
              writeline((struct linebuffer const *)prevline, match, match_count);
            }
              {
                            
                                    /* CIL Label */;
                  _tmp___0 = prevline;
                  prevline = thisline;
                  thisline = _tmp___0;
                                      
                  
                               /* CIL Label */;
              }
                                            
              prevlen___0 = thislen___0;
                            
                match_count = (uintmax_t)0;
                
            }
          }
        }
      while_break___1: /* CIL Label */;
      }
      {
        writeline((struct linebuffer const *)prevline, (_Bool)0, match_count);
      }
    }
               {
                                      
  }
                  
       
                                               
                                                    
       
            
       
                                     
       
                          
         
                                                 
                                                      
         
       
     
     
                               
                               
     
           
  }
}
int main(int argc, char **argv) {
    AFL_INIT_SET0("uniq");
  int optc;
  _Bool posixly_correct;
  char *tmp;
  enum Skip_field_option_type skip_field_option_type;
  int nfiles;
  char const *file[2];
  char delimiter;
  char const *tmp___0;
  char *tmp___1;
  int tmp___2;
  int tmp___3;
  unsigned long size;
  char const *tmp___4;
  char *tmp___5;
  int tmp___6;
  int tmp___7;
  strtol_error tmp___8;
  ptrdiff_t tmp___9;
                 
                    
                    
                    
                   
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    {
              
                                      
                                                                                  
                                                              
                 
      delimiter = (char)'\n';
                   
                       
                                                  
                       
                                                             
                              
                                       
                            
                             
                              
                                         
      output_first_repeated = (_Bool)1;
      output_unique = output_first_repeated;
                                       
      countmode = (enum countmode)1;
                                              
    }
    {
      while (1) {
                      /* CIL Label */;
        if (optc == -1) {
          goto _L___2;
        } else {
          if (posixly_correct) {
            if (nfiles != 0) {
              goto _L___2;
            } else {
              goto _L___3;
            }
          } else {
          _L___3 : {
            optc = getopt_long(argc, (char *const *)argv, "-0123456789Dcdf:is:uw:z", longopts,
                               (int *)((void *)0));
          }
            if (optc == -1) {
            _L___2:
              if (argc <= optind) {
                goto while_break;
              }
              if (nfiles == 2) {
                {
                  tmp___0 = quote((char const *)*(argv + optind));
                  tmp___1 = gettext("extra operand %s");
                  error(0, 0, (char const *)tmp___1, tmp___0);
                           
                }
              }
              tmp___2 = nfiles;
              nfiles++;
                               
                       
              file[tmp___2] = (char const *)*(argv + tmp___3);
            } else {
              {
                if (optc == 1) {
                  goto case_1;
                }
                if (optc == 48) {
                  goto case_48;
                }
                if (optc == 49) {
                  goto case_48;
                }
                if (optc == 50) {
                  goto case_48;
                }
                if (optc == 51) {
                  goto case_48;
                }
                if (optc == 52) {
                               
                }
                if (optc == 53) {
                  goto case_48;
                }
                                 
                               
                 
                if (optc == 55) {
                  goto case_48;
                }
                if (optc == 56) {
                  goto case_48;
                }
                if (optc == 57) {
                  goto case_48;
                }
                if (optc == 99) {
                  goto case_99;
                }
                if (optc == 100) {
                  goto case_100;
                }
                if (optc == 68) {
                  goto case_68;
                }
                if (optc == 102) {
                  goto case_102;
                }
                if (optc == 105) {
                  goto case_105;
                }
                if (optc == 115) {
                  goto case_115;
                }
                if (optc == 117) {
                  goto case_117;
                }
                if (optc == 119) {
                  goto case_119;
                }
                if (optc == 122) {
                  goto case_122;
                }
                if (optc == -130) {
                  goto case_neg_130;
                }
                if (optc == -131) {
                  goto case_neg_131;
                }
                goto switch_default;
              case_1: /* CIL Label */
                if ((int)*(optarg + 0) == 43) {
                  {
                    tmp___7 = posix2_version();
                  }
                  if (tmp___7 < 200112) {
                    {
                      tmp___8 = xstrtoul((char const *)optarg, (char **)((void *)0), 10, &size,
                                         "");
                    }
                    if ((unsigned int)tmp___8 == 0U) {
                                                         
                                          
                              
                                    
                       
                    } else {
                      goto _L___1;
                    }
                  } else {
                    goto _L___1;
                  }
                } else {
                _L___1:
                  if (nfiles == 2) {
                    {
                      tmp___4 = quote((char const *)optarg);
                      tmp___5 = gettext("extra operand %s");
                      error(0, 0, (char const *)tmp___5, tmp___4);
                      usage(1);
                    }
                  } else {
                    tmp___6 = nfiles;
                    nfiles++;
                    file[tmp___6] = (char const *)optarg;
                  }
                }
                goto switch_break;
              case_48: /* CIL Label */
              case_49: /* CIL Label */
              case_50: /* CIL Label */
              case_51: /* CIL Label */
              case_52: /* CIL Label */
              case_53: /* CIL Label */
              case_54: /* CIL Label */
              case_55: /* CIL Label */
              case_56: /* CIL Label */
              case_57: /* CIL Label */
                if ((unsigned int)skip_field_option_type == 2U) {
                  skip_fields = (size_t)0;
                }
                                                                        
                                  
              case_99: /* CIL Label */
                countmode = (enum countmode)0;
                goto switch_break;
              case_100: /* CIL Label */
                output_unique = (_Bool)0;
                goto switch_break;
              case_68: /* CIL Label */
                output_unique = (_Bool)0;
                output_later_repeated = (_Bool)1;
                if ((unsigned long)optarg == (unsigned long)((void *)0)) {
                  delimit_groups = (enum delimit_method)0;
                } else {
                  {
                    tmp___9 = __xargmatch_internal("--all-repeated", (char const *)optarg,
                                                   delimit_method_string, (char const *)(delimit_method_map),
                                                   sizeof(delimit_method_map[0]), argmatch_die);
                    delimit_groups = (enum delimit_method)delimit_method_map[tmp___9];
                  }
                }
                goto switch_break;
              case_102 : /* CIL Label */
              {
                skip_field_option_type = (enum Skip_field_option_type)2;
                skip_fields = size_opt((char const *)optarg, "invalid number of fields to skip");
              }
                goto switch_break;
              case_105: /* CIL Label */
                ignore_case = (_Bool)1;
                goto switch_break;
              case_115 : /* CIL Label */
              {
                skip_chars = size_opt((char const *)optarg, "invalid number of bytes to skip");
              }
                goto switch_break;
              case_117: /* CIL Label */
                output_first_repeated = (_Bool)0;
                goto switch_break;
              case_119 : /* CIL Label */
              {
                check_chars = size_opt((char const *)optarg, "invalid number of bytes to compare");
              }
                goto switch_break;
              case_122: /* CIL Label */
                delimiter = (char)'\000';
                goto switch_break;
              case_neg_130 : /* CIL Label */
              {
                usage(0);
              }
                goto switch_break;
              case_neg_131 : /* CIL Label */
              {
                version_etc(stdout, "uniq", "GNU coreutils", Version, "Richard M. Stallman",
                            "David MacKenzie", (char *)((void *)0));
                exit(0);
              }
                goto switch_break;
              switch_default : /* CIL Label */
              {
                usage(1);
              }
              switch_break: /* CIL Label */;
              }
            }
          }
        }
      }
    while_break: /* CIL Label */;
    }
                                       
                                  
         
                                                                                               
                                              
                   
         
       
      
    {
      check_file(file[0], file[1], delimiter);
              
    }
  }
}
