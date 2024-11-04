#include "argv-fuzz-inl.h"
enum strtol_error {
  LONGINT_OK = 0,
  LONGINT_OVERFLOW = 1,
  LONGINT_INVALID_SUFFIX_CHAR = 2,
  LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
  LONGINT_INVALID = 4
};
typedef enum strtol_error strtol_error;
struct option {
  char const *name;
  int has_arg;
  int *flag;
  int val;
};
typedef long intmax_t;
typedef long ptrdiff_t;
typedef unsigned long size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef long __off_t;
typedef long __off64_t;
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
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
typedef int wchar_t;
union __anonunion___value_23 {
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_22 {
  int __count;
  union __anonunion___value_23 __value;
};
typedef struct __anonstruct___mbstate_t_22 __mbstate_t;
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct mbchar {
  char const *ptr;
  size_t bytes;
  _Bool wc_valid;
  wchar_t wc;
  char buf[24];
};
typedef struct mbchar mbchar_t;
struct mbiter_multi {
  char const *limit;
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbiter_multi mbi_iterator_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
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
struct quoting_options;
struct quoting_options;
struct quoting_options;
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
struct mbuiter_multi {
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbuiter_multi mbui_iterator_t;
struct __dirstream;
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef unsigned int __mode_t;
typedef __mode_t mode_t;
typedef unsigned long uintptr_t;
typedef unsigned long longword;
struct preliminary_header {
  void *next;
  int magic;
};
struct __anonstruct_magic_22 {
  char room[(((sizeof(struct preliminary_header) + 16UL) - 1UL) / 16UL) * 16UL - sizeof(int)];
  int word;
};
union header {
  void *next;
  struct __anonstruct_magic_22 magic;
};
typedef int nl_item;
struct I_ring {
  int ir_data[4];
  int ir_default_val;
  unsigned int ir_front;
  unsigned int ir_back;
  _Bool ir_empty;
};
typedef struct I_ring I_ring;
struct hash_tuning {
  float shrink_threshold;
  float shrink_factor;
  float growth_threshold;
  float growth_factor;
  _Bool is_n_buckets;
};
typedef struct hash_tuning Hash_tuning;
struct hash_table;
struct hash_table;
struct hash_table;
typedef struct hash_table Hash_table;
struct hash_entry {
  void *data;
  struct hash_entry *next;
};
struct hash_table {
  struct hash_entry *bucket;
  struct hash_entry const *bucket_limit;
  size_t n_buckets;
  size_t n_buckets_used;
  size_t n_entries;
  Hash_tuning const *tuning;
  size_t (*hasher)(void const *, size_t);
  _Bool (*comparator)(void const *, void const *);
  void (*data_freer)(void *);
  struct hash_entry *free_entry_list;
};
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __nlink_t;
struct __anonstruct___fsid_t_1 {
  int __val[2];
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
typedef long __syscall_slong_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __nlink_t nlink_t;
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
struct dirent {
  __ino_t d_ino;
  __off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
};
struct stat {
  __dev_t st_dev;
  __ino_t st_ino;
  __nlink_t st_nlink;
  __mode_t st_mode;
  __uid_t st_uid;
  __gid_t st_gid;
  int __pad0;
  __dev_t st_rdev;
  __off_t st_size;
  __blksize_t st_blksize;
  __blkcnt_t st_blocks;
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
  __syscall_slong_t __glibc_reserved[3];
};
struct _ftsent;
struct _ftsent;
struct _ftsent;
struct cycle_check_state;
struct cycle_check_state;
struct cycle_check_state;
union __anonunion_fts_cycle_19 {
  struct hash_table *ht;
  struct cycle_check_state *state;
};
struct __anonstruct_FTS_18 {
  struct _ftsent *fts_cur;
  struct _ftsent *fts_child;
  struct _ftsent **fts_array;
  dev_t fts_dev;
  char *fts_path;
  int fts_rfd;
  int fts_cwd_fd;
  size_t fts_pathlen;
  size_t fts_nitems;
  int (*fts_compar)(struct _ftsent const **, struct _ftsent const **);
  int fts_options;
  struct hash_table *fts_leaf_optimization_works_ht;
  union __anonunion_fts_cycle_19 fts_cycle;
  I_ring fts_fd_ring;
};
typedef struct __anonstruct_FTS_18 FTS;
struct _ftsent {
  struct _ftsent *fts_cycle;
  struct _ftsent *fts_parent;
  struct _ftsent *fts_link;
  DIR *fts_dirp;
  long fts_number;
  void *fts_pointer;
  char *fts_accpath;
  char *fts_path;
  int fts_errno;
  int fts_symfd;
  size_t fts_pathlen;
  FTS *fts_fts;
  ptrdiff_t fts_level;
  size_t fts_namelen;
  nlink_t fts_n_dirs_remaining;
  unsigned short fts_info;
  unsigned short fts_flags;
  unsigned short fts_instr;
  struct stat fts_statp[1];
  char fts_name[1];
};
typedef struct _ftsent FTSENT;
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
struct Active_dir {
  dev_t dev;
  ino_t ino;
  FTSENT *fts_ent;
};
struct statfs {
  __fsword_t f_type;
  __fsword_t f_bsize;
  __fsblkcnt_t f_blocks;
  __fsblkcnt_t f_bfree;
  __fsblkcnt_t f_bavail;
  __fsfilcnt_t f_files;
  __fsfilcnt_t f_ffree;
  __fsid_t f_fsid;
  __fsword_t f_namelen;
  __fsword_t f_frsize;
  __fsword_t f_flags;
  __fsword_t f_spare[4];
};
struct LCO_ent {
  dev_t st_dev;
  _Bool opt_ok;
};
typedef unsigned long __re_long_size_t;
typedef unsigned long reg_syntax_t;
struct re_dfa_t;
struct re_dfa_t;
struct re_dfa_t;
struct re_pattern_buffer {
  struct re_dfa_t *buffer;
  __re_long_size_t allocated;
  __re_long_size_t used;
  reg_syntax_t syntax;
  char *fastmap;
  unsigned char *translate;
  size_t re_nsub;
  unsigned int can_be_null : 1;
  unsigned int regs_allocated : 2;
  unsigned int fastmap_accurate : 1;
  unsigned int no_sub : 1;
  unsigned int not_bol : 1;
  unsigned int not_eol : 1;
  unsigned int newline_anchor : 1;
};
typedef struct re_pattern_buffer regex_t;
typedef int regoff_t;
struct __anonstruct_regmatch_t_29 {
  regoff_t rm_so;
  regoff_t rm_eo;
};
typedef struct __anonstruct_regmatch_t_29 regmatch_t;
struct exclude;
struct exclude;
struct exclude;
union __anonunion_v_33 {
  char const *pattern;
  regex_t re;
};
struct patopts {
  int options;
  union __anonunion_v_33 v;
};
struct exclude_pattern {
  struct patopts *exclude;
  size_t exclude_alloc;
  size_t exclude_count;
};
enum exclude_type {
  exclude_hash = 0,
  exclude_pattern = 1
};
union __anonunion_v_34 {
  Hash_table *table;
  struct exclude_pattern pat;
};
struct exclude_segment {
  struct exclude_segment *next;
  enum exclude_type type;
  int options;
  union __anonunion_v_34 v;
};
struct pattern_buffer {
  struct pattern_buffer *next;
  char *base;
};
struct exclude {
  struct exclude_segment *head;
  struct pattern_buffer *patbuf;
};
struct real_pcre;
struct real_pcre;
struct real_pcre;
typedef struct real_pcre pcre;
struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct pcre_extra {
  unsigned long flags;
  void *study_data;
  unsigned long match_limit;
  void *callout_data;
  unsigned char const *tables;
  unsigned long match_limit_recursion;
  unsigned char **mark;
  void *executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct kwsmatch {
  size_t index;
  size_t offset[1];
  size_t size[1];
};
struct kwset;
struct kwset;
struct kwset;
typedef struct kwset *kwset_t;
typedef signed char mb_len_map_t;
struct obstack;
struct obstack;
struct obstack;
struct _obstack_chunk {
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};
union __anonunion_temp_56 {
  long tempint;
  void *tempptr;
};
struct obstack {
  long chunk_size;
  struct _obstack_chunk *chunk;
  char *object_base;
  char *next_free;
  char *chunk_limit;
  union __anonunion_temp_56 temp;
  int alignment_mask;
  struct _obstack_chunk *(*chunkfun)(void *, long);
  void (*freefun)(void *, struct _obstack_chunk *);
  void *extra_arg;
  unsigned int use_extra_arg : 1;
  unsigned int maybe_empty_object : 1;
  unsigned int alloc_failed : 1;
};
struct trie;
struct trie;
struct trie;
struct tree {
  struct tree *llink;
  struct tree *rlink;
  struct trie *trie;
  unsigned char label;
  char balance;
};
struct trie {
  size_t accepting;
  struct tree *links;
  struct trie *parent;
  struct trie *next;
  struct trie *fail;
  int depth;
  int shift;
  int maxshift;
};
struct kwset {
  struct obstack obstack;
  ptrdiff_t words;
  struct trie *trie;
  int mind;
  int maxd;
  unsigned char delta[256];
  struct trie *next[256];
  char *target;
  int *shift;
  char const *trans;
  char gc1;
  char gc2;
  int gc1help;
};
enum __anonenum_dirs_58 {
  L = 0,
  R = 1
};
typedef int __re_idx_t;
typedef unsigned int __re_size_t;
struct re_registers {
  __re_size_t num_regs;
  regoff_t *start;
  regoff_t *end;
};
struct dfamust {
  _Bool exact;
  _Bool begline;
  _Bool endline;
  char *must;
  struct dfamust *next;
};
struct dfa;
struct dfa;
struct dfa;
struct patterns {
  struct re_pattern_buffer regexbuf;
  struct re_registers regs;
};
enum __anonenum_mode_60 {
  DW_NONE = 0,
  DW_POSIX = 1,
  DW_GNU = 2
};
typedef unsigned long wctype_t;
typedef unsigned int charclass_word;
typedef charclass_word charclass[8];
typedef ptrdiff_t token;
struct __anonstruct_position_35 {
  size_t index;
  unsigned int constraint;
};
typedef struct __anonstruct_position_35 position;
struct __anonstruct_position_set_36 {
  position *elems;
  size_t nelem;
  size_t alloc;
};
typedef struct __anonstruct_position_set_36 position_set;
struct __anonstruct_leaf_set_37 {
  size_t *elems;
  size_t nelem;
};
typedef struct __anonstruct_leaf_set_37 leaf_set;
struct __anonstruct_dfa_state_38 {
  size_t hash;
  position_set elems;
  unsigned char context;
  _Bool has_backref;
  _Bool has_mbcset;
  unsigned short constraint;
  token first_end;
  position_set mbps;
};
typedef struct __anonstruct_dfa_state_38 dfa_state;
typedef ptrdiff_t state_num;
struct __anonstruct_ranges_39 {
  wchar_t beg;
  wchar_t end;
};
struct mb_char_classes {
  ptrdiff_t cset;
  _Bool invert;
  wchar_t *chars;
  size_t nchars;
  wctype_t *ch_classes;
  size_t nch_classes;
  struct __anonstruct_ranges_39 *ranges;
  size_t nranges;
  char **equivs;
  size_t nequivs;
  char **coll_elems;
  size_t ncoll_elems;
};
struct dfa {
  charclass *charclasses;
  size_t cindex;
  size_t calloc;
  token *tokens;
  size_t tindex;
  size_t talloc;
  size_t depth;
  size_t nleaves;
  size_t nregexps;
  _Bool fast;
  _Bool multibyte;
  token utf8_anychar_classes[5];
  mbstate_t mbs;
  int *multibyte_prop;
  wint_t mbrtowc_cache[256];
  struct mb_char_classes *mbcsets;
  size_t nmbcsets;
  size_t mbcsets_alloc;
  struct dfa *superset;
  dfa_state *states;
  state_num sindex;
  size_t salloc;
  position_set *follows;
  _Bool searchflag;
  state_num tralloc;
  int trcount;
  state_num **trans;
  state_num **fails;
  int *success;
  state_num *newlines;
  struct dfamust *musts;
  position_set mb_follows;
  int *mb_match_lens;
};
typedef int predicate(int);
struct dfa_ctype {
  char const *name;
  predicate *func;
  _Bool single_byte_only;
};
struct __anonstruct_stkalloc_43 {
  _Bool nullable;
  size_t nfirstpos;
  size_t nlastpos;
};
enum __anonenum_status_transit_state_44 {
  TRANSIT_STATE_IN_PROGRESS = 0,
  TRANSIT_STATE_DONE = 1,
  TRANSIT_STATE_END_BUFFER = 2
};
typedef enum __anonenum_status_transit_state_44 status_transit_state;
struct must;
struct must;
struct must;
typedef struct must must;
struct must {
  char **in;
  char *left;
  char *right;
  char *is;
  _Bool begline;
  _Bool endline;
  must *prev;
};
typedef __off_t off_t;
struct color_cap {
  char const *name;
  char const **var;
  void (*fct)(void);
};
enum directories_type {
  READ_DIRECTORIES = 2,
  RECURSE_DIRECTORIES = 3,
  SKIP_DIRECTORIES = 4
};
enum __anonenum_devices_71 {
  READ_COMMAND_LINE_DEVICES = 0,
  READ_DEVICES = 1,
  SKIP_DEVICES = 2
};
enum __anonenum_binary_files_72 {
  BINARY_BINARY_FILES = 0,
  TEXT_BINARY_FILES = 1,
  WITHOUT_MATCH_BINARY_FILES = 2
};
enum __anonenum_File_type_73 {
  UNKNOWN = 0,
  DOS_BINARY = 1,
  DOS_TEXT = 2,
  UNIX_TEXT = 3
};
typedef enum __anonenum_File_type_73 File_type;
struct dos_map {
  off_t pos;
  off_t add;
};
struct matcher {
  char const name[16];
  void (*compile)(char const *, size_t);
  size_t (*execute)(char const *, size_t, size_t *, char const *);
};
extern __attribute__((__nothrow__)) unsigned short const **__ctype_b_loc(void) __attribute__((__const__));
extern __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const *__assertion,
                                                                     char const *__file,
                                                                     unsigned int __line,
                                                                     char const *__function);
extern __attribute__((__nothrow__)) int *__errno_location(void) __attribute__((__const__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) strchr)(char const *__s,
                                                                                   int __c) __attribute__((__pure__));
extern __attribute__((__nothrow__, __noreturn__)) void abort(void);
extern void error(int __status, int __errnum, char const *__format, ...);
int volatile exit_failure;
extern __attribute__((__nothrow__)) char *gettext(char const *__msgid) __attribute__((__format_arg__(1)));
extern __attribute__((__nothrow__)) intmax_t strtoimax(char const *__restrict __nptr,
                                                       char **__restrict __endptr,
                                                       int __base);
strtol_error xstrtoimax(char const *s, char **ptr, int strtol_base, intmax_t *val,
                        char const *valid_suffixes);
static strtol_error bkm_scale___1(intmax_t *x, int scale_factor) {
  {
    if (*x < (-0x7FFFFFFFFFFFFFFF - 1) / (long)scale_factor) {
      *x = (-0x7FFFFFFFFFFFFFFF - 1);
      return ((strtol_error)1);
    }
    if (9223372036854775807L / (long)scale_factor < *x) {
      *x = 9223372036854775807L;
      return ((strtol_error)1);
    }
    *x *= (intmax_t)scale_factor;
    return ((strtol_error)0);
  }
}
static strtol_error bkm_scale_by_power___1(intmax_t *x, int base, int power) {
  strtol_error err;
  strtol_error tmp;
  int tmp___0;
  {
    err = (strtol_error)0;
    {
      while (1) {
                                      
                        
        power--;
        if (!tmp___0) {
          goto while_break;
        }
        {
          tmp = bkm_scale___1(x, base);
                                                                      
        }
      }
                                     
    }
  while_break:;
    return (err);
  }
}
strtol_error xstrtoimax(char const *s, char **ptr, int strtol_base, intmax_t *val,
                        char const *valid_suffixes) {
              
           
               
                   
               
                
               
               
           
               
                        
                
                
   
                          
                           
                                 
         
                                                                                                                         
                                           
         
       
            
       
                                                                                                                       
                                         
       
     
              
              
            
                 
     
     
                                   
                   
                                                                                      
                                   
     
                                                
                           
                    
           
                                                         
           
                        
                              
                  
                                     
           
                
                                   
         
              
                                 
       
            
       
                                     
       
                          
         
                                       
         
                             
                                   
         
                              
       
     
                          
                 
                   
     
                          
       
                    
                     
                                                     
       
                     
                   
                                                        
       
       
                                              
       
                    
                                          
                        
         
                                         
                       
         
                                         
                       
         
                          
               
                                         
                        
         
                          
              
                    
                   
                          
                    
       
                             
                     
       
                             
                         
       
                             
                     
       
                             
                     
       
                             
                     
       
                              
                     
       
                              
                      
       
                             
                      
       
                             
                     
       
                              
                     
       
                             
                     
       
                             
                     
       
                              
                     
       
                              
                      
       
                             
                     
       
                             
                     
       
                          
               
                                          
     
                            
                   
                                           
     
                            
            
                                 
                            
               
                                                       
     
                            
               
                                                       
     
                            
                
                                                       
     
                            
               
                                                       
     
                            
               
                                                       
     
                            
               
                                                       
     
                            
                
                                        
     
                            
               
                                                       
     
                            
               
                                                       
     
                            
                   
                 
                                                      
                     
                                                                       
                     
                  
                                                     
       
     
               
                 
   
}
__attribute__((__noreturn__)) void xalloc_die(void);
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xnmalloc(size_t n, size_t s) {
  int tmp;
  void *tmp___0;
  {
                                              
               
            
               
     
                              
       
                     
       
     
    {
      tmp___0 = xmalloc(n * s);
    }
    return (tmp___0);
  }
}
void *xnrealloc(void *p, size_t n, size_t s) __attribute__((__alloc_size__(2, 3)));
void *xnrealloc(void *p, size_t n, size_t s) __attribute__((__alloc_size__(2, 3)));
void *xnrealloc(void *p, size_t n, size_t s) {
  int tmp;
  void *tmp___0;
  {
                                              
               
            
               
     
                              
       
                     
       
     
    {
      tmp___0 = xrealloc(p, n * s);
    }
    return (tmp___0);
  }
}
void *x2nrealloc(void *p, size_t *pn, size_t s) {
  size_t n;
  void *tmp;
  {
    n = *pn;
             
               
                      
                          
       
           {
                                          
         
                       
         
       
      n += n / 2UL + 1UL;
    }
    {
      *pn = n;
      tmp = xrealloc(p, n * s);
    }
    return (tmp);
  }
}
char *xcharalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
char *xcharalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
char *xcharalloc(size_t n) {
  void *tmp;
  void *tmp___0;
  void *tmp___1;
  {
    if (sizeof(char) == 1UL) {
      {
        tmp = xmalloc(n);
        tmp___1 = tmp;
      }
    } else {
      {
        tmp___0 = xnmalloc(n, sizeof(char));
        tmp___1 = tmp___0;
      }
    }
    return ((char *)tmp___1);
  }
}
void *xzalloc(size_t s) __attribute__((__malloc__, __alloc_size__(1)));
void *xcalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *x2realloc(void *p, size_t *pn);
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__, __alloc_size__(2)));
char *xstrdup(char const *string) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *malloc(size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *calloc(size_t __nmemb, size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__)) realloc)(void *__ptr,
                                                                                            size_t __size);
extern __attribute__((__nothrow__)) void free(void *__ptr);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2))) memcpy)(void *__restrict __dest,
                                                                                      void const *__restrict __src,
                                                                                      size_t __n);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1))) memset)(void *__s,
                                                                                   int __c,
                                                                                   size_t __n);
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1))) strlen)(char const *__s) __attribute__((__pure__));
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xmalloc(size_t n) {
  void *p;
  void *tmp;
  {
    {
      tmp = malloc(n);
      p = tmp;
    }
             
                     
         
                       
         
       
     
    return (p);
  }
}
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
void *xrealloc(void *p, size_t n) {
   
             
              
         
                  
         
                           
       
     
    {
      p = realloc(p, n);
    }
             
              
         
                       
         
       
     
    return (p);
   
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
void *xzalloc(size_t s) __attribute__((__malloc__, __alloc_size__(1)));
void *xzalloc(size_t s) {
  void *tmp;
  void *tmp___0;
  {
    {
      tmp = xmalloc(s);
      tmp___0 = memset(tmp, 0, s);
    }
    return (tmp___0);
  }
}
void *xcalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xcalloc(size_t n, size_t s) {
  void *p;
  {
    {
      p = calloc(n, s);
    }
             
       
                     
       
     
    return (p);
  }
}
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__, __alloc_size__(2)));
void *xmemdup(void const *p, size_t s) {
  void *tmp;
  void *tmp___0;
  {
    {
      tmp = xmalloc(s);
      tmp___0 = memcpy((void * /* __restrict  */)tmp, (void const * /* __restrict  */)p,
                       s);
    }
    return (tmp___0);
  }
}
char *xstrdup(char const *string) __attribute__((__malloc__));
char *xstrdup(char const *string) {
  size_t tmp;
  char *tmp___0;
  {
    {
      tmp = strlen(string);
      tmp___0 = (char *)xmemdup((void const *)string, tmp + 1UL);
    }
    return (tmp___0);
  }
}
__attribute__((__noreturn__)) void xalloc_die(void);
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
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strcmp)(char const *__s1,
                                                                                   char const *__s2) __attribute__((__pure__));
extern struct _IO_FILE *stdout;
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format, ...);
extern int printf(char const *__restrict __format, ...);
extern int fputs_unlocked(char const *__restrict __s, FILE *__restrict __stream);
                                     
void version_etc_arn(FILE *stream, char const *command_name, char const *package,
                     char const *version, char const *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors);
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc_arn(FILE *stream, char const *command_name, char const *package,
                     char const *version, char const *const *authors, size_t n_authors) {
            
                
                
                
                
                
                
                
                
                
                
  char *tmp___10;
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
                       
       
                                                                                                   
                                                
       
            
       
                                                                                              
                                  
       
     
     
                           
                                                                                                         
                         
                                                                                                                                                                                                                                           
                                                                                                                 
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                        
            
            
   
            
                                          
                                                                                                       
                            
   
                      
            
                                                 
                                                                                                       
                                            
   
                      
            
                                                      
                                                                                                       
                                                            
   
                      
            
                                                           
                                                                                                       
                                                                            
   
                      
            
                                                               
                                                                                                       
                                                                                            
   
                      
            
                                                                   
                                                                                                       
                                                                                           
                            
   
                      
            
                                                                       
                                                                                                       
                                                                                           
                                            
   
                      
            
                                                                            
                                                                                                       
                                                                                           
                                                            
   
                      
            
                                                                                
                                                                                                       
                                                                                           
                                                                            
   
    goto switch_break;
  switch_default : {
    tmp___10 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
    fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)((char const *)tmp___10),
            *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
            *(authors + 5), *(authors + 6), *(authors + 7), *(authors + 8));
  }
    goto switch_break;
  switch_break:;
    return;
  }
}
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors) {
  size_t n_authors;
  char const *authtab[10];
  char const *tmp;
  void *__cil_tmp10;
  {
    n_authors = (size_t)0;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (n_authors < 10UL) {
          {
            tmp = __builtin_va_arg(authors, char const *);
            authtab[n_authors] = tmp;
          }
          if (!((unsigned long)tmp != (unsigned long)((void *)0))) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
                    
      }
                                     
    }
  while_break : {
                                                                                           
                               
  }
    return;
  }
}
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) {
  va_list authors;
  {
    {
                                           
                                                                      
      __builtin_va_end(authors);
    }
    return;
  }
}
                                      
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                           
char *trim2(char const *s, int how);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2))) memmove)(void *__dest,
                                                                                       void const *__src,
                                                                                       size_t __n);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) strdup)(char const *__s) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void);
extern __attribute__((__nothrow__)) int mbsinit(mbstate_t const *__ps) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t mbrtowc(wchar_t *__restrict __pwc,
                                                   char const *__restrict __s,
                                                   size_t __n, mbstate_t *__restrict __p);
extern __attribute__((__nothrow__)) int iswspace(wint_t __wc);
void mb_copy(mbchar_t *new_mbc, mbchar_t const *old_mbc) {
  _Bool tmp;
  {
                                                                           
       
                                                                                                                                          
                                       
                                                        
       
            
                                                
     
                                            
                                   
    new_mbc->wc_valid = tmp;
              
                                         
     
           
  }
}
unsigned int const is_basic_table[8];
_Bool is_basic(char c) {
  {
    return ((_Bool)((is_basic_table[(int)((unsigned char)c) >> 5] >> ((int)((unsigned char)c) & 31)) & 1U));
  }
}
void mbiter_multi_next(struct mbiter_multi *iter) {
          
              
                
  {
    if (iter->next_done) {
      return;
    }
                         
                      
     
     
                                                 
     
                  
                                  
                                                 
                                    
            
       
                                                         
       
                 
         
                                                                                                         
                                                   
         
       
                                
                  
                                                                                                                            
                                                                                                                      
     
                                                    
                                    
                                      
              
                                                      
                                                                  
                                        
                
                                       
                                        
                                                        
               
                                                                                                                  
                                                         
               
             
                                       
               
                                                                                                          
                                                         
               
             
           
           
                                          
                                                                 
           
                        
                                      
           
         
       
     
                               
           
  }
}
                                     
          
                   
             
              
                 
                     
          
                 
              
              
              
              
              
          
                                 
                 
                  
                                  
                  
                    
                    
   
     
                    
     
             
       
                     
       
     
     
                                          
     
                         
                     
         
                                      
                                        
                                    
                                
                                                                
                                 
         
         
                     
                                          
                                                                    
               
                                      
               
                                   
                 
                                                       
                 
                               
                                   
                 
                      
                                 
               
                    
                               
             
                                     
                                   
           
                                         
         
                     
                                    
                                                                   
       
       
                     
         
                     
                                      
                                            
                                        
                                
                                                                
                                 
         
         
                     
                                              
                                                                    
               
                                      
               
                    
                                   
             
                              
                                   
                 
                                                       
                 
                              
                              
                 
               
             
                              
                                   
                 
                                                       
                 
                               
                             
                              
                 
                      
                           
                            
               
             
                              
                                   
                 
                                                       
                 
                               
                              
                 
                      
                            
               
             
                              
                                   
                 
                                                       
                 
                              
                             
                                        
                        
                          
                 
                      
                        
               
                    
               
                                
                                     
                   
                                                         
                   
                                 
                               
                   
                        
                             
                 
                      
                           
               
             
                 
                                     
                                   
           
                                         
         
                       
                          
                            
         
       
            
                     
              
         
                     
                                              
                     
               
                                          
               
                                                                                  
                                     
               
                    
                                   
             
                
           
                                         
         
                         
                                          
                                                           
       
       
                     
         
                                             
                                 
         
         
                     
                                              
                                                       
               
                                           
               
                                                                                   
                                     
               
                    
                                   
             
                              
                
           
                                         
         
                       
       
     
               
   
 
size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1))) memchr)(void const *__s,
                                                                                   int __c,
                                                                                   size_t __n) __attribute__((__pure__));
size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));
                                                    
                  
                  
   
     
                                                                       
                
     
                                                           
                                             
            
                      
     
   
 
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
extern int close(int __fd);
extern __attribute__((__nothrow__)) int fchdir(int __fd);
int set_cloexec_flag(int desc, _Bool value);
int open_safer(char const *file, int flags, ...);
size_t safe_read(int fd, void *buf, size_t count);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
size_t safe_read(int fd, void *buf, size_t count) {
  ssize_t result;
  ssize_t tmp;
  int *tmp___0;
  int *tmp___1;
  {
     
                {
                                     ;
        {
          tmp = read(fd, buf, count);
          result = tmp;
        }
                          {
          return ((size_t)result);
        }       
           
                                         
           
                              
                        
                  
             
                                           
             
                                 
                                         
                                           
                      
                                        
               
                    
                                      
             
           
         
              
      }
                                ;
     
                 
  }
}
                                        
                                               
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);
char *quotearg_colon(char const *arg);
struct quoting_options quote_quoting_options;
char const *quote_n_mem(int n, char const *arg, size_t argsize);
char const *quote_n(int n, char const *arg);
char const *quote(char const *arg);
char const *locale_charset(void);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) memcmp)(void const *__s1,
                                                                                   void const *__s2,
                                                                                   size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int iswprint(wint_t __wc);
                                         
                                                                                                                                                             
                                                                                                                                                              
                                                   
                                                
                                                                                                                        
                                                                                                                         
static struct quoting_options default_quoting_options;
                                                                
                   
                  
                              
            
        
   
                          
            
              
            
                                     
     
                                                                       
                                                           
                                  
                                                 
               
   
 
                                                                                    
                           
                   
                   
   
                                    
                
                              
             
     
                 
                                      
                              
                           
         
                                    
              
       
                                     
     
              
                                             
                                              
                                    
       
                
       
     
                    
               
   
 
                                                                           
                          
                  
                          
                      
              
                      
              
                      
                    
                    
                    
                    
                    
                    
                    
                    
   
     
                                         
                        
     
                                                             
                           
     
     
                                     
                                                   
     
                       
                                            
                                 
              
                                 
       
                       
     
     
                                                     
     
                       
                                            
                            
              
                             
       
                       
     
                                
                     
            
                     
     
                     
   
 
static size_t quotearg_buffer_restyled(char *buffer___0, size_t buffersize, char const *arg,
                                       size_t argsize, enum quoting_style quoting_style,
                                       int flags, unsigned int const *quote_these_too,
                                       char const *left_quote, char const *right_quote) {
  size_t i;
             
  char const *quote_string;
  size_t quote_string_len;
                          
                       
             
                           
                  
                    
                       
                 
              
              
           
                  
                                 
                    
  wchar_t w;
               
  size_t tmp___4;
  size_t j;
  int tmp___5;
              
              
              
                 
                    
  char *__cil_tmp43;
  char *__cil_tmp44;
  char *__cil_tmp45;
                    
  {
     
                      
                                     
                                   
                                   
                                     
                                           
                                                     
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                        
         
                                          
                                  
         
                              
       
                   
                                        
                                 
                                             
           
                
                           
         
                                        
       
                 
     
                                 
                        
                                 
                      
         
                                 
                                  
                      
         
                                            
       
                                                       
                                                         
       
     
                              
                                
       
                   
                                            
                               
                                 
           
           
                       
                                                
                                     
                                                          
               
                    
                                   
             
                                            
           
                        
                         
         
                                        
       
                     
     
     
                                   
                                 
                                              
     
                      
         
                                          
                                  
         
                              
       
                   
                                            
                                 
                                             
           
                
                               
         
                                        
       
                     
     
                        
                                 
                      
         
                                  
                      
  switch_default : {
    abort();
  }
               
    i = (size_t)0;
     
                 
                                          
                                              
                                                 
                
                                 
         
                      
                               
         
                                  
                                
                                 
                                                  
                                           
                 
                                        
                                    
                 
                      
                                  
               
                    
                                
             
                                                  
               
                                                                                     
                                                   
               
                                 
                                         
                                                 
                 
                                          
               
             
           
         
                                      
                          
                          
         
                           
                       
         
                          
                          
         
                          
                          
         
                           
                       
         
                           
                       
         
                           
                       
         
                          
                      
         
                           
                       
         
                           
                       
         
                            
                        
         
                            
                        
         
                           
                       
         
                            
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                            
                       
         
                           
                           
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                           
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                            
                       
         
                                
                 
                                
                                   
                                           
           
           
                       
                                                
                                     
                                                 
               
                    
                                   
             
                                            
           
                         
                                  
                                                
                                                          
                 
                             
                                                      
                                           
                                                      
                     
                          
                                         
                   
                                                  
                 
                               
                 
                             
                                                      
                                           
                                                      
                     
                          
                                         
                   
                                                  
                 
                               
               
             
           
                                 
                
                          
                        
           
         
                              
              
                                                
                          
         
                                                
                          
         
                                
                 
                                 
                                         
         
                              
                 
                        
                                  
                                                        
                                                          
                             
               
                                                          
                             
               
                                                          
                             
               
                                                          
                             
               
                                                          
                             
               
                                                          
                             
               
                                                          
                             
               
                                                          
                             
               
                                                          
                             
               
                                      
                    
                                       
                                               
               
                                                    
                       
               
                           
                                                    
                                         
                                                    
                   
                        
                                       
                 
                                                
               
                             
               
                           
                                                    
                                         
                                                     
                   
                        
                                       
                 
                                                
               
                             
               
                           
                                                    
                                         
                                                     
                   
                        
                                       
                 
                                                
               
                             
               
                           
                                                     
                                         
                                                    
                   
                        
                                        
                 
                                                
               
                              
                                    
                               
                                    
                              
             
           
         
                              
                         
                              
                        
                              
                 
                                 
                      
                 
                                 
                      
              
                                 
                      
              
                                 
                                
              
                                 
                                
             
                                 
                                
              
                                 
                      
              
                
                                
                                   
                                   
                           
             
           
         
                         
                                                
                                   
                                           
           
         
               
                                
                  
                            
         
                              
               
                                              
                                                 
                
                                   
         
                       
                                
         
              
                       
                                
         
              
                                                
                                   
                                           
           
         
                              
                  
                                                
                                   
                                           
           
           
                       
                                                 
                                     
                                                 
               
                    
                                    
             
                                            
           
                          
           
                       
                                                 
                                     
                                                 
               
                    
                                    
             
                                            
           
                          
           
                       
                                                 
                                     
                                                 
               
                    
                                    
             
                                            
           
                          
         
                              
              
                              
                         
                              
           
                          
                                      
                                                                                  
           
                
           
                                                           
                          
                                 
           
                                                
             
                                    
             
           
           
                       
                                                 
               
                                                                                                                     
                                                                                                
                                
               
                                 
                                      
                      
                                                    
                                       
                                        
                        
                                                      
                                         
                     
                                 
                                                           
                                              
                                                  
                                                  
                           
                                
                                                
                         
                            
                       
                                                      
                     
                                    
                                          
                          
                                             
                                                              
                                      
                         
                                     
                                                               
                                               
                                                    
                             
                                                                            
                                               
                             
                                                                            
                                               
                             
                                                                            
                                               
                             
                                                                            
                                               
                             
                                                                             
                                               
                             
                                                    
                                      
                                                           
                                             
                                                  
                                           
                                
                           
                                                          
                         
                                        
                       
                     
                     
                                                    
                     
                                   
                                           
                     
                               
                   
                 
               
               
                                                                 
               
                            
                                      
               
             
                                            
           
                          
         
                      
                      
                
                                  
                             
                   
                            
               
                           
                                                     
                                          
                                     
                                               
                                                       
                       
                       
                                   
                                                             
                                                 
                                                             
                           
                                
                                                
                         
                                                        
                       
                                      
                       
                                   
                                                             
                                                 
                                                                             
                           
                                
                                                
                         
                                                        
                       
                                      
                       
                                   
                                                             
                                                 
                                                                                   
                           
                                
                                                
                         
                                                        
                       
                                     
                                                             
                            
                              
                     
                          
                     
                                         
                       
                                   
                                                             
                                                 
                                                             
                           
                                
                                                
                         
                                                        
                       
                                     
                                                
                     
                   
                                        
                                          
                   
                   
                               
                                                         
                                             
                                                      
                       
                            
                                            
                     
                                                    
                   
                                 
                       
                                                
                 
                                                
               
                              
                           
             
           
         
                        
                                
                      
                
                                   
                 
                                  
                                                                                                                                    
                            
               
                    
                          
             
                  
                 
                                  
                           
             
           
         
                   
                                 
                                         
         
         
                     
                                               
                                   
                                               
             
                  
                                  
           
                                          
         
                        
                  
                   
                                             
                                 
                                          
           
                
                                
         
                                        
       
                        
             
            
       
                                      
     
                   
                     
                                              
                                 
                                         
         
       
     
                       
                                
         
                     
                                               
                                 
                                    
             
             
                         
                                                   
                                       
                                                            
                 
                      
                                      
               
                                              
             
                           
                           
           
                                          
         
                        
       
     
                           
                                         
     
                 
                                
                                                                                           
                                                                                     
                                                                
   
                     
  }
}
static char slot0[256];
                                
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
                                           
static char *quotearg_n_options(int n, char const *arg, size_t argsize, struct quoting_options const *options) {
        
           
                  
  struct slotvec *sv;
            
                     
              
                          
  size_t size;
  char *val;
  int flags;
  size_t qsize;
                 
               
  {
     
                               
               
                           
                   
     
                
       
                
       
     
                       
                             
                                                                              
                                                
                     
              
                     
       
                                               
         
                       
         
       
                         
                                                
              
                     
       
       
                                                                           
                     
       
                         
                       
       
       
                                                                              
                                  
       
     
     
                            
                          
                                        
                                                                                                     
                                                                                                 
                                                                                                                
                      
     
    if (size <= qsize) {
      size = qsize + 1UL;
      (sv + n)->size = size;
      if ((unsigned long)val != (unsigned long)(slot0)) {
         
                            
         
      }
      {
        val = xcharalloc(size);
        (sv + n)->val = val;
        quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style)options->style,
                                 flags, (unsigned int const *)(options->quote_these_too),
                                 (char const *)options->left_quote, (char const *)options->right_quote);
      }
    }
     
                                   
                   
     
                 
  }
}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {
                           
                             
                
                   
                    
   
     
                                          
              
                                                                                             
     
                     
   
}
char *quotearg_char_mem(char const *arg, size_t argsize, char ch) {
                                 
            
                   
   
     
                                        
                                        
                                                                                            
     
                 
   
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
char const *quote_n_mem(int n,
                        char const *arg, size_t argsize) {
  char const *tmp;
  {
    {
      tmp = (char const *)quotearg_n_options(n, arg, argsize, (struct quoting_options const *)(&quote_quoting_options));
    }
    return (tmp);
  }
}
char const *quote_n(int n, char const *arg) {
  char const *tmp;
  {
    {
      tmp = quote_n_mem(n, arg, (size_t)-1);
    }
    return (tmp);
  }
}
char const *quote(char const *arg) {
  char const *tmp;
  {
    {
      tmp = quote_n(0, arg);
    }
    return (tmp);
  }
}
char const *proper_name(char const *name);
extern __attribute__((__nothrow__)) int sprintf(char *__restrict __s, char const *__restrict __format, ...);
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int iswalnum(wint_t __wc);
void mbuiter_multi_next(struct mbuiter_multi *iter) {
          
                 
                 
              
                
  {
    if (iter->next_done) {
      return;
    }
                         
                      
     
     
                                                 
     
                  
                                  
                                                 
                                    
            
       
                                                         
       
                 
         
                                                                                                          
                                                    
         
       
                                
                  
                                         
                                                 
                                                                                                                            
                                                                                        
     
                                                    
                                    
                                      
              
                                                      
           
                                                    
                                          
           
                
                                       
                                        
                                                        
               
                                                                                                                   
                                                          
               
             
                                       
               
                                                                                                           
                                                          
               
             
           
           
                                          
                                                                 
           
                        
                                      
           
         
       
     
                               
           
  }
}
                                                                              
             
            
              
                             
                      
                              
                             
                            
                                 
              
              
                            
              
              
                                 
              
              
              
                                 
                
                                
                                 
                 
                                  
                  
                    
                    
                    
                    
                    
                    
   
     
                          
                 
                       
     
     
                 
                                      
                                           
                           
         
         
                                                                     
                                   
         
                                                                          
                           
                
           
                                                
           
                               
             
                                           
                                              
                                                                              
                                               
                                              
             
                                                                                     
               
                           
                                                    
                   
                                                     
                   
                                                 
                                                  
                                  
                            
                                  
                     
                          
                                
                   
                                 
                     
                              
                     
                   
                                                          
                                                               
                                                   
                                                                                              
                                         
                   
                 
                                               
               
                             
                                                   
                 
                                                                       
                 
                              
                                                  
                 
               
             
             
                                                   
                                              
                                                                              
                                               
                                                     
                                            
                                                                            
                                             
             
             
                         
                                                  
                 
                                                 
                 
                                             
                                              
                                
                          
                                
                   
                        
                              
                 
                               
                                       
                 
                 
                                                   
                 
                                               
                                                
                                
                          
                                
                   
                        
                              
                 
                               
                   
                            
                   
                 
                                                             
                                                 
                                                         
                                               
               
                                             
             
                             
                                           
                                             
           
                                           
                                            
                            
                      
                            
               
                    
                          
             
                          
                                                      
                                                   
                 
                                                                       
                 
                              
                                                 
                 
               
             
                                       
                                        
                                 
                                 
               
             
             
                                                   
                                              
                                                                              
                                               
                                               
             
                                           
                                            
                            
                      
                            
               
                    
                          
             
                           
                               
             
                                                            
                  
                                                
                                                                        
               
                                          
               
                                                                                                
                                                    
               
             
             
                                                   
                                           
                                                 
             
                                       
               
                                           
               
                                                                             
                                                   
               
             
                                           
                                            
                                 
                                 
               
             
                                                    
                               
             
                                        
           
         
       
                                     
     
                 
                       
   
                   
   
 
                                           
                          
                  
               
                 
                 
                
                 
                 
                
                
                
                    
   
     
                                        
                        
     
                                                            
       
                                                                
       
                    
                             
                
                                  
           
                                          
                                   
                                                                         
                              
           
                
           
                                          
                                   
                                                                                        
                              
           
         
         
                                   
                                                                                               
                                     
         
                                      
       
            
                    
     
   
 
                         
void set_program_name(char const *argv0);
extern char *program_invocation_name;
                                           
extern struct _IO_FILE *stderr;
extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strncmp)(char const *__s1,
                                                                                    char const *__s2,
                                                                                    size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) strrchr)(char const *__s,
                                                                                    int __c) __attribute__((__pure__));
char const *program_name = (char const *)((void *)0);
void set_program_name(char const *argv0) {
  char const *slash;
                   
          
              
  {
                                                             
       
                                                                                                          
                                                 
                
       
     
    {
      slash = (char const *)strrchr(argv0, '/');
    }
                                                             
                       
            
                   
     
                             
       
                                                          
       
                         
         
                       
                                                
         
                       
                           
                                                        
         
       
     
                         
    program_invocation_name = (char *)argv0;
    return;
  }
}
int fd_safer(int fd);
extern DIR *fdopendir(int __fd);
extern int(__attribute__((__nonnull__(1))) closedir)(DIR *__dirp);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1))) dirfd)(DIR *__dirp);
int dup_safer(int fd);
int openat_safer(int fd, char const *file, int flags, ...);
extern int(__attribute__((__nonnull__(2))) openat)(int __fd, char const *__file,
                                                   int __oflag, ...);
int openat_safer(int fd, char const *file, int flags, ...) {
  mode_t mode___0;
  va_list ap;
  int tmp;
  int tmp___0;
  {
    mode___0 = (mode_t)0;
                     
       
                                      
                                                
                             
       
     
    {
      tmp = openat(fd, file, flags, mode___0);
      tmp___0 = fd_safer(tmp);
    }
    return (tmp___0);
  }
}
extern int(__attribute__((__nonnull__(1))) open)(char const *__file, int __oflag, ...);
int open_safer(char const *file, int flags, ...) {
  mode_t mode___0;
  va_list ap;
  int tmp;
  int tmp___0;
  {
    mode___0 = (mode_t)0;
    if (flags & 64) {
      {
        __builtin_va_start(ap, flags);
        mode___0 = __builtin_va_arg(ap, mode_t);
        __builtin_va_end(ap);
      }
    }
    {
      tmp = open(file, flags, mode___0);
      tmp___0 = fd_safer(tmp);
    }
                     
  }
}
void *memchr2(void const *s, int c1_in, int c2_in, size_t n) __attribute__((__pure__));
void *memchr2(void const *s, int c1_in, int c2_in, size_t n) __attribute__((__pure__));
                                                              
                                
                       
                               
                        
                       
                       
                   
                   
            
           
                     
                     
   
                              
                              
                             
       
                                    
       
                   
     
                 
     
                 
                                      
                      
                                                                 
                             
           
                
                           
         
                                                   
                                                      
                                    
                
                                                        
                                      
           
         
                                                
            
       
                                     
     
              
                                                
                                      
                                                       
                                                       
                                     
                                     
                                              
                                            
                                            
                                 
                     
       
                   
                                            
                                              
                                 
           
                                            
                                          
                                          
                   
         
                                       
       
                     
     
     
                 
                                          
                                       
                               
         
                                                                                 
                                                                                 
                                                                                                                                     
                               
         
                       
                              
       
                                     
     
                  
                                                     
     
                 
                                          
                         
                               
         
                                                      
                                    
                
                                                        
                                      
           
         
            
                   
       
                                     
     
                   
                       
   
 
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1))) strnlen)(char const *__string,
                                                                                    size_t __maxlen) __attribute__((__pure__));
size_t(__attribute__((__nonnull__(1))) mbslen)(char const *string) __attribute__((__pure__));
void *mmalloca(size_t n);
void freea(void *p);
static _Bool knuth_morris_pratt(unsigned char const *haystack, unsigned char const *needle,
                                size_t needle_len, unsigned char const **resultp) {
           
                
                
                
                
                
              
           
           
                  
               
                                 
                                 
   
                   
                                              
                   
            
                   
     
                                               
                          
            
                                        
         
                                                                
                                                   
         
              
         
                                                 
                            
         
       
                        
     
                              
                                                             
                        
     
                             
                  
                  
     
                 
                                      
                       
                           
         
                                                 
         
                     
                                              
                                               
                  
                                   
                                   
             
                           
                               
                                   
             
                              
           
                                         
         
                      
            
       
                                     
     
              
                                                  
                      
                         
                         
     
                 
                                          
                                              
                               
         
                                                                        
                  
                      
                           
                                 
                                 
           
                
                            
                                          
                                      
                  
                        
                        
           
         
       
                                     
     
                     
                         
   
                      
   
}
static _Bool knuth_morris_pratt_multibyte(char const *haystack, char const *needle,
                                          char const **resultp) {
           
             
                           
                
               
                
                
                
                
              
                     
                       
           
              
           
               
              
              
              
              
               
                            
                            
               
               
               
               
               
               
               
                    
                    
                    
                    
                    
                    
   
     
                           
              
     
                                              
                   
            
                   
     
                                                                    
                          
            
                                                             
         
                                                                                     
                                                   
         
              
         
                                                                      
                            
         
       
                        
     
                     
                                                              
                        
     
     
                                          
                                                  
                                     
                    
                            
                               
                                                               
                                
     
     
                 
                                      
         
                                    
         
                                
                                 
                        
                  
                        
           
                
                      
         
                       
                           
         
         
                                                                     
                                         
                                    
              
         
       
                                     
     
              
                             
                      
                  
     
                 
                                          
                       
                               
         
                                       
         
                     
                                              
                              
                                                       
                                                                
                      
                        
               
                    
               
                                                                
                 
                                                                                                     
                                             
                 
                                   
                              
                        
                              
                 
                      
                            
               
                                
             
                          
                      
                                       
                                   
             
                               
                               
                                   
             
                                      
           
                                         
         
                      
            
       
                                     
     
                     
                                         
                      
                                 
                                  
                                                                  
                                   
                                 
                                  
                                                                  
                                   
   
     
                 
                                          
         
                                         
         
                                     
                                      
                         
                  
                         
           
                
                       
         
                        
                               
         
                                                 
                                       
                                                                        
                  
                        
           
                
               
                                                                       
             
                                                                                                             
                                                                 
             
                                
                           
                    
                           
             
                  
                         
           
                              
         
                       
                  
                                                   
                                         
                           
                                         
                                 
           
                
                            
                                     
                           
             
                         
                                                  
                                     
                                       
                 
                 
                                                 
                 
                                             
                                              
                                 
                          
                                 
                   
                        
                               
                 
                                
                   
                            
                   
                 
                                                         
                                               
                        
               
                                             
             
                           
                  
             
                                             
             
                                         
                                          
                             
                      
                             
               
                    
                           
             
                            
               
                        
               
             
                                                     
                                           
                                                     
                                           
           
         
       
                                     
     
                     
                  
   
                      
   
}
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle) __attribute__((__pure__));
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle) {
                              
                
                          
                          
                     
                                          
  mbui_iterator_t iter_haystack;
          
               
              
                     
                
                
              
                            
                          
              
              
              
              
              
              
              
               
               
  int tmp___12;
                    
  size_t outer_loop_count___0;
  size_t comparison_count___0;
                         
  char const *needle_last_ccount;
  char b;
  char const *tmp___13;
                  
                                  
                    
                  
                 
                            
                          
  size_t tmp___17;
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    {
                                          
    }
    if (tmp___17 > 1UL) {
       
                                     
                                        
                                                                        
                                         
                                         
       
                                     
                                      
                       
                
                       
         
              
                     
       
      if (tmp___12) {
         
                             
                                       
                                       
                                  
                                                   
                                                      
                                                                                      
                                                       
                                           
                                            
                                                                            
                                             
         
        {
          while (1) {
                                          
            {
              mbuiter_multi_next(&iter_haystack);
            }
                                             
                                              
                        
                      
                        
               
                    
                      
             
                       
                                           
             
                          
                                             
                                                                 
                                                         
                   
                               
                                                        
                                        
                         
                                                                       
                         
                                                                   
                                                                    
                                        
                                  
                                        
                           
                                
                                      
                         
                                       
                                               
                         
                              
                                             
                       
                                                                                           
                                                                   
                              
                     
                                                   
                   
                                   
                                                 
                                                               
                 
                                                             
                                                              
                                  
                            
                                  
                     
                          
                                
                   
                                 
                     
                                                                                        
                                        
                     
                                  
                                              
                     
                                       
                   
                 
               
             
                               
                               
                                             
                                             
                                                                      
                      
                            
               
                    
                   
                                                                     
                 
                                                                                                          
                                                            
                 
                                   
                               
                        
                               
                 
                      
                             
               
                                  
             
                           
               
                                                                                                                                          
                                                
                                                         
                                               
                                         
                                            
                                                                            
                                             
                                             
               
                                         
                                          
                              
                        
                              
                 
                      
                            
               
                             
                 
                          
                 
               
                                                   
                                           
               
                           
                                                    
                   
                                                 
                   
                                             
                                              
                                  
                            
                                  
                     
                          
                                
                   
                                 
                                                           
                   
                   
                                                   
                   
                                               
                                                
                                  
                            
                                  
                     
                          
                                
                   
                                 
                                                 
                   
                                     
                                               
                                               
                                                                   
                            
                              
                     
                          
                     
                                                                   
                       
                                                                                                        
                                                              
                       
                                         
                                    
                              
                                    
                       
                            
                                  
                     
                                      
                   
                                 
                                         
                   
                                                           
                                                 
                                                       
                                               
                 
                                               
               
                             
             
                                                             
                                               
          }
                                     
        }
      } else {
                                  
      }
    } else {
      if ((int const) * needle != 0) {
                               
        outer_loop_count___0 = (size_t)0;
        comparison_count___0 = (size_t)0;
                                    
        needle_last_ccount = needle;
        tmp___13 = needle;
        needle++;
        b = (char)*tmp___13;
         
                     
                                              
                                              
                                           
             
                              
                                                 
                                                                         
                                                                                        
                     
                                                                                                     
                                                     
                     
                                                                
                                                                     
                     
                                                           
                   
                                                                                        
                     
                                                    
                                                                                                                         
                                                                           
                                             
                     
                                      
                                                  
                     
                                           
                   
                 
               
             
                                   
                                   
                                                         
                                           
                                   
               
                           
                                                    
                                                       
                                              
                   
                                                         
                                                 
                   
                                         
                                                                                 
                                         
                   
                                  
                                
                 
                                               
               
                             
             
                       
           
                                         
         
      } else {
        return ((char *)haystack);
      }
    }
    return ((char *)0);
  }
}
size_t(__attribute__((__nonnull__(1))) mbslen)(char const *string) __attribute__((__pure__));
size_t(__attribute__((__nonnull__(1))) mbslen)(char const *string) {
  size_t count;
  mbui_iterator_t iter;
          
  size_t tmp___0;
  size_t tmp___1;
                   
                    
  {
    {
      tmp___1 = __ctype_get_mb_cur_max();
    }
    if (tmp___1 > 1UL) {
      {
        count = (size_t)0;
        iter.cur.ptr = string;
                                 
                                                                 
                                  
      }
      {
                   
                                        
           
                                      
           
                                  
                                   
                      
                    
                      
             
                  
                    
           
                     
                             
           
                  
                                         
                                    
         
                                       
      }
                 
      return (count);
    } else {
      {
                                 
      }
      return (tmp___0);
    }
  }
}
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int tolower(int __c);
extern __attribute__((__nothrow__)) wint_t towlower(wint_t __wc);
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2) __attribute__((__pure__));
                                                                                    
                        
                        
          
             
                 
              
              
              
              
              
              
              
               
               
               
               
               
               
               
                          
                          
                   
                   
               
                                  
               
                                  
                  
                    
                    
                    
                    
   
                                                 
                 
     
     
                                          
     
                         
       
                           
                                  
                                                                  
                                   
                           
                                  
                                                                  
                                   
       
       
                   
                                        
           
                                       
           
                                   
                                    
                           
                    
                           
             
                  
                         
           
                         
             
                                         
             
                                     
                                      
                             
                      
                             
               
                    
                           
             
                            
                               
             
                  
                             
           
                                   
                                     
               
                                                     
                                                         
                                                  
               
                    
                           
             
                               
                  
                                     
                           
                    
                                                       
                 
                                                                                            
                                                    
                                     
                 
                      
                                                        
                   
                                                                                              
                                                      
                   
                                    
                                
                          
                                 
                   
                                    
                        
                   
                                                                                              
                                                      
                   
                                     
                                
                          
                                 
                   
                                    
                 
                                   
               
                                  
             
                                
           
                         
                         
                         
           
                                           
                                     
                                           
                                     
         
                                       
       
                   
                                 
     
                               
                                
                       
                
                       
         
              
                     
       
                     
                   
       
       
                                   
       
                               
                                
                       
                
                       
         
              
                     
       
                     
                    
       
                 
            
                                     
                                     
       
                   
                                            
           
                                       
           
                                                           
             
                                           
                                           
             
                  
                                    
           
           
                                       
           
                                                           
             
                                           
                                           
             
                  
                                    
           
                             
                                 
           
               
               
                                      
                                 
           
         
                                       
       
                     
                                 
     
   
 
                                                                                                                                                                    
static void *mmalloca_results[257];
void *mmalloca(size_t n) {
               
          
            
              
                  
  {
                                                                                   
                     
       
                            
                
       
                                                           
                              
                            
                                  
                                    
                                         
                                   
                   
       
     
    return ((void *)0);
  }
}
void freea(void *p) {
              
               
                  
                        
  {
                                                         
                                          
                                    
                                        
         
                     
                                          
                                                                         
                               
             
                                  
                                                            
               
                                
                                       
                                      
               
                     
             
                                       
                                    
           
                                         
         
                   
       
     
           
  }
}
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
extern int fclose(FILE *__stream);
extern __attribute__((__nothrow__)) FILE *fdopen(int __fd, char const *__modes);
extern int fscanf(FILE *__restrict __stream, char const *__restrict __format, ...);
extern int getc_unlocked(FILE *__stream);
extern int ungetc(int __c, FILE *__stream);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2))) strcpy)(char *__restrict __dest,
                                                                                      char const *__restrict __src);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) getenv)(char const *__name);
extern __attribute__((__nothrow__)) char *nl_langinfo(nl_item __item);
static char const *volatile charset_aliases;
static char const *get_charset_aliases(void) {
  char const *cp;
                  
                   
  char *file_name___1;
                     
             
                      
                 
                
              
  int fd;
  FILE *fp;
  char *res_ptr;
  size_t res_size;
        
  char buf1[51];
  char buf2[51];
  size_t l1;
  size_t l2;
                    
              
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    cp = (char const *)charset_aliases;
    if ((unsigned long)cp == (unsigned long)((void *)0)) {
       
                               
                                                      
       
                                                             
                               
              
                                           
                                 
         
       
       
                          
                          
                               
                               
       
                              
                                                                 
                      
                 
                      
         
              
                    
       
       
                            
                                                                                                 
       
                                                                       
         
                                                                                                                        
                              
         
                        
                                                     
         
         
                                                                                                 
                                                                                           
         
       
      if ((unsigned long)file_name___1 == (unsigned long)((void *)0)) {
        cp = "";
      } else {
        {
          fd = open((char const *)file_name___1, 131072);
        }
        if (fd < 0) {
          cp = "";
        } else {
          {
            fp = fdopen(fd, "r");
          }
          if ((unsigned long)fp == (unsigned long)((void *)0)) {
             
                        
                      
             
          } else {
            res_ptr = (char *)((void *)0);
            res_size = (size_t)0;
            {
              while (1) {
                                              
                 
                                        
                 
                              
                                   
                 
                              
                              
                        
                                
                                
                          
                                 
                                  
                     
                   
                 
                              
                   
                               
                                                        
                       
                                              
                       
                                    
                                             
                              
                                      
                                               
                         
                       
                     
                                                   
                   
                                 
                                
                                     
                   
                              
                 
                 
                                
                                                                                                               
                                               
                 
                                  
                                   
                 
                 
                                                    
                                                    
                                        
                 
                                      
                   
                                                       
                                                             
                   
                        
                   
                                                        
                                                                               
                   
                 
                                                                           
                   
                                         
                                              
                   
                                   
                 
                {
                  strcpy((char * /* __restrict  */)(((res_ptr + res_size) - (l2 + 1UL)) - (l1 + 1UL)),
                         (char const * /* __restrict  */)((char const *)(buf1)));
                  strcpy((char * /* __restrict  */)((res_ptr + res_size) - (l2 + 1UL)), (char const * /* __restrict  */)((char const *)(buf2)));
                }
                      
              }
            while_break___1: /* CIL Label */;
            }
          while_break : {
                       
          }
            if (res_size == 0UL) {
              cp = "";
            } else {
              *(res_ptr + res_size) = (char)'\000';
              cp = (char const *)res_ptr;
            }
          }
        }
         
                                      
         
      }
      charset_aliases = (char const * /* volatile  */)cp;
    }
    return (cp);
  }
}
char const *locale_charset(void) {
                      
  char const *aliases;
             
                 
                 
              
                    
                    
  {
     
                                              
     
                                                               
                   
     
    {
      aliases = get_charset_aliases();
    }
     
                 
                                      
                                            
                           
         
         
                                             
         
                           
           
                                      
                                              
           
                           
                
                                                  
                                                   
               
                                          
                                                  
               
                               
             
           
         
         
                                
                               
                                    
                                   
         
       
                                     
     
               
                                           
                        
     
                     
  }
}
void i_ring_init(I_ring *ir, int default_val);
int i_ring_push(I_ring *ir, int val);
int i_ring_pop(I_ring *ir);
_Bool i_ring_empty(I_ring const *ir) __attribute__((__pure__));
void i_ring_init(I_ring *ir, int default_val) {
  int i;
  {
    ir->ir_empty = (_Bool)1;
    ir->ir_front = 0U;
    ir->ir_back = 0U;
    i = 0;
    {
      while (1) {
                                      
        if (!(i < 4)) {
          goto while_break;
        }
                                     
            
      }
                                     
    }
  while_break:
    ir->ir_default_val = default_val;
    return;
  }
}
_Bool i_ring_empty(I_ring const *ir) __attribute__((__pure__));
_Bool i_ring_empty(I_ring const *ir) {
  {
    return ((_Bool)ir->ir_empty);
  }
}
                                      
                        
              
   
                                                                   
                                    
                                
                            
                                  
                                                                       
     
                            
                     
   
 
int i_ring_pop(I_ring *ir) {
  int top_val;
            
  {
     
                                             
     
              
       
                
       
     
                                        
    ir->ir_data[ir->ir_front] = ir->ir_default_val;
    if (ir->ir_front == ir->ir_back) {
      ir->ir_empty = (_Bool)1;
    } else {
      ir->ir_front = ((ir->ir_front + 4U) - 1U) % 4U;
    }
    return (top_val);
  }
}
void *hash_lookup(Hash_table const *table, void const *entry);
size_t hash_string(char const *string, size_t n_buckets) __attribute__((__pure__));
Hash_table *(__attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate,
                                                                      Hash_tuning const *tuning,
                                                                      size_t (*hasher)(void const *,
                                                                                       size_t),
                                                                      _Bool (*comparator)(void const *,
                                                                                          void const *),
                                                                      void (*data_freer)(void *));
void hash_free(Hash_table *table);
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table, size_t candidate);
void *(__attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table, void const *entry);
int hash_insert_if_absent(Hash_table *table, void const *entry, void const **matched_ent);
void *hash_delete(Hash_table *table, void const *entry);
size_t rotr_sz(size_t x, int n) {
  {
    return (((x >> n) | (x << (8UL * sizeof(x) - (unsigned long)n))) & 0xffffffffffffffffUL);
  }
}
static struct hash_tuning const default_tuning = {0.0f, 1.0f, 0.8f, 1.414f, (_Bool)0};
static struct hash_entry *safe_hasher(Hash_table const *table, void const *key) {
  size_t n;
  size_t tmp;
  {
    {
      tmp = (*(table->hasher))(key, (size_t)table->n_buckets);
      n = tmp;
    }
    if (!(n < (size_t)table->n_buckets)) {
      {
        abort();
      }
    }
    return ((struct hash_entry *)(table->bucket + n));
  }
}
void *hash_lookup(Hash_table const *table, void const *entry) {
  struct hash_entry const *bucket;
  struct hash_entry const *tmp;
  struct hash_entry const *cursor;
                
  {
    {
                                                                 
      bucket = tmp;
    }
    if ((unsigned long)bucket->data == (unsigned long)((void *)0)) {
      return ((void *)0);
    }
    cursor = bucket;
    {
      while (1) {
                                      
                      
                           
         
                                                                  
                                        
                
           
                                                                                
           
                        
                                          
           
         
                                                         
      }
                                     
    }
               
    return ((void *)0);
  }
}
size_t hash_string(char const *string, size_t n_buckets) __attribute__((__pure__));
size_t hash_string(char const *string, size_t n_buckets) {
  size_t value;
  unsigned char ch;
  {
    value = (size_t)0;
    {
      while (1) {
                                      
        ch = (unsigned char)*string;
        if (!ch) {
          goto while_break;
        }
        value = (value * 31UL + (size_t)ch) % n_buckets;
                 
      }
                                     
    }
  while_break:;
    return (value);
  }
}
static _Bool is_prime(size_t candidate) __attribute__((__const__));
static _Bool is_prime(size_t candidate) __attribute__((__const__));
static _Bool is_prime(size_t candidate) {
  size_t divisor;
  size_t square;
  int tmp;
  {
    divisor = (size_t)3;
    square = divisor * divisor;
    {
      while (1) {
                                      
        if (square < candidate) {
          if (!(candidate % divisor)) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        divisor++;
        square += 4UL * divisor;
        divisor++;
      }
                                     
    }
  while_break:;
    if (candidate % divisor) {
      tmp = 1;
    } else {
      tmp = 0;
    }
    return ((_Bool)tmp);
  }
}
static size_t next_prime(size_t candidate) __attribute__((__const__));
static size_t next_prime(size_t candidate) __attribute__((__const__));
static size_t next_prime(size_t candidate) {
  _Bool tmp;
  {
    if (candidate < 10UL) {
      candidate = (size_t)10;
    }
    candidate |= 1UL;
    {
      while (1) {
                                      
        if (0xffffffffffffffffUL != candidate) {
          {
            tmp = is_prime(candidate);
          }
          if (tmp) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        candidate += 2UL;
      }
                                     
    }
  while_break:;
    return (candidate);
  }
}
static size_t raw_hasher(void const *data, size_t n) {
  size_t val;
  size_t tmp;
  {
    {
      tmp = rotr_sz((size_t)data, 3);
      val = tmp;
    }
    return (val % n);
  }
}
static _Bool raw_comparator(void const *a, void const *b) {
  {
    return ((_Bool)((unsigned long)a == (unsigned long)b));
  }
}
static _Bool check_tuning(Hash_table *table) {
  Hash_tuning const *tuning;
  float epsilon;
  {
    tuning = table->tuning;
    if ((unsigned long)tuning == (unsigned long)(&default_tuning)) {
      return ((_Bool)1);
    }
    epsilon = 0.1f;
    if (epsilon < (float)tuning->growth_threshold) {
      if (tuning->growth_threshold < (float const)((float)1 - epsilon)) {
        if ((float)1 + epsilon < (float)tuning->growth_factor) {
          if ((float const)0 <= tuning->shrink_threshold) {
            if (tuning->shrink_threshold + (float const)epsilon < tuning->shrink_factor) {
              if (tuning->shrink_factor <= (float const)1) {
                if (tuning->shrink_threshold + (float const)epsilon < tuning->growth_threshold) {
                  return ((_Bool)1);
                }
              }
            }
          }
        }
      }
    }
    table->tuning = &default_tuning;
    return ((_Bool)0);
  }
}
static size_t __attribute__((__pure__)) compute_bucket_size(size_t candidate, Hash_tuning const *tuning) {
  float new_candidate;
  int tmp;
  {
    if (!tuning->is_n_buckets) {
      new_candidate = (float)((float const)candidate / tuning->growth_threshold);
      if ((float)0xffffffffffffffffUL <= new_candidate) {
        return ((size_t __attribute__((__pure__)))0);
      }
      candidate = (size_t)new_candidate;
    }
     
                                        
     
    if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
      tmp = -1;
    } else {
      tmp = -2;
    }
    if ((size_t)tmp / sizeof(struct hash_entry *) < candidate) {
      return ((size_t __attribute__((__pure__)))0);
    }
    return ((size_t __attribute__((__pure__)))candidate);
  }
}
Hash_table *(__attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate,
                                                                      Hash_tuning const *tuning,
                                                                      size_t (*hasher)(void const *,
                                                                                       size_t),
                                                                      _Bool (*comparator)(void const *,
                                                                                          void const *),
                                                                      void (*data_freer)(void *)) {
  Hash_table *table;
  _Bool tmp;
  {
    if ((unsigned long)hasher == (unsigned long)((void *)0)) {
      hasher = &raw_hasher;
    }
    if ((unsigned long)comparator == (unsigned long)((void *)0)) {
      comparator = &raw_comparator;
    }
    {
      table = (Hash_table *)malloc(sizeof(*table));
    }
    if ((unsigned long)table == (unsigned long)((void *)0)) {
      return ((Hash_table *)((void *)0));
    }
    if (!tuning) {
      tuning = &default_tuning;
    }
    {
      table->tuning = tuning;
      tmp = check_tuning(table);
    }
    if (!tmp) {
      goto fail;
    }
    {
      table->n_buckets = (size_t)compute_bucket_size(candidate, tuning);
    }
    if (!table->n_buckets) {
      goto fail;
    }
    {
      table->bucket = (struct hash_entry *)calloc(table->n_buckets, sizeof(*(table->bucket)));
    }
    if ((unsigned long)table->bucket == (unsigned long)((void *)0)) {
      goto fail;
    }
    table->bucket_limit = (struct hash_entry const *)(table->bucket + table->n_buckets);
    table->n_buckets_used = (size_t)0;
    table->n_entries = (size_t)0;
    table->hasher = hasher;
    table->comparator = comparator;
    table->data_freer = data_freer;
    table->free_entry_list = (struct hash_entry *)((void *)0);
    return (table);
  fail : {
    free((void *)table);
  }
    return ((Hash_table *)((void *)0));
  }
}
void hash_free(Hash_table *table) {
  struct hash_entry *bucket;
  struct hash_entry *cursor;
                          
  {
                            
                             
                               
         
                     
                                          
                                                                                
                               
             
                               
                              
               
                           
                                                    
                                
                                         
                   
                   
                                                         
                                          
                   
                 
                                               
               
                             
             
                     
           
                                         
         
                   
       
     
                           
    {
      while (1) {
                                          
        if (!((unsigned long)bucket < (unsigned long)table->bucket_limit)) {
          goto while_break___1;
        }
                              
         
                     
                                              
                          
                                   
             
             
                                  
                                   
                            
             
           
                                         
         
                      
        bucket++;
      }
                                     
    }
  while_break___1:
    cursor = table->free_entry_list;
     
                 
                                          
                      
                               
         
         
                              
                               
                        
         
       
                                     
     
                     
                                
                        
   
           
  }
}
static struct hash_entry *allocate_entry(Hash_table *table) {
  struct hash_entry *new;
  {
    if (table->free_entry_list) {
      new = table->free_entry_list;
      table->free_entry_list = new->next;
    } else {
      {
        new = (struct hash_entry *)malloc(sizeof(*new));
      }
    }
    return (new);
  }
}
static void free_entry(Hash_table *table, struct hash_entry *entry) {
  {
                            
    entry->next = table->free_entry_list;
    table->free_entry_list = entry;
           
  }
}
static void *hash_find_entry(Hash_table *table, void const *entry, struct hash_entry **bucket_head,
                             _Bool delete___0) {
  struct hash_entry *bucket;
  struct hash_entry *tmp;
  struct hash_entry *cursor;
  void *data;
  struct hash_entry *next;
  _Bool tmp___0;
  void *data___0;
  struct hash_entry *next___0;
  _Bool tmp___1;
  {
    {
      tmp = safe_hasher((Hash_table const *)table, entry);
      bucket = tmp;
      *bucket_head = bucket;
    }
    if ((unsigned long)bucket->data == (unsigned long)((void *)0)) {
      return ((void *)0);
    }
    if ((unsigned long)entry == (unsigned long)bucket->data) {
      goto _L;
    } else {
       
                                                                            
       
      if (tmp___0) {
      _L:
        data = bucket->data;
        if (delete___0) {
          if (bucket->next) {
            {
              next = bucket->next;
              *bucket = *next;
              free_entry(table, next);
            }
          } else {
            bucket->data = (void *)0;
          }
        }
        return (data);
      }
    }
    cursor = bucket;
    {
      while (1) {
                                      
        if (!cursor->next) {
          goto while_break;
        }
        if ((unsigned long)entry == (unsigned long)(cursor->next)->data) {
          goto _L___0;
        } else {
          {
            tmp___1 = (*(table->comparator))(entry, (void const *)(cursor->next)->data);
          }
          if (tmp___1) {
          _L___0:
            data___0 = (cursor->next)->data;
            if (delete___0) {
              {
                                        
                                              
                free_entry(table, next___0);
              }
            }
            return (data___0);
          }
        }
        cursor = cursor->next;
      }
                                     
    }
  while_break:;
    return ((void *)0);
  }
}
static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe) {
  struct hash_entry *bucket;
                            
                          
  void *data;
  struct hash_entry *new_bucket;
                               
                         
  {
                         
    {
      while (1) {
                                      
        if (!((unsigned long)bucket < (unsigned long)src->bucket_limit)) {
          goto while_break;
        }
        if (bucket->data) {
                                
           
                       
                                                
                            
                                     
               
               
                                    
                                                                                      
                                    
               
                                     
                                                
                                          
                      
                 
                                          
                                          
                                          
                 
               
                            
             
                                           
           
                        
                              
                                                          
          if (safe) {
            goto __Cont;
          }
          {
            new_bucket = safe_hasher((Hash_table const *)dst, (void const *)data);
          }
                                 
             
                                        
                              
             
                                                                         
                                
             
                                   
                                               
                                         
                  
                                    
                                    
           
                                   
                                  
        }
      __Cont:
        bucket++;
      }
                                     
    }
  while_break:;
    return ((_Bool)1);
  }
}
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table, size_t candidate) {
  Hash_table storage;
  Hash_table *new_table;
  size_t new_size;
  size_t tmp;
  _Bool tmp___0;
  _Bool tmp___1;
  _Bool tmp___2;
  {
    {
      tmp = (size_t)compute_bucket_size(candidate, table->tuning);
      new_size = tmp;
    }
    if (!new_size) {
      return ((_Bool)0);
    }
    if (new_size == table->n_buckets) {
      return ((_Bool)1);
    }
    {
      new_table = &storage;
      new_table->bucket = (struct hash_entry *)calloc(new_size, sizeof(*(new_table->bucket)));
    }
    if ((unsigned long)new_table->bucket == (unsigned long)((void *)0)) {
      return ((_Bool)0);
    }
    {
      new_table->n_buckets = new_size;
      new_table->bucket_limit = (struct hash_entry const *)(new_table->bucket + new_size);
      new_table->n_buckets_used = (size_t)0;
      new_table->n_entries = (size_t)0;
      new_table->tuning = table->tuning;
      new_table->hasher = table->hasher;
      new_table->comparator = table->comparator;
      new_table->data_freer = table->data_freer;
      new_table->free_entry_list = table->free_entry_list;
      tmp___0 = transfer_entries(new_table, table, (_Bool)0);
    }
    if (tmp___0) {
      {
                                    
                                          
                                                      
        table->n_buckets = new_table->n_buckets;
                                                          
                                                            
      }
      return ((_Bool)1);
    }
    {
      table->free_entry_list = new_table->free_entry_list;
      tmp___1 = transfer_entries(table, new_table, (_Bool)1);
    }
    if (tmp___1) {
      {
        tmp___2 = transfer_entries(table, new_table, (_Bool)0);
      }
      if (!tmp___2) {
        {
          abort();
        }
      }
    } else {
      {
        abort();
      }
    }
    {
      free((void *)new_table->bucket);
    }
    return ((_Bool)0);
  }
}
int hash_insert_if_absent(Hash_table *table, void const *entry, void const **matched_ent) {
             
  struct hash_entry *bucket;
                            
                  
            
                
                
  struct hash_entry *new_entry;
                             
  {
                 
       
                
       
     
     
                                                              
     
                                                            
                        
                                          
       
                 
     
                                                                                                                 
       
                            
       
                                                                                                                   
                               
                                   
                                                                               
                
                                                                                                            
         
                        
                                                       
                      
         
         
                                                          
         
                       
                      
         
         
                                                                     
         
                                                                   
           
                    
           
         
       
     
    if (bucket->data) {
       
                                        
                            
       
                                                                   
                    
       
      new_entry->data = (void *)entry;
      new_entry->next = bucket->next;
                               
                           
                 
    }
                                 
                         
                              
               
  }
}
void *(__attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table, void const *entry) {
  void const *matched_ent;
  int err;
          
  void const *tmp___0;
  void *tmp___1;
  {
     
                                                              
                
     
    if (err == -1) {
                          
    } else {
      if (err == 0) {
        tmp___0 = matched_ent;
      } else {
        tmp___0 = entry;
      }
      tmp___1 = (void *)tmp___0;
    }
    return (tmp___1);
  }
}
void *hash_delete(Hash_table *table, void const *entry) {
  void *data;
  struct hash_entry *bucket;
                            
  size_t candidate;
  float tmp;
                            
                          
  _Bool tmp___0;
  {
    {
      data = hash_find_entry(table, entry, &bucket, (_Bool)1);
    }
    if (!data) {
      return ((void *)0);
    }
    (table->n_entries)--;
    if (!bucket->data) {
      (table->n_buckets_used)--;
      if ((float const)table->n_buckets_used < (table->tuning)->shrink_threshold * (float const)table->n_buckets) {
        {
          check_tuning(table);
        }
        if ((float const)table->n_buckets_used < (table->tuning)->shrink_threshold * (float const)table->n_buckets) {
                                 
                                     
                                                                                 
                  
                                                                                                              
           
          {
            candidate = (size_t)tmp;
                                                    
          }
                         
                                            
             
                         
                                              
                              
                                   
                 
                 
                                      
                                       
                                
                 
               
                                             
             
                      
                                                                      
           
        }
      }
    }
    return (data);
  }
}
extern struct dirent *(__attribute__((__nonnull__(1))) readdir)(DIR *__dirp);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) stat)(char const *__restrict __file,
                                                                                 struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2))) fstat)(int __fd,
                                                                               struct stat *__buf);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2, 3))) fstatat)(int __fd,
                                                                                    char const *__restrict __file,
                                                                                    struct stat *__restrict __buf,
                                                                                    int __flag);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) lstat)(char const *__restrict __file,
                                                                                  struct stat *__restrict __buf);
__attribute__((__nothrow__)) int(__attribute__((__warn_unused_result__)) fts_close)(FTS *sp);
__attribute__((__nothrow__)) FTS *(__attribute__((__warn_unused_result__)) fts_open)(char *const *argv,
                                                                                     int options,
                                                                                     int (*compar)(FTSENT const **,
                                                                                                   FTSENT const **));
__attribute__((__nothrow__)) FTSENT *(__attribute__((__warn_unused_result__)) fts_read)(FTS *sp);
__attribute__((__nothrow__)) int fts_set(FTS *sp __attribute__((__unused__)), FTSENT *p,
                                         int instr);
extern void(__attribute__((__nonnull__(1, 4))) qsort)(void *__base, size_t __nmemb,
                                                      size_t __size, int (*__compar)(void const *, void const *));
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen);
static FTSENT *fts_build(FTS *sp, int type);
static void fts_lfree(FTSENT *head);
static void fts_load(FTS *sp, FTSENT *p);
static size_t __attribute__((__pure__)) fts_maxarglen(char *const *argv);
static void fts_padjust(FTS *sp, FTSENT *head);
static _Bool fts_palloc(FTS *sp, size_t more);
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems);
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow);
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir);
void cycle_check_init(struct cycle_check_state *state);
_Bool cycle_check(struct cycle_check_state *state, struct stat const *sb);
static _Bool AD_compare(void const *x, void const *y) {
  struct Active_dir const *ax;
  struct Active_dir const *ay;
  int tmp;
  {
    ax = (struct Active_dir const *)x;
    ay = (struct Active_dir const *)y;
    if (ax->ino == ay->ino) {
      if (ax->dev == ay->dev) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
                        
  }
}
static size_t AD_hash(void const *x, size_t table_size) {
  struct Active_dir const *ax;
  {
    ax = (struct Active_dir const *)x;
    return ((uintmax_t)ax->ino % table_size);
  }
}
static _Bool setup_dir(FTS *fts) {
  {
    if (fts->fts_options & 258) {
      {
        fts->fts_cycle.ht = hash_initialize((size_t)31, (Hash_tuning const *)((void *)0),
                                            &AD_hash, &AD_compare, &free);
      }
      if (!fts->fts_cycle.ht) {
        return ((_Bool)0);
      }
    } else {
      {
        fts->fts_cycle.state = (struct cycle_check_state *)malloc(sizeof(*(fts->fts_cycle.state)));
      }
      if (!fts->fts_cycle.state) {
        return ((_Bool)0);
      }
      {
        cycle_check_init(fts->fts_cycle.state);
      }
    }
    return ((_Bool)1);
  }
}
static _Bool enter_dir(FTS *fts, FTSENT *ent) {
  struct stat const *st;
  struct Active_dir *ad;
  struct Active_dir *tmp;
  struct Active_dir *ad_from_table;
  _Bool tmp___0;
  {
    if (fts->fts_options & 258) {
      {
        st = (struct stat const *)(ent->fts_statp);
        tmp = (struct Active_dir *)malloc(sizeof(*ad));
        ad = tmp;
      }
      if (!ad) {
        return ((_Bool)0);
      }
      {
                                    
        ad->ino = (ino_t)st->st_ino;
        ad->fts_ent = ent;
        ad_from_table = (struct Active_dir *)hash_insert(fts->fts_cycle.ht, (void const *)ad);
      }
      if ((unsigned long)ad_from_table != (unsigned long)ad) {
        {
          free((void *)ad);
        }
        if (!ad_from_table) {
          return ((_Bool)0);
        }
        ent->fts_cycle = ad_from_table->fts_ent;
        ent->fts_info = (unsigned short)2;
      }
    } else {
      {
        tmp___0 = cycle_check(fts->fts_cycle.state, (struct stat const *)(ent->fts_statp));
      }
      if (tmp___0) {
        ent->fts_cycle = ent;
        ent->fts_info = (unsigned short)2;
      }
    }
    return ((_Bool)1);
  }
}
static void leave_dir(FTS *fts, FTSENT *ent) {
  struct stat const *st;
  struct Active_dir obj;
  void *found;
  FTSENT *parent;
  {
                                               
    if (fts->fts_options & 258) {
      {
                                    
                                    
        found = hash_delete(fts->fts_cycle.ht, (void const *)(&obj));
      }
      if (!found) {
        {
          abort();
        }
      }
      {
        free(found);
      }
    } else {
      parent = ent->fts_parent;
      if ((unsigned long)parent != (unsigned long)((void *)0)) {
        if (0L <= parent->fts_level) {
          {
            while (1) {
                                            
                                                                 
                 
                          
                 
               
              if ((fts->fts_cycle.state)->dev_ino.st_ino == (ino_t)st->st_ino) {
                if ((fts->fts_cycle.state)->dev_ino.st_dev == (dev_t)st->st_dev) {
                  (fts->fts_cycle.state)->dev_ino.st_dev = parent->fts_statp[0].st_dev;
                  (fts->fts_cycle.state)->dev_ino.st_ino = parent->fts_statp[0].st_ino;
                }
              }
                               
            }
                                           
          }
                     
        }
      }
    }
    return;
  }
}
static void free_dir(FTS *sp) {
  {
    if (sp->fts_options & 258) {
      if (sp->fts_cycle.ht) {
         
                                      
         
      }
    } else {
      {
        free((void *)sp->fts_cycle.state);
      }
    }
    return;
  }
}
static void fd_ring_clear(I_ring *fd_ring) {
  int fd;
  int tmp;
  _Bool tmp___0;
  {
    {
      while (1) {
                                      
        {
          tmp___0 = i_ring_empty((I_ring const *)fd_ring);
        }
        if (tmp___0) {
          goto while_break;
        }
        {
          tmp = i_ring_pop(fd_ring);
          fd = tmp;
        }
        if (0 <= fd) {
          {
            close(fd);
          }
        }
      }
                                     
    }
  while_break:;
    return;
  }
}
                                                              
   
     
                 
                                      
                                        
           
                    
           
         
                         
       
                                     
     
               
                   
                                           
             
                                           
     
           
   
 
static DIR *opendirat(int fd, char const *dir, int extra_flags, int *pdir_fd) {
  int new_fd;
  int tmp;
  DIR *dirp;
  int saved_errno;
  int *tmp___0;
  int *tmp___1;
  {
    {
      tmp = openat_safer(fd, dir, 67840 | extra_flags);
      new_fd = tmp;
    }
                     
                                  
     
    {
                                         
      dirp = fdopendir(new_fd);
    }
              {
      *pdir_fd = new_fd;
    }       
       
                                     
                               
                      
                                     
                               
       
     
    return (dirp);
  }
}
static void cwd_advance_fd(FTS *sp, int fd, _Bool chdir_down_one) {
  int old;
  int prev_fd_in_slot;
  int tmp;
  {
                         
     
                 
                                      
                           
                               
             
                      
             
           
         
                         
       
                                     
     
               
                         
       
                                                 
                              
       
                                 
         
                                 
         
       
            
                                   
                       
           
                       
           
         
       
     
    sp->fts_cwd_fd = fd;
           
  }
}
static int restore_initial_cwd(FTS *sp) {
  int fail;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  {
    if (!(sp->fts_options & 4)) {
      if (sp->fts_options & 512) {
        if (sp->fts_options & 512) {
          tmp = -100;
        } else {
          tmp = sp->fts_rfd;
        }
        {
          cwd_advance_fd(sp, tmp, (_Bool)1);
          tmp___2 = 0;
        }
      } else {
        if (sp->fts_options & 512) {
          tmp___0 = -100;
        } else {
          tmp___0 = sp->fts_rfd;
        }
        {
          tmp___1 = fchdir(tmp___0);
          tmp___2 = tmp___1;
        }
      }
      if (tmp___2) {
        tmp___3 = 1;
      } else {
        tmp___3 = 0;
      }
    } else {
      tmp___3 = 0;
    }
    {
      fail = tmp___3;
      fd_ring_clear(&sp->fts_fd_ring);
    }
    return (fail);
  }
}
static int diropen(FTS const *sp, char const *dir) {
  int open_flags;
  int tmp;
  int tmp___0;
         
  int tmp___1;
  int tmp___2;
  int tmp___3;
  {
                               
                   
            
              
     
    if (sp->fts_options & 2048) {
      tmp___0 = 262144;
    } else {
      tmp___0 = 0;
    }
    open_flags = (67840 | tmp) | tmp___0;
    if (sp->fts_options & 512) {
      {
        tmp___1 = openat_safer((int)sp->fts_cwd_fd, dir, open_flags);
        tmp___3 = tmp___1;
      }
    } else {
      {
        tmp___2 = open_safer(dir, open_flags);
        tmp___3 = tmp___2;
      }
    }
                 
                  
       
                                       
       
     
                
  }
}
__attribute__((__nothrow__)) FTS *(__attribute__((__warn_unused_result__)) fts_open)(char *const *argv,
                                                                                     int options,
                                                                                     int (*compar)(FTSENT const **,
                                                                                                   FTSENT const **));
FTS *(__attribute__((__warn_unused_result__)) fts_open)(char *const *argv, int options,
                                                        int (*compar)(FTSENT const **,
                                                                      FTSENT const **)) {
  register FTS *sp;
  register FTSENT *p;
  register FTSENT *root;
  register size_t nitems;
  FTSENT *parent;
  FTSENT *tmp;
  _Bool defer_stat;
  int *tmp___0;
  int *tmp___1;
  int *tmp___2;
  size_t maxarglen;
  size_t tmp___5;
  size_t tmp___6;
  _Bool tmp___7;
  int tmp___8;
  size_t len;
  size_t tmp___9;
  char const *v;
  struct _ftsent *tmp___10;
  _Bool tmp___11;
  int tmp___12;
                    
                    
                    
                    
  {
                                   
                                
                          
       
                                     
                      
       
                                  
     
                      
                          
         
                                       
                        
         
                                    
       
     
                          
       
                                     
                      
       
                                  
     
    {
      sp = (FTS *)malloc(sizeof(FTS));
    }
                                                          
                                  
     
    {
      memset((void *)sp, 0, sizeof(FTS));
      sp->fts_compar = compar;
      sp->fts_options = options;
    }
                              
                           
                              
     
    {
      sp->fts_cwd_fd = -100;
      tmp___5 = (size_t)fts_maxarglen(argv);
      maxarglen = tmp___5;
    }
                            {
      tmp___6 = maxarglen;
    }       
                             
     
    {
      tmp___7 = fts_palloc(sp, tmp___6);
    }
    if (!tmp___7) {
      goto mem1;
    }
    if ((unsigned long)*argv != (unsigned long)((void *)0)) {
      {
        parent = fts_alloc(sp, "", (size_t)0);
      }
      if ((unsigned long)parent == (unsigned long)((void *)0)) {
        goto mem2;
      }
      parent->fts_level = (ptrdiff_t)-1;
    }
                                                              
                  
            
                                   
                    
              
                    
       
     
                                
    root = (FTSENT *)((void *)0);
    nitems = (size_t)0;
    {
      while (1) {
                                     ;
        if (!((unsigned long)*argv != (unsigned long)((void *)0))) {
          goto while_break;
        }
        {
          tmp___9 = strlen((char const *)*argv);
          len = tmp___9;
        }
        if (!(options & 4096)) {
          v = (char const *)*argv;
          if (2UL < len) {
            if ((int const) * (v + (len - 1UL)) == 47) {
              {
                while (1) {
                                                    
                  if (1UL < len) {
                    if (!((int const) * (v + (len - 2UL)) == 47)) {
                                           
                    }
                  } else {
                    goto while_break___0;
                  }
                        
                }
                                               
              }
            while_break___0:;
            }
          }
        }
        {
          p = fts_alloc(sp, (char const *)*argv, len);
        }
        if ((unsigned long)p == (unsigned long)((void *)0)) {
                    
        }
        p->fts_level = (ptrdiff_t)0;
        p->fts_parent = parent;
        p->fts_accpath = p->fts_name;
        if (defer_stat) {
          if ((unsigned long)root != (unsigned long)((void *)0)) {
            {
              p->fts_info = (unsigned short)11;
                                                 
            }
          } else {
             
                                                      
             
          }
        } else {
          {
            p->fts_info = fts_stat(sp, p, (_Bool)0);
          }
        }
        if (compar) {
          p->fts_link = root;
          root = p;
        } else {
          p->fts_link = (struct _ftsent *)((void *)0);
          if ((unsigned long)root == (unsigned long)((void *)0)) {
            root = p;
            tmp = root;
          } else {
            tmp->fts_link = p;
            tmp = p;
          }
        }
        argv++;
        nitems++;
      }
                                    ;
    }
  while_break:;
    if (compar) {
      if (nitems > 1UL) {
         
                                            
         
      }
    }
    {
      tmp___10 = fts_alloc(sp, "", (size_t)0);
      sp->fts_cur = tmp___10;
    }
    if ((unsigned long)tmp___10 == (unsigned long)((void *)0)) {
      goto mem3;
    }
    {
      (sp->fts_cur)->fts_link = root;
                                                  
                               
    }
                    
                
     
    if (!(sp->fts_options & 4)) {
      if (!(sp->fts_options & 512)) {
        {
          tmp___12 = diropen((FTS const *)sp, ".");
          sp->fts_rfd = tmp___12;
        }
                           
                               
         
      }
    }
     
                                        
     
    return (sp);
  mem3 : {
    fts_lfree(root);
    free((void *)parent);
  }
  mem2 : {
                               
  }
  mem1 : {
    free((void *)sp);
  }
    return ((FTS *)((void *)0));
  }
}
static void fts_load(FTS *sp, FTSENT *p) {
  register size_t len;
  register char *cp;
  size_t tmp;
  char *tmp___0;
  {
     
      tmp = p->fts_namelen;
      p->fts_pathlen = tmp;
      len = tmp;
      memmove((void *)sp->fts_path, (void const *)(p->fts_name), len + 1UL);
                                                     
     
             
                                                              
         
               
                                         
                                                                      
                               
         
              
                        
           
                 
                                           
                                                                        
                                 
           
         
       
     
                           
                          
                             
           
  }
}
__attribute__((__nothrow__)) int(__attribute__((__warn_unused_result__)) fts_close)(FTS *sp);
int(__attribute__((__warn_unused_result__)) fts_close)(FTS *sp) {
  register FTSENT *freep;
  register FTSENT *p;
  int saved_errno;
  int *tmp;
  int tmp___0;
               
  int tmp___2;
  int *tmp___3;
  int tmp___4;
               
  {
    saved_errno = 0;
    if (sp->fts_cur) {
                      
      {
        while (1) {
                                        
          if (!(p->fts_level >= 0L)) {
            goto while_break;
          }
          freep = p;
          if ((unsigned long)p->fts_link != (unsigned long)((void *)0)) {
            p = p->fts_link;
          } else {
            p = p->fts_parent;
          }
          {
            free((void *)freep);
          }
        }
                                       
      }
    while_break : {
      free((void *)p);
    }
    }
    if (sp->fts_child) {
       
                                 
       
    }
    {
      free((void *)sp->fts_array);
      free((void *)sp->fts_path);
    }
    if (sp->fts_options & 512) {
      if (0 <= sp->fts_cwd_fd) {
        {
          tmp___0 = close(sp->fts_cwd_fd);
        }
        if (tmp___0) {
          {
            tmp = __errno_location();
            saved_errno = *tmp;
          }
        }
      }
    } else {
      if (!(sp->fts_options & 4)) {
        {
          tmp___2 = fchdir(sp->fts_rfd);
        }
        if (tmp___2) {
           
                                         
                                   
           
        }
         
                                       
         
        if (tmp___4) {
          if (saved_errno == 0) {
            {
              tmp___3 = __errno_location();
              saved_errno = *tmp___3;
            }
          }
        }
      }
    }
    {
      fd_ring_clear(&sp->fts_fd_ring);
    }
    if (sp->fts_leaf_optimization_works_ht) {
      {
                                                      
      }
    }
    {
      free_dir(sp);
      free((void *)sp);
    }
                      
       
                                     
                               
       
                  
     
               
  }
}
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2))) fstatfs)(int __fildes,
                                                                                 struct statfs *__buf);
static _Bool dirent_inode_sort_may_be_useful(int dir_fd) {
  struct statfs fs_buf;
  int tmp;
                   
                   
  {
    {
                                     
    }
    if (tmp != 0) {
      return ((_Bool)1);
    }
    if (fs_buf.f_type == 16914836L) {
      goto case_16914836;
    }
    if (fs_buf.f_type == 26985L) {
      goto case_16914836;
    }
    goto switch_default;
  case_16914836:
    return ((_Bool)0);
  switch_default:
    return ((_Bool)1);
    return ((_Bool)0);
  }
}
static _Bool leaf_optimization_applies(int dir_fd) {
  struct statfs fs_buf;
  int tmp;
                   
                   
  {
    {
      tmp = fstatfs(dir_fd, &fs_buf);
    }
    if (tmp != 0) {
      return ((_Bool)0);
    }
                                       
                           
     
                        
                  
                      
                 
                      
                      
  }
}
static size_t LCO_hash(void const *x, size_t table_size) {
  struct LCO_ent const *ax;
  {
    ax = (struct LCO_ent const *)x;
    return ((uintmax_t)ax->st_dev % table_size);
  }
}
static _Bool LCO_compare(void const *x, void const *y) {
  struct LCO_ent const *ax;
  struct LCO_ent const *ay;
  {
    ax = (struct LCO_ent const *)x;
    ay = (struct LCO_ent const *)y;
    return ((_Bool)(ax->st_dev == ay->st_dev));
  }
}
static _Bool link_count_optimize_ok(FTSENT const *p) {
          
  Hash_table *h;
  struct LCO_ent tmp;
  struct LCO_ent *ent;
               
  struct LCO_ent *t2;
                             
  {
                           
                                           
                                   
                        
     
                                                         
       
                                                                                          
                                                       
                                                     
                    
       
                                                           
                          
       
     
    {
      tmp.st_dev = (dev_t)p->fts_statp[0].st_dev;
      ent = (struct LCO_ent *)hash_lookup((Hash_table const *)h, (void const *)(&tmp));
    }
    if (ent) {
      return (ent->opt_ok);
    }
    {
      t2 = (struct LCO_ent *)malloc(sizeof(*t2));
    }
                                                          
                        
     
     
                                                         
                          
                                                 
                                                               
     
                                                           
       
                         
       
                        
     
     
                 
                                      
                                                         
           
                    
           
         
                         
       
                                     
     
               
                    
  }
}
__attribute__((__nothrow__)) FTSENT *(__attribute__((__warn_unused_result__)) fts_read)(FTS *sp);
FTSENT *(__attribute__((__warn_unused_result__)) fts_read)(FTS *sp) {
  register FTSENT *p;
  register FTSENT *tmp;
  register unsigned short instr;
  register char *t;
  int *tmp___0;
  int tmp___1;
  int *tmp___2;
  int tmp___3;
  struct _ftsent *tmp___4;
  int tmp___5;
  int *tmp___6;
  int tmp___7;
  size_t tmp___8;
  char *tmp___9;
  FTSENT *parent;
  _Bool tmp___10;
  int *tmp___11;
  _Bool tmp___12;
  int *tmp___13;
  struct _ftsent *tmp___14;
  int *tmp___15;
  int tmp___16;
  int saved_errno;
  int *tmp___17;
  int *tmp___18;
  int *tmp___19;
  int tmp___20;
  int tmp___21;
  int *tmp___22;
  int tmp___23;
  FTSENT *tmp___24;
  char *__cil_tmp36;
  char *__cil_tmp37;
  char *__cil_tmp38;
  {
                                                                   
                                     
            
                                    
                                       
       
     
    p = sp->fts_cur;
                         
                                     
                          
       
                                                
       
                 
     
                          
                                   
                
              
                                     
              
                                                  
         
                                      
                                         
               
                                                        
                                       
               
                                
                 
                                               
                                          
                                                  
                 
                      
                                                                       
               
             
           
                             
         
       
     
    if ((int)p->fts_info == 1) {
                            
                    
              
                                   
                                                      
                 
                                        
               
                                    
               
             
                                
               
                                         
                                                              
               
             
                                            
             
                         
                                              
                 
                                   
                 
                                 
               
                                             
             
                       
                       
           
         
       
                                                                       
                                     
           
                                     
                                     
                                                          
           
         
       
                                                                       
         
                                                                                
         
                      
           
                                         
                                    
                                                                   
                              
           
           
                       
                                                
                                                                      
                                     
               
                                                            
                              
             
                                           
           
                         
         
             {
         
          tmp___4 = fts_build(sp, 3);
          sp->fts_child = tmp___4;
         
                                                                   
                                        
                                           
           
                             
                                        
                                              
             
           
           
                       
                                                
               
                                 
               
                                   
             
                                           
           
                         
                     
         
      }
      p = sp->fts_child;
      sp->fts_child = (struct _ftsent *)((void *)0);
      goto name;
    }
       
    tmp = p;
    if ((unsigned long)p->fts_link == (unsigned long)((void *)0)) {
      if ((p->fts_parent)->fts_dirp) {
         
                              
                          
                                                          
                               
         
                                                             
                                        
                                           
           
                          
         
         
                            
         
                  
      }
    }
    p = p->fts_link;
    if ((unsigned long)p != (unsigned long)((void *)0)) {
       
                        
                          
       
      if (p->fts_level == 0L) {
         
                                            
         
                      
                                   
                                         
         
        {
                       
          fts_load(sp, p);
                        
        }
        goto check_for_dir;
      }
      if ((int)p->fts_instr == 4) {
                  
      }
                                   
         
                                                  
         
                                    
                                       
             
                                                      
                                     
             
                              
               
                                             
                                        
                                                
               
                    
                                                                     
             
           
         
                                         
       
    name:
      if ((int)*((p->fts_parent)->fts_path + ((p->fts_parent)->fts_pathlen - 1UL)) == 47) {
        tmp___8 = (p->fts_parent)->fts_pathlen - 1UL;
      } else {
        tmp___8 = (p->fts_parent)->fts_pathlen;
      }
      {
        t = sp->fts_path + tmp___8;
        tmp___9 = t;
        t++;
        *tmp___9 = (char)'/';
        memmove((void *)t, (void const *)(p->fts_name), p->fts_namelen + 1UL);
      }
    check_for_dir:
      sp->fts_cur = p;
                                  {
                                            
                                 
                                  
                                                      
                                        
                                           
                   
                                                                              
                   
                                  
                                
                   
                        
                              
                 
                      
                            
               
                    
                          
             
                  
          _L___4 :                         {
            p->fts_info = fts_stat(sp, p, (_Bool)0);
          }
                                                               
                                       
                                                   
                                                   
                 
               
             
           
                 
           
                       
                                                
                                                     
                 
                          
                 
               
                                   
             
                                           
           
                         
         
      }
                                  
                                 
                                               
         
         
                                      
         
                        
           
                                          
                           
           
                                         
         
       
      return (p);
    }
  cd_dot_dot : {
    p = tmp->fts_parent;
                    
                      
  }
                             {
      {
                        
                                      
                      
        tmp___14 = (struct _ftsent *)((void *)0);
                               
      }
      return (tmp___14);
    }
     
                 
                                          
                                        
           
                    
           
         
                             
       
                                     
     
                  
                                                    
                             
       
                                           
       
                     
         
                                        
                                   
                                   
         
       
            
                                  
                                     
                                      
             
                                                         
                           
             
                  
             
                                              
                                  
             
           
                         
             
                                            
                                      
                                  
                                            
                                      
                                            
                                       
                                       
             
           
         
         
                              
         
              
                                       
           
                                                                       
           
                         
             
                                            
                                       
                                       
             
           
         
       
     
                       
                                      
            
                                      
     
                            
       
                   
                                            
           
                             
           
                               
         
                                        
       
                     
     
                                  
                                       
            
                   
     
                      
  }
}
__attribute__((__nothrow__)) int fts_set(FTS *sp __attribute__((__unused__)), FTSENT *p,
                                         int instr);
int fts_set(FTS *sp __attribute__((__unused__)), FTSENT *p, int instr) {
  int *tmp;
  {
    if (instr != 0) {
      if (instr != 1) {
        if (instr != 2) {
          if (instr != 3) {
            if (instr != 4) {
              {
                                         
                *tmp = 22;
              }
              return (1);
            }
          }
        }
      }
    }
    p->fts_instr = (unsigned short)instr;
    return (0);
  }
}
static int fts_compare_ino(struct _ftsent const **a, struct _ftsent const **b) {
  int tmp;
  int tmp___0;
  {
    if ((*(a + 0))->fts_statp[0].st_ino < (*(b + 0))->fts_statp[0].st_ino) {
      tmp___0 = -1;
    } else {
      if ((*(b + 0))->fts_statp[0].st_ino < (*(a + 0))->fts_statp[0].st_ino) {
        tmp = 1;
      } else {
        tmp = 0;
      }
      tmp___0 = tmp;
    }
    return (tmp___0);
  }
}
static void set_stat_type(struct stat *st, unsigned int dtype) {
  mode_t type;
  {
    if (dtype == 6U) {
      goto case_6;
    }
    if (dtype == 2U) {
      goto case_2;
    }
    if (dtype == 4U) {
      goto case_4;
    }
    if (dtype == 1U) {
      goto case_1;
    }
    if (dtype == 10U) {
      goto case_10;
    }
    if (dtype == 8U) {
      goto case_8;
    }
    if (dtype == 12U) {
      goto case_12;
    }
    goto switch_default;
  case_6:
    type = (mode_t)24576;
    goto switch_break;
  case_2:
    type = (mode_t)8192;
    goto switch_break;
  case_4:
    type = (mode_t)16384;
    goto switch_break;
  case_1:
    type = (mode_t)4096;
    goto switch_break;
  case_10:
    type = (mode_t)40960;
    goto switch_break;
  case_8:
    type = (mode_t)32768;
    goto switch_break;
  case_12:
    type = (mode_t)49152;
    goto switch_break;
  switch_default:
    type = (mode_t)0;
  switch_break:
    st->st_mode = type;
    return;
  }
}
static FTSENT *fts_build(FTS *sp, int type) {
  register FTSENT *p;
  register FTSENT *head;
  register size_t nitems;
  FTSENT *tail;
  void *oldaddr;
  int saved_errno;
  _Bool descend;
  _Bool doadjust;
  ptrdiff_t level;
  nlink_t nlinks;
  _Bool nostat;
  size_t len;
  size_t maxlen;
  size_t new_len;
  char *cp;
  int dir_fd;
  FTSENT *cur;
  _Bool continue_readdir;
  DIR *dp;
  int *tmp;
  int *tmp___0;
  DIR *tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int *tmp___5;
  _Bool tmp___6;
  size_t max_entries;
  unsigned long tmp___7;
  int tmp___8;
  int *tmp___9;
  int tmp___10;
  char *tmp___11;
  _Bool is_dir;
  size_t d_namelen;
  struct dirent *dp___0;
  struct dirent *tmp___12;
  int *tmp___13;
  int *tmp___14;
  _Bool tmp___15;
  int *tmp___16;
  _Bool skip_stat;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  _Bool tmp___23;
  char *__cil_tmp53;
  {
    cur = sp->fts_cur;
                                                  
                           
       
                           
                           
       
                       
         
                     
                                          
             
                                      
                                                 
             
                             
           
                                         
         
                   
                        
           
                                              
                                     
                                  
           
         
                                       
       
           {
                                {
                                  
                                     
            tmp___2 = 0;
                   
                             
           
                       
                           
         
      }       
                    
       
                                  {
        tmp___3 = 262144;
      }       
                    
       
                                  {
                                    
          tmp___4 = sp->fts_cwd_fd;
                     
                         
         
      }       
                       
       
      {
        tmp___1 = opendirat(tmp___4, (char const *)cur->fts_accpath, tmp___2 | tmp___3,
                            &dir_fd);
        cur->fts_dirp = tmp___1;
      }
                                                                 
                        
           
                                              
                                         
                                      
           
         
                                       
       
                                     
         
                                                      
         
              
                                    
           
                       
                                                
               
                                   
               
                                   
             
                                           
           
                           
                                      
                                       
         
                         
             
                                           
                            
             
                                           
           
         
       
    }
                                                                      
                         
            
                                     
     
                          
                    
                          
                        
            
                                
                                   
                                     
                        
                  
                        
           
                                                                   
                            
                
                               
                            
         
              
                             
                          
       
     
                           
                         
           {
                   
                    
              
                        
               
                                      
             
                                         
             
                              
               
                                                   
               
             
           
                           
                    
                  
             
              tmp___10 = fts_safe_changedir(sp, cur, dir_fd, (char const *)((void *)0));
             
                           
               
                           
                                
                   
                                                 
                                              
                   
                 
               
                                                                         
                                 
               
                           
                                                    
                   
                                            
                                                       
                   
                                       
                 
                                               
               
                             
                                          
                                  
                   
                                  
                   
                 
               
                                                 
                    
                                 
             
           
                  
                             
         
       
    }
                                                                 
                                   
            
                             
     
                              
                              
                    
           
                            
            
                               
     
          
                                   
    level = cur->fts_level + 1L;
                        
    head = (FTSENT *)((void *)0);
                                 
                       
    {
      while (1) {
                                         ;
      while_continue___2:;
                             
                               
         
        {
          tmp___12 = readdir(cur->fts_dirp);
          dp___0 = tmp___12;
        }
        if ((unsigned long)dp___0 == (unsigned long)((void *)0)) {
          goto while_break___2;
        }
                                     {
                                             
                                     
                                      
                    
                                                 
                if (!dp___0->d_name[2]) {
                  goto while_continue___2;
                }
               
             
           
        }
        {
          d_namelen = strlen((char const *)(dp___0->d_name));
          p = fts_alloc(sp, (char const *)(dp___0->d_name), d_namelen);
        }
                 
                    
         
                                  
           
                                           
                                                               
           
                          
                  
                                          
                                    
                            
                            
           
             
                         
                                                  
                 
                                          
                                                     
                 
                                     
               
                                              
             
                             
                                              
                                     
                                          
                                    
           
                                           
           
                                                                      
                                
                                      
                                      
             
           
                                         
         
                                  
                            
           
                            
                            
           
           
                       
                                                
               
                                        
                                                   
               
                                   
             
                                            
           
                           
                                            
                                   
                                        
                         
         
                                         
         
        p->fts_level = level;
        p->fts_parent = sp->fts_cur;
                                 
                                               
                                  
           
                                         
                                                                                   
           
               {
          p->fts_accpath = p->fts_name;
        }
                                                                          
                      
                
                                       
                 
                                       
                                        
                                               
                                                    
                                 
                          
                                 
                   
                        
                               
                 
                      
                             
               
                    
                           
             
             
                                          
                                               
                                                                        
                                                            
             
                                       
                                             
                             
                      
                             
               
                    
                           
             
                                     
                  
             
                                                      
             
                                        
                           
                    
                                          
                             
                      
                                            
                               
                        
                               
                 
               
             
                                     
           
         
                           
                       
                                      
           
         
                                                    
        if ((unsigned long)head == (unsigned long)((void *)0)) {
          tail = p;
          head = tail;
        } else {
          tail->fts_link = p;
                   
        }
                 
                                    
                                      
         
      }
                                    ;
    }
  while_break___2:;
                        
       
                   
                                            
           
                                    
                                               
           
                               
         
                                        
       
                     
     
                         
                    
       
                              
       
     
                              
                                   
             
              
                            
               
         
       
                         
     
                            
                    
                        
                      
                
                        
                 
                                       
               
                                                   
                                    
               
                    
               
                                                                             
                                    
               
             
                           
               
                                                  
                                         
                                
               
                                             
             
           
         
       
     
                  
                      
                                          
       
       
                        
       
                                     
     
                           
                            
                                    
           
                                                                       
           
                         
             
                                                
                                                
                                                                                                      
             
           
         
       
     
                         
                         
         
                                            
         
       
     
    return (head);
  }
}
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow) {
  struct stat *sbp;
  int saved_errno;
  int *tmp;
  int *tmp___0;
  int *tmp___1;
  int tmp___2;
  int tmp___3;
  int *tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  {
    sbp = p->fts_statp;
                             
                                
                          
       
     
                              
              
           {
                   
            
                                                                                      
                                                              
       
                      
           
                                     
                               
                                         
           
                              
             
                                                                                             
                                                                     
             
                               
               
                                             
                             
               
                                          
             
           
                                     
                   
         
              
         
          tmp___5 = fstatat(sp->fts_cwd_fd, (char const * /* __restrict  */)((char const *)p->fts_accpath),
                            (struct stat * /* __restrict  */) sbp, 256);
         
                      
           
                                         
                                    
           
               
                                                      
         
                                      
         
       
    }
    if ((sbp->st_mode & 61440U) == 16384U) {
                                 
                    
              
                    
       
                                                                   
                                      
                              
                      
                
                                          
                                  
                   
                                       
                            
                      
                            
               
                                               
             
           
         
       
      return ((unsigned short)1);
    }
                                            
                                  
     
                                            
                                 
     
                               
  }
}
static int fts_compar(void const *a, void const *b) {
  FTSENT const **pa;
  FTSENT const **pb;
  int tmp;
  {
    {
      pa = (FTSENT const **)a;
      pb = (FTSENT const **)b;
      tmp = (*(((*(pa + 0))->fts_fts)->fts_compar))(pa, pb);
    }
                 
  }
}
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems) {
  register FTSENT **ap;
  register FTSENT *p;
  FTSENT *dummy;
  int (*compare)(void const *, void const *);
  int (*tmp)(void const *, void const *);
  FTSENT **a;
  FTSENT **tmp___0;
  {
    if (sizeof(&dummy) == sizeof(void *)) {
      if ((long)(&dummy) == (long)((void *)(&dummy))) {
        tmp = (int (*)(void const *, void const *))sp->fts_compar;
      } else {
        tmp = &fts_compar;
      }
    } else {
                        
    }
    compare = tmp;
    if (nitems > sp->fts_nitems) {
      sp->fts_nitems = nitems + 40UL;
      if (0xffffffffffffffffUL / sizeof(*a) < sp->fts_nitems) {
        {
          free((void *)sp->fts_array);
                                                         
                                     
        }
        return (head);
      } else {
        {
          a = (FTSENT **)realloc((void *)sp->fts_array, sp->fts_nitems * sizeof(*a));
        }
        if (!a) {
           
                                        
                                                           
                                       
           
          return (head);
        }
      }
      sp->fts_array = a;
    }
    ap = sp->fts_array;
    p = head;
    {
      while (1) {
                                      
                 
                           
         
                     
             
        *tmp___0 = p;
        p = p->fts_link;
      }
    while_break___1: /* CIL Label */;
    }
  while_break : {
                                                                    
                       
    head = *ap;
  }
    {
      while (1) {
                                          
                 
        if (!nitems) {
          goto while_break___0;
        }
        (*(ap + 0))->fts_link = *(ap + 1);
        ap++;
      }
                                     
    }
  while_break___0:
    (*(ap + 0))->fts_link = (struct _ftsent *)((void *)0);
    return (head);
  }
}
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen) {
  register FTSENT *p;
  size_t len;
  {
    {
      len = sizeof(FTSENT) + namelen;
      p = (FTSENT *)malloc(len);
    }
                                                         
                                     
     
    {
      memcpy((void * /* __restrict  */)((void *)(p->fts_name)), (void const * /* __restrict  */)((void const *)name),
             namelen);
                                          
      p->fts_namelen = namelen;
                      
      p->fts_path = sp->fts_path;
                       
                                       
                                       
                                       
                         
                                 
    }
    return (p);
  }
}
static void fts_lfree(FTSENT *head) {
  register FTSENT *p;
  {
    {
      while (1) {
                                      
        p = head;
        if (!p) {
          goto while_break;
        }
        head = head->fts_link;
        if (p->fts_dirp) {
          {
            closedir(p->fts_dirp);
          }
        }
        {
          free((void *)p);
        }
      }
                                     
    }
  while_break:;
    return;
  }
}
static _Bool fts_palloc(FTS *sp, size_t more) {
  char *p;
  size_t new_len;
  int *tmp;
  {
                                               
                                    
       
                                   
                                           
                                 
                  
       
                        
     
    {
                                
      p = (char *)realloc((void *)sp->fts_path, sp->fts_pathlen);
    }
                                                         
       
                                   
                                           
       
                        
     
    sp->fts_path = p;
    return ((_Bool)1);
  }
}
static void fts_padjust(FTS *sp, FTSENT *head) {
  FTSENT *p;
  char *addr;
  {
    addr = sp->fts_path;
    p = sp->fts_child;
    {
      while (1) {
                                      
                 
                           
         
         
                     
                                              
                                                                                
                                                                     
             
                               
                                 
           
                                         
         
                      
        p = p->fts_link;
      }
                                     
    }
              
    p = head;
    {
      while (1) {
                                          
        if (!(p->fts_level >= 0L)) {
          goto while_break___1;
        }
        {
          while (1) {
                                              
            if ((unsigned long)p->fts_accpath != (unsigned long)(p->fts_name)) {
              p->fts_accpath = addr + (p->fts_accpath - p->fts_path);
            }
            p->fts_path = addr;
            goto while_break___2;
          }
                                         
        }
      while_break___2:;
                          
                          
                
                            
         
      }
                                     
    }
  while_break___1:;
    return;
  }
}
static size_t __attribute__((__pure__)) fts_maxarglen(char *const *argv) {
  size_t len;
  size_t max;
  {
                    
    {
                {
                                     ;
                     
                           
         
        {
          len = strlen((char const *)*argv);
        }
                       {
          max = len;
        }
               
      }
                                    ;
    }
               
    return ((size_t __attribute__((__pure__)))(max + 1UL));
  }
}
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir) {
  int ret;
  _Bool is_dotdot;
  int tmp;
  int tmp___0;
  int newfd;
  int parent_fd;
  _Bool tmp___1;
  struct stat sb;
  int tmp___2;
  int *tmp___3;
  int tmp___4;
  int oerrno;
  int *tmp___5;
  int *tmp___6;
                    
  {
              
       
                                
       
                     
                    
              
                    
       
            
                  
     
                               
                              
                                  
                      
           
                      
           
         
       
                 
     
                {
                      
                                    
           
                                                                       
           
                         
             
                                                       
              is_dotdot = (_Bool)1;
             
                                 
                             
                                              
             
           
         
       
    }
    newfd = fd;
                 
       
                                              
       
                      
                    
       
     
                              
              
            
                
         
                                      
         
                           
              
                                      
         
                        
                     
                      
           
                                                    
             
                                           
                           
                       
             
                      
                  
                                                      
               
                                             
                             
                         
               
                        
             
           
         
       
     
                               {
      {
        cwd_advance_fd(sp, newfd, (_Bool)(!is_dotdot));
      }
      return (0);
    }
     
                          
     
       
                 
       
                                     
                          
                     
                                     
                          
       
     
                 
  }
}
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2))) mempcpy)(void *__restrict __dest,
                                                                                       void const *__restrict __src,
                                                                                       size_t __n);
int fd_safer(int fd) {
  int f;
  int tmp;
  int e;
  int *tmp___0;
  int *tmp___1;
  {
                  
                    
         
                              
                  
                                       
                       
                    
                                       
                       
                 
         
       
     
    return (fd);
  }
}
extern int fcntl(int __fd, int __cmd, ...);
int rpl_fcntl(int fd, int action, ...);
static int have_dupfd_cloexec = 0;
int rpl_fcntl(int fd, int action, ...) {
  va_list arg;
  int result;
  int target;
  int tmp;
               
  int flags;
  int tmp___1;
  int saved_errno;
  int *tmp___2;
  int *tmp___3;
  int tmp___4;
  void *p;
  void *tmp___5;
  {
    {
      result = -1;
      __builtin_va_start(arg, action);
    }
    if (action == 1030) {
      goto case_1030;
    }
    goto switch_default;
  case_1030 : {
    tmp = __builtin_va_arg(arg, int);
    target = tmp;
  }
                                  
       
                                           
       
                        
                               
              
         
                                       
         
                             
                                 
                
           
                                              
           
                           
                              
           
                                  
         
       
            
       
                                          
       
     
    if (0 <= result) {
      if (have_dupfd_cloexec == -1) {
        {
          tmp___1 = fcntl(result, 1);
          flags = tmp___1;
        }
        if (flags < 0) {
          goto _L;
        } else {
          {
            tmp___4 = fcntl(result, 2, flags | 1);
          }
          if (tmp___4 == -1) {
          _L : {
            tmp___2 = __errno_location();
            saved_errno = *tmp___2;
            close(result);
            tmp___3 = __errno_location();
            *tmp___3 = saved_errno;
            result = -1;
          }
          }
        }
      }
    }
    goto switch_break;
  switch_default : {
    tmp___5 = __builtin_va_arg(arg, void *);
    p = tmp___5;
    result = fcntl(fd, action, p);
  }
    goto switch_break;
  switch_break : {
    __builtin_va_end(arg);
  }
    return (result);
  }
}
int volatile exit_failure = (int volatile)1;
extern struct _IO_FILE *stdin;
extern FILE *fopen(char const *__restrict __filename, char const *__restrict __modes);
extern __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream);
extern int regcomp(regex_t *__restrict __preg, char const *__restrict __pattern,
                   int __cflags);
extern int regexec(regex_t const *__restrict __preg, char const *__restrict __string,
                   size_t __nmatch, regmatch_t *__restrict __pmatch, int __eflags);
_Bool fnmatch_pattern_has_wildcards(char const *str, int options) __attribute__((__pure__));
struct exclude *new_exclude(void);
void add_exclude(struct exclude *ex, char const *pattern, int options);
int add_exclude_file(void (*add_func)(struct exclude *, char const *, int),
                     struct exclude *ex, char const *file_name___1, int options,
                     char line_end);
int add_exclude_fp(void (*add_func)(struct exclude *, char const *, int, void *),
                   struct exclude *ex, FILE *fp, int options, char line_end, void *data);
_Bool excluded_file_name(struct exclude const *ex, char const *f);
void exclude_add_pattern_buffer(struct exclude *ex, char *buf);
_Bool exclude_fnmatch(char const *pattern, char const *f, int options);
extern int fnmatch(char const *__pattern, char const *__name, int __flags);
void exclude_add_pattern_buffer(struct exclude *ex, char *buf) {
  struct pattern_buffer *pbuf;
  struct pattern_buffer *tmp;
  {
    {
      tmp = (struct pattern_buffer *)xmalloc(sizeof(*pbuf));
                 
      pbuf->base = buf;
      pbuf->next = ex->patbuf;
      ex->patbuf = pbuf;
    }
    return;
  }
}
_Bool fnmatch_pattern_has_wildcards(char const *str, int options) __attribute__((__pure__));
_Bool fnmatch_pattern_has_wildcards(char const *str, int options) {
                  
              
  {
    {
                 
                                          
                     
                  
              
                                      
                       
         
                                       
                       
         
                                       
                       
         
                                      
                       
         
                                      
                       
         
                                      
                       
         
                                      
                       
         
                                      
                       
         
                                      
                       
         
                                      
                       
         
                                      
                       
         
                                      
                       
         
                                     
                      
         
                          
              
                                  
                            
         
                          
              
                                  
                              
                
                                      
                       
                          
                    
                          
             
                  
                        
           
                         
         
                          
              
                                 
                                        
                              
           
         
                          
              
                          
             
                          
                    
       
                                 
    }
    return ((_Bool)0);
  }
}
static void unescape_pattern(char *str) {
  char const *q;
  int tmp;
  char *tmp___0;
  char tmp___1;
  char const *tmp___2;
  {
    q = (char const *)str;
    {
      while (1) {
                                      
                                    
                         
                    
                  
                    
           
                
                  
         
                 
        tmp___0 = str;
        str++;
        tmp___2 = q;
        q++;
        tmp___1 = (char)*tmp___2;
        *tmp___0 = tmp___1;
        if (!tmp___1) {
          goto while_break;
        }
      }
                                     
    }
  while_break:;
           
  }
}
                                   
                      
                          
   
     
                                                        
     
                     
   
 
                                                                 
                
             
   
     
                             
                                      
     
                 
   
 
                                                                    
                
                       
               
             
             
          
                    
                    
                    
   
     
                             
                        
                       
                               
                                                               
                                
     
     
                 
                                      
         
                                    
         
                                
                                 
                    
                  
                    
           
                
                  
         
                   
                           
         
                     
                         
           
                                                 
           
                
                                   
         
                                                        
                                       
                                  
       
                                     
     
               
                   
   
 
                                                                   
                 
                 
          
   
     
                               
                               
                           
     
                               
   
 
                                                                      
                 
                 
          
   
     
                               
                               
                               
     
                               
   
 
static void string_free(void *data) {
  {
    {
      free(data);
    }
    return;
  }
}
static void new_exclude_segment(struct exclude *ex, enum exclude_type type, int options) {
  struct exclude_segment *sp;
                              
                                                         
                                                        
  {
     
                                                                              
               
                      
                            
     
                                   
                  
     
                                   
                  
     
                      
         
                      
         
                             
                                   
            
                                
     
                             
                                  
            
                               
     
     
                                                                                         
                                                           
     
                      
               
    sp->next = ex->head;
    ex->head = sp;
           
  }
}
static int fnmatch_no_wildcards(char const *pattern, char const *f, int options) {
          
              
  int tmp___1;
  size_t patlen;
  size_t tmp___2;
  int r;
  int tmp___3;
  char *fcopy;
  char *tmp___4;
  char *p;
  int r___0;
  char *tmp___5;
  {
    if (!(options & (1 << 3))) {
                               
         
                                       
                        
         
              
         
                                       
                            
         
       
      return (tmp___1);
    } else {
      if (!(options & (1 << 4))) {
        {
          tmp___2 = strlen(pattern);
          patlen = tmp___2;
          tmp___3 = strncmp(pattern, f, patlen);
          r = tmp___3;
        }
        if (!r) {
          r = (int)*(f + patlen);
          if (r == 47) {
            r = 0;
          }
        }
        return (r);
      } else {
        {
          tmp___4 = xstrdup(f);
          fcopy = tmp___4;
          p = fcopy;
        }
        {
          while (1) {
                                          
            {
              p = strchr((char const *)p, '/');
            }
            if (p) {
              *p = (char)'\000';
            }
            {
                                                               
            }
            if (!p) {
              goto while_break;
            } else {
                               
                                 
               
            }
            tmp___5 = p;
            p++;
            *tmp___5 = (char)'/';
          }
                                         
        }
      while_break : {
        free((void *)fcopy);
      }
        return (r___0);
      }
    }
  }
}
_Bool exclude_fnmatch(char const *pattern, char const *f, int options) {
  int (*matcher___0)(char const *, char const *, int);
                                                                     
  _Bool matched;
              
  char const *p;
  int tmp___1;
  {
                              
                     
            
                                  
     
     
                        
                                                    
                                      
     
    if (!(options & (1 << 30))) {
      p = f;
      {
        while (1) {
                                        
          if (*p) {
            if (!(!matched)) {
              goto while_break;
            }
          } else {
            goto while_break;
          }
          if ((int const) * p == 47) {
            if ((int const) * (p + 1) != 47) {
              {
                tmp___1 = (*matcher___0)(pattern, p + 1, options);
                matched = (_Bool)(tmp___1 == 0);
              }
            }
          }
          p++;
        }
                                       
      }
    while_break:;
    }
    return (matched);
  }
}
_Bool exclude_patopts(struct patopts const *opts, char const *f) {
  int options;
  int tmp;
  _Bool tmp___0;
  int tmp___1;
  {
    options = (int)opts->options;
    if (options & (1 << 27)) {
      {
        tmp = regexec((regex_t const * /* __restrict  */)(&opts->v.re), (char const * /* __restrict  */)f,
                      (size_t)0, (regmatch_t * /* __restrict  */)((regmatch_t *)((void *)0)),
                      0);
        tmp___1 = tmp == 0;
      }
    } else {
      {
        tmp___0 = exclude_fnmatch((char const *)opts->v.pattern, f, options);
        tmp___1 = (int)tmp___0;
      }
    }
    return ((_Bool)tmp___1);
  }
}
static _Bool file_pattern_matches(struct exclude_segment const *seg, char const *f) {
  size_t exclude_count;
  struct patopts const *exclude;
  size_t i;
  _Bool tmp;
  {
    exclude_count = (size_t)seg->v.pat.exclude_count;
    exclude = (struct patopts const *)seg->v.pat.exclude;
    i = (size_t)0;
    {
      while (1) {
                                      
        if (!(i < exclude_count)) {
          goto while_break;
        }
        {
          tmp = exclude_patopts(exclude + i, f);
        }
        if (tmp) {
                            
        }
        i++;
      }
                                     
    }
  while_break:;
    return ((_Bool)0);
  }
}
static _Bool file_name_matches(struct exclude_segment const *seg, char const *f,
                               char *buffer___0) {
              
                    
            
          
                
  {
                                
                                       
     
                 
                                      
         
                                                                                          
         
         
                     
                                              
                                
                                                                                   
           
                      
                                
             
                                     
               
                                                                 
                            
               
                      
                             
                                        
               
             
                                 
           
                                         
         
                       
                                     
           
                                             
           
                  
                
           
                
                           
         
                 
                           
         
       
                                     
     
               
    return ((_Bool)0);
  }
}
_Bool excluded_file_name(struct exclude const *ex, char const *f) {
  struct exclude_segment *seg;
  _Bool invert;
  char *filename___0;
             
                
                
  {
                      
                                       
                    
                        
     
                                             
    {
      while (1) {
                                      
                                            
                              
             
                              
                                                        
             
           
           
                                                                                              
           
                        
                             
           
                
           
                                                                                   
           
                        
                             
           
         
                         
                            
                           
         
                        
      }
    while_break___0: /* CIL Label */;
    }
  while_break : {
    free((void *)filename___0);
  }
    return ((_Bool)((int)invert ^ !(seg->options & (1 << 29))));
  }
}
void add_exclude(struct exclude *ex, char const *pattern, int options) {
  struct exclude_segment *seg;
  struct exclude_pattern *pat;
  struct patopts *patopts;
  size_t tmp;
  int rc;
  int cflags;
  int tmp___0;
  char *tmp___1;
  size_t len;
  size_t tmp___2;
  char *str;
  char *p;
  int exclude_hash_flags;
  _Bool tmp___3;
                    
  {
    if (options & ((1 << 27) | (1 << 28))) {
      {
        tmp___3 = fnmatch_pattern_has_wildcards(pattern, options);
      }
      if (tmp___3) {
        if (ex->head) {
          if ((unsigned int)(ex->head)->type == 1U) {
            if (!(((ex->head)->options & (1 << 29)) == (options & (1 << 29)))) {
              {
                new_exclude_segment(ex, (enum exclude_type)1, options);
              }
            }
          } else {
            {
              new_exclude_segment(ex, (enum exclude_type)1, options);
            }
          }
        } else {
          {
            new_exclude_segment(ex, (enum exclude_type)1, options);
          }
        }
        seg = ex->head;
        pat = &seg->v.pat;
        if (pat->exclude_count == pat->exclude_alloc) {
          {
            pat->exclude = (struct patopts *)x2nrealloc((void *)pat->exclude, &pat->exclude_alloc,
                                                        sizeof(*(pat->exclude)));
          }
        }
        tmp = pat->exclude_count;
        (pat->exclude_count)++;
        patopts = pat->exclude + tmp;
        patopts->options = options;
        if (options & (1 << 27)) {
                                   
                             
                  
                        
           
                                            
          if (options & (1 << 3)) {
            {
              tmp___2 = strlen(pattern);
              len = tmp___2;
            }
            {
              while (1) {
                                              
                if (len > 0UL) {
                  if (!((int const) * (pattern + (len - 1UL)) == 47)) {
                    goto while_break;
                  }
                } else {
                  goto while_break;
                }
                      
              }
                                             
            }
          while_break:;
            if (len == 0UL) {
              rc = 1;
            } else {
              {
                tmp___1 = (char *)xmalloc(len + 7UL);
                memcpy((void * /* __restrict  */)((void *)tmp___1), (void const * /* __restrict  */)((void const *)pattern),
                       len);
                strcpy((char * /* __restrict  */)(tmp___1 + len), (char const * /* __restrict  */) "(/.*)?");
                rc = regcomp((regex_t * /* __restrict  */)(&patopts->v.re), (char const * /* __restrict  */)((char const *)tmp___1),
                             cflags);
                free((void *)tmp___1);
              }
            }
          } else {
            {
              rc = regcomp((regex_t * /* __restrict  */)(&patopts->v.re), (char const * /* __restrict  */)pattern,
                           cflags);
            }
          }
          if (rc) {
            (pat->exclude_count)--;
            return;
          }
        } else {
          if (options & (1 << 26)) {
            {
              pattern = (char const *)xstrdup(pattern);
                                                              
            }
          }
          patopts->v.pattern = pattern;
        }
      } else {
        goto _L;
      }
    } else {
    _L:
      exclude_hash_flags = (((1 << 29) | (1 << 30)) | (1 << 3)) | (1 << 4);
      if (ex->head) {
        if ((unsigned int)(ex->head)->type == 0U) {
          if (!(((ex->head)->options & exclude_hash_flags) == (options & exclude_hash_flags))) {
            {
              new_exclude_segment(ex, (enum exclude_type)0, options);
            }
          }
        } else {
          {
            new_exclude_segment(ex, (enum exclude_type)0, options);
          }
        }
      } else {
        {
          new_exclude_segment(ex, (enum exclude_type)0, options);
        }
      }
      {
        seg = ex->head;
        str = xstrdup(pattern);
      }
      if ((options & ((1 << 28) | (1 << 1))) == 1 << 28) {
        {
          unescape_pattern(str);
        }
      }
      {
        p = (char *)hash_insert(seg->v.table, (void const *)str);
      }
      if ((unsigned long)p != (unsigned long)str) {
        {
          free((void *)str);
        }
      }
    }
    return;
  }
}
                                                                                 
                                                                                          
            
          
                
                  
                   
                   
        
        
             
               
              
              
                    
                                 
                                 
               
              
   
                              
                          
                          
          
     
                 
                                      
         
                                
         
                         
                           
         
                                     
           
                                                             
           
         
                        
                    
                               
       
                                     
     
                 
                                  
   
                  
       
                                     
                     
       
     
     
                                                           
                                    
     
                           
                  
            
                                                             
                    
              
                    
       
     
     
                                                        
                                          
                    
              
     
     
                 
                                          
                                                       
                               
         
                                       
           
                            
                                      
           
                                                                                 
             
                         
                                                  
                                                                           
                                    
                        
                   
                                              
                   
                                                                                                       
                                         
                   
                 
                              
               
                                             
             
                           
           
           
                                        
                                                                  
           
                     
                          
         
            
       
                                     
     
                     
                                 
                 
   
            
                   
            
                  
     
                     
   
 
                                                                            
                                    
                                                         
   
     
                                                                      
                                           
     
           
   
 
                                                                           
                                                                                
                                     
                  
          
           
         
              
   
                                                  
                                  
                
              
                
       
            
              
     
                           
           
                    
                 
             
       
                                                                                                        
       
                
                    
       
     
     
                                                                                       
     
                     
       
                             
       
                         
                
       
     
                
   
 
int dup_safer(int fd) {
  int tmp;
  {
    {
      tmp = rpl_fcntl(fd, 0, 3);
    }
    return (tmp);
  }
}
static _Bool is_zero_or_power_of_two(uintmax_t i) {
  {
    return ((_Bool)((i & (i - 1UL)) == 0UL));
  }
}
void cycle_check_init(struct cycle_check_state *state) {
  {
    state->chdir_counter = (uintmax_t)0;
    state->magic = 9827862;
    return;
  }
}
_Bool cycle_check(struct cycle_check_state *state, struct stat const *sb) {
  _Bool tmp;
  {
                                     
       
                                                                                                             
                                          
       
     
                               
                                                               
                                                                 
                            
         
       
     
     
                               
                                                          
     
    if (tmp) {
      if (state->chdir_counter == 0UL) {
        return ((_Bool)1);
      }
      state->dev_ino.st_dev = (dev_t)sb->st_dev;
      state->dev_ino.st_ino = (ino_t)sb->st_ino;
    }
                      
  }
}
int should_colorize(void);
void init_colorize(void);
void print_start_colorize(char const *sgr_start___0, char const *sgr_seq);
void print_end_colorize(char const *sgr_end___0);
int should_colorize(void) {
  char const *t;
  char const *tmp;
  int tmp___0;
  int tmp___1;
                   
  {
    {
      tmp = (char const *)getenv("TERM");
      t = tmp;
    }
    if (t) {
      {
        tmp___0 = strcmp(t, "dumb");
      }
      if (tmp___0 != 0) {
        tmp___1 = 1;
      } else {
        tmp___1 = 0;
      }
    } else {
      tmp___1 = 0;
    }
    return (tmp___1);
  }
}
void init_colorize(void) {
  {
    return;
  }
}
void print_start_colorize(char const *sgr_start___0, char const *sgr_seq) {
  {
    {
      printf((char const * /* __restrict  */)sgr_start___0, sgr_seq);
    }
    return;
  }
}
void print_end_colorize(char const *sgr_end___0) {
  {
    {
      fputs((char const * /* __restrict  */)sgr_end___0, (FILE * /* __restrict  */) stdout);
    }
    return;
  }
}
void close_stdout(void);
extern __attribute__((__noreturn__)) void _exit(int __status);
int close_stream(FILE *stream);
                             
                          
void close_stdout(void) {
                          
                  
                
               
               
              
               
  int tmp___5;
                    
  {
     
                                     
     
                       
                         
         
                                       
         
                                
                  
         
              
            
                                                   
                          
       
                        
           
                                                
                                         
                                                               
           
                
           
                                         
                                                  
           
         
         
                                   
         
       
     
    {
      tmp___5 = close_stream(stderr);
    }
                       
       
                                 
       
     
           
  }
}
extern __attribute__((__nothrow__)) size_t __fpending(FILE *__fp);
int close_stream(FILE *stream) {
  _Bool some_pending;
             
  _Bool prev_fail;
              
  _Bool fclose_fail;
              
  int *tmp___2;
  int *tmp___3;
  {
     
                               
                                         
                                        
                                        
                               
                                          
     
    if (prev_fail) {
      goto _L___0;
    } else {
      if (fclose_fail) {
        if (some_pending) {
          goto _L___0;
        } else {
          {
            tmp___3 = __errno_location();
          }
          if (*tmp___3 != 9) {
          _L___0:
            if (!fclose_fail) {
              {
                tmp___2 = __errno_location();
                *tmp___2 = 0;
              }
            }
            return (-1);
          }
        }
      }
    }
               
  }
}
int set_cloexec_flag(int desc, _Bool value) {
  int flags;
  int tmp;
               
  int tmp___0;
              
  {
    {
      tmp = rpl_fcntl(desc, 1, 0);
      flags = tmp;
    }
    if (0 <= flags) {
      if (value) {
        tmp___0 = flags | 1;
      } else {
                             
      }
                         
                              
                   
              
         
                                                 
         
                            
                     
         
       
    }
    return (-1);
  }
}
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1))) memrchr)(void const *__s,
                                                                                    int __c,
                                                                                    size_t __n) __attribute__((__pure__));
int c_tolower(int c) __attribute__((__const__));
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
int c_strcasecmp(char const *s1, char const *s2) {
  register unsigned char const *p1;
  register unsigned char const *p2;
  unsigned char c1;
  unsigned char c2;
  {
    p1 = (unsigned char const *)s1;
    p2 = (unsigned char const *)s2;
    if ((unsigned long)p1 == (unsigned long)p2) {
      return (0);
    }
    {
      while (1) {
                                      
        {
          c1 = (unsigned char)c_tolower((int)*p1);
                                                  
        }
                           
                           
         
             
             
                                    
                           
         
      }
                                     
    }
               
    return ((int)c1 - (int)c2);
  }
}
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isspace(int c) {
  int tmp;
  {
    if (c == 32) {
      tmp = 1;
    } else {
      if (c == 9) {
                
      } else {
        if (c == 10) {
          tmp = 1;
        } else {
          if (c == 11) {
            tmp = 1;
          } else {
            if (c == 12) {
              tmp = 1;
            } else {
              if (c == 13) {
                tmp = 1;
              } else {
                tmp = 0;
              }
            }
          }
        }
      }
    }
    return ((_Bool)tmp);
  }
}
int c_tolower(int c) __attribute__((__const__));
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
                                           
   
               
   
 
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist,
                   size_t valsize) __attribute__((__pure__));
                           
void argmatch_invalid(char const *context, char const *value, ptrdiff_t problem);
void argmatch_valid(char const *const *arglist, char const *vallist, size_t valsize);
ptrdiff_t __xargmatch_internal(char const *context, char const *arg, char const *const *arglist,
                               char const *vallist, size_t valsize, void (*exit_fn)(void));
extern int putc_unlocked(int __c, FILE *__stream);
__attribute__((__noreturn__)) void usage(int status);
static void __argmatch_die(void) {
  {
    {
      usage(1);
    }
    return;
  }
}
                                             
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist,
                   size_t valsize) __attribute__((__pure__));
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist,
                   size_t valsize) {
           
                
                     
                  
          
                 
              
  {
     
                               
                           
                           
                    
     
     
                 
                                      
                              
                           
         
         
                                                                       
         
                       
           
                                                           
           
                                  
                                  
                  
                                  
                                      
                    
                                                                         
                                     
                      
                 
                                                                                                                           
                                        
                 
                          
                                       
                 
               
             
           
         
            
       
                                     
     
               
                    
                             
            
                        
     
  }
}
                                                                                  
                     
            
                
                
                      
                
                    
                    
   
                         
       
                                                    
                      
       
            
       
                                                          
                          
       
     
     
                                     
                                    
                                                                  
                                            
     
           
   
 
void argmatch_valid(char const *const *arglist, char const *vallist, size_t valsize) {
  size_t i;
  char const *last_val;
  char *tmp;
                      
                      
              
                    
  {
    {
      last_val = (char const *)((void *)0);
      tmp = gettext("Valid arguments are:");
      fputs_unlocked((char const * /* __restrict  */)((char const *)tmp), (FILE * /* __restrict  */) stderr);
      i = (size_t)0;
    }
    {
      while (1) {
                                      
        if (!*(arglist + i)) {
          goto while_break;
        }
                       
           
                                                          
                                                                                                   
                             
                                             
           
                
           
                                                                                           
                                      
           
                        
             
                                                            
                                                                                                     
                               
                                               
             
                  
             
                                                            
                                                                                                 
                               
             
           
         
            
      }
                                     
    }
  while_break : {
    putc_unlocked('\n', stderr);
  }
    return;
  }
}
ptrdiff_t __xargmatch_internal(char const *context, char const *arg, char const *const *arglist,
                               char const *vallist, size_t valsize, void (*exit_fn)(void)) {
                
                
  {
     
                                                     
                
     
                    
                   
     
     
                                          
                                                
                   
     
    return ((ptrdiff_t)-1);
  }
}
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
int match_icase;
int match_words;
int match_lines;
unsigned char eolbyte;
int using_utf8(void);
void Pcompile(char const *pattern, size_t size);
size_t Pexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr);
extern pcre *pcre_compile(char const *, int, char const **, int *, unsigned char const *);
extern int pcre_exec(pcre const *, pcre_extra const *, char const *, int,
                     int, int, int *, int);
extern int pcre_fullinfo(pcre const *, pcre_extra const *, int, void *);
extern unsigned char const *pcre_maketables(void);
extern pcre_extra *pcre_study(pcre const *, int, char const **);
extern pcre_jit_stack *pcre_jit_stack_alloc(int, int);
extern void pcre_assign_jit_stack(pcre_extra *, pcre_jit_stack *(*)(void *), void *);
                 
                         
                                 
void Pcompile(char const *pattern, size_t size) {
  int e = 0;
  char const *ep = 0;
  char *re;
  char *tmp;
  int flags;
  int tmp___0;
  int tmp___2;
  int tmp___3;
  char const *patlim;
  char *n;
  char const *p;
  char const *pnul;
  char *tmp___4;
  void *tmp___5;
  size_t tmp___6;
  unsigned char const *tmp___7;
  char *tmp___8;
  int tmp___9;
  char *tmp___10;
                    
                    
                    
                    
                    
                    
                    
                    
   
     
                                                    
               
     
                      
                  
            
                  
     
     
                             
     
                  
                     
            
                  
     
     
                                      
                              
             
                                                          
     
                  
       
                                                                          
                                           
       
     
                      
                      
       
                                                                                     
       
     
                      
       
                                                                                            
       
     
     
                                        
                   
                  
     
     
                 
                                      
         
                                                                                     
         
                    
                           
         
         
                                                                                                          
                                     
                        
                   
         
         
                     
                                              
                                                            
                                                    
                                     
               
                    
                                   
             
                        
                 
                
           
                                         
         
                         
                             
                                                                                      
               
                     
       
       
                                     
     
                 
                                                                                                    
                                 
                    
                      
   
                      
       
                                                                                         
       
     
                      
       
                                                                                   
       
     
     
                                  
                                                                    
     
               
       
                              
       
     
     
                                                    
     
             
       
                              
       
     
     
                                                                                              
     
                  
       
                                                                  
                                           
       
     
            
       
                                                        
       
                       
         
                                                                                 
                                              
         
       
       
                                                                                                   
       
     
     
                       
     
           
   
}
size_t Pexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr) {
  int sub[300] = {0};
  char const *line_buf;
  char const *line_end;
  char const *line_next;
  int e;
  ptrdiff_t start_ofs;
  long tmp;
  char *tmp___0;
  ptrdiff_t tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char const *beg;
  char const *end;
  char const *buflim___0;
  char eol;
                    
                    
                    
                    
                    
                    
  {
           
                    
                            
            
               
     
                    
                    
     
                 
                                      
                      
                                                                          
                             
           
                
                           
         
         
                               
                                                                                                                   
         
                                                                    
                                
                               
                
                                   
         
                        
                                                                    
                        
           
         
                                                
           
                                                                    
                                               
           
         
                             
                                 
                
                              
         
         
                                                                                                           
                                                                                   
         
             
                                          
       
                                     
     
               
                 
                    
                        
       
                    
                        
       
                    
                        
       
                     
                         
       
                          
               
                          
                  
                                            
                                         
     
                  
                                                               
                                         
     
                   
                                                                
                                         
     
                      
                                                   
                                            
     
      return ((size_t)-1);
             
                              
                              
                              
                          
                       
         
                                                                                              
         
                  
                
                
                           
         
         
                     
                                              
                                                          
                                                                  
                                     
               
                    
                                   
             
                  
           
                                         
         
                       
       
                                        
                                   
     
  }
}
void kwsincr(kwset_t kwset___1, char const *text, size_t len);
void kwsprep(kwset_t kwset___1);
size_t(__attribute__((__nonnull__(4))) kwsexec)(kwset_t kwset___1, char const *text,
                                                size_t size, struct kwsmatch *kwsmatch);
void kwsinit(kwset_t *kwset___1);
char *mbtoupper(char const *beg, size_t *n, mb_len_map_t **len_map_p);
ptrdiff_t mb_goback(char const **mb_start, char const *cur, char const *end);
wint_t mb_prev_wc(char const *buf, char const *cur, char const *end);
wint_t mb_next_wc(char const *cur, char const *end);
void Fcompile(char const *pattern, size_t size);
size_t Fexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr);
                                  
          
              
   
                    
                  
            
       
                           
       
                
                    
              
                    
       
     
                            
   
 
static kwset_t kwset;
void Fcompile(char const *pattern, size_t size) {
  size_t total;
  mb_len_map_t *map;
  char const *pat;
  char *tmp___0;
  char const *tmp___1;
  size_t tmp___2;
  char const *p;
  size_t len;
  char const *sep;
  char const *tmp___3;
  char *buf;
  {
    total = size;
                                      
                     {
       
                                           
       
                          
         
                                                     
                                          
         
              
        tmp___1 = pattern;
       
    }       
                        
     
    {
      pat = tmp___1;
      kwsinit(&kwset);
      p = pat;
    }
    {
                {
                                     ;
         
                                                                       
                        
         
                  
                                  
                
                             
               {
          len = total;
                            
        }
                                  
                          
           
                                             
                                       
                                                                                                                    
                        
                                                 
                                  
                       
           
         
        {
          kwsincr(kwset, p, len);
                            
                  
        }
                 
                           
         
      }
                                    ;
    }
  while_break :                         {
    kwsprep(kwset);
  }
           
  }
}
                                                                                  
                  
                  
           
   
              
                           
                           
                    
       
                   
                                        
                            
                             
           
                                           
              
         
                                       
       
                 
       
                   
                                            
                                   
                                 
           
                                           
              
         
                                       
       
                    
                       
                       
     
           
   
 
size_t Fexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr) {
  char const *beg;
  char const *try;
   
  char const *end;
  char const *mb_start;
  size_t len;
  char eol;
  struct kwsmatch kwsmatch;
  size_t ret_val;
  mb_len_map_t *map;
  char *case_buf;
  char *tmp;
  size_t tmp___0;
  size_t offset;
  size_t tmp___1;
  size_t tmp___2;
  int tmp___3;
  ptrdiff_t tmp___4;
  wint_t tmp___5;
  _Bool tmp___6;
  wint_t tmp___7;
  _Bool tmp___8;
  size_t off;
                    
                    
  {
    {
      eol = (char)eolbyte;
                                        
                                         
    }
                        
                        
         
                                            
                         
         
                        
                                                                   
         
                                     
       
     
                    
                      
           {
      beg = buf;
    }
                   
    {
                {
                                     ;
                                                                   
                           
         
        {
          tmp___1 = kwsexec(kwset, beg - match_lines, (size_t)(((buf + size) - beg) + (long)match_lines),
                            &kwsmatch);
          offset = tmp___1;
        }
                                             
                       
         
                                                     
                           
           
                                               
           
                              
             
                                     
             
                           
               
                                                                         
               
                                  
                               
                            
               
             
           
         
        beg += offset;
                        
                             
                                        
           
         
                          
                                      
         
                          
             
                  
           
                       
                                                
               
                                                           
                                            
               
                            
                                     
               
               
                                                            
                                            
               
                            
                           
                                       
                 
                 
                        
                                                               
                 
                                                     
                                       
                 
                   
                                 
                                       
                      
                                 
                               
                        
                                              
                 
               
             
                                           
           
                         
               {
          goto success;
        }
             
              
      }
                                    ;
    }
               
  failure:
                            return ((size_t)-1);
  success : {
    end = (char const *)memchr((void const *)(beg + len), (int)eol, (size_t)((buf + size) - (beg + len)));
  }
                                                          {
      end++;
    }       
                       
     
     
                 
                                          
                                                      
                                                              
                                 
           
                
                               
         
              
       
                                     
     
  while_break___1:
                            len = (size_t)(end - beg);
  success_in_beg_and_len :                         {
    off = (size_t)(beg - buf);
                                                             
    *match_size = len;
    ret_val = off;
  }
    return (ret_val);
  }
}
kwset_t kwsalloc(char const *trans___0);
static unsigned char to_uchar(char ch) {
   
                               
   
}
extern void _obstack_newchunk(struct obstack *, int);
extern int _obstack_begin(struct obstack *, int, int, void *(*)(long), void (*)(void *));
static char tr(char const *trans___0, char c) {
  unsigned char tmp;
  int tmp___0;
  {
                    
       
                          
                                               
       
           {
      tmp___0 = (int)c;
    }
    return ((char)tmp___0);
  }
}
kwset_t kwsalloc(char const *trans___0) {
  struct kwset *kwset___1;
  struct kwset *tmp;
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___0;
  char *tmp___1;
  {
    {
      tmp = (struct kwset *)xmalloc(sizeof(*kwset___1));
      kwset___1 = tmp;
      _obstack_begin(&kwset___1->obstack, 0, 0, (void *(*)(long))(&xmalloc), &free);
                                      
      __h = &kwset___1->obstack;
      __o = __h;
      __len = (int)sizeof(*(kwset___1->trie));
    }
                                                          
       
                                      
       
     
    __o->next_free += __len;
    __o1 = __h;
    __value = (void *)__o1->object_base;
                                                                   
                                    
     
                                        
                                  
            
                          
     
                                        
                                  
            
                          
     
                                                                                                                             
    if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) {
      __o1->next_free = __o1->chunk_limit;
    }
    __o1->object_base = __o1->next_free;
    kwset___1->trie = (struct trie *)__value;
                                             
                                                          
                                                           
                                                         
                                                         
                                 
                                 
                                 
                         
                                            
                                 
    return (kwset___1);
  }
}
void kwsincr(kwset_t kwset___1, char const *text, size_t len) {
  struct trie *trie;
  char const *trans___0;
  unsigned char uc;
  unsigned char label___0;
  int tmp;
  struct tree *kwset_link;
  struct tree *links[12];
  enum __anonenum_dirs_58 dirs[12];
  int depth___0;
  int tmp___0;
  int tmp___1;
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___2;
  char *tmp___3;
  struct obstack *__h___0;
  struct obstack *__o___0;
  int __len___0;
  struct obstack *__o1___0;
  void *__value___0;
  char *tmp___4;
  char *tmp___5;
  struct tree *t;
  struct tree *r;
  struct tree *l;
  struct tree *rl;
  struct tree *lr;
  char tmp___6;
  char tmp___7;
  size_t tmp___8;
                    
                    
  {
    trie = kwset___1->trie;
    trans___0 = kwset___1->trans;
    text += len;
    {
      while (1) {
                                     ;
        tmp___8 = len;
        len--;
        if (!tmp___8) {
          goto while_break;
        }
        text--;
        uc = (unsigned char)*text;
        if (trans___0) {
                                            
        } else {
          tmp = (int)uc;
        }
        label___0 = (unsigned char)tmp;
        kwset_link = trie->links;
        links[0] = (struct tree *)(&trie->links);
        dirs[0] = (enum __anonenum_dirs_58)0;
        depth___0 = 1;
         
                     
                                              
                             
                                                                
                                     
               
                    
                                   
             
                                          
                                                          
                                  
                          
                                                         
                                             
                    
                                  
                          
                                                         
                                             
             
           
                                         
         
                       
        if (!kwset_link) {
          __h = &kwset___1->obstack;
          __o = __h;
          __len = (int)sizeof(*kwset_link);
          if (__o->chunk_limit - __o->next_free < (long)__len) {
            {
              _obstack_newchunk(__o, __len);
            }
          }
          __o->next_free += __len;
          __o1 = __h;
          __value = (void *)__o1->object_base;
                                                                         
                                          
           
          if (sizeof(long) < sizeof(void *)) {
                                        
          } else {
                                
          }
          if (sizeof(long) < sizeof(void *)) {
                                        
          } else {
            tmp___3 = (char *)0;
          }
                                                                                                                                   
                                                                                                
                                                
           
          __o1->object_base = __o1->next_free;
          kwset_link = (struct tree *)__value;
                                                         
                                                         
          __h___0 = &kwset___1->obstack;
                            
                                                       
          if (__o___0->chunk_limit - __o___0->next_free < (long)__len___0) {
             
                                                    
             
          }
                                          
          __o1___0 = __h___0;
          __value___0 = (void *)__o1___0->object_base;
                                                                                 
                                              
           
                                              
                                            
                  
                                
           
                                              
                                            
                  
                                
           
          __o1___0->next_free = tmp___4 + (((__o1___0->next_free - tmp___5) + (long)__o1___0->alignment_mask) & (long)(~__o1___0->alignment_mask));
          if (__o1___0->next_free - (char *)__o1___0->chunk > __o1___0->chunk_limit - (char *)__o1___0->chunk) {
            __o1___0->next_free = __o1___0->chunk_limit;
          }
                                                      
          kwset_link->trie = (struct trie *)__value___0;
                                                    
                                                                 
          (kwset_link->trie)->parent = trie;
                                                                
                                                                
          (kwset_link->trie)->depth = trie->depth + 1;
          (kwset_link->trie)->shift = 0;
          kwset_link->label = label___0;
          kwset_link->balance = (char)0;
          depth___0--;
                                                   {
            (links[depth___0])->llink = kwset_link;
          }       
                                                   
           
           
                       
                                                
                              
                                                      
                                       
                 
                      
                                     
               
                                                        
                                                                                           
                      
                                                                                           
               
                          
             
                                           
           
                         
          if (depth___0) {
                                                      
                                                                                         
                                                
                        
                      
                            
               
                    
                   
                                                        
                                                                                           
                                                  
                   
                                                               
                                    
                   
                                                              
                                
                   
                                          
                           
                                                                
                                
                   
                                                                
                                
                   
                                      
                       
                                       
                               
                                
                               
                                
                                    
                                       
                                       
                                        
                       
                                       
                               
                               
                                
                                
                               
                                
                               
                                
                                             
                                         
                          
                                          
                   
                                              
                                         
                          
                                         
                   
                                       
                                        
                                  
                          
                 
                                  
                                    
                       
                                                                
                                    
                   
                                                                
                                    
                   
                                          
                           
                                       
                               
                                
                               
                                
                                    
                                       
                                       
                                        
                           
                                       
                               
                               
                                
                                
                               
                                
                               
                                
                                             
                                         
                          
                                          
                   
                                              
                                         
                          
                                         
                   
                                       
                                        
                                      
                          
                 
                                  
                                    
                                      
                          
                 
                              
                                                                
                                                      
                          
                                                      
                   
                 
               
             
          }
        }
        trie = kwset_link->trie;
      }
                                    ;
    }
  while_break:;
    if (!trie->accepting) {
      trie->accepting = (size_t)(1L + 2L * kwset___1->words);
    }
    (kwset___1->words)++;
                                       {
      kwset___1->mind = trie->depth;
    }
                                        
                                    
     
           
  }
}
static void enqueue(struct tree *tree, struct trie **last) {
  struct trie *tmp;
  {
    if (!tree) {
      return;
    }
    {
      enqueue(tree->llink, last);
      enqueue(tree->rlink, last);
      tmp = tree->trie;
      (*last)->next = tmp;
      *last = tmp;
    }
    return;
  }
}
static void treefails(struct tree const *tree, struct trie const *fail, struct trie *recourse) {
                          
  {
    if (!tree) {
      return;
    }
    {
      treefails((struct tree const *)tree->llink, fail, recourse);
      treefails((struct tree const *)tree->rlink, fail, recourse);
    }
     
                 
                                      
                    
                           
         
                                                
         
                     
                                              
                             
                                                                              
                                     
               
                    
                                   
             
                                                                        
                                             
                    
                                             
             
           
                                         
         
                       
                         
                                                
                 
         
                                               
       
                                     
     
              
                                    
    return;
  }
}
static void treedelta(struct tree const *tree, unsigned int depth___0, unsigned char *delta) {
  {
    if (!tree) {
      return;
    }
    {
      treedelta((struct tree const *)tree->llink, depth___0, delta);
      treedelta((struct tree const *)tree->rlink, depth___0, delta);
    }
                                                                      
                                                                   
     
           
  }
}
static int __attribute__((__pure__)) hasevery(struct tree const *a, struct tree const *b) {
  int __attribute__((__pure__)) tmp;
  int __attribute__((__pure__)) tmp___0;
  {
    if (!b) {
      return ((int __attribute__((__pure__)))1);
    }
    {
      tmp = hasevery(a, (struct tree const *)b->llink);
    }
    if (!tmp) {
      return ((int __attribute__((__pure__)))0);
    }
    {
      tmp___0 = hasevery(a, (struct tree const *)b->rlink);
    }
                   
                                                
     
     
                 
                                      
                
                                                              
                             
           
                
                           
         
                                                        
                                            
                
                                            
         
       
                                     
     
  while_break:;
    return ((int __attribute__((__pure__)))(!(!a)));
  }
}
static void treenext(struct tree const *tree, struct trie **next) {
  {
    if (!tree) {
      return;
    }
    {
      treenext((struct tree const *)tree->llink, next);
      treenext((struct tree const *)tree->rlink, next);
      *(next + (int const)tree->label) = (struct trie *)tree->trie;
    }
    return;
  }
}
void kwsprep(kwset_t kwset___1) {
  char const *trans___0;
  int i;
  unsigned char deltabuf[256];
  unsigned char *delta;
  unsigned char *tmp;
  int tmp___0;
  struct trie *curr;
  struct trie *last;
  struct trie *fail;
  int __attribute__((__pure__)) tmp___1;
  struct trie *nextbuf[256];
  struct trie **next;
  struct trie **tmp___2;
  unsigned char tmp___3;
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___4;
  char *tmp___5;
  struct obstack *__h___0;
  struct obstack *__o___0;
  int __len___0;
  struct obstack *__o1___0;
  void *__value___0;
  char *tmp___6;
  char *tmp___7;
  char gc1;
  char tmp___8;
  int gc1help;
  char const *equiv1;
  char const *tmp___9;
  char const *equiv2;
  char const *tmp___10;
  unsigned char tmp___12;
  void *tmp___13;
  unsigned char tmp___14;
                    
                    
  {
    trans___0 = kwset___1->trans;
    if (trans___0) {
      tmp = deltabuf;
    } else {
      tmp = kwset___1->delta;
    }
    delta = tmp;
    if (kwset___1->mind < 255) {
      tmp___0 = kwset___1->mind;
    } else {
      tmp___0 = 255;
    }
    {
      memset((void *)delta, tmp___0, sizeof(deltabuf));
                             
                  
    }
    {
      while (1) {
                                      
        if (!curr) {
          goto while_break;
        }
        {
          enqueue(curr->links, &last);
                                        
          curr->maxshift = kwset___1->mind;
          treedelta((struct tree const *)curr->links, (unsigned int)curr->depth, delta);
          treefails((struct tree const *)curr->links, (struct trie const *)curr->fail,
                    kwset___1->trie);
          fail = curr->fail;
        }
        {
          while (1) {
                                              
            if (!fail) {
              goto while_break___0;
            }
             
                                                                                                     
             
            if (!tmp___1) {
              if (curr->depth - fail->depth < fail->shift) {
                fail->shift = curr->depth - fail->depth;
              }
            }
            if (curr->accepting) {
                                                               
                                                           
               
            }
            fail = fail->fail;
          }
                                         
        }
      while_break___0:
        curr = curr->next;
      }
                                     
    }
  while_break:
                                   
     
                 
                                          
                    
                               
         
                                                        
                                                    
         
                                           
                                       
         
                          
       
                                     
     
                   
    if (trans___0) {
      tmp___2 = nextbuf;
    } else {
      tmp___2 = kwset___1->next;
    }
     
                     
                                               
                                                                    
     
    if (trans___0) {
            
       
                   
                                            
                           
                                 
           
           
                                                       
                                                        
                
           
         
                                       
       
                     
    }
    if (kwset___1->words == 1L) {
      __h = &kwset___1->obstack;
                
                              
                                                            
         
                                        
         
       
                              
      __o1 = __h;
      __value = (void *)__o1->object_base;
                                                                     
                                      
       
                                          
                                    
              
                            
       
                                          
                                    
              
                            
       
                                                                                                                               
                                                                                            
                                            
       
                                          
      kwset___1->target = (char *)__value;
      i = kwset___1->mind - 1;
      curr = kwset___1->trie;
      {
        while (1) {
                                           ;
          if (!(i >= 0)) {
            goto while_break___3;
          }
          *(kwset___1->target + i) = (char)(curr->links)->label;
          curr = curr->next;
          i--;
        }
                                       ;
      }
    while_break___3:;
      if (kwset___1->mind > 1) {
        __h___0 = &kwset___1->obstack;
        __o___0 = __h___0;
        __len___0 = (int)(sizeof(*(kwset___1->shift)) * (unsigned long)(kwset___1->mind - 1));
        if (__o___0->chunk_limit - __o___0->next_free < (long)__len___0) {
          {
            _obstack_newchunk(__o___0, __len___0);
          }
        }
        __o___0->next_free += __len___0;
        __o1___0 = __h___0;
        __value___0 = (void *)__o1___0->object_base;
        if ((unsigned long)__o1___0->next_free == (unsigned long)__value___0) {
          __o1___0->maybe_empty_object = 1U;
        }
                                            
                                          
                
                              
         
                                            
                                          
                
                              
         
                                                                                                                                                 
                                                                                                              
                                                      
         
        __o1___0->object_base = __o1___0->next_free;
        kwset___1->shift = (int *)__value___0;
        i = 0;
        curr = (kwset___1->trie)->next;
        {
          while (1) {
                                              
            if (!(i < kwset___1->mind - 1)) {
              goto while_break___4;
            }
            *(kwset___1->shift + i) = curr->shift;
            curr = curr->next;
            i++;
          }
                                          
        }
      while_break___4:;
      }
      {
        tmp___8 = tr(trans___0, *(kwset___1->target + (kwset___1->mind - 1)));
        gc1 = tmp___8;
        gc1help = -1;
      }
      if (trans___0) {
         
                                                                                         
                           
                                                                                                                            
                            
         
        if (equiv2) {
          {
                                                                                                                
          }
          if (tmp___13) {
                          
          } else {
            {
              tmp___12 = to_uchar(gc1);
              gc1help = (int)(((long)tmp___12 ^ (equiv1 - trans___0)) ^ (equiv2 - trans___0));
            }
          }
        }
      }
      kwset___1->gc1 = gc1;
      kwset___1->gc1help = gc1help;
      if (kwset___1->mind > 1) {
        {
          kwset___1->gc2 = tr(trans___0, *(kwset___1->target + (kwset___1->mind - 2)));
        }
      }
    }
                    
            
       
                   
                                            
                           
                                 
           
           
                                                        
                                                           
                
           
         
                                        
       
                     
     
           
  }
}
static _Bool bm_delta2_search(char const **tpp, char const *ep, char const *sp,
                              int len, char const *trans___0, char gc1,
                              char gc2, unsigned char const *d1, kwset_t kwset___1) {
  char const *tp;
  int d;
  int skip;
  int i;
  char tmp;
  char tmp___0;
  char tmp___1;
  char tmp___2;
  char tmp___3;
  unsigned char tmp___4;
  char tmp___5;
  {
    tp = *tpp;
    d = len;
    skip = 0;
    {
                {
                                     ;
         
                
                                                    
         
                                      {
           
                       
                                                
                  
                              
                                     
               
               
                                                      
                                                          
               
                                             
                                     
               
             
                                           
           
                         
                      
            i = (d + skip) + 1;
             
                         
                                                  
                                  
                                       
                 
                 
                                                            
                                                            
                 
                                                   
                                       
                 
                    
               
                                             
             
                           
                         {
              *tpp = tp - len;
              return ((_Bool)1);
            }
           
        }
        d = *(kwset___1->shift + (i - 2));
                
                                                    
                           
         
         
                                                    
         
                                       
                   
             
                                                   
                                                      
             
           
                           
         
                     
      }
                                    ;
    }
              
               
                      
  }
}
static char const *memchr_kwset(char const *s, size_t n, kwset_t kwset___1) {
  char const *tmp;
  int small_heuristic;
  int small;
  size_t ntrans;
  size_t tmp___0;
  char const *slim;
  unsigned char tmp___1;
  void *tmp___2;
  void *tmp___3;
  {
                                 
      {
        tmp = (char const *)memchr((void const *)s, (int)kwset___1->gc1, n);
      }
      return (tmp);
     
                        
                                                                                                  
                                   
                              
                                
              
                    
       
            
                  
     
                     
                      
     
                 
                                      
                                                        
                           
         
         
                                       
         
                                                                                           
                     
         
            
       
                                     
     
              
                
                   
                          
            
       
                                                                                   
                             
                          
       
     
                                   
  }
}
static size_t __attribute__((__pure__)) bmexec_trans(kwset_t kwset___1,
                                                     char const *text,
                                                     size_t size) {
  unsigned char const *d1;
  char const *ep;
  char const *sp;
  char const *tp;
  int d;
  int len;
  char const *trans___0;
  long tmp;
  char gc1;
  char gc2;
  char const *tp0;
  unsigned char tmp___0;
  unsigned char tmp___1;
  unsigned char tmp___2;
  unsigned char tmp___3;
  unsigned char tmp___4;
  unsigned char tmp___5;
  unsigned char tmp___6;
  unsigned char tmp___7;
  unsigned char tmp___8;
  unsigned char tmp___9;
  int advance_heuristic;
  _Bool tmp___10;
  unsigned char tmp___11;
  unsigned char tmp___12;
  _Bool tmp___13;
  {
    len = kwset___1->mind;
    trans___0 = kwset___1->trans;
                   
                                                   
     
                             
                                                      
     
                   
       
                                                 
       
               
                        
              
                  
       
                                                     
     
    d1 = (unsigned char const *)(kwset___1->delta);
    sp = (char const *)(kwset___1->target + len);
    tp = text + len;
    gc1 = kwset___1->gc1;
    gc2 = kwset___1->gc2;
    if (size > (size_t)(12 * len)) {
      ep = (text + size) - 11 * len;
      {
        while (1) {
                                       ;
          if (!((unsigned long)tp <= (unsigned long)ep)) {
            goto while_break;
          }
           
                     
                                                 
                                          
                    
                                                 
                                          
                    
           
                      {
             
                                                   
                                            
                      
                                                   
                                            
                      
                                                   
                                            
                      
             
                         
               
                                                     
                                              
                        
                                                     
                                              
                        
                                                     
                                              
                        
               
                           
                 
                                                       
                                                
                          
                                                       
                                                
                          
                                                                 
                 
                                                          
                                   
                 
                {
                       
                  tp = memchr_kwset(tp, (size_t)((text + size) - tp), kwset___1);
                }
                          
                                                                  
                 
                tp++;
               
             
          }
          {
            tmp___10 = bm_delta2_search(&tp, ep, sp, len, trans___0, gc1, gc2, d1, kwset___1);
          }
                        {
            return ((size_t __attribute__((__pure__)))(tp - text));
          }
                     
        }
                                      ;
      }
    while_break:;
    }
    {
      ep = text + size;
                                            
                                     
    }
    {
      while (1) {
                                          
      while_continue___0:;
        if (!((long)d <= ep - tp)) {
          goto while_break___0;
        }
        {
          tp += d;
          tmp___12 = to_uchar((char)*(tp + -1));
          d = (int)*(d1 + (int)tmp___12);
        }
        if (d != 0) {
          goto while_continue___0;
        }
        {
          tmp___13 = bm_delta2_search(&tp, ep, sp, len, trans___0, gc1, gc2, (unsigned char const *)((void *)0),
                                      kwset___1);
        }
        if (tmp___13) {
          return ((size_t __attribute__((__pure__)))(tp - text));
        }
      }
                                     
    }
  while_break___0:;
    return ((size_t __attribute__((__pure__))) - 1);
  }
}
static size_t bmexec(kwset_t kwset___1, char const *text, size_t size) {
  size_t __attribute__((__pure__)) tmp;
  size_t __attribute__((__pure__)) tmp___0;
  size_t __attribute__((__pure__)) tmp___1;
  {
                           
       
                                                  
                      
       
           {
       
        tmp___0 = bmexec_trans(kwset___1, text, size);
        tmp___1 = tmp___0;
       
    }
    return ((size_t)tmp___1);
  }
}
                                                                                          
                                                                                              
                           
                          
                            
                  
                  
                  
                   
                  
                             
        
                  
                   
                          
                        
                    
                        
                   
                       
   
                                        
                          
     
                                                   
                                                      
                                 
                     
               
                        
                 
                                      
            
                 
                                                    
                 
     
                                               
                                       
            
                                       
     
     
                 
                                          
                      
                                      
                           
         
                   
                                                          
                         
             
                         
                                                  
                                        
                                           
                        
                                                                    
                                         
                   
                        
                                       
                 
                 
                           
                                             
                                                          
                                                 
                                                              
                 
               
                                             
             
                          
                  
                  
                     
                                           
                                       
           
                
                   
                                         
                                     
         
                
                              
         
                      
                                                     
                              
                    
                        
         
                             
         
                     
                                              
                                                              
                                   
             
                  
                                     
                            
                                                        
                    
                     
             
                                                    
             
                         
                                                  
                           
                                                      
                                         
                   
                        
                                       
                 
                                                
                                                          
                        
                                                          
                 
               
                                             
             
                           
                       
                                                     
                                    
                          
                              
               
                    
                                   
             
                                 
           
                                         
         
                       
                  
                     
         
       
                                     
     
               
                        
        
                                            
                                  
     
                           
          
     
                 
                                          
                          
                                      
                               
         
                 
                                       
                                   
                     
                                  
         
                      
                                                     
                    
                
                                  
         
                              
                                                         
                       
                          
           
         
                             
         
                     
                                              
                                                              
                                   
             
                  
                                         
                            
                                                            
                    
                         
             
                                                    
             
                         
                                                   
                           
                                                      
                                         
                   
                        
                                       
                 
                                                
                                                          
                        
                                                          
                 
               
                                              
             
                           
                       
                                                     
                                    
                                                               
                             
                                
                 
               
                    
                                   
             
                                 
           
                                          
         
                       
                   
                     
                     
         
                 
                
         
       
                                      
     
                  
                                                        
                                               
                                              
                                  
   
 
size_t(__attribute__((__nonnull__(4))) kwsexec)(kwset_t kwset___1, char const *text,
                                                size_t size, struct kwsmatch *kwsmatch) {
  size_t ret;
  size_t tmp;
  size_t tmp___0;
  {
                                 
      {
        tmp = bmexec(kwset___1, text, size);
        ret = tmp;
      }
                                        
                                    
                                  
                                                    
       
      return (ret);
                  
       
                                                          
       
                       
     
  }
}
extern reg_syntax_t re_set_syntax(reg_syntax_t __syntax);
extern char const *re_compile_pattern(char const *__pattern, size_t __length,
                                      struct re_pattern_buffer *__buffer);
extern regoff_t re_search(struct re_pattern_buffer *__buffer, char const *__string,
                          __re_idx_t __length, __re_idx_t __start, regoff_t __range,
                          struct re_registers *__regs);
extern regoff_t re_match(struct re_pattern_buffer *__buffer, char const *__string,
                         __re_idx_t __length, __re_idx_t __start, struct re_registers *__regs);
struct dfa *dfaalloc(void);
struct dfamust *__attribute__((__pure__)) dfamusts(struct dfa const *d);
void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol);
void dfacomp(char const *s, size_t len, struct dfa *d, int searchflag);
char *dfaexec(struct dfa *d, char const *begin, char *end, int allow_nl, size_t *count,
              int *backref);
struct dfa *dfasuperset(struct dfa const *d) __attribute__((__pure__));
_Bool dfaisfast(struct dfa const *d) __attribute__((__pure__));
void dfawarn(char const *mesg);
__attribute__((__noreturn__)) void dfaerror(char const *mesg);
void GEAcompile(char const *pattern, size_t size, reg_syntax_t syntax_bits___0);
size_t EGexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr);
static _Bool wordchar___0(wint_t wc) {
          
              
   
                    
                  
            
       
                           
       
                
                    
              
                    
       
     
                            
   
}
static kwset_t kwset___0;
static struct dfa *dfa;
                                 
static struct patterns *patterns;
static size_t pcount;
                                  
                     
__attribute__((__noreturn__)) void dfaerror(char const *mesg);
void dfaerror(char const *mesg) {
   
     
                              
              
     
   
}
                                    
void dfawarn(char const *mesg) {
  char *tmp___0;
                   
   
                                   
       
                                            
       
                    
                                          
              
                                          
       
     
                                   
       
                       
       
     
           
   
}
static void kwsmusts(void) {
  struct dfamust const *dm;
  struct dfamust const *tmp;
                 
                 
                 
                 
                
           
                 
  {
    {
      tmp = (struct dfamust const *)dfamusts((struct dfa const *)dfa);
      dm = tmp;
    }
    if (dm) {
      {
        kwsinit(&kwset___0);
      }
       
                   
                                        
                    
                             
           
                           
                        
           
           
                                  
                                                     
                              
                                                                            
                                               
                               
                          
                                
                                         
                                                               
                                                                                                                    
                            
           
                            
                                            
           
           
                                                                
                                   
           
               
                                                
         
                                       
       
                    
                                                                     
     
       
                   
                                            
                    
                                 
           
                          
                            
           
           
                                                     
                                                                
           
                   
                                                
         
                                       
       
                        
                         
     
    }
    return;
  }
}
                                                                                             
                                                                                             
static char const word_beg_no_bk[19] =
    {(char const)'(', (char const)'^', (char const)'|', (char const)'[',
     (char const)'^', (char const)'[', (char const)':', (char const)'a',
     (char const)'l', (char const)'n', (char const)'u', (char const)'m',
     (char const)':', (char const)']', (char const)'_', (char const)']',
     (char const)')', (char const)'(', (char const)'\000'};
static char const word_end_no_bk[19] =
    {(char const)')', (char const)'(', (char const)'[', (char const)'^',
     (char const)'[', (char const)':', (char const)'a', (char const)'l',
     (char const)'n', (char const)'u', (char const)'m', (char const)':',
     (char const)']', (char const)'_', (char const)']', (char const)'|',
     (char const)'$', (char const)')', (char const)'\000'};
static char const line_beg_bk[4] = {(char const)'^', (char const)'\\', (char const)'(', (char const)'\000'};
static char const line_end_bk[4] = {(char const)'\\', (char const)')', (char const)'$', (char const)'\000'};
static char const word_beg_bk[23] =
    {(char const)'\\', (char const)'(', (char const)'^', (char const)'\\',
     (char const)'|', (char const)'[', (char const)'^', (char const)'[',
     (char const)':', (char const)'a', (char const)'l', (char const)'n',
     (char const)'u', (char const)'m', (char const)':', (char const)']',
     (char const)'_', (char const)']', (char const)'\\', (char const)')',
     (char const)'\\', (char const)'(', (char const)'\000'};
static char const word_end_bk[23] =
    {(char const)'\\', (char const)')', (char const)'\\', (char const)'(',
     (char const)'[', (char const)'^', (char const)'[', (char const)':',
     (char const)'a', (char const)'l', (char const)'n', (char const)'u',
     (char const)'m', (char const)':', (char const)']', (char const)'_',
     (char const)']', (char const)'\\', (char const)'|', (char const)'$',
     (char const)'\\', (char const)')', (char const)'\000'};
void GEAcompile(char const *pattern, size_t size, reg_syntax_t syntax_bits___0) {
  size_t total;
  char *motif;
  char const *p;
  size_t len;
  char const *sep;
  char const *tmp;
  char const *err;
  char const *tmp___0;
  int bk;
  char *n;
  char *tmp___1;
  char const *tmp___2;
  char const *tmp___3;
  char const *tmp___4;
  char const *tmp___5;
  char const *tmp___6;
  char const *tmp___7;
  size_t tmp___8;
  {
    total = size;
    if (match_icase) {
      syntax_bits___0 |= (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1;
    }
    {
      re_set_syntax(syntax_bits___0);
      dfasyntax(syntax_bits___0, match_icase, eolbyte);
      p = pattern;
    }
    {
      while (1) {
                                     ;
        {
          tmp = (char const *)memchr((void const *)p, '\n', total);
          sep = tmp;
        }
                  
                                  
                
                             
               {
          len = total;
                            
        }
        {
          patterns = (struct patterns *)xnrealloc((void *)patterns, pcount + 1UL, sizeof(*patterns));
                                           
          tmp___0 = re_compile_pattern(p, len, &(patterns + pcount)->regexbuf);
                        
        }
                  
           
                                   
           
         
        pcount++;
        p = sep;
        if (!p) {
          goto while_break;
        }
      }
                                    ;
    }
  while_break:;
    if (match_words) {
      goto _L;
    } else {
      if (match_lines) {
      _L :                         {
                                                                                                                                 
        tmp___1 = (char *)xmalloc(((sizeof(word_beg_bk) - 1UL) + size) + sizeof(word_end_bk));
        n = tmp___1;
      }
        if (match_lines) {
                  {
            tmp___2 = line_beg_bk;
          }       
                                     
           
          tmp___4 = tmp___2;
        } else {
          if (bk) {
            tmp___3 = word_beg_bk;
          } else {
            tmp___3 = word_beg_no_bk;
          }
          tmp___4 = tmp___3;
        }
        {
          strcpy((char * /* __restrict  */)n, (char const * /* __restrict  */)tmp___4);
          total = strlen((char const *)n);
          memcpy((void * /* __restrict  */)((void *)(n + total)), (void const * /* __restrict  */)((void const *)pattern),
                 size);
          total += size;
        }
        if (match_lines) {
          if (bk) {
            tmp___5 = line_end_bk;
          } else {
                                     
          }
          tmp___7 = tmp___5;
        } else {
          if (bk) {
            tmp___6 = word_end_bk;
          } else {
            tmp___6 = word_end_no_bk;
          }
          tmp___7 = tmp___6;
        }
        {
          strcpy((char * /* __restrict  */)(n + total), (char const * /* __restrict  */)tmp___7);
          tmp___8 = strlen((char const *)(n + total));
          total += tmp___8;
          motif = n;
          pattern = (char const *)motif;
          size = total;
        }
      } else {
        motif = (char *)((void *)0);
      }
    }
    {
      dfa = dfaalloc();
      dfacomp(pattern, size, dfa, 1);
      kwsmusts();
      free((void *)motif);
    }
    return;
  }
}
size_t EGexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr) {
  char const *buflim___0;
  char const *beg;
  char const *end;
  char const *ptr;
  char const *match;
  char const *best_match;
  char const *mb_start;
  char eol;
  int backref;
  regoff_t start;
  size_t len;
  size_t best_len;
  struct kwsmatch kwsm;
  size_t i;
  struct dfa *superset;
  struct dfa *tmp;
  _Bool dfafast;
  _Bool tmp___0;
  char const *next_beg;
  char const *dfa_beg;
  size_t count;
  _Bool exact_kwset_match;
  char const *prev_beg;
  size_t offset;
  size_t tmp___1;
  long tmp___4;
  char const *tmp___5;
  long tmp___6;
  long tmp___7;
  size_t tmp___8;
  int tmp___9;
  ptrdiff_t tmp___10;
  regoff_t shorter_len;
  wint_t tmp___11;
  _Bool tmp___12;
  wint_t tmp___13;
  _Bool tmp___14;
  size_t off;
                    
                    
  {
    {
      eol = (char)eolbyte;
      tmp = dfasuperset((struct dfa const *)dfa);
      superset = tmp;
      tmp___0 = dfaisfast((struct dfa const *)dfa);
                        
                     
      buflim___0 = buf + size;
      end = buf;
      beg = end;
    }
    {
      while (1) {
                                     ;
        if (!((unsigned long)end < (unsigned long)buflim___0)) {
          goto while_break;
        }
        end = buflim___0;
        if (!start_ptr) {
          dfa_beg = beg;
          count = (size_t)0;
                                       
                          
             
                                                                                                            
                                       
                               
             
                                                 
                           
             
             
                                   
                             
                                                                                              
             
                      
                    
                    
                        
             
                          
                                                                          
                                    
                          
                    
                             
                            
                      
                                        
                                
                        
                                        
                 
                                                     
                              
                        
                                          
                                  
                          
                                          
                   
                                                            
                                            
                                    
                            
                                            
                     
                                                      
                          
                                         
                   
                                
                 
               
             
             
                                                                                                  
             
                      
                    
                    
                               
             
                                    
               
                                                   
               
                                   
                             
                      
                 
                                         
                 
                              
                               
                 
               
                                                                 
                               
               
               
                                                                   
               
                                   
                             
               
                                 
             
           
                         
                                     
               
                           
                                                    
                   
                                                                                       
                                                                                 
                   
                                 
                                                                        
                                            
                                             
                       
                            
                                           
                     
                          
                                         
                   
                   
                                      
                                                                                                       
                          
                                  
                   
                 
                                               
               
                             
                                                                          
                            
                      
                                                                    
                              
                 
               
               
                                                                                                              
               
                        
                      
                      
                                 
               
             
           
          {
            next_beg = (char const *)dfaexec(dfa, dfa_beg, (char *)end, 0, &count, &backref);
          }
          if ((unsigned long)next_beg == (unsigned long)((void *)0)) {
            goto __Cont;
          } else {
                                                                
                          
             
          }
          if (count != 0UL) {
             
              beg = (char const *)memrchr((void const *)buf, (int)eol, (size_t)(next_beg - buf));
              beg++;
             
          }
          {
            end = (char const *)memchr((void const *)next_beg, (int)eol, (size_t)(buflim___0 - next_beg));
          }
          if (end) {
            end++;
          } else {
            end = buflim___0;
          }
          if (!backref) {
            goto success;
          }
          ptr = beg;
        } else {
          ptr = start_ptr;
        }
        if ((long)(((1 << (sizeof(regoff_t) * 8UL - 2UL)) - 1) * 2 + 1) < (end - beg) - 1L) {
          {
            xalloc_die();
          }
        }
        best_match = end;
        best_len = (size_t)0;
        i = (size_t)0;
        {
          while (1) {
                                             ;
            if (!(i < pcount)) {
              goto while_break___1;
            }
            {
              (patterns + i)->regexbuf.not_eol = 0U;
              start = re_search(&(patterns + i)->regexbuf, beg, (__re_idx_t)((end - beg) - 1L),
                                (__re_idx_t)(ptr - beg), (regoff_t)((end - ptr) - 1L), &(patterns + i)->regs);
              __msan_unpoison((patterns + i)->regs.end, 100);
            }
            if (start < -1) {
              {
                             
              }
            } else {
              if (0 <= start) {
                len = (size_t)(*((patterns + i)->regs.end + 0) - start);
                match = beg + start;
                if ((unsigned long)match > (unsigned long)best_match) {
                  goto __Cont___0;
                }
                if (start_ptr) {
                  if (!match_words) {
                    goto assess_pattern_match;
                  }
                }
                if (!match_lines) {
                  if (!match_words) {
                                
                                              
                                              
                  } else {
                    goto _L;
                  }
                } else {
                _L:
                  if (match_lines) {
                    if (len == (size_t)((end - ptr) - 1L)) {
                      match = ptr;
                      len = (size_t)(end - ptr);
                                                
                    }
                  }
                }
                                  
                   
                               
                                                        
                                                                                 
                                             
                       
                       
                                        
                                                                   
                                                          
                       
                                      
                         
                                                                      
                                                            
                         
                                        
                                                    
                         
                       
                                      
                         
                                
                                                                
                                                                                                                   
                                                                                                   
                         
                                               
                           
                                         
                           
                         
                       
                                            
                                                  
                              
                                                                               
                                               
                         
                         
                                  
                                                                
                                                                                                           
                                                                                                      
                                                                   
                         
                                        
                                           
                             
                                           
                             
                           
                                               
                         
                                                                                
                                            
                       
                     
                                                   
                   
                                 
                 
                                
              assess_pattern_match:
                if (!start_ptr) {
                  goto success;
                }
                if ((unsigned long)match < (unsigned long)best_match) {
                  best_match = match;
                  best_len = len;
                } else {
                  if ((unsigned long)match == (unsigned long)best_match) {
                                         
                                         
                                     
                     
                  }
                }
              }
            }
          __Cont___0:
            i++;
          }
                                        ;
        }
      while_break___1:;
        if ((unsigned long)best_match < (unsigned long)end) {
          beg = best_match;
          len = best_len;
          goto success_in_len;
        }
      __Cont:
        beg = end;
      }
                                    ;
    }
  while_break:;
          
    return ((size_t)-1);
  success:
    len = (size_t)(end - beg);
  success_in_len:
    off = (size_t)(beg - buf);
    *match_size = len;
    return (off);
  }
}
void dfafree(struct dfa *d);
void dfainit(struct dfa *d);
void dfaparse(char const *s, size_t len, struct dfa *d);
void dfaanalyze(struct dfa *d, int searchflag);
void dfastate(ptrdiff_t s, struct dfa *d, ptrdiff_t *trans___0);


























static unsigned char to_uchar___0(char ch) {
   
    return ((unsigned char)ch);
   
}
static void dfamust(struct dfa *d);
static void regexp(void);
static void dfambcache(struct dfa *d) {
  int i;
  char c;
  unsigned char uc;
  mbstate_t s;
  wchar_t wc;
  size_t tmp___0;
                   
  {
    i = -128;
    {
      while (1) {
                                      
        if (!(i <= 127)) {
          goto while_break;
        }
        {
          c = (char)i;
          uc = (unsigned char)i;
          s.__count = 0;
          s.__value.__wch = 0U;
          tmp___0 = mbrtowc((wchar_t * /* __restrict  */)(&wc), (char const * /* __restrict  */)((char const *)(&c)),
                            (size_t)1, (mbstate_t * /* __restrict  */)(&s));
        }
        if (tmp___0 <= 1UL) {
          d->mbrtowc_cache[uc] = (wint_t)wc;
        } else {
          d->mbrtowc_cache[uc] = 4294967295U;
        }
        i++;
      }
                                     
    }
  while_break:;
    return;
  }
}
static size_t mbs_to_wchar(wint_t *pwc, char const *s, size_t n, struct dfa *d) {
  unsigned char uc;
  wint_t wc;
  wchar_t wch;
  size_t nbytes;
  size_t tmp;
  {
    uc = (unsigned char)*(s + 0);
    wc = d->mbrtowc_cache[uc];
    if (wc == 4294967295U) {
      {
        tmp = mbrtowc((wchar_t * /* __restrict  */)(&wch), (char const * /* __restrict  */)s,
                      n, (mbstate_t * /* __restrict  */)(&d->mbs));
        nbytes = tmp;
      }
                         
                                            
                             
                          
         
       
       
                                                     
       
    }
    *pwc = wc;
    return ((size_t)1);
  }
}
static _Bool tstbit(unsigned int b, charclass_word *const c) {
  {
    return ((_Bool)((*(c + b / 32U) >> b % 32U) & 1U));
  }
}
static void setbit(unsigned int b, charclass_word *c) {
   
    *(c + b / 32U) |= 1U << b % 32U;
           
   
}
static void clrbit(unsigned int b, charclass_word *c) {
   
                                       
           
   
}
static void copyset(charclass_word *const src, charclass_word *dst) {
   
     
      memcpy((void * /* __restrict  */)((void *)dst), (void const * /* __restrict  */)((void const *)src),
             sizeof(charclass));
     
           
   
}
static void zeroset(charclass_word *s) {
   
     
      memset((void *)s, 0, sizeof(charclass));
     
           
   
}
static void notset(charclass_word *s) {
  int i;
  {
    i = 0;
    {
      while (1) {
                                     ;
        if (!(i < 8)) {
          goto while_break;
        }
        *(s + i) = (((1U << 31) << 1) - 1U) & ~*(s + i);
        i++;
      }
                                    ;
    }
  while_break:;
           
  }
}
static _Bool equal(charclass_word *const s1, charclass_word *const s2) {
  int tmp;
  {
    {
      tmp = memcmp((void const *)s1, (void const *)s2, sizeof(charclass));
    }
    return ((_Bool)(tmp == 0));
  }
}
static void *maybe_realloc(void *ptr, size_t nitems, size_t *nalloc, size_t itemsize) {
  void *tmp;
  {
    if (nitems < *nalloc) {
      return (ptr);
    }
    {
                       
      tmp = x2nrealloc(ptr, nalloc, itemsize);
    }
    return (tmp);
  }
}
static size_t dfa_charclass_index(struct dfa *d, charclass_word *const s) {
  size_t i;
  _Bool tmp;
  {
    i = (size_t)0;
    {
      while (1) {
                                     ;
        if (!(i < d->cindex)) {
          goto while_break;
        }
         
                                                                                 
         
                  
                     
         
        i++;
      }
                                    ;
    }
  while_break : {
    d->charclasses = (charclass *)maybe_realloc((void *)d->charclasses, d->cindex, &d->calloc,
                                                sizeof(*(d->charclasses)));
    (d->cindex)++;
    copyset(s, *(d->charclasses + i));
  }
    return (i);
  }
}
static struct dfa *dfa___0;
static size_t charclass_index(charclass_word *const s) {
  size_t tmp;
  {
    {
      tmp = dfa_charclass_index(dfa___0, s);
    }
    return (tmp);
  }
}
static reg_syntax_t syntax_bits;
static reg_syntax_t syntax_bits_set;
static _Bool case_fold;
static unsigned char eolbyte___0;
static int sbit[256];
static charclass letters;
                         
static int char_context(unsigned char c) {
  unsigned short const **tmp;
  {
    if ((int)c == (int)eolbyte___0) {
      return (4);
    }
     
                            
     
                                            
                 
            
                         
                   
       
     
    return (1);
  }
}
static int wchar_context(wint_t wc) {
  int tmp;
  {
    if (wc == (wint_t)((wchar_t)eolbyte___0)) {
      return (4);
    } else {
      if (wc == 0U) {
        return (4);
      }
    }
    if (wc == 95U) {
      return (2);
    } else {
       
                           
       
      if (tmp) {
        return (2);
      }
    }
    return (1);
  }
}
void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol) {
  unsigned int i;
  {
    syntax_bits_set = (reg_syntax_t)1;
    syntax_bits = bits;
    case_fold = (_Bool)(fold != 0);
    eolbyte___0 = eol;
    i = 0U;
    {
      while (1) {
                                     ;
        if (!(i < 256U)) {
          goto while_break;
        }
        {
          sbit[i] = char_context((unsigned char)i);
        }
        if (sbit[i] == 2) {
          goto case_2;
        }
                           
                      
         
                          
      case_2 :                      {
        setbit(i, letters);
      }
                          
                
                           
       
                          
      switch_break:
                             i++;
      }
                                    ;
    }
  while_break:;
    return;
  }
}
static _Bool setbit_wc(wint_t wc, charclass_word *c) {
  int b;
  int tmp;
  {
     
                      
              
     
                  
      return ((_Bool)0);
     
     
                                 
     
                      
  }
}
static void setbit_case_fold_c(int b, charclass_word *c) {
  int ub;
  int tmp;
  int i;
  int tmp___0;
  {
    {
      tmp = toupper(b);
      ub = tmp;
      i = 0;
    }
    {
      while (1) {
                                     ;
        if (!(i < 256)) {
          goto while_break;
        }
        {
          tmp___0 = toupper(i);
        }
        if (tmp___0 == ub) {
           
            setbit((unsigned int)i, c);
           
        }
        i++;
      }
                                    ;
    }
  while_break:;
           
  }
}
static int utf8 = -1;
int using_utf8(void) {
  wchar_t wc;
  mbstate_t mbs;
  size_t tmp;
  int tmp___0;
                   
  {
    if (utf8 < 0) {
      {
        mbs.__count = 0;
        mbs.__value.__wch = 0U;
        tmp = mbrtowc((wchar_t * /* __restrict  */)(&wc), (char const * /* __restrict  */) "\304\200",
                      (size_t)2, (mbstate_t * /* __restrict  */)(&mbs));
      }
      if (tmp == 2UL) {
        if (wc == 256) {
          tmp___0 = 1;
        } else {
          tmp___0 = 0;
        }
      } else {
        tmp___0 = 0;
      }
      utf8 = tmp___0;
    }
    return (utf8);
  }
}
static _Bool using_simple_locale(void);
static int unibyte_c = -1;
static _Bool using_simple_locale(void) {
  char const *locale;
  char const *tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  {
                             
                        
            
                          
         
                                                                      
                       
         
                      
                      
                
           
                                          
           
                             
                        
                  
             
                                                
             
                               
                          
                    
                          
             
           
         
                            
       
      return ((_Bool)unibyte_c);
     
  }
}
static char const *lexptr;
static size_t lexleft;
static token lasttok;
static _Bool laststart;
static size_t parens;
static int minrep;
static int maxrep;
static int cur_mb_len = 1;
static wint_t wctok;
static short const lonesome_lower[19] =
    {(short const)181, (short const)305, (short const)383, (short const)453,
     (short const)456, (short const)459, (short const)498, (short const)837,
     (short const)962, (short const)976, (short const)977, (short const)981,
     (short const)982, (short const)1008, (short const)1009, (short const)1010,
     (short const)1013, (short const)7835, (short const)8126};
static int case_folded_counterparts(wchar_t c, wchar_t *folded) {
  int i;
  int n;
  wint_t uc;
  wint_t tmp;
  wint_t lc;
  wint_t tmp___0;
              
  int tmp___2;
  wint_t tmp___3;
  wint_t li;
  int tmp___4;
  wint_t tmp___5;
  {
    {
      n = 0;
      tmp = towupper((wint_t)c);
      uc = tmp;
      tmp___0 = towlower(uc);
      lc = tmp___0;
    }
                          
                  
          
                                        
     
    if (lc != uc) {
      if (lc != (wint_t)c) {
        {
          tmp___3 = towupper(lc);
        }
        if (tmp___3 == uc) {
          tmp___2 = n;
          n++;
          *(folded + tmp___2) = (wchar_t)lc;
        }
      }
    }
    i = 0;
    {
      while (1) {
                                      
        if (!((unsigned long)i < sizeof(lonesome_lower) / sizeof(lonesome_lower[0]))) {
          goto while_break;
        }
        li = (wint_t)lonesome_lower[i];
        if (li != lc) {
          if (li != uc) {
            if (li != (wint_t)c) {
              {
                tmp___5 = towupper(li);
              }
              if (tmp___5 == uc) {
                tmp___4 = n;
                n++;
                                                  
              }
            }
          }
        }
        i++;
      }
                                     
    }
  while_break:;
    return (n);
  }
}
static struct dfa_ctype const prednames[13] =
    {{"alpha", &isalpha, (_Bool)0},
     {"upper", &isupper, (_Bool)0},
     {"lower", &islower, (_Bool)0},
     {"digit", &isdigit, (_Bool)1},
     {"xdigit", &isxdigit, (_Bool)0},
     {"space", &isspace, (_Bool)0},
     {"punct", &ispunct, (_Bool)0},
     {"alnum", &isalnum, (_Bool)0},
     {"print", &isprint, (_Bool)0},
     {"graph", &isgraph, (_Bool)0},
     {"cntrl", &iscntrl, (_Bool)0},
     {"blank", &isblank, (_Bool)0},
     {(char const *)((void *)0), (predicate *)((void *)0), (_Bool)0}};
static struct dfa_ctype const *__attribute__((__pure__)) find_pred(char const *str) {
  unsigned int i;
  int tmp;
  {
           
     
                 
                                      
                                 
                           
         
         
                                                             
         
                       
                           
         
            
       
                                     
     
               
    return ((struct dfa_ctype const * /* __attribute__((__pure__)) */)(&prednames[i]));
  }
}
static charclass zeroclass;
static token parse_bracket_exp(void) {
  _Bool invert;
  int c;
  int c1;
  int c2;
  charclass ccl;
  _Bool known_bracket_exp;
  int colon_warning_state;
  wint_t wc;
  wint_t wc2;
  wint_t wc1;
  struct mb_char_classes *work_mbc;
  size_t chars_al;
  size_t ranges_al;
  size_t ch_classes_al;
  size_t equivs_al;
  size_t coll_elems_al;
  size_t tmp;
  char *tmp___0;
  char *tmp___1;
  wint_t _wc;
  size_t nbytes;
  size_t tmp___2;
  unsigned char tmp___3;
  char *tmp___4;
  char *tmp___5;
  wint_t _wc___0;
  size_t nbytes___0;
  size_t tmp___6;
  unsigned char tmp___7;
  char *tmp___8;
  char *tmp___9;
  wint_t _wc___1;
  size_t nbytes___1;
  size_t tmp___10;
  unsigned char tmp___11;
  char str[33];
  size_t len;
  char *tmp___12;
  char *tmp___13;
  wint_t _wc___2;
  size_t nbytes___2;
  size_t tmp___14;
  unsigned char tmp___15;
  size_t tmp___16;
  char *tmp___17;
  char *tmp___18;
  wint_t _wc___3;
  size_t nbytes___3;
  size_t tmp___19;
  unsigned char tmp___20;
  char const *class;
  char const *tmp___23;
  int tmp___24;
  int tmp___25;
  struct dfa_ctype const *pred;
  struct dfa_ctype const *tmp___26;
  char *tmp___27;
  wctype_t wt;
  wctype_t tmp___28;
  size_t tmp___29;
  int tmp___30;
  char *tmp___31;
  char *tmp___32;
  wint_t _wc___4;
  size_t nbytes___4;
  size_t tmp___33;
  unsigned char tmp___34;
  char *tmp___35;
  char *tmp___36;
  wint_t _wc___5;
  size_t nbytes___5;
  size_t tmp___37;
  unsigned char tmp___38;
  char *tmp___39;
  char *tmp___40;
  wint_t _wc___6;
  size_t nbytes___6;
  size_t tmp___41;
  unsigned char tmp___42;
  char *tmp___43;
  char *tmp___44;
  wint_t _wc___7;
  size_t nbytes___7;
  size_t tmp___45;
  unsigned char tmp___46;
  char *tmp___47;
  char *tmp___48;
  wint_t _wc___8;
  size_t nbytes___8;
  size_t tmp___49;
  unsigned char tmp___50;
  wint_t tmp___51;
  size_t tmp___52;
  wint_t tmp___53;
  size_t tmp___54;
  int tmp___55;
  int tmp___56;
  int uc;
  int tmp___57;
  int uc2;
  int tmp___58;
  int uc1;
  int tmp___59;
  _Bool tmp___60;
  char *tmp___61;
  char *tmp___62;
  wint_t _wc___9;
  size_t nbytes___9;
  size_t tmp___63;
  unsigned char tmp___64;
  int tmp___65;
  wchar_t folded[22];
  int i;
  int n;
  int tmp___66;
  int tmp___67;
  size_t tmp___68;
  _Bool tmp___69;
  char *tmp___70;
  size_t tmp___72;
  _Bool tmp___73;
  size_t tmp___74;
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
  {
    known_bracket_exp = (_Bool)1;
    wc1 = (wint_t)0;
    coll_elems_al = (size_t)0;
    equivs_al = coll_elems_al;
    ch_classes_al = equivs_al;
    ranges_al = ch_classes_al;
    chars_al = ranges_al;
    if (dfa___0->multibyte) {
       
        dfa___0->mbcsets = (struct mb_char_classes *)maybe_realloc((void *)dfa___0->mbcsets,
                                                                   dfa___0->nmbcsets,
                                                                   &dfa___0->mbcsets_alloc,
                                                                   sizeof(*(dfa___0->mbcsets)));
        tmp = dfa___0->nmbcsets;
        (dfa___0->nmbcsets)++;
        work_mbc = dfa___0->mbcsets + tmp;
        memset((void *)work_mbc, 0, sizeof(*work_mbc));
       
    } else {
      work_mbc = (struct mb_char_classes *)((void *)0);
    }
    {
      memset((void *)(ccl), 0, sizeof(ccl));
    }
    {
      while (1) {
                                     ;
        if (!lexleft) {
          {
            tmp___1 = gettext("unbalanced [");
          }
          if ((unsigned long)tmp___1 != (unsigned long)((char *)0)) {
            {
                                                
                                              
            }
          } else {
                                
            return (lasttok);
          }
        } else {
          {
            tmp___2 = mbs_to_wchar(&_wc, lexptr, lexleft, dfa___0);
            nbytes = tmp___2;
            cur_mb_len = (int)nbytes;
            wc = _wc;
          }
                             {
             
              tmp___3 = to_uchar___0((char)*lexptr);
              c = (int)tmp___3;
             
          }       
                   
           
          lexptr += nbytes;
          lexleft -= nbytes;
        }
        goto while_break;
      }
                                     ;
    }
  while_break:;
    if (c == 94) {
      {
                  {
                                           ;
                         
             
                                                
             
                                                                       
               
                                                  
                                                
               
                    
                                  
                               
             
                 {
            {
              tmp___6 = mbs_to_wchar(&_wc___0, lexptr, lexleft, dfa___0);
              nbytes___0 = tmp___6;
              cur_mb_len = (int)nbytes___0;
              wc = _wc___0;
            }
                                   {
               
                tmp___7 = to_uchar___0((char)*lexptr);
                c = (int)tmp___7;
               
            }       
                     
             
            lexptr += nbytes___0;
            lexleft -= nbytes___0;
          }
          goto while_break___0;
        }
                                       ;
      }
    while_break___0 : {
      invert = (_Bool)1;
      known_bracket_exp = using_simple_locale();
    }
    } else {
      invert = (_Bool)0;
    }
    colon_warning_state = c == 58;
    {
      while (1) {
                                         ;
        c1 = 256;
        colon_warning_state &= -3;
        if (c == 91) {
          {
                      {
                                               ;
                             
                 
                                                    
                 
                                                                           
                   
                                                      
                                                    
                   
                        
                                      
                                   
                 
                     {
                {
                  tmp___10 = mbs_to_wchar(&_wc___1, lexptr, lexleft, dfa___0);
                  nbytes___1 = tmp___10;
                  cur_mb_len = (int)nbytes___1;
                  wc1 = _wc___1;
                }
                                       {
                   
                    tmp___11 = to_uchar___0((char)*lexptr);
                    c1 = (int)tmp___11;
                   
                }       
                          
                 
                lexptr += nbytes___1;
                lexleft -= nbytes___1;
              }
              goto while_break___2;
            }
                                           ;
          }
        while_break___2:;
                         
                                                  
                          
                     
                          
             
                 {
          _L___1:
                           
                          
                                           {
                             
              _L___0:
                                  len = (size_t)0;
                {
                            {
                                                     ;
                    {
                                {
                                                         ;
                                       
                           
                                                               
                           
                                                                                      
                             
                                                                 
                                                               
                             
                                  
                                                
                                             
                           
                               {
                          {
                            tmp___14 = mbs_to_wchar(&_wc___2, lexptr, lexleft, dfa___0);
                            nbytes___2 = tmp___14;
                            cur_mb_len = (int)nbytes___2;
                            wc = _wc___2;
                          }
                                                 {
                             
                              tmp___15 = to_uchar___0((char)*lexptr);
                              c = (int)tmp___15;
                             
                          }       
                                   
                           
                          lexptr += nbytes___2;
                          lexleft -= nbytes___2;
                        }
                        goto while_break___4;
                      }
                                                     ;
                    }
                  while_break___4:;
                                 {
                                                       
                        goto while_break___3;
                                  
                                
                       
                    }       
                       
                                               
                                             
                       
                     
                                    {
                      tmp___16 = len;
                      len++;
                      str[tmp___16] = (char)c;
                    }       
                                            
                     
                  }
                                                 ;
                }
              while_break___3:
                str[len] = (char)'\000';
                {
                            {
                                                     ;
                                   
                       
                                                           
                       
                                                                                  
                         
                                                             
                                                           
                         
                              
                                            
                                         
                       
                           {
                      {
                        tmp___19 = mbs_to_wchar(&_wc___3, lexptr, lexleft, dfa___0);
                        nbytes___3 = tmp___19;
                        cur_mb_len = (int)nbytes___3;
                        wc = _wc___3;
                      }
                                             {
                         
                          tmp___20 = to_uchar___0((char)*lexptr);
                          c = (int)tmp___20;
                         
                      }       
                               
                       
                      lexptr += nbytes___3;
                      lexleft -= nbytes___3;
                    }
                    goto while_break___5;
                  }
                                                 ;
                }
              while_break___5:;
                              {
                                 {
                    {
                      tmp___24 = strcmp((char const *)(str), "upper");
                    }
                                       {
                      tmp___23 = "alpha";
                    }       
                       
                                                                        
                       
                                          
                                           
                              
                                                       
                       
                     
                  }       
                                                   
                   
                  {
                    class = tmp___23;
                    tmp___26 = (struct dfa_ctype const *)find_pred(class);
                    pred = tmp___26;
                  }
                  if (!pred) {
                     
                      tmp___27 = gettext("invalid character class");
                      dfaerror((char const *)tmp___27);
                     
                  }
                                          {
                                                  
                       
                        tmp___28 = wctype(class);
                        wt = tmp___28;
                        work_mbc->ch_classes = (wctype_t *)maybe_realloc((void *)work_mbc->ch_classes,
                                                                         work_mbc->nch_classes,
                                                                         &ch_classes_al, sizeof(*(work_mbc->ch_classes)));
                        tmp___29 = work_mbc->nch_classes;
                        (work_mbc->nch_classes)++;
                        *(work_mbc->ch_classes + tmp___29) = wt;
                       
                     
                  }
                  c2 = 0;
                  {
                              {
                                                       ;
                                       {
                        goto while_break___6;
                      }
                      {
                        tmp___30 = (*(pred->func))(c2);
                      }
                                    {
                         
                          setbit((unsigned int)c2, ccl);
                         
                      }
                      c2++;
                    }
                                                   ;
                  }
                while_break___6:;
                }       
                                               
                 
                colon_warning_state |= 8;
                {
                            {
                                                     ;
                                   
                       
                                                           
                       
                                                                                  
                         
                                                             
                                                           
                         
                              
                                            
                                         
                       
                           {
                      {
                        tmp___33 = mbs_to_wchar(&_wc___4, lexptr, lexleft, dfa___0);
                        nbytes___4 = tmp___33;
                        cur_mb_len = (int)nbytes___4;
                        wc1 = _wc___4;
                      }
                                             {
                         
                          tmp___34 = to_uchar___0((char)*lexptr);
                          c1 = (int)tmp___34;
                         
                      }       
                                
                       
                      lexptr += nbytes___4;
                      lexleft -= nbytes___4;
                    }
                    goto while_break___7;
                  }
                                                 ;
                }
              while_break___7:;
                goto __Cont;
               
            }
          }
        }
        if (c == 92) {
                                  
            {
                        {
                                                 ;
                               
                   
                                                       
                   
                                                                              
                     
                                                         
                                                       
                     
                          
                                        
                                     
                   
                       {
                  {
                    tmp___37 = mbs_to_wchar(&_wc___5, lexptr, lexleft, dfa___0);
                    nbytes___5 = tmp___37;
                    cur_mb_len = (int)nbytes___5;
                    wc = _wc___5;
                  }
                                         {
                     
                      tmp___38 = to_uchar___0((char)*lexptr);
                      c = (int)tmp___38;
                     
                  }       
                           
                   
                  lexptr += nbytes___5;
                  lexleft -= nbytes___5;
                }
                goto while_break___8;
              }
                                             ;
            }
          while_break___8:;
           
        }
                       {
          {
                      {
                                               ;
                             
                 
                                                     
                 
                                                                            
                   
                                                       
                                                     
                   
                        
                                      
                                   
                 
                     {
                {
                  tmp___41 = mbs_to_wchar(&_wc___6, lexptr, lexleft, dfa___0);
                  nbytes___6 = tmp___41;
                  cur_mb_len = (int)nbytes___6;
                  wc1 = _wc___6;
                }
                                       {
                   
                    tmp___42 = to_uchar___0((char)*lexptr);
                    c1 = (int)tmp___42;
                   
                }       
                          
                 
                lexptr += nbytes___6;
                lexleft -= nbytes___6;
              }
              goto while_break___9;
            }
                                           ;
          }
        while_break___9:;
        }
        if (c1 == 45) {
          {
                      {
                                                ;
                             
                 
                                                     
                 
                                                                            
                   
                                                       
                                                     
                   
                        
                                      
                                   
                 
                     {
                {
                  tmp___45 = mbs_to_wchar(&_wc___7, lexptr, lexleft, dfa___0);
                  nbytes___7 = tmp___45;
                  cur_mb_len = (int)nbytes___7;
                  wc2 = _wc___7;
                }
                                       {
                   
                    tmp___46 = to_uchar___0((char)*lexptr);
                    c2 = (int)tmp___46;
                   
                }       
                          
                 
                lexptr += nbytes___7;
                lexleft -= nbytes___7;
              }
              goto while_break___10;
            }
                                           ;
          }
        while_break___10:;
                        {
            if ((int const) * lexptr == 46) {
              known_bracket_exp = (_Bool)0;
              c2 = ']';
            }
          }
                        {
                          {
                                      
                {
                            {
                                                      ;
                                   
                       
                                                           
                       
                                                                                  
                         
                                                             
                                                           
                         
                              
                                            
                                         
                       
                           {
                      {
                        tmp___49 = mbs_to_wchar(&_wc___8, lexptr, lexleft, dfa___0);
                        nbytes___8 = tmp___49;
                        cur_mb_len = (int)nbytes___8;
                        wc2 = _wc___8;
                      }
                                              
                         
                                                                 
                                             
                         
                             {
                        c2 = -1;
                      }
                      lexptr += nbytes___8;
                      lexleft -= nbytes___8;
                    }
                    goto while_break___11;
                  }
                                                 ;
                }
              while_break___11:;
               
            }
                                     
                                      
                                         
                   
                                                                                                               
                                                                                                              
                                                                                                 
                                                                                                                   
                   
                                  
                     
                                              
                                                                                      
                     
                          
                                                                              
                   
                                               
                                        
                                  
                     
                                               
                                                                             
                     
                          
                                                                      
                   
                                  
                     
                                              
                     
                                   
                       
                                                                                            
                                                     
                                              
                                                                                    
                       
                            
                       
                                                 
                       
                                     
                         
                                                                                              
                                                       
                                                
                                                                                      
                         
                       
                     
                   
                 
               
                   {
              {
                tmp___60 = using_simple_locale();
              }
                            {
                c1 = c;
                {
                            {
                                                      ;
                                     {
                      goto while_break___12;
                    }
                    {
                      setbit((unsigned int)c1, ccl);
                      c1++;
                    }
                  }
                                                 ;
                }
              while_break___12:;
                               {
                  {
                    tmp___57 = toupper(c);
                    uc = tmp___57;
                    tmp___58 = toupper(c2);
                    uc2 = tmp___58;
                    c1 = 0;
                  }
                  {
                              {
                                                        ;
                                       {
                        goto while_break___13;
                      }
                      {
                        tmp___59 = toupper(c1);
                        uc1 = tmp___59;
                      }
                                     {
                                         
                           
                            setbit((unsigned int)c1, ccl);
                           
                         
                      }
                      c1++;
                    }
                                                   ;
                  }
                while_break___13:;
                }
              }       
                                             
               
            }
            colon_warning_state |= 8;
            {
                        {
                                                  ;
                               
                   
                                                       
                   
                                                                              
                     
                                                         
                                                       
                     
                          
                                        
                                     
                   
                       {
                  {
                    tmp___63 = mbs_to_wchar(&_wc___9, lexptr, lexleft, dfa___0);
                    nbytes___9 = tmp___63;
                    cur_mb_len = (int)nbytes___9;
                    wc1 = _wc___9;
                  }
                                         {
                     
                      tmp___64 = to_uchar___0((char)*lexptr);
                      c1 = (int)tmp___64;
                     
                  }       
                            
                   
                  lexptr += nbytes___9;
                  lexleft -= nbytes___9;
                }
                goto while_break___14;
              }
                                             ;
            }
          while_break___14:;
            goto __Cont;
          }
          lexptr -= cur_mb_len;
          lexleft += (size_t)cur_mb_len;
        }
                     {
          tmp___65 = 2;
        }       
                       
         
        colon_warning_state |= tmp___65;
                                 {
                          
             
                                         
             
                 {
             
              setbit((unsigned int)c, ccl);
             
          }
          goto __Cont;
        }
                                
                                       
               {
                          
             
                                                                           
                                      
             
                 {
            tmp___67 = 1;
          }
          n = tmp___67;
          folded[0] = (wchar_t)wc;
          i = 0;
          {
                      {
                                                ;
                            {
                goto while_break___15;
              }
              {
                tmp___69 = setbit_wc((wint_t)folded[i], ccl);
              }
                             {
                 
                  work_mbc->chars = (wchar_t *)maybe_realloc((void *)work_mbc->chars, work_mbc->nchars,
                                                             &chars_al, sizeof(*(work_mbc->chars)));
                  tmp___68 = work_mbc->nchars;
                  (work_mbc->nchars)++;
                  *(work_mbc->chars + tmp___68) = folded[i];
                 
              }
              i++;
            }
                                           ;
          }
        while_break___15:;
        }
      __Cont:
        wc = wc1;
        c = c1;
        if (!(c != 93)) {
          goto while_break___1;
        }
      }
                                     ;
    }
  while_break___1:;
                                  {
       
        tmp___70 = gettext("character class syntax is [[:space:]], not [:space:]");
        dfawarn((char const *)tmp___70);
       
    }
    if (!known_bracket_exp) {
      return ((token)257);
    }
    if (dfa___0->multibyte) {
      {
        work_mbc->invert = invert;
        tmp___73 = equal((charclass_word * /* const  */)(ccl), (charclass_word * /* const  */)(zeroclass));
      }
                    {
        work_mbc->cset = (ptrdiff_t)-1;
      }       
         
                                                                           
                                               
         
       
      return ((token)273);
    }
    if (invert) {
      if (!(!dfa___0->multibyte)) {
         
          __assert_fail("!dfa->multibyte", "/home/khheo/project/benchmark/grep-2.19/src/dfa.c",
                        1232U, "parse_bracket_exp");
         
      }
      {
        notset(ccl);
      }
                                                                                     {
         
          clrbit((unsigned int)eolbyte___0, ccl);
         
      }
    }
    {
      tmp___74 = charclass_index((charclass_word * /* const  */)(ccl));
    }
    return ((token)(275UL + tmp___74));
  }
}
static token lex(void) {
  int c;
  int c2;
  _Bool backslash;
  charclass ccl;
  int i;
  wint_t _wc;
  size_t nbytes;
  size_t tmp;
  unsigned char tmp___0;
  char *tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  char const *p;
  char const *lim;
  char *tmp___8;
  char const *tmp___9;
  char const *tmp___10;
  char *tmp___11;
  size_t tmp___12;
  unsigned short const **tmp___13;
  size_t tmp___14;
  char const *lexptr_saved;
  size_t lexleft_saved;
  unsigned short const **tmp___15;
  size_t tmp___16;
  size_t tmp___17;
  unsigned short const **tmp___18;
                    
                    
                    
                    
                    
                    
  {
    backslash = (_Bool)0;
    i = 0;
    {
      while (1) {
                                     ;
        if (!(i < 2)) {
          goto while_break;
        }
        {
                    {
                                             ;
            if (!lexleft) {
              lasttok = (token)-1;
              return (lasttok);
            } else {
              {
                tmp = mbs_to_wchar(&_wc, lexptr, lexleft, dfa___0);
                nbytes = tmp;
                cur_mb_len = (int)nbytes;
                wctok = _wc;
              }
                                 {
                 
                  tmp___0 = to_uchar___0((char)*lexptr);
                  c = (int)tmp___0;
                 
              }       
                       
               
              lexptr += nbytes;
              lexleft -= nbytes;
            }
            goto while_break___0;
          }
                                        ;
        }
      while_break___0:;
        if (c == 92) {
          goto case_92;
        }
        if (c == 94) {
          goto case_94;
        }
        if (c == 36) {
          goto case_36;
        }
        if (c == 49) {
          goto case_49;
        }
        if (c == 50) {
          goto case_49;
        }
        if (c == 51) {
          goto case_49;
        }
        if (c == 52) {
          goto case_49;
        }
        if (c == 53) {
          goto case_49;
        }
        if (c == 54) {
          goto case_49;
        }
        if (c == 55) {
          goto case_49;
        }
        if (c == 56) {
          goto case_49;
        }
        if (c == 57) {
          goto case_49;
        }
        if (c == 96) {
          goto case_96;
        }
        if (c == 39) {
          goto case_39;
        }
        if (c == 60) {
          goto case_60;
        }
        if (c == 62) {
          goto case_62;
        }
        if (c == 98) {
          goto case_98;
        }
        if (c == 66) {
          goto case_66;
        }
        if (c == 63) {
          goto case_63;
        }
        if (c == 42) {
          goto case_42;
        }
        if (c == 43) {
          goto case_43;
        }
        if (c == 123) {
          goto case_123;
        }
        if (c == 124) {
          goto case_124;
        }
        if (c == 10) {
          goto case_10;
        }
        if (c == 40) {
          goto case_40;
        }
        if (c == 41) {
          goto case_41;
        }
        if (c == 46) {
          goto case_46;
        }
        if (c == 115) {
          goto case_115;
        }
        if (c == 83) {
          goto case_115;
        }
        if (c == 119) {
          goto case_119;
        }
        if (c == 87) {
          goto case_119;
        }
        if (c == 91) {
          goto case_91;
        }
        goto normal_char;
      case_92:
        if (backslash) {
          goto normal_char;
        }
        if (lexleft == 0UL) {
           
            tmp___1 = gettext("unfinished \\ escape");
            dfaerror((char const *)tmp___1);
           
        }
        backslash = (_Bool)1;
        goto switch_break;
      case_94:
        if (backslash) {
          goto normal_char;
        }
                                                    {
          lasttok = (token)258;
          return (lasttok);
        }       
                               
                                 
                             
                  
                                  
                                   
                               
                    
                                    
                                     
                                 
               
             
           
         
        goto normal_char;
      case_36:
        if (backslash) {
          goto normal_char;
        }
                                                    {
          lasttok = (token)259;
          return (lasttok);
        }       
                               
                                 
                             
                  
                                                                                                                               
                                  
                                                 
                              
                        
                              
                 
                      
                            
               
                                
                    
                                  
                                                       
                                                         
                                
                          
                                
                   
                        
                              
                 
                      
                            
               
                                
             
                          
                                   
                               
                    
                                                                                                                                               
                                    
                                                    
                                
                          
                                
                   
                        
                              
                 
                                  
                      
                                    
                                                         
                                                            
                                  
                            
                                  
                     
                          
                                
                   
                        
                              
                 
                                  
               
                            
                                     
                                 
                      
                                                                                                                     
                                      
                                                     
                                           
                                       
                     
                   
                 
               
             
           
         
        goto normal_char;
      case_49:
        if (backslash) {
                                                                                                                                       
            laststart = (_Bool)0;
            lasttok = (token)257;
            return (lasttok);
           
        }
        goto normal_char;
      case_96:
                       {
                                                                                                                                                                          
            lasttok = (token)258;
            return (lasttok);
           
        }
        goto normal_char;
      case_39:
        if (backslash) {
                                                                                                                                                                          
            lasttok = (token)259;
            return (lasttok);
           
        }
        goto normal_char;
      case_60:
                       {
                                                                                                                                                                          
            lasttok = (token)260;
            return (lasttok);
           
        }
        goto normal_char;
      case_62:
                       {
                                                                                                                                                                          
            lasttok = (token)261;
            return (lasttok);
           
        }
        goto normal_char;
      case_98:
                       {
                                                                                                                                                                          
            lasttok = (token)262;
            return (lasttok);
           
        }
        goto normal_char;
      case_66:
                       {
                                                                                                                                                                          
            lasttok = (token)263;
            return (lasttok);
           
        }
        goto normal_char;
      case_63:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          goto normal_char;
        }
        if ((int)backslash != ((syntax_bits & (1UL << 1)) != 0UL)) {
          goto normal_char;
        }
                                                              {
          if (laststart) {
            goto normal_char;
          }
        }
        lasttok = (token)264;
        return (lasttok);
      case_42:
        if (backslash) {
          goto normal_char;
        }
                                                              {
          if (laststart) {
            goto normal_char;
          }
        }
        lasttok = (token)265;
        return (lasttok);
      case_43:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          goto normal_char;
        }
        if ((int)backslash != ((syntax_bits & (1UL << 1)) != 0UL)) {
          goto normal_char;
        }
                                                              {
          if (laststart) {
            goto normal_char;
          }
        }
        lasttok = (token)266;
        return (lasttok);
      case_123:
                                                                                                 {
          goto normal_char;
        }
                                                                                                                                                {
          goto normal_char;
        }
                                                              {
                          
            goto normal_char;
           
        }
        p = lexptr;
        lim = p + lexleft;
        maxrep = -1;
        minrep = maxrep;
        {
                    {
                                             ;
                                                        {
                                                    
                goto while_break___1;
               
            }       
                                   
             
                            {
              minrep = (int)((int const) * p - 48);
            }       
                                                         
                               
                      
                                                      
               
             
            p++;
          }
                                        ;
        }
      while_break___1:;
                                                    {
                                      
            maxrep = minrep;
                    
                             
                         
             
             
                         
                                                  
                    
                                                             
                                                        
                                         
                   
                        
                                       
                 
                                 
                                                       
                        
                                                             
                                   
                          
                                                          
                   
                 
               
                                             
             
                           
           
        }
                         
                      
               {
                                                       
                        
                
                                              
                   
                                                                 
                             
                    
                                                    
                                    
                                        
                                                
                                    
                       
                     
                                
                                
                   
                        
                              
                 
                      
                            
               
                    
                          
             
                  
          _L___4:
                                                                                                                                                                                                     {
              goto normal_char;
            }
            {
              tmp___8 = gettext("Invalid content of \\{\\}");
              dfaerror((char const *)tmp___8);
            }
           
        }
                            {
           
            tmp___11 = gettext("Regular expression too big");
            dfaerror((char const *)tmp___11);
           
        }
        lexptr = p;
        lexleft = (size_t)(lim - p);
        laststart = (_Bool)0;
        lasttok = (token)267;
        return (lasttok);
      case_124:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          goto normal_char;
        }
        if ((int)backslash != ((syntax_bits & (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
          goto normal_char;
        }
        laststart = (_Bool)1;
        lasttok = (token)269;
        return (lasttok);
      case_10:
                                                                                                     {
          goto normal_char;
        }       
                          
                             
                     
                                                                                                                    
                               
             
           
         
        laststart = (_Bool)1;
        lasttok = (token)269;
        return (lasttok);
      case_40:
        if ((int)backslash != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
          goto normal_char;
        }
        parens++;
        laststart = (_Bool)1;
        lasttok = (token)270;
        return (lasttok);
      case_41:
        if ((int)backslash != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
          goto normal_char;
        }
                           {
          if (syntax_bits & (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
            goto normal_char;
          }
        }
        parens--;
        laststart = (_Bool)0;
        lasttok = (token)271;
        return (lasttok);
      case_46:
        if (backslash) {
          goto normal_char;
        }
        if (dfa___0->multibyte) {
          laststart = (_Bool)0;
          lasttok = (token)272;
          return (lasttok);
        }
        {
          zeroset(ccl);
          notset(ccl);
        }
                                                                            {
           
            clrbit((unsigned int)eolbyte___0, ccl);
           
        }
                                                                                {
           
            clrbit((unsigned int)'\000', ccl);
           
        }
        {
          laststart = (_Bool)0;
          tmp___12 = charclass_index((charclass_word * /* const  */)(ccl));
          lasttok = (token)(275UL + tmp___12);
        }
        return (lasttok);
      case_115:
                        {
          goto normal_char;
        }       
                                                                                                                                                                       
                             
           
         
                                 {
          {
            zeroset(ccl);
            c2 = 0;
          }
          {
                      {
                                               ;
                               {
                goto while_break___3;
              }
              {
                tmp___13 = __ctype_b_loc();
              }
                                                         {
                 
                  setbit((unsigned int)c2, ccl);
                 
              }
              c2++;
            }
                                           ;
          }
        while_break___3:;
                       {
             
              notset(ccl);
             
          }
          {
            laststart = (_Bool)0;
            tmp___14 = charclass_index((charclass_word * /* const  */)(ccl));
            lasttok = (token)(275UL + tmp___14);
          }
          return (lasttok);
        }
        {
          while (1) {
                                             ;
            lexptr_saved = lexptr;
            lexleft_saved = lexleft;
            if (c == 115) {
              lexptr = "[:space:]]";
            } else {
              lexptr = "^[:space:]]";
            }
            {
              lexleft = strlen(lexptr);
              lasttok = parse_bracket_exp();
              lexptr = lexptr_saved;
              lexleft = lexleft_saved;
            }
            goto while_break___4;
          }
                                         ;
        }
      while_break___4:
        laststart = (_Bool)0;
        return (lasttok);
      case_119:
                        {
          goto normal_char;
        }       
                                                                                                                                                                       
                             
           
         
        {
          zeroset(ccl);
          c2 = 0;
        }
        {
                    {
                                             ;
                             {
              goto while_break___5;
            }
            {
              tmp___15 = __ctype_b_loc();
            }
                                                    {
               
                setbit((unsigned int)c2, ccl);
               
            }       
                             
                 
                                                
                 
               
             
            c2++;
          }
                                         ;
        }
      while_break___5:;
                     {
           
            notset(ccl);
           
        }
        {
          laststart = (_Bool)0;
          tmp___16 = charclass_index((charclass_word * /* const  */)(ccl));
          lasttok = (token)(275UL + tmp___16);
        }
        return (lasttok);
      case_91:
        if (backslash) {
          goto normal_char;
        }
        {
          laststart = (_Bool)0;
          lasttok = parse_bracket_exp();
        }
        return (lasttok);
      normal_char:
        laststart = (_Bool)0;
        if (dfa___0->multibyte) {
          lasttok = (token)274;
          return (lasttok);
        }
        if (case_fold) {
          {
            tmp___18 = __ctype_b_loc();
          }
                                                    {
            {
              zeroset(ccl);
              setbit_case_fold_c(c, ccl);
              tmp___17 = charclass_index((charclass_word * /* const  */)(ccl));
              lasttok = (token)(275UL + tmp___17);
            }
            return (lasttok);
          }
        }
        lasttok = (token)c;
        return (lasttok);
      switch_break:
        i++;
      }
                                    ;
    }
  while_break : {
    abort();
  }
    return ((token)-1);
  }
}
static token tok;
static size_t depth;
static void addtok_mb(token t, int mbprop) {
  size_t tmp;
  {
    if (dfa___0->talloc == dfa___0->tindex) {
      {
        dfa___0->tokens = (token *)x2nrealloc((void *)dfa___0->tokens, &dfa___0->talloc,
                                              sizeof(*(dfa___0->tokens)));
      }
      if (dfa___0->multibyte) {
        {
          dfa___0->multibyte_prop = (int *)xnrealloc((void *)dfa___0->multibyte_prop,
                                                     dfa___0->talloc, sizeof(*(dfa___0->multibyte_prop)));
        }
      }
    }
                             
                                                            
     
    tmp = dfa___0->tindex;
    (dfa___0->tindex)++;
    *(dfa___0->tokens + tmp) = t;
                    
                    
     
                    
                    
     
                    
                    
     
                    
                    
     
    if (t == 269L) {
      goto case_268;
    }
                    
                    
     
    if (t == 256L) {
      goto case_256;
    }
    goto switch_default;
           
    goto switch_break;
  case_268:
            
    goto switch_break;
           
    dfa___0->fast = (_Bool)0;
  switch_default:
                            (dfa___0->nleaves)++;
  case_256:
                            depth++;
    goto switch_break;
  switch_break:;
    if (depth > dfa___0->depth) {
      dfa___0->depth = depth;
    }
    return;
  }
}
static void addtok_wc(wint_t wc);
static void addtok(token t) {
  _Bool need_or;
  struct mb_char_classes *work_mbc;
  size_t i;
  {
                             
                      
                           
                                                                
                                
                        
           
                       
                                            
                                            
                                 
               
               
                                                            
               
                            
                 
                                     
                 
               
                                 
                  
             
                                           
           
                    
                                         
         
                               
                  
                
                                             
                    
                  
                                           
                      
                    
                                             
                        
                      
                                                   
                      
                                                                                       
                 
                                
                     
                                         
                     
                   
                        
                                              
                     
                                                    
                     
                                  
                       
                                           
                       
                     
                   
                 
               
             
           
         
              
         
          addtok_mb(t, 3);
         
       
              
       
                        
       
     
           
  }
}
static void addtok_wc(wint_t wc) {
  unsigned char buf[16];
  mbstate_t s;
  int i;
  size_t stored_bytes;
  size_t tmp;
  int tmp___0;
  int tmp___1;
                    
                    
  {
    {
      s.__count = 0;
      s.__value.__wch = 0U;
      tmp = wcrtomb((char * /* __restrict  */)((char *)(buf)), (wchar_t)wc, (mbstate_t * /* __restrict  */)(&s));
      stored_bytes = tmp;
    }
    if (stored_bytes != 0xffffffffffffffffUL) {
      cur_mb_len = (int)stored_bytes;
    } else {
      cur_mb_len = 1;
      buf[0] = (unsigned char)0;
    }
    if (cur_mb_len == 1) {
      tmp___0 = 3;
    } else {
      tmp___0 = 1;
    }
    {
      addtok_mb((token)buf[0], tmp___0);
      i = 1;
    }
    {
      while (1) {
                                      
        if (!(i < cur_mb_len)) {
          goto while_break;
        }
        if (i == cur_mb_len - 1) {
          tmp___1 = 2;
        } else {
          tmp___1 = 0;
        }
        {
          addtok_mb((token)buf[i], tmp___1);
          addtok((token)268);
          i++;
        }
      }
                                     
    }
  while_break:;
    return;
  }
}
static void add_utf8_anychar(void);
static charclass const utf8_classes[5] = {{(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0,
                                           ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, (charclass_word)0, (charclass_word)0},
                                          {((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U,
                                           (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0},
                                          {(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0,
                                           (charclass_word)0, (charclass_word)0, 4294967292U & (((1U << 31) << 1) - 1U), (charclass_word)0},
                                          {(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0,
                                           (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)65535},
                                          {(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0,
                                           (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)16711680}};
static void add_utf8_anychar(void) {
  unsigned int n;
  unsigned int i;
  charclass c;
  size_t tmp;
                   
  {
    n = (unsigned int)(sizeof(utf8_classes) / sizeof(utf8_classes[0]));
    if (dfa___0->utf8_anychar_classes[0] == 0L) {
      i = 0U;
      {
        while (1) {
                                        
          if (!(i < n)) {
            goto while_break;
          }
          {
            copyset(utf8_classes[i], c);
          }
          if (i == 1U) {
            if (!(syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1))) {
              {
                clrbit((unsigned int)eolbyte___0, c);
              }
            }
                                                                                     
               
                                                
               
             
          }
          {
            tmp = charclass_index((charclass_word * /* const  */)(c));
            dfa___0->utf8_anychar_classes[i] = (token)(275UL + tmp);
            i++;
          }
        }
                                       
      }
    while_break:;
    }
    i = 1U;
    {
      while (1) {
                                          
        if (!(i < n)) {
          goto while_break___0;
        }
        {
          addtok(dfa___0->utf8_anychar_classes[i]);
          i++;
        }
      }
                                     
    }
  while_break___0:;
    {
      while (1) {
                                          
        i--;
        if (!(i > 1U)) {
          goto while_break___1;
        }
        {
          addtok(dfa___0->utf8_anychar_classes[0]);
          addtok((token)268);
          addtok((token)269);
        }
      }
                                     
    }
  while_break___1:;
    return;
  }
}
static void atom(void) {
  wchar_t folded[21];
  int i;
  int n;
  int tmp;
  char *tmp___0;
  int tmp___1;
                   
                    
  {
    if (tok == 274L) {
      if (wctok == 4294967295U) {
        {
          addtok((token)257);
        }
      } else {
        {
          addtok_wc(wctok);
        }
        if (case_fold) {
          {
            tmp = case_folded_counterparts((wchar_t)wctok, folded);
            n = tmp;
            i = 0;
          }
          {
            while (1) {
                                            
              if (!(i < n)) {
                goto while_break;
              }
              {
                                             
                addtok((token)269);
                    
              }
            }
                                           
          }
        while_break:;
        }
      }
      {
        tok = lex();
      }
    } else {
      if (tok == 272L) {
        {
          tmp___1 = using_utf8();
        }
        if (tmp___1) {
          {
            add_utf8_anychar();
            tok = lex();
          }
        } else {
          goto _L___0;
        }
      } else {
      _L___0:
                                if (tok >= 0L) {
          if (tok < 256L) {
            {
              addtok(tok);
              tok = lex();
            }
          } else {
            goto _L;
          }
        } else {
        _L:
          if (tok >= 275L) {
             
              addtok(tok);
              tok = lex();
             
          } else {
            if (tok == 257L) {
              {
                addtok(tok);
                tok = lex();
              }
            } else {
              if (tok == 258L) {
                {
                  addtok(tok);
                  tok = lex();
                }
              } else {
                if (tok == 259L) {
                  {
                    addtok(tok);
                    tok = lex();
                  }
                } else {
                  if (tok == 260L) {
                     
                                  
                                  
                     
                  } else {
                    if (tok == 272L) {
                      {
                        addtok(tok);
                                    
                      }
                    } else {
                      if (tok == 273L) {
                        {
                          addtok(tok);
                          tok = lex();
                        }
                      } else {
                        if (tok == 261L) {
                          {
                            addtok(tok);
                            tok = lex();
                          }
                        } else {
                          if (tok == 262L) {
                             
                              addtok(tok);
                              tok = lex();
                             
                          } else {
                                              
                               
                                            
                                            
                               
                                    
                                                
                                {
                                  tok = lex();
                                  regexp();
                                }
                                                  
                                   
                                                                      
                                                                    
                                   
                                 
                                {
                                  tok = lex();
                                }
                                       
                                 
                                                     
                                 
                               
                             
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return;
  }
}
static size_t __attribute__((__pure__)) nsubtoks(size_t tindex) {
  size_t ntoks1;
  size_t __attribute__((__pure__)) tmp;
  size_t __attribute__((__pure__)) tmp___0;
  {
                                                      
                    
     
                                                      
                    
     
                                                      
                    
     
                                                      
                    
     
                                                      
                    
     
                        
                 
                                                  
                    
                                 
   
                                                       
  case_268 :                       {
    ntoks1 = (size_t)nsubtoks(tindex - 1UL);
    tmp___0 = nsubtoks((tindex - 1UL) - ntoks1);
  }
    return ((size_t __attribute__((__pure__)))((1UL + ntoks1) + (size_t)tmp___0));
                                                        
  }
}
                                                     
           
   
                             
                    
       
                   
                                        
                               
                             
           
           
                                                                                                    
                
           
         
                                       
       
                 
            
                    
       
                   
                                            
                               
                                 
           
           
                                                            
                
           
         
                                       
       
                     
     
           
   
 
static void closure(void) {
  int i;
  size_t tindex;
  size_t ntokens;
  size_t __attribute__((__pure__)) tmp;
  {
    {
      atom();
    }
    {
                {
                                     ;
        if (!(tok == 264L)) {
          if (!(tok == 265L)) {
            if (!(tok == 266L)) {
                                   
                goto while_break;
               
            }
          }
        }
                          
                       
                        
                  
                         
                       
                                                          
                                                 
             
                               
                 
                                     
                 
               
                                
                 
                                     
                 
               
                    
               
                           
                                                    
                                      
                                         
                   
                   
                                              
                                       
                        
                   
                 
                                               
               
                             
               
                           
                                                    
                                      
                                         
                   
                   
                                              
                                       
                                       
                        
                   
                 
                                               
               
                                
                          
             
                    
                      
             
           
               {
        _L:
                            
             
                                              
                                             
                          
                        
             
                                        {
             
              addtok(tok);
              tok = lex();
             
          }
        }
      }
                                    ;
    }
  while_break:;
           
  }
}
static void branch(void) {
   
    {
      closure();
    }
    {
      while (1) {
                                     ;
        if (tok != 271L) {
          if (tok != 269L) {
            if (!(tok >= 0L)) {
              goto while_break;
            }
          } else {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        {
          closure();
          addtok((token)268);
        }
      }
                                    ;
    }
  while_break:;
           
   
}
static void regexp(void) {
  {
    {
      branch();
    }
    {
      while (1) {
                                     ;
        if (!(tok == 269L)) {
          goto while_break;
        }
        {
          tok = lex();
          branch();
          addtok((token)269);
        }
      }
                                    ;
    }
  while_break:;
    return;
  }
}
void dfaparse(char const *s, size_t len, struct dfa *d) {
  char *tmp;
  char *tmp___0;
                   
                   
  {
    dfa___0 = d;
    lexptr = s;
    lexleft = len;
                        
                         
                       
                             
       
                       
                                                     
       
     
                           
       
                                             
                                    
       
     
    {
      tok = lex();
                       
      regexp();
    }
    if (tok != -1L) {
      {
        tmp___0 = gettext("unbalanced )");
                                        
      }
    }
    {
      addtok((token)(0xffffffffffffffffUL - d->nregexps));
      addtok((token)268);
    }
                      
       
                           
       
     
                    
           
  }
}
static void copy(position_set const *src, position_set *dst) {
   
                                         {
       
                                 
        dst->alloc = (size_t)src->nelem;
        dst->elems = (position *)x2nrealloc((void *)0, &dst->alloc, sizeof(*(dst->elems)));
       
    }
    {
      memcpy((void * /* __restrict  */)((void *)dst->elems), (void const * /* __restrict  */)((void const *)src->elems),
             (size_t)(src->nelem * (size_t const)sizeof(*(dst->elems))));
      dst->nelem = (size_t)src->nelem;
    }
           
   
}
static void alloc_position_set(position_set *s, size_t size) {
   
     
      s->elems = (position *)xnmalloc(size, sizeof(*(s->elems)));
                      
                           
     
           
   
}
static void insert(position p, position_set *s) {
  size_t count;
  size_t lo;
  size_t hi;
  size_t i;
  size_t mid;
  {
    count = s->nelem;
    lo = (size_t)0;
               
     
                 
                                      
                         
                           
         
                             
                                                
                         
                
                   
         
       
                                     
     
               
                     
                                              
                                                    
               
       
     
    {
      s->elems = (position *)maybe_realloc((void *)s->elems, count, &s->alloc, sizeof(*(s->elems)));
      i = count;
    }
    {
      while (1) {
                                         ;
        if (!(i > lo)) {
          goto while_break___0;
        }
        *(s->elems + i) = *(s->elems + (i - 1UL));
        i--;
      }
                                    ;
    }
  while_break___0:
                         *(s->elems + lo) = p;
    (s->nelem)++;
    return;
  }
}
static void merge(position_set const *s1, position_set const *s2, position_set *m) {
  size_t i;
  size_t j;
  size_t tmp;
  size_t tmp___0;
  size_t tmp___1;
  size_t tmp___2;
  size_t tmp___3;
  size_t tmp___4;
  size_t tmp___5;
  size_t tmp___6;
  size_t tmp___7;
  size_t tmp___8;
  size_t tmp___9;
  {
    i = (size_t)0;
                  
                                                     
       
                               
                                                                                        
                                                                             
       
     
    m->nelem = (size_t)0;
     
                 
                                      
                                    
                                         
                             
           
                
                           
         
                                                              
                         
                       
                      
              
                                                     
                
                                                                
                               
                         
                        
                
                                                           
                  
                        
                
                                                            
                               
                         
                        
                
                                                                                  
           
         
       
                                     
     
               
    {
                {
                                         ;
                                       
                               
         
        tmp___6 = m->nelem;
        (m->nelem)++;
        tmp___7 = i;
            
        *(m->elems + tmp___6) = *(s1->elems + tmp___7);
      }
                                    ;
    }
                   
    {
                {
                                         ;
        if (!(j < (size_t)s2->nelem)) {
          goto while_break___1;
        }
        tmp___8 = m->nelem;
        (m->nelem)++;
        tmp___9 = j;
        j++;
        *(m->elems + tmp___8) = *(s2->elems + tmp___9);
      }
                                    ;
    }
  while_break___1:;
           
  }
}
                                                  
           
   
                  
     
                 
                                      
                              
                           
         
                                               
                           
         
            
       
                                     
     
               
                       
                   
       
                   
                                            
                                
                                 
           
                                                    
              
         
                                       
       
                     
     
           
   
 
static state_num state_index(struct dfa *d, position_set const *s, int context) {
  size_t hash;
  int constraint;
  state_num i;
  state_num j;
  {
                     
                     
     
                 
                                      
                                            
                           
         
                                                                           
            
       
                                     
     
  while_break:
                        i = (state_num)0;
    {
      while (1) {
                                         ;
        if (!(i < d->sindex)) {
          goto while_break___0;
        }
                                            
                      
                
                                                                       
                        
                  
                                                           
                          
             
           
         
                         
         
                     
                                              
                                                
                                   
             
                                                                                               
                                   
                    
                                                                                       
                                     
               
             
                
           
                                         
         
                       
                                          
                     
         
      __Cont:
                                i++;
      }
                                    ;
    }
  while_break___0 : {
    d->states = (dfa_state *)maybe_realloc((void *)d->states, (size_t)d->sindex, &d->salloc,
                                           sizeof(*(d->states)));
                                 
                                                                  
    copy(s, &(d->states + i)->elems);
    (d->states + i)->context = (unsigned char)context;
                                            
                                           
                                                    
                                          
                                            
                                                          
    j = (state_num)0;
  }
    {
      while (1) {
                                         ;
        if (!((size_t const)j < s->nelem)) {
          goto while_break___2;
        }
        if (*(d->tokens + (s->elems + j)->index) < 0L) {
          constraint = (int)(s->elems + j)->constraint;
          if ((((constraint & 15) | ((constraint >> 4) & 15)) | ((constraint >> 8) & 15)) & context) {
            (d->states + i)->constraint = (unsigned short)((int)(d->states + i)->constraint | constraint);
          }
                                            
                                                                              
           
        } else {
                                                             
                                                               
                                                    
           
        }
        j++;
      }
                                    ;
    }
  while_break___2:
    (d->sindex)++;
    return (i);
  }
}
static void epsclosure(position_set *s, struct dfa const *d, char *visited) {
  size_t i;
  size_t j;
  position p;
  position old;
  _Bool initialized;
  {
                           
    i = (size_t)0;
    {
      while (1) {
                                     ;
        if (!(i < s->nelem)) {
          goto while_break;
        }
        if (*(d->tokens + (s->elems + i)->index) >= 256L) {
                                                             
                                                               
                                                                 
                if (*(d->tokens + (s->elems + i)->index) < 275L) {
                  if (!initialized) {
                     
                      memset((void *)visited, 0, (size_t)(d->tindex * (size_t const)sizeof(*visited)));
                      initialized = (_Bool)1;
                     
                  }
                  {
                    old = *(s->elems + i);
                    p.constraint = old.constraint;
                                                
                  }
                  if (*(visited + old.index)) {
                        
                    goto __Cont;
                  }
                  *(visited + old.index) = (char)1;
                                                         
                                  
                   
                  if (*(d->tokens + old.index) == 259L) {
                    goto case_259;
                  }
                                                         
                                  
                   
                                                         
                                  
                   
                                                         
                                  
                   
                                                         
                                  
                   
                                      
                case_258:
                                        p.constraint &= 1092U;
                  goto switch_break;
                case_259:
                  p.constraint &= 1792U;
                                    
                         
                                      
                                    
                         
                                        
                                    
                         
                                        
                                    
                         
                                         
                                    
                               
                                     
                switch_break:
                  j = (size_t)0;
                  {
                              {
                                                       ;
                                                                   
                                             
                       
                      {
                        p.index = ((d->follows + old.index)->elems + j)->index;
                        insert(p, s);
                            
                      }
                    }
                                                  ;
                  }
                while_break___0:
                                         i = (size_t)-1;
                }
               
             
           
        }
      __Cont:
        i++;
      }
                                    ;
    }
  while_break:;
           
  }
}
                                                 
              
                 
            
   
     
                  
                                                                                 
     
              
                   
     
           
     
                 
                                      
                        
                           
         
                                    
                       
         
                                                    
                       
         
            
       
                                     
     
               
                     
   
 
static int __attribute__((__pure__)) state_separate_contexts(position_set const *s) {
  int separate_contexts;
  size_t j;
  {
    separate_contexts = 0;
                  
     
                 
                                      
                                      
                           
         
                                                                                                
                                 
         
                                                                                                
                                 
         
            
       
                                     
     
               
    return ((int __attribute__((__pure__)))separate_contexts);
  }
}
void dfaanalyze(struct dfa *d, int searchflag) {
  position *posalloc;
  position *tmp;
  position *firstpos;
  position *lastpos;
  struct __anonstruct_stkalloc_43 *stkalloc;
  struct __anonstruct_stkalloc_43 *tmp___0;
  struct __anonstruct_stkalloc_43 *stk;
  position_set tmp___1;
  position_set merged;
  int separate_contexts;
  size_t i;
  size_t j;
  position *pos;
  char *visited;
  char *tmp___2;
  size_t tmp___3;
  size_t tmp___4;
  size_t tmp___5;
  size_t tmp___6;
  unsigned int tmp___7;
  int tmp___8;
  {
    {
      tmp = (position *)xnmalloc(d->nleaves, 2UL * sizeof(*posalloc));
      posalloc = tmp;
      firstpos = posalloc + d->nleaves;
      lastpos = firstpos + d->nleaves;
      tmp___0 = (struct __anonstruct_stkalloc_43 *)xnmalloc(d->depth, sizeof(*stkalloc));
      stkalloc = tmp___0;
      stk = stkalloc;
      tmp___2 = (char *)xnmalloc(d->tindex, sizeof(*visited));
      visited = tmp___2;
                                               
      alloc_position_set(&merged, d->nleaves);
      d->follows = (position_set *)xcalloc(d->tindex, sizeof(*(d->follows)));
      i = (size_t)0;
    }
    {
      while (1) {
                                     ;
        if (!(i < d->tindex)) {
          goto while_break;
        }
                                       
                        
         
        if (*(d->tokens + i) == 265L) {
          goto case_265;
        }
        if (*(d->tokens + i) == 266L) {
          goto case_265;
        }
        if (*(d->tokens + i) == 264L) {
          goto case_264;
        }
        if (*(d->tokens + i) == 268L) {
          goto case_268;
        }
        if (*(d->tokens + i) == 269L) {
          goto case_269;
        }
        goto switch_default;
               
                                      
                            
                                
                                 
              
                          
      case_265:
        tmp___1.nelem = (stk + -1)->nfirstpos;
                                 
                      
                      
         
                     
                                              
                                              
                                   
             
             
                                                                                                            
                             
                                                                                   
                  
             
           
                                         
         
                       
      case_264:
                                      {
          (stk + -1)->nullable = (_Bool)1;
        }
        goto switch_break;
      case_268:
        tmp___1.nelem = (stk + -1)->nfirstpos;
        tmp___1.elems = firstpos;
        pos = lastpos + (stk + -1)->nlastpos;
        j = (size_t)0;
        {
          while (1) {
                                             ;
            if (!(j < (stk + -2)->nlastpos)) {
              goto while_break___1;
            }
            {
              merge((position_set const *)(&tmp___1), (position_set const *)(d->follows + (pos + j)->index),
                    &merged);
              copy((position_set const *)(&merged), d->follows + (pos + j)->index);
              j++;
            }
          }
                                        ;
        }
      while_break___1:;
                                   
                                                         
               {
          firstpos += (stk + -1)->nfirstpos;
        }
        if ((stk + -1)->nullable) {
          (stk + -2)->nlastpos += (stk + -1)->nlastpos;
        } else {
                                               
                                   
          {
                      {
                                               ;
                          
              j--;
                                     
                                     
               
              *(pos + j) = *(lastpos + j);
            }
                                          ;
          }
        while_break___2:
                               lastpos += (stk + -2)->nlastpos;
                                                      
        }
                                                                                              
        stk--;
        goto switch_break;
      case_269:
        (stk + -2)->nfirstpos += (stk + -1)->nfirstpos;
        (stk + -2)->nlastpos += (stk + -1)->nlastpos;
                                                                                              
        stk--;
        goto switch_break;
      switch_default : {
                                                          
        tmp___5 = (size_t)1;
        stk->nlastpos = tmp___5;
        stk->nfirstpos = tmp___5;
        stk++;
        firstpos--;
        lastpos--;
        tmp___6 = i;
        lastpos->index = tmp___6;
        firstpos->index = tmp___6;
        tmp___7 = 1911U;
                                      
        firstpos->constraint = tmp___7;
                                                      
      }
                          
      switch_break:
        i++;
      }
                                    ;
    }
  while_break:
    i = (size_t)0;
    {
      while (1) {
                                         ;
        if (!(i < d->tindex)) {
          goto while_break___3;
        }
        if (*(d->tokens + i) < 256L) {
           
            copy((position_set const *)(d->follows + i), &merged);
            epsclosure(&merged, (struct dfa const *)d, visited);
            copy((position_set const *)(&merged), d->follows + i);
           
        } else {
                                         
             
                                                                    
                                                                  
                                                                    
             
                  
                                           
               
                                                                      
                                                                    
                                                                      
               
                    
                                             
                 
                                                                        
                                                                      
                                                                        
                 
                      
                if (*(d->tokens + i) >= 275L) {
                   
                    copy((position_set const *)(d->follows + i), &merged);
                    epsclosure(&merged, (struct dfa const *)d, visited);
                    copy((position_set const *)(&merged), d->follows + i);
                   
                }
               
             
           
        }
        i++;
      }
                                    ;
    }
  while_break___3:
    merged.nelem = (size_t)0;
    i = (size_t)0;
    {
                {
                                         ;
                                           
                               
         
        {
          insert(*(firstpos + i), &merged);
              
        }
      }
                                     ;
    }
  while_break___4 :                        {
    epsclosure(&merged, (struct dfa const *)d, visited);
                                                                                      
  }
                               {
      tmp___8 = 4;
    }       
                                      
     
    {
      state_index(d, (position_set const *)(&merged), tmp___8);
                             
                             
                                 
                            
    }
           
  }
}
void dfastate(ptrdiff_t s, struct dfa *d, ptrdiff_t *trans___0) {
  leaf_set grps[256];
  charclass labels[256];
  size_t ngrps;
  position pos;
  charclass matches;
  charclass_word matchesf;
  charclass intersect;
  charclass_word intersectf;
  charclass leftovers;
  charclass_word leftoversf;
  position_set follows;
  position_set tmp;
  int possible_contexts;
  int separate_contexts;
  state_num state;
  state_num state_newline;
  state_num state_letter;
  _Bool next_isnt_1st_byte;
  size_t i;
  size_t j;
  size_t k;
  _Bool tmp___0;
  charclass_word tmp___1;
  charclass_word match;
  charclass_word label___0;
  charclass_word tmp___2;
  charclass_word tmp___3;
  size_t tmp___4;
  unsigned short const **tmp___6;
  int c;
  unsigned short const **tmp___7;
                    
                  
                    
                  
                    
                    
                    
                    
  {
    {
      ngrps = (size_t)0;
                                    
                       
      i = (size_t)0;
    }
    {
      while (1) {
                                     ;
        if (!(i < (d->states + s)->elems.nelem)) {
          goto while_break;
        }
        pos = *((d->states + s)->elems.elems + i);
        if (*(d->tokens + pos.index) >= 0L) {
          if (*(d->tokens + pos.index) < 256L) {
             
              setbit((unsigned int)*(d->tokens + pos.index), matches);
             
          } else {
            goto _L___0;
          }
        } else {
        _L___0:
          if (*(d->tokens + pos.index) >= 275L) {
             
              copyset((charclass_word * /* const  */)(*(d->charclasses + (*(d->tokens + pos.index) - 275L))),
                      matches);
             
          } else {
                                                   
                      
                    
                                                     
                 
                                                       
                                                         
                 
                                                         
                   
                                                                          
                   
                 
                 
                                                      
                 
               
             
                        
          }
        }
                                     {
                                                                                          
                          
             
                         
                                                  
                                 
                                       
                 
                                          
                    
               
                                              
             
                           
           
          if (!(((pos.constraint >> 4) & 15U) & (unsigned int)(d->states + s)->context)) {
            j = (size_t)0;
            {
              while (1) {
                                                 ;
                if (!(j < 8UL)) {
                  goto while_break___1;
                }
                matches[j] &= ~letters[j];
                j++;
              }
                                             ;
            }
          while_break___1:;
          }
                                                                                   
                          
             
                         
                                                  
                                 
                                       
                 
                                                      
                    
               
                                              
             
                           
           
                        
           
                       
                                                
                            
                                     
                                       
                 
                      
                                     
               
                              
                       
                  
             
                                            
           
                         
                         
                        
           
        }
                      
         
                     
                                              
                               
                                   
             
                                                 
                                                    
                 
                                                                                                                       
                 
                               
                                  
                 
               
             
                                           
                          
             
                         
                                                  
                                 
                                       
                 
                                                    
                                       
                                      
                    
               
                                              
             
                           
                              
                              
             
                                         
                                  
                          
             
                         
                                                  
                                 
                                       
                 
                                   
                                         
                                             
                                       
                                      
                                             
                                     
                                    
                    
               
                                              
             
                           
                             
               
                                                                                   
                                                                               
                                                                                                 
                                                                                                                                            
                                                                     
                                                  
                        
               
             
                                    
                              
                                                   
                            
                                   
             
                     
                  
           
                                          
         
                       
                        {
           
            copyset((charclass_word * /* const  */)(matches), labels[ngrps]);
            zeroset(matches);
            grps[ngrps].elems = (size_t *)xnmalloc(d->nleaves, sizeof(*(grps[ngrps].elems)));
                                          
            *(grps[ngrps].elems + 0) = pos.index;
            ngrps++;
           
        }
      __Cont:
                              i++;
      }
                                     ;
    }
  while_break : {
                                             
    alloc_position_set(&tmp, d->nleaves);
  }
                       {
      {
        copy((position_set const *)(&(d->states + 0)->elems), &follows);
        separate_contexts = (int)state_separate_contexts((position_set const *)(&follows));
                                                                                        
      }
                                 {
         
          state_newline = state_index(d, (position_set const *)(&follows), 4);
         
      }       
                              
       
                                 {
         
          state_letter = state_index(d, (position_set const *)(&follows), 2);
         
      }       
                             
       
      i = (size_t)0;
      {
        while (1) {
                                           ;
          if (!(i < 256UL)) {
            goto while_break___7;
          }
           
                                      
           
                                                     {
            *(trans___0 + i) = state_letter;
          }       
                            
                                              
                    
                                       
             
           
          i++;
        }
                                       ;
      }
    while_break___7:
      *(trans___0 + (int)eolbyte___0) = state_newline;
    }       
                    
       
                   
                                            
                             
                                 
           
                                           
              
         
                                        
       
                     
     
    i = (size_t)0;
    {
      while (1) {
                                         ;
        if (!(i < ngrps)) {
          goto while_break___9;
        }
                                  
        j = (size_t)0;
        {
                    {
                                              ;
                                       
                                    
             
            k = (size_t)0;
            {
                        {
                                                  ;
                if (!(k < (d->follows + *(grps[i].elems + j))->nelem)) {
                  goto while_break___11;
                }
                {
                  insert(*((d->follows + *(grps[i].elems + j))->elems + k), &follows);
                      
                }
              }
                                             ;
            }
          while_break___11:
            j++;
          }
                                         ;
        }
                        
                           
                                        
                        
           
                       
                                                 
                                         
                                      
               
                                                                             
                                              
                                      
               
                  
             
                                            
           
                          
         
                           {
                              
             
              merge((position_set const *)(&(d->states + 0)->elems), (position_set const *)(&follows),
                    &tmp);
              copy((position_set const *)(&tmp), &follows);
             
                       
                                      
               
                                                                                                        
                            
                                                             
               
             
           
        }
         
                                                           
                                                                                             
         
                                                                          {
           
            state = state_index(d, (position_set const *)(&follows), separate_contexts ^ 7);
           
        }       
                                
         
                                                          
           
                                                                                
           
                
                                
         
                                                          
           
                                                                               
           
               {
          state_letter = state;
        }
                      
        {
          while (1) {
                                              ;
            if (!(j < 8UL)) {
              goto while_break___13;
            }
            k = (size_t)0;
            {
              while (1) {
                                                  ;
                if (!(k < 32UL)) {
                  goto while_break___14;
                }
                if ((labels[i][j] >> k) & 1U) {
                  c = (int)(j * 32UL + k);
                                              
                                                     
                         {
                     
                                                
                     
                                                           
                      *(trans___0 + c) = state_letter;
                             
                                    
                                                        
                              
                                      
                                                   
                         
                       
                     
                  }
                }
                k++;
              }
                                             ;
            }
          while_break___14:
            j++;
          }
                                         ;
        }
      while_break___13:
        i++;
      }
                                     ;
    }
  while_break___9:
    i = (size_t)0;
     
                 
                                           
                           
                                
         
         
                                      
              
         
       
                                      
     
                         
                                
                            
   
           
  }
}
static void realloc_trans_if_necessary(struct dfa *d, state_num new_state) {
  state_num oldalloc;
  state_num **realtrans;
  state_num **tmp;
  size_t newalloc;
  size_t newalloc1;
  {
    oldalloc = d->tralloc;
                               {
      if (d->trans) {
        tmp = d->trans - 1;
      } else {
        tmp = (state_num **)((void *)0);
      }
      {
        realtrans = tmp;
        newalloc1 = (size_t)(new_state + 1L);
        realtrans = (state_num **)x2nrealloc((void *)realtrans, &newalloc1, sizeof(*realtrans));
                                                    
        d->trans = realtrans + 1;
        newalloc = newalloc1 - 1UL;
                                         
        d->fails = (state_num **)xnrealloc((void *)d->fails, newalloc, sizeof(*(d->fails)));
        d->success = (int *)xnrealloc((void *)d->success, newalloc, sizeof(*(d->success)));
                                                                                                    
      }
      {
        while (1) {
                                       ;
          if (!((size_t)oldalloc < newalloc)) {
            goto while_break;
          }
          *(d->trans + oldalloc) = (state_num *)((void *)0);
          *(d->fails + oldalloc) = (state_num *)((void *)0);
          oldalloc++;
        }
                                      ;
      }
    while_break:;
    }
           
  }
}
static void build_state(state_num s, struct dfa *d) {
  state_num *trans___0;
  state_num i;
  state_num maxstate;
  state_num *tmp;
  {
                             
                       
       
                   
                                        
                                  
                             
           
           
                                          
                                          
                                           
                                  
                                  
                
           
         
                                       
       
                
                      
     
                   
                          
                                                                                        {
      *(d->success + s) |= 4;
    }
                                                                                         
                             
     
    if (((int)(d->states + s)->constraint & 15) & (int)(d->states + s)->context) {
      *(d->success + s) |= 1;
    }
    {
      trans___0 = (state_num *)xmalloc(256UL * sizeof(*trans___0));
      dfastate(s, d, trans___0);
                               
      i = (state_num)0;
    }
    {
                {
                                         ;
                          
                               
         
                                         {
          maxstate = *(trans___0 + i);
        }
            
      }
                                    ;
    }
  while_break___0 :                  {
    realloc_trans_if_necessary(d, maxstate);
                                                         
                                                    
  }
    if ((d->states + s)->constraint) {
      *(d->fails + s) = trans___0;
    } else {
      *(d->trans + s) = trans___0;
    }
           
  }
}
static void build_state_zero(struct dfa *d) {
  int initial_tab_size;
  {
     
      initial_tab_size = 1;
                                
                     
                                           
                                           
                                      
                                             
      realloc_trans_if_necessary(d, (state_num)initial_tab_size);
      build_state((state_num)0, d);
     
           
  }
}
                                                                                
                                                                                                     
               
                  
                            
   
              
                                   
     
                 
                                      
                                          
                           
         
                                
                                                             
                                         
                                         
                           
                                 
           
                
                           
                                 
                  
                                      
                                                               
                                             
                    
               
                                      
               
             
           
         
       
                                     
     
              
                        
                  
   
 
                                                                             
                                         
              
                   
                       
                       
   
                                               
                                                                           
                   
       
             
                     
                                                                                 
                     
         
              
                                
                     
         
       
     
     
                                  
     
                      
                                 
            
               
     
                      
                                            
            
                   
     
                      
                                            
            
                   
     
                                                                                  
                 
     
                         
   
 
                                                                                    
                                                          
           
              
             
                       
                                   
              
                   
                       
                       
                        
                
              
              
              
                 
                    
   
                                               
                                                                           
                   
       
            
                     
                                                                                 
                     
         
              
                                
                     
         
       
     
     
                                  
     
                      
                                 
            
               
     
                      
                                            
            
                   
     
                      
                                            
            
                   
     
                                                                                  
                 
     
                                                                    
                                       
                    
                                  
         
                                           
                                                                                                                       
         
                      
                               
         
       
     
                  
     
                 
                                      
                                           
                           
         
         
                                                              
         
                      
                               
         
            
       
                                     
     
                 
                                                                                      
                       
                                         
                  
   
     
                 
                                          
                                       
                               
         
         
                                                                      
                                                                                            
                                  
                                            
                                                                                               
         
                           
                                     
                               
         
            
       
                                     
     
                  
                  
     
                 
                                          
                                           
                               
         
         
                                                                          
                                                                                            
                                  
                                            
                                                                                                   
         
                           
                                     
                               
         
            
       
                                     
     
                  
                  
     
                 
                                          
                                       
                               
         
                                                        
                                                          
                                 
           
         
            
       
                                     
     
                  
                  
     
                 
                                          
                                      
                               
         
                                                     
                               
         
            
       
                                     
     
                  
                             
                  
                
                          
              
                          
     
                          
   
 
                                                                                        
                                                                         
           
              
               
   
                              
                  
     
                 
                                      
                                                 
                           
         
                                                 
                                               
                        
         
                                               
                        
         
                            
                   
                                                             
       
                          
                  
                                                                   
       
                          
                     
                          
                   
            
       
                                     
     
               
                    
   
 
static status_transit_state transit_state_consume_1char(struct dfa *d, state_num s,
                                                        unsigned char const **pp,
                                                        wint_t wc, size_t mbclen,
                                                        int *match_lens) {
  size_t i;
  size_t j;
  int k;
  state_num s1;
  state_num s2;
  status_transit_state rs;
  unsigned char const *tmp;
  {
                                 
                      
                                               
         
                                                                                     
                                                                 
         
       
     
           
    k = 0;
    {
      while (1) {
                                      
        if (!((size_t)k < mbclen)) {
          goto while_break;
        }
        {
                  
                    
          (*pp)++;
          rs = transit_state_singlebyte(d, s2, tmp, &s1);
          k++;
        }
      }
                                     
    }
  while_break : {
    copy((position_set const *)(&(d->states + s1)->elems), &d->mb_follows);
    i = (size_t)0;
  }
    {
      while (1) {
                                          
                                                 
                               
         
        if ((size_t) * (match_lens + i) == mbclen) {
          j = (size_t)0;
          {
            while (1) {
                                                
              if (!(j < (d->follows + ((d->states + s)->mbps.elems + i)->index)->nelem)) {
                goto while_break___1;
              }
              {
                insert(*((d->follows + ((d->states + s)->mbps.elems + i)->index)->elems + j),
                       &d->mb_follows);
                j++;
              }
            }
                                           
          }
        while_break___1:;
        }
            
      }
                                     
    }
                   
    return (rs);
  }
}
static state_num transit_state(struct dfa *d, state_num s, unsigned char const **pp,
                               unsigned char const *end) {
               
             
             
           
           
                  
               
  unsigned char const *p1;
            
                          
          
              
  {
               
                                    
                                        
    p1 = *pp;
                      
       
                                                                                   
                                                                                   
                                                                       
                      
       
       
                   
                                        
                             
                             
           
                                           
                                       
           
              
         
                                       
       
                 
     
                       
              
            
                        
            
                                                      
       
                                     
                  
         
                    
       
     
     
                                      
                                                                            
                              
                                                                       
                                        
     
     
                 
                                          
                                         
                               
         
         
                                                                                     
                                                                                         
                        
         
         
                     
                                              
                               
                                   
             
                                                      
                            
               
                           
                                                    
                                                                                               
                                         
                   
                   
                                                                                                  
                                           
                        
                   
                 
                                               
               
                             
             
                
           
                                         
         
                          
                                    
                                                                             
                                          
       
       
                                     
     
                   
                
  }
}
char *dfaexec(struct dfa *d, char const *begin, char *end, int allow_nl, size_t *count,
              int *backref) {
  state_num s;
  state_num s1;
  unsigned char const *p;
  unsigned char const *mbp;
  state_num **trans___0;
  state_num *t;
  unsigned char eol;
  unsigned char saved_end;
  size_t nlcount;
  wint_t wc;
  size_t tmp;
  unsigned char const *tmp___0;
  unsigned char const *tmp___1;
  state_num tmp___2;
  unsigned char const *tmp___3;
  unsigned char const *tmp___4;
  {
    eol = eolbyte___0;
    nlcount = (size_t)0;
    if (!d->tralloc) {
      {
        build_state_zero(d);
      }
    }
    s1 = (state_num)0;
    s = s1;
    mbp = (unsigned char const *)begin;
    p = mbp;
    trans___0 = d->trans;
    saved_end = *((unsigned char *)end);
    *end = (char)eol;
    if (d->multibyte) {
      {
        memset((void *)(&d->mbs), 0, sizeof(d->mbs));
      }
      if (!d->mb_match_lens) {
        {
          d->mb_match_lens = (int *)xnmalloc(d->nleaves, sizeof(*(d->mb_match_lens)));
          alloc_position_set(&d->mb_follows, d->nleaves);
        }
      }
    }
    {
      while (1) {
                                     ;
        if (d->multibyte) {
          {
            while (1) {
                                                
            while_continue___0:
              t = *(trans___0 + s);
              if (!((unsigned long)t != (unsigned long)((void *)0))) {
                goto while_break___0;
              }
              s1 = s;
              if (s == 0L) {
                {
                  while (1) {
                                                      
                    if (!((unsigned long)mbp < (unsigned long)p)) {
                      goto while_break___1;
                    }
                    {
                      tmp = mbs_to_wchar(&wc, (char const *)mbp, (size_t)(end - (char *)((char const *)mbp)),
                                         d);
                      mbp += tmp;
                    }
                  }
                                                 
                }
              while_break___1:
                         
                if ((unsigned long)((char *)p) > (unsigned long)end) {
                                                         
                  goto done;
                }
              }
              if ((d->states + s)->mbps.nelem == 0UL) {
                tmp___0 = p;
                p++;
                s = *(t + (int const) * tmp___0);
                goto while_continue___0;
              }
              if ((d->states + s)->has_mbcset) {
                if (backref) {
                  *backref = 1;
                  goto done;
                }
              }
              {
                s = transit_state(d, s, &p, (unsigned char const *)((unsigned char *)end));
                        
                trans___0 = d->trans;
              }
            }
                                           
          }
        while_break___0:;
        } else {
          {
            while (1) {
                                               ;
              t = *(trans___0 + s);
              if (!((unsigned long)t != (unsigned long)((void *)0))) {
                goto while_break___2;
              }
                          
                  
                                                
                                    
                                                                   
                            
                       
                             
                                     
               
              tmp___3 = p;
              p++;
              s = *(t + (int const) * tmp___3);
            }
                                          ;
          }
        while_break___2:;
        }
        if ((unsigned long)((char *)p) > (unsigned long)end) {
          p = (unsigned char const *)((void *)0);
          goto done;
        }
        if (s >= 0L) {
          if (*(d->fails + s)) {
            if (*(d->success + s) & sbit[*p]) {
              if (backref) {
                *backref = (int)(d->states + s)->has_backref;
              }
              goto done;
            }
            s1 = s;
            if (d->multibyte) {
              {
                                                                                           
                mbp = p;
                                     
              }
            } else {
              tmp___4 = p;
              p++;
              s = *(*(d->fails + s) + (int const) * tmp___4);
            }
            goto __Cont;
          }
        }
        if ((int const) * (p + -1) == (int const)eol) {
                                                                   
            nlcount++;
                    
           
        }
        if (s >= 0L) {
          if (!*(d->trans + s)) {
            {
              build_state(s, d);
            }
          }
          trans___0 = d->trans;
          goto __Cont;
        }
        if ((int const) * (p + -1) == (int const)eol) {
          if (allow_nl) {
            s = *(d->newlines + s1);
            goto __Cont;
          }
        }
        s = (state_num)0;
      __Cont:;
      }
                                ;
    }
  done:
    if (count) {
      *count += nlcount;
    }
    *end = (char)saved_end;
    return ((char *)p);
  }
}
struct dfa *dfasuperset(struct dfa const *d) __attribute__((__pure__));
struct dfa *dfasuperset(struct dfa const *d) {
   
    return ((struct dfa *)d->superset);
   
}
_Bool dfaisfast(struct dfa const *d) __attribute__((__pure__));
_Bool dfaisfast(struct dfa const *d) {
  {
    return ((_Bool)d->fast);
  }
}
static void free_mbdata(struct dfa *d) {
  size_t i;
  size_t j;
  struct mb_char_classes *p;
  {
    {
      free((void *)d->multibyte_prop);
      i = (size_t)0;
    }
    {
      while (1) {
                                      
        if (!(i < d->nmbcsets)) {
          goto while_break;
        }
        {
                             
                                 
                                      
                                  
          j = (size_t)0;
        }
        {
          while (1) {
                                              
            if (!(j < p->nequivs)) {
              goto while_break___0;
            }
            {
              free((void *)*(p->equivs + j));
              j++;
            }
          }
                                         
        }
      while_break___0 : {
        free((void *)p->equivs);
        j = (size_t)0;
      }
        {
          while (1) {
                                              
            if (!(j < p->ncoll_elems)) {
              goto while_break___1;
            }
            {
              free((void *)*(p->coll_elems + j));
              j++;
            }
          }
                                         
        }
      while_break___1 : {
        free((void *)p->coll_elems);
        i++;
      }
      }
                                     
    }
  while_break : {
                             
    free((void *)d->mb_follows.elems);
                                   
                                          
  }
    return;
  }
}
void dfainit(struct dfa *d) {
  size_t tmp;
  {
    {
      memset((void *)d, 0, sizeof(*d));
      tmp = __ctype_get_mb_cur_max();
      d->multibyte = (_Bool)(tmp > 1UL);
      d->fast = (_Bool)(!d->multibyte);
    }
    return;
  }
}
static void dfaoptimize(struct dfa *d) {
  size_t i;
  _Bool have_backref;
  int tmp;
  {
    {
      have_backref = (_Bool)0;
      tmp = using_utf8();
    }
    if (!tmp) {
      return;
    }
    i = (size_t)0;
    {
      while (1) {
                                      
        if (!(i < d->tindex)) {
          goto while_break;
        }
        if (*(d->tokens + i) == 272L) {
          goto case_272;
        }
        if (*(d->tokens + i) == 257L) {
          goto case_257;
        }
        if (*(d->tokens + i) == 273L) {
          goto case_273;
        }
        goto switch_default;
      case_272 : {
        abort();
      }
      case_257:
        have_backref = (_Bool)1;
        goto switch_break;
      case_273:
        return;
      switch_default:
        goto switch_break;
      switch_break:
        i++;
      }
                                     
    }
  while_break:;
    if (!have_backref) {
      if (d->superset) {
        {
          dfafree(d->superset);
          free((void *)d->superset);
          d->superset = (struct dfa *)((void *)0);
        }
      }
    }
    {
      free_mbdata(d);
      d->multibyte = (_Bool)0;
    }
    return;
  }
}
static void dfassbuild(struct dfa *d) {
  size_t i;
  size_t j;
  charclass ccl;
  _Bool have_achar;
  _Bool have_nchar;
  struct dfa *sup;
  struct dfa *tmp;
  size_t tmp___0;
  size_t tmp___1;
  size_t tmp___2;
  size_t tmp___3;
  size_t tmp___4;
                    
  {
    {
                            
                            
                       
                
                
                                
                                               
                                                           
      sup->superset = (struct dfa *)((void *)0);
      sup->states = (dfa_state *)((void *)0);
                                 
                                                 
                                  
                                             
                                             
                                        
                                               
                                                 
                                                                                         
                                                                                                                                  
                                                      
                                                                               
                                    
                    
            
    }
    {
      while (1) {
                                      
        if (!(i < d->tindex)) {
          goto while_break;
        }
        if (*(d->tokens + i) == 272L) {
          goto case_272;
        }
        if (*(d->tokens + i) == 273L) {
          goto case_272;
        }
        if (*(d->tokens + i) == 257L) {
          goto case_272;
        }
        if (*(d->tokens + i) == 260L) {
                        
        }
        if (*(d->tokens + i) == 261L) {
          goto case_260;
        }
        if (*(d->tokens + i) == 262L) {
          goto case_260;
        }
        if (*(d->tokens + i) == 263L) {
          goto case_260;
        }
        goto switch_default;
      case_272 : {
        zeroset(ccl);
        notset(ccl);
        tmp___0 = j;
        j++;
        tmp___1 = dfa_charclass_index(sup, (charclass_word * /* const  */)(ccl));
        *(sup->tokens + tmp___0) = (token)(275UL + tmp___1);
        tmp___2 = j;
        j++;
        *(sup->tokens + tmp___2) = (token)265;
      }
        if (*(d->tokens + (i + 1UL)) == 264L) {
          i++;
        } else {
          if (*(d->tokens + (i + 1UL)) == 265L) {
            i++;
          } else {
            if (*(d->tokens + (i + 1UL)) == 266L) {
              i++;
            }
          }
        }
        have_achar = (_Bool)1;
        goto switch_break;
      case_260:
        if (d->multibyte) {
          tmp___3 = j;
          j++;
          *(sup->tokens + tmp___3) = (token)256;
          *(d->tokens + i) = (token)257;
          goto switch_break;
        }
      switch_default:
        tmp___4 = j;
        j++;
        *(sup->tokens + tmp___4) = *(d->tokens + i);
        if (0L <= *(d->tokens + i)) {
          if (*(d->tokens + i) < 256L) {
            have_nchar = (_Bool)1;
          } else {
            goto _L;
          }
        } else {
        _L:
          if (*(d->tokens + i) >= 275L) {
            have_nchar = (_Bool)1;
          }
        }
        goto switch_break;
      switch_break:
        i++;
      }
                                     
    }
  while_break:
    sup->tindex = j;
    if (have_nchar) {
      if (have_achar) {
        d->superset = sup;
      } else {
        if (d->multibyte) {
                            
        } else {
           
                         
                              
           
        }
      }
    } else {
      {
        dfafree(sup);
        free((void *)sup);
      }
    }
    return;
  }
}
void dfacomp(char const *s, size_t len, struct dfa *d, int searchflag) {
  {
    {
      dfainit(d);
      dfambcache(d);
      dfaparse(s, len, d);
      dfamust(d);
      dfassbuild(d);
      dfaoptimize(d);
      dfaanalyze(d, searchflag);
    }
    if (d->superset) {
      {
        d->fast = (_Bool)1;
        dfaanalyze(d->superset, searchflag);
      }
    }
    return;
  }
}
void dfafree(struct dfa *d) {
  size_t i;
  struct dfamust *dm;
  struct dfamust *ndm;
  {
     
                                   
                              
     
                       
       
                       
       
     
                  
    {
      while (1) {
                                      
        if (!(i < (size_t)d->sindex)) {
          goto while_break;
        }
         
                                                     
                                                    
              
         
      }
                                     
    }
  while_break : {
    free((void *)d->states);
  }
    if (d->follows) {
      i = (size_t)0;
      {
        while (1) {
                                            
          if (!(i < d->tindex)) {
            goto while_break___0;
          }
          {
            free((void *)(d->follows + i)->elems);
            i++;
          }
        }
                                       
      }
    while_break___0 : {
      free((void *)d->follows);
    }
    }
    if (d->trans) {
      i = (size_t)0;
      {
        while (1) {
        while_continue___1: /* CIL Label */;
                                          
                                 
           
           
                                          
                                          
                
           
        }
                                       
      }
    while_break___1 : {
      free((void *)(d->trans - 1));
      free((void *)d->fails);
      free((void *)d->newlines);
      free((void *)d->success);
    }
    }
    dm = d->musts;
    {
      while (1) {
                                          
        if (!dm) {
          goto while_break___2;
        }
        {
          ndm = dm->next;
          free((void *)dm->must);
          free((void *)dm);
          dm = ndm;
        }
      }
                                     
    }
  while_break___2:;
    if (d->superset) {
      {
        dfafree(d->superset);
      }
    }
    return;
  }
}
static char *icatalloc(char *old, char const *new) {
  char *result;
  size_t oldsize;
  size_t newsize;
  size_t tmp;
  {
    {
      tmp = strlen(new);
      newsize = tmp;
    }
    if (newsize == 0UL) {
      return (old);
    }
    {
      oldsize = strlen((char const *)old);
      result = (char *)xrealloc((void *)old, (oldsize + newsize) + 1UL);
      memcpy((void * /* __restrict  */)((void *)(result + oldsize)), (void const * /* __restrict  */)((void const *)new),
             newsize + 1UL);
    }
    return (result);
  }
}
static char *__attribute__((__pure__)) istrstr(char const *lookin, char const *lookfor) {
  char const *cp;
  size_t len;
  int tmp;
  {
    {
      len = strlen(lookfor);
      cp = lookin;
    }
    {
      while (1) {
                                      
        if (!((int const) * cp != 0)) {
          goto while_break;
        }
        {
          tmp = strncmp(cp, lookfor, len);
        }
        if (tmp == 0) {
          return ((char * /* __attribute__((__pure__)) */)((char *)cp));
        }
        cp++;
      }
                                     
    }
  while_break:;
    return ((char * /* __attribute__((__pure__)) */)((char *)((void *)0)));
  }
}
static void freelist(char **cpp) {
  char **tmp;
  {
    {
      while (1) {
                                      
        if (!*cpp) {
          goto while_break;
        }
        {
          tmp = cpp;
          cpp++;
          free((void *)*tmp);
        }
      }
                                     
    }
  while_break:;
    return;
  }
}
static char **enlist(char **cpp, char *new, size_t len) {
  size_t i;
  size_t j;
  void *tmp;
  char *__attribute__((__pure__)) tmp___0;
  char *__attribute__((__pure__)) tmp___1;
  {
    {
      tmp = xmalloc(len + 1UL);
      new = (char *)memcpy((void * /* __restrict  */)tmp, (void const * /* __restrict  */)((void const *)new),
                           len);
      *(new + len) = (char)'\000';
      i = (size_t)0;
    }
    {
      while (1) {
                                      
        if (!((unsigned long)*(cpp + i) != (unsigned long)((void *)0))) {
          goto while_break;
        }
        {
          tmp___0 = istrstr((char const *)*(cpp + i), (char const *)new);
        }
        if ((unsigned long)tmp___0 != (unsigned long)((void *)0)) {
          {
            free((void *)new);
          }
          return (cpp);
        }
        i++;
      }
                                     
    }
  while_break:
    j = (size_t)0;
    {
      while (1) {
                                          
        if (!((unsigned long)*(cpp + j) != (unsigned long)((void *)0))) {
          goto while_break___0;
        }
         
                                                                         
         
        if ((unsigned long)tmp___1 == (unsigned long)((void *)0)) {
          j++;
        } else {
          {
            free((void *)*(cpp + j));
            i--;
          }
          if (i == j) {
            goto while_break___0;
          }
          *(cpp + j) = *(cpp + i);
          *(cpp + i) = (char *)((void *)0);
        }
      }
                                     
    }
  while_break___0 : {
    cpp = (char **)xnrealloc((void *)cpp, i + 2UL, sizeof(*cpp));
    *(cpp + i) = new;
    *(cpp + (i + 1UL)) = (char *)((void *)0);
  }
    return (cpp);
  }
}
static char **comsubs(char *left, char const *right) {
  char **cpp;
  char **tmp;
  char *lcp;
  size_t len;
  char *rcp;
  char *tmp___0;
  size_t i;
  {
    {
      tmp = (char **)xzalloc(sizeof(*cpp));
      cpp = tmp;
      lcp = left;
    }
    {
      while (1) {
                                      
        if (!((int)*lcp != 0)) {
          goto while_break;
        }
        {
          len = (size_t)0;
          tmp___0 = strchr(right, (int)*lcp);
          rcp = tmp___0;
        }
        {
          while (1) {
                                              
            if (!((unsigned long)rcp != (unsigned long)((void *)0))) {
              goto while_break___0;
            }
            i = (size_t)1;
            {
              while (1) {
                                                  
                if ((int)*(lcp + i) != 0) {
                  if (!((int)*(lcp + i) == (int)*(rcp + i))) {
                    goto while_break___1;
                  }
                } else {
                  goto while_break___1;
                }
                goto __Cont;
              __Cont:
                i++;
              }
                                             
            }
          while_break___1:;
            if (i > len) {
              len = i;
            }
            {
              rcp = strchr((char const *)(rcp + 1), (int)*lcp);
            }
          }
        while_break___3: /* CIL Label */;
        }
      while_break___0:;
        if (len != 0UL) {
          {
            cpp = enlist(cpp, lcp, len);
          }
        }
        lcp++;
      }
    while_break___2: /* CIL Label */;
    }
  while_break:;
    return (cpp);
  }
}
static char **addlists(char **old, char **new) {
  size_t tmp;
  {
    {
      while (1) {
                                      
        if (!*new) {
          goto while_break;
        }
        {
                                           
                                       
          new ++;
        }
      }
                                     
    }
  while_break:;
    return (old);
  }
}
static char **inboth(char **left, char **right) {
  char **both;
  char **tmp;
  size_t lnum;
              
              
                 
  {
    {
      tmp = (char **)xzalloc(sizeof(*both));
      both = tmp;
      lnum = (size_t)0;
    }
    {
      while (1) {
                                      
        if (!((unsigned long)*(left + lnum) != (unsigned long)((void *)0))) {
          goto while_break;
        }
                         
         
                     
                                              
                                                                                  
                                   
             
             
                                                                               
                             
                                          
                             
                                 
                     
             
           
                                         
         
                      
        lnum++;
      }
                                     
    }
  while_break:;
    return (both);
  }
}
static must *allocmust(must *mp) {
  must *new_mp;
  must *tmp;
  {
    {
      tmp = (must *)xmalloc(sizeof(*new_mp));
      new_mp = tmp;
      new_mp->in = (char **)xzalloc(sizeof(*(new_mp->in)));
      new_mp->left = (char *)xzalloc((size_t)2);
      new_mp->right = (char *)xzalloc((size_t)2);
      new_mp->is = (char *)xzalloc((size_t)2);
                                 
                                 
      new_mp->prev = mp;
    }
    return (new_mp);
  }
}
static void resetmust(must *mp) {
  char tmp;
  char tmp___0;
  {
    {
      freelist(mp->in);
      *(mp->in + 0) = (char *)((void *)0);
      tmp___0 = (char)'\000';
      *(mp->is + 0) = tmp___0;
      tmp = tmp___0;
      *(mp->right + 0) = tmp;
      *(mp->left + 0) = tmp;
      mp->begline = (_Bool)0;
      mp->endline = (_Bool)0;
    }
    return;
  }
}
static void freemust(must *mp) {
  {
    {
      freelist(mp->in);
      free((void *)mp->in);
      free((void *)mp->left);
                              
      free((void *)mp->is);
      free((void *)mp);
    }
    return;
  }
}
static void dfamust(struct dfa *d) {
  must *mp;
  char const *result;
  size_t ri;
  size_t i;
  _Bool exact;
  _Bool begline___0;
  _Bool endline;
  struct dfamust *dm;
  token t;
             
  must *rmp;
  must *lmp;
           
            
            
           
  int tmp;
                 
                 
              
                
                
               
                 
               
                 
           
                
                 
            
                
                
              
              
                
                
               
                
                
  must *prev;
                    
  {
    mp = (must *)((void *)0);
    result = "";
    exact = (_Bool)0;
    begline___0 = (_Bool)0;
    endline = (_Bool)0;
    ri = (size_t)0;
    {
      while (1) {
                                      
        if (!(ri < d->tindex)) {
          goto while_break;
        }
        t = *(d->tokens + ri);
        if (t == 258L) {
          goto case_258;
        }
        if (t == 259L) {
          goto case_259;
        }
        if (t == 270L) {
          goto case_270;
        }
        if (t == 271L) {
          goto case_270;
        }
                        
                        
         
                        
                        
         
                        
                        
         
                        
                        
         
                        
                        
         
                        
                        
         
                        
                        
         
                        
                        
         
                        
                        
         
                        
                        
         
                        
                        
         
                        
                        
         
                       
                          
         
                        
                        
         
                      
                      
         
        goto switch_default;
      case_258 : {
        mp = allocmust(mp);
        mp->begline = (_Bool)1;
      }
        goto switch_break;
      case_259 : {
        mp = allocmust(mp);
        mp->endline = (_Bool)1;
      }
        goto switch_break;
      case_270 : {
        __assert_fail("!\"neither LPAREN nor RPAREN may appear here\"", "/home/khheo/project/benchmark/grep-2.19/src/dfa.c",
                      3951U, "dfamust");
      }
      case_256 : {
        mp = allocmust(mp);
      }
        goto switch_break;
      case_265 : {
        resetmust(mp);
      }
        goto switch_break;
      case_269 : {
        rmp = mp;
        mp = mp->prev;
                 
                                                                   
      }
        if (!(tmp == 0)) {
                                        
        }
        lmp->begline = (_Bool)((int)lmp->begline & (int)rmp->begline);
        lmp->endline = (_Bool)((int)lmp->endline & (int)rmp->endline);
                      
         
                     
                                              
                                             
                                                                      
                                     
               
                    
                                   
             
                
           
                                         
         
                         
                                        
                                              
                                              
               
       
                     
                 
         
                      
         
                     
                                              
                           
                                   
             
                                                                                                 
                                   
             
                
           
                                         
         
                      
                      
         
                     
                                              
                           
                                   
             
                                                               
                
           
                                          
         
                         
                                         
                                       
                          
                              
                      
                      
       
                          
               
                                     
                          
      case_neg_1:
        if (!(!mp->prev)) {
          {
            __assert_fail("!mp->prev", "/home/khheo/project/benchmark/grep-2.19/src/dfa.c",
                          4011U, "dfamust");
          }
        }
        i = (size_t)0;
         
                     
                                              
                                                                                
                                   
             
             
                                                            
                                       
             
                                    
                                                   
             
                
           
                                          
         
                         
                                                       
       
                           
                           
                                    
                                
         
                  
                  
                     
                      
                     
                                                         
       
                                              
                                               
             
                                                             
                              
                                                            
                              
                                                       
                           
                                                                                                                            
                            
                                                                                                                                     
                            
                                                                   
                               
             
           
         
                                           
           
                                                                                  
           
         
                                           
                                               
         
         
                                                                                   
         
                                           
                  
                
                                 
             
                                               
               
                                                                                
                                                    
               
                    
                                     
                 
                                                                                  
                                                      
                 
                      
                                                  
                                            
                                            
               
             
                  
                                              
                                        
                                        
           
         
         
                            
         
        goto switch_break;
             
        goto done;
      switch_default : {
        mp = allocmust(mp);
      }
                        
                                            
                    
           
                       
                                                
                                   
                                     
               
               
                                                                                             
               
                            
                                     
               
                      
             
                                            
           
                         
                               
                              
           
                           
           
                       
                                                
                      
                                   
                                     
               
               
                                                                                             
               
                            
                                
                                      
                     
                                               
                                                
                     
                                                
                                           
                     
                          
                                         
                   
                        
                                       
                 
               
             
                                            
           
                         
                            
                              
           
         
                        
                              
             
                                         
                                        
             
                  
                               
           
                
                             
         
         
                                      
                              
                                     
                                   
                                  
                                      
                              
                                     
                                   
                                                     
         
                          
      switch_break:
        ri++;
      }
                                     
    }
  while_break:;
  done:
    if (*result) {
      {
                                                    
                          
                                  
        dm->endline = endline;
        dm->must = xstrdup(result);
                            
        d->musts = dm;
      }
    }
    {
      while (1) {
                                          
        if (!mp) {
          goto while_break___6;
        }
        {
          prev = mp->prev;
          freemust(mp);
          mp = prev;
        }
      }
                                      
    }
  while_break___6:;
    return;
  }
}
struct dfa *dfaalloc(void) {
  struct dfa *tmp;
  {
    {
      tmp = (struct dfa *)xmalloc(sizeof(struct dfa));
    }
    return (tmp);
  }
}
struct dfamust *__attribute__((__pure__)) dfamusts(struct dfa const *d) {
  {
    return ((struct dfamust * /* __attribute__((__pure__)) */)((struct dfamust *)d->musts));
  }
}
extern __attribute__((__nothrow__)) size_t mbrlen(char const *__restrict __s,
                                                  size_t __n, mbstate_t *__restrict __ps);
void build_mbclen_cache(void);
static size_t mbclen_cache[256];
                       
void kwsinit(kwset_t *kwset___1) {
  int i;
  size_t tmp;
  {
                      
       
                                       
       
                       
              
         
                     
                                          
                             
                               
             
             
                                          
                  
             
           
                                         
         
                     
                                                     
       
               
         
                                                           
         
       
            
       
        *kwset___1 = kwsalloc((char const *)((void *)0));
       
     
    if (!*kwset___1) {
      {
        xalloc_die();
      }
    }
    return;
  }
}
                 
                             
                       
                                                                       
                
                    
               
               
                  
          
                  
                       
             
                
             
            
                        
                
                      
                 
                 
                    
                    
   
                              
                        
              
            
                            
         
                       
                               
                
                        
         
         
                                                        
                                                                        
         
       
     
               
       
                                                                                         
                                        
       
     
                   
       
                                                                                             
                                        
       
     
                    
                   
     
     
                                           
                                           
                     
                                            
              
                  
                         
     
     
                 
                                      
                                                         
                           
         
         
                                                                                                
                                                                                   
                       
         
                                              
           
                                       
                                                                        
                                                                          
                             
                             
           
         
                                             
                      
                
                                               
                        
                  
                                
                      
                          
                  
                                         
                          
                  
                            
                    
                                        
                       
                                                   
                                                   
             
                    
               
                              
                                               
                                                                                                                       
                                                      
                                                          
                             
                             
                                  
                                                                                    
               
             
           
         
       
                                     
     
               
                         
                           
            
                                               
     
                           
                 
                 
   
 
void build_mbclen_cache(void) {
  int i;
  char c;
  unsigned char uc;
  mbstate_t mbs;
                   
  {
    i = -128;
    {
      while (1) {
                                      
        if (!(i <= 127)) {
          goto while_break;
        }
        {
          c = (char)i;
          uc = (unsigned char)i;
          mbs.__count = 0;
          mbs.__value.__wch = 0U;
          mbclen_cache[uc] = mbrlen((char const * /* __restrict  */)((char const *)(&c)),
                                    (size_t)1, (mbstate_t * /* __restrict  */)(&mbs));
          i++;
        }
      }
                                     
    }
  while_break:;
    return;
  }
}
                                                                              
                
                 
                      
                
                    
               
                    
   
     
                    
             
                                                         
     
     
                 
                                      
                                                       
                           
         
         
                                   
                                     
         
                                             
           
                                                                                                                               
           
         
                           
                                                 
             
                                 
                                                                 
             
           
                
           
                               
                                                               
           
         
               
                    
       
                                     
     
              
                  
                                                 
                   
            
                         
     
                     
   
 
                                                                      
                
                
                 
   
                                                   
                           
     
     
              
            
                                    
                 
                                     
     
                     
   
 
wint_t mb_next_wc(char const *cur, char const *end) {
             
  mbstate_t mbs;
  unsigned int tmp___0;
                 
                   
  {
    mbs.__count = 0;
    mbs.__value.__wch = 0U;
                          
       
                                                                                                  
                                                                                      
       
                                           
                                   
              
                              
       
            
                            
     
    return (tmp___0);
  }
}
extern int fflush_unlocked(FILE *__stream);
extern int fputc_unlocked(int __c, FILE *__stream);
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n,
                             FILE *__restrict __stream);
extern size_t fwrite_unlocked(void const *__restrict __ptr, size_t __size, size_t __n,
                              FILE *__restrict __stream);
extern __attribute__((__nothrow__)) __off_t lseek(int __fd, __off_t __offset, int __whence);
extern __attribute__((__nothrow__)) int isatty(int __fd);
extern char *optarg;
extern int optind;
extern __attribute__((__nothrow__)) int getpagesize(void) __attribute__((__const__));
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1))) atexit)(void (*__func)(void));
extern __attribute__((__nothrow__, __noreturn__)) void exit(int __status);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strcasecmp)(char const *__s1,
                                                                                       char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *textdomain(char const *__domainname);
extern __attribute__((__nothrow__)) char *bindtextdomain(char const *__domainname,
                                                         char const *__dirname);
extern int getopt_long(int ___argc, char *const *___argv, char const *__shortopts,
                       struct option const *__longopts, int *__longind);
static struct stat out_stat;
static int show_help;
                        
static int suppress_errors;
static int color_option;
static int only_matching;
static int align_tabs;
                                          
static char const *selected_match_color = "01;31";
static char const *context_match_color = "01;31";
static char const *filename_color = "35";
static char const *line_num_color = "32";
static char const *byte_num_color = "32";
static char const *sep_color = "36";
static char const *selected_line_color = "";
static char const *context_line_color = "";
static char const *sgr_start = "\033[%sm\033[K";
                                            
static void pr_sgr_start(char const *s) {
  {
    if (*s) {
      {
        print_start_colorize(sgr_start, s);
      }
    }
    return;
  }
}
                                       
   
             
       
                                    
       
     
           
   
 
static void pr_sgr_start_if(char const *s) {
  {
    if (color_option) {
       
                        
       
    }
    return;
  }
}
static void pr_sgr_end_if(char const *s) {
  {
                       
       
                      
       
     
    return;
  }
}
static void color_cap_mt_fct(void) {
   
                                               
           
   
}
static void color_cap_rv_fct(void) {
  {
    color_option = -1;
    return;
  }
}
static void color_cap_ne_fct(void) {
                   
                   
  {
    sgr_start = "\033[%sm";
                       
    return;
  }
}
static struct color_cap const color_dict[12] =
    {{"mt", &selected_match_color, &color_cap_mt_fct},
     {"ms", &selected_match_color, (void (*)(void))((void *)0)},
     {"mc", &context_match_color, (void (*)(void))((void *)0)},
     {"fn", &filename_color, (void (*)(void))((void *)0)},
     {"ln", &line_num_color, (void (*)(void))((void *)0)},
     {"bn", &byte_num_color, (void (*)(void))((void *)0)},
     {"se", &sep_color, (void (*)(void))((void *)0)},
     {"sl", &selected_line_color, (void (*)(void))((void *)0)},
     {"cx", &context_line_color, (void (*)(void))((void *)0)},
     {"rv", (char const **)((void *)0), &color_cap_rv_fct},
     {"ne", (char const **)((void *)0), &color_cap_ne_fct},
     {(char const *)((void *)0), (char const **)((void *)0), (void (*)(void))((void *)0)}};
static struct exclude *excluded_patterns;
static struct exclude *excluded_directory_patterns;
static char const short_options[58] =
    {(char const)'0', (char const)'1', (char const)'2', (char const)'3',
     (char const)'4', (char const)'5', (char const)'6', (char const)'7',
     (char const)'8', (char const)'9', (char const)'A', (char const)':',
     (char const)'B', (char const)':', (char const)'C', (char const)':',
     (char const)'D', (char const)':', (char const)'E', (char const)'F',
     (char const)'G', (char const)'H', (char const)'I', (char const)'P',
     (char const)'T', (char const)'U', (char const)'V', (char const)'X',
     (char const)':', (char const)'a', (char const)'b', (char const)'c',
     (char const)'d', (char const)':', (char const)'e', (char const)':',
     (char const)'f', (char const)':', (char const)'h', (char const)'i',
     (char const)'L', (char const)'l', (char const)'m', (char const)':',
     (char const)'n', (char const)'o', (char const)'q', (char const)'R',
     (char const)'r', (char const)'s', (char const)'u', (char const)'v',
     (char const)'w', (char const)'x', (char const)'y', (char const)'Z',
     (char const)'z', (char const)'\000'};
static struct option const long_options[50] =
    {{"basic-regexp", 0, (int *)((void *)0), 'G'},
     {"extended-regexp", 0, (int *)((void *)0), 'E'},
     {"fixed-regexp", 0, (int *)((void *)0), 'F'},
     {"fixed-strings", 0, (int *)((void *)0), 'F'},
     {"perl-regexp", 0, (int *)((void *)0), 'P'},
     {"after-context", 1, (int *)((void *)0), 'A'},
     {"before-context", 1, (int *)((void *)0), 'B'},
     {"binary-files", 1, (int *)((void *)0), 128},
     {"byte-offset", 0, (int *)((void *)0), 'b'},
     {"context", 1, (int *)((void *)0), 'C'},
     {"color", 2, (int *)((void *)0), 129},
     {"colour", 2, (int *)((void *)0), 129},
     {"count", 0, (int *)((void *)0), 'c'},
     {"devices", 1, (int *)((void *)0), 'D'},
     {"directories", 1, (int *)((void *)0), 'd'},
     {"exclude", 1, (int *)((void *)0), 131},
     {"exclude-from", 1, (int *)((void *)0), 132},
     {"exclude-dir", 1, (int *)((void *)0), 135},
     {"file", 1, (int *)((void *)0), 'f'},
     {"files-with-matches", 0, (int *)((void *)0), 'l'},
     {"files-without-match", 0, (int *)((void *)0), 'L'},
     {"group-separator", 1, (int *)((void *)0), 136},
     {"help", 0, &show_help, 1},
     {"include", 1, (int *)((void *)0), 130},
     {"ignore-case", 0, (int *)((void *)0), 'i'},
     {"initial-tab", 0, (int *)((void *)0), 'T'},
     {"label", 1, (int *)((void *)0), 134},
     {"line-buffered", 0, (int *)((void *)0), 133},
     {"line-number", 0, (int *)((void *)0), 'n'},
     {"line-regexp", 0, (int *)((void *)0), 'x'},
     {"max-count", 1, (int *)((void *)0), 'm'},
     {"no-filename", 0, (int *)((void *)0), 'h'},
     {"no-group-separator", 0, (int *)((void *)0), 136},
     {"no-messages", 0, (int *)((void *)0), 's'},
     {"null", 0, (int *)((void *)0), 'Z'},
     {"null-data", 0, (int *)((void *)0), 'z'},
     {"only-matching", 0, (int *)((void *)0), 'o'},
     {"quiet", 0, (int *)((void *)0), 'q'},
     {"recursive", 0, (int *)((void *)0), 'r'},
     {"dereference-recursive", 0, (int *)((void *)0), 'R'},
     {"regexp", 1, (int *)((void *)0), 'e'},
     {"invert-match", 0, (int *)((void *)0), 'v'},
     {"silent", 0, (int *)((void *)0), 'q'},
     {"text", 0, (int *)((void *)0), 'a'},
     {"binary", 0, (int *)((void *)0), 'U'},
     {"unix-byte-offsets", 0, (int *)((void *)0), 'u'},
     {"version", 0, (int *)((void *)0), 'V'},
     {"with-filename", 0, (int *)((void *)0), 'H'},
     {"word-regexp", 0, (int *)((void *)0), 'w'},
     {(char const *)0, 0, (int *)0, 0}};
                           
static char const *filename;
static size_t filename_prefix_len;
static int errseen;
                            
                                                                                                                                                                                                                       
                                                                                                                                                           
static enum directories_type directories = (enum directories_type)2;
static int fts_options = 793;
static enum __anonenum_devices_71 devices = (enum __anonenum_devices_71)0;
static int grepfile(int dirdesc, char const *name, int follow, int command_line);
static int grepdesc(int desc, int command_line);
static void dos_binary(void);
static void dos_unix_byte_offsets(void);
static int undossify_input(char *buf, size_t buflen);
static int is_device_mode(mode_t m) {
  int tmp;
  {
                                
              
            
                                   
                
              
                                     
                  
                
                                      
                    
                  
                    
           
         
       
     
    return (tmp);
  }
}
static int usable_st_size(struct stat const *st) {
  int tmp;
  {
    if ((st->st_mode & 61440U) == 32768U) {
      tmp = 1;
    } else {
                                      
                
              
                
       
    }
                 
  }
}
static void (*compile)(char const *, size_t);
static size_t (*execute)(char const *, size_t, size_t *, char const *);
static void suppressible_error(char const *mesg, int errnum) {
   
                           
       
                                     
       
     
                
           
   
}
static void clean_up_stdout(void) {
   
                            
       
                       
       
     
           
   
}
static int file_is_binary(char const *buf, size_t bufsize, int fd, struct stat const *st) {
            
                
            
                   
                
               
                  
  int tmp___4;
  {
                   
       
                                                         
       
                                                                
     
     
                                                           
     
                  
                 
     
    {
      tmp___4 = usable_st_size(st);
    }
                  
                           
                    
         
                                         
         
                       
                     
         
       
       
                                    
                             
       
                             
         
                                      
         
                           
           
                                         
                                                   
           
         
                                              
                     
         
       
     
               
  }
}
static void context_length_arg(char const *str, intmax_t *out___0) {
  strtol_error tmp;
  char *tmp___0;
                   
                   
  {
    {
      tmp = xstrtoimax(str, (char **)0, 10, out___0, "");
    }
    if ((unsigned int)tmp == 0U) {
      goto case_0;
    }
                                  
                  
     
                        
  case_0:
    if (0L <= *out___0) {
      goto switch_break;
    }
  switch_default : {
    tmp___0 = gettext("invalid context length argument");
    error(2, 0, "%s: %s", str, tmp___0);
  }
  switch_break:;
    return;
  }
}
static int skipped_file(char const *name, int command_line, int is_dir) {
  _Bool tmp;
  int tmp___0;
  _Bool tmp___1;
  int tmp___2;
  int tmp___3;
  {
    if (is_dir) {
      if ((unsigned int)directories == 4U) {
        tmp___0 = 1;
      } else {
        if (command_line) {
          if (filename_prefix_len != 0UL) {
            tmp___0 = 0;
          } else {
            goto _L;
          }
        } else {
        _L:
          if (excluded_directory_patterns) {
            {
              tmp = excluded_file_name((struct exclude const *)excluded_directory_patterns,
                                       name);
            }
            if (tmp) {
              tmp___0 = 1;
            } else {
              tmp___0 = 0;
            }
          } else {
            tmp___0 = 0;
          }
        }
      }
      tmp___3 = tmp___0;
    } else {
      if (excluded_patterns) {
        {
                                                                                        
        }
                      
                      
                
                      
         
      } else {
        tmp___2 = 0;
      }
      tmp___3 = tmp___2;
    }
    return (tmp___3);
  }
}
static char *buffer;
static size_t bufalloc;
static int bufdesc;
static char *bufbeg;
static char *buflim;
static size_t pagesize;
static off_t bufoffset;
static off_t after_last_match;
static int reset(int fd, struct stat const *st) {
  size_t tmp;
  int *tmp___0;
  char *tmp___1;
                   
  {
                   {
      {
        pagesize = (size_t)getpagesize();
      }
                            
         
                  
         
              
                                               
           
                    
           
         
       
                                     {
        tmp = (size_t)32768;
      }       
                                                        
       
      {
        bufalloc = (tmp + pagesize) + 1UL;
        buffer = (char *)xmalloc(bufalloc);
      }
    }
                                                 
                          
           {
      buflim = (buffer + 1) + (pagesize - (size_t)(buffer + 1) % pagesize);
    }
                    
                                   
    bufdesc = fd;
                                           
                    
                             
              
         
                                               
         
                             
           
                                         
                                              
                                                                
           
                     
         
       
     
    return (1);
  }
}
static int fillbuf(size_t save, struct stat const *st) {
  ssize_t fillsize;
  int cc;
  char *readbuf;
  size_t readsize;
  size_t saved_offset;
  size_t minsize;
  size_t newsize;
  size_t newalloc;
  char *newbuf;
  off_t to_be_read;
  off_t maxsize_off;
  int tmp;
  void *tmp___0;
  {
    cc = 1;
    saved_offset = (size_t)((buflim - save) - buffer);
    if (pagesize <= (size_t)((buffer + bufalloc) - buflim)) {
      readbuf = buflim;
      bufbeg = buflim - save;
    } else {
      minsize = save + pagesize;
      newsize = (bufalloc - pagesize) - 1UL;
      {
        while (1) {
                                        
          if (!(newsize < minsize)) {
                             
          }
          if (newsize * 2UL < newsize) {
            {
              xalloc_die();
            }
          } else {
            if ((newsize * 2UL + pagesize) + 1UL < newsize * 2UL) {
              {
                xalloc_die();
              }
            }
          }
          newsize *= 2UL;
        }
                                       
      }
    while_break : {
                               
    }
                
                                                                     
                                                         
                               
                                          
                                                             
                                                   
                                                    
                                                
                 
               
             
           
         
       
                                            
                                
         
                              
                                      
                                   
         
              
                        
       
                                                            
                                      
              
                                                                                                
       
       
                                
                                                                             
                                       
       
                                                           
         
                               
                          
         
       
    }
    {
      readsize = (size_t)((buffer + bufalloc) - readbuf);
      readsize -= readsize % pagesize;
      fillsize = (ssize_t)safe_read(bufdesc, (void *)readbuf, readsize);
    }
    if (fillsize < 0L) {
      cc = 0;
      fillsize = (ssize_t)cc;
    }
    {
                            
                                                                     
      buflim = readbuf + fillsize;
    }
    return (cc);
  }
}
                                                    
static int filename_mask;
static int out_quiet;
static _Bool out_invert;
static int out_file;
static int out_line;
                    
static intmax_t out_before;
static intmax_t out_after;
static int count_matches;
static int list_files;
static int no_filenames;
static intmax_t max_count;
                         
static char *label = (char *)((void *)0);
static uintmax_t totalcc;
static char const *lastnl;
                           
static uintmax_t totalnl;
static intmax_t outleft;
                        
static int done_on_match;
static int exit_on_match;
                                      
                                              
                                                  
                                         
                                   
                                
                                
                           
                           
static void dos_binary(void) {
  {
    return;
  }
}
static void dos_unix_byte_offsets(void) {
  {
    return;
  }
}
static int undossify_input(char *buf, size_t buflen) {
  int chars_left;
              
            
                
              
                
                 
  {
                         
    chars_left = 0;
                         
                      
                      
                           
                                  
                                        
     
                                            
       
                                                           
       
     
                                            
                  
       
                   
                                        
                           
                   
                         
                             
           
                                
                        
                    
                          
                  
                            
                         
                  
                  
                           
                                            
                                   
                 
                             
                                                      
                                 
                                               
                                             
                       
                            
                                           
                     
                                       
                             
                          
                   
                                                 
                 
                               
                                                          
                                    
                                                       
                          
                                            
                   
                   
                                                                                                                                            
                   
                 
                                   
                                                              
                                        
                                
                                                          
                                                              
                 
                              
                                      
                                      
                        
                                  
                 
                                                                                                          
                                                                    
                                               
                                                                                                          
               
             
           
         
                                       
       
                 
                          
     
                         
  }
}
                                          
               
               
   
                    
                                            
                      
            
                                   
                        
       
     
                                                    
                                              
                           
                    
       
                   
                                        
                                               
                                                                
                               
             
                  
                             
           
                        
         
                                       
       
                 
            
                            
                      
         
                     
                                              
                                  
                                                                       
                                     
               
                    
                                   
             
                          
           
                                         
         
                       
       
     
                                                       
   
 
static uintmax_t add_count(uintmax_t a, uintmax_t b) {
  uintmax_t sum;
  char *tmp;
                   
  {
    sum = a + b;
    if (sum < a) {
      {
                                                     
        error(2, 0, (char const *)tmp);
      }
    }
    return (sum);
  }
}
static void nlscan(char const *lim) {
  size_t newlines;
  char const *beg;
  {
    newlines = (size_t)0;
    beg = lastnl;
    {
      while (1) {
                                     ;
                                                         
                           
         
        {
          beg = (char const *)memchr((void const *)beg, (int)eolbyte, (size_t)(lim - beg));
        }
        if (!beg) {
          goto while_break;
        }
        newlines++;
        beg++;
      }
                                    ;
    }
  while_break : {
    totalnl = add_count(totalnl, newlines);
                 
  }
           
  }
}
static void print_filename(void) {
  {
    {
                                      
      fputs_unlocked((char const * /* __restrict  */)filename, (FILE * /* __restrict  */) stdout);
      pr_sgr_end_if(filename_color);
    }
    return;
  }
}
static void print_sep(char sep) {
   
     
                                 
      fputc_unlocked((int)sep, stdout);
                               
     
           
   
}
static void print_offset(uintmax_t pos, int min_width, char const *color) {
  char buf[sizeof(pos) * 8UL];
  char *p;
                   
  {
    p = buf + sizeof(buf);
    {
      while (1) {
                                     ;
        p--;
        *p = (char)(48UL + pos % 10UL);
                    
        pos /= 10UL;
        if (!(pos != 0UL)) {
          goto while_break;
        }
      }
                                    ;
    }
  while_break:;
                     
       
                   
                                            
                      
                                  
                                 
           
              
                         
         
                                       
       
                     
     
    {
                             
      fwrite_unlocked((void const * /* __restrict  */)((void const *)p), (size_t)1,
                      (size_t)((buf + sizeof(buf)) - p), (FILE * /* __restrict  */) stdout);
                           
    }
           
  }
}
static void print_line_head(char const *beg, char const *lim, int sep) {
  int pending_sep;
  uintmax_t pos;
  uintmax_t tmp;
  {
    pending_sep = 0;
    if (out_file) {
      {
        print_filename();
      }
                         {
        pending_sep = 1;
      }       
         
                                    
         
       
    }
    if (out_line) {
                                                      {
         
          nlscan(beg);
          totalnl = add_count(totalnl, (uintmax_t)1);
          lastnl = lim;
         
      }
                        
         
                               
         
       
      {
        print_offset(totalnl, 4, line_num_color);
        pending_sep = 1;
      }
    }
                   
       
                                                                          
                  
                                                   
       
                        
         
                               
         
       
       
                                             
                        
       
     
    if (pending_sep) {
                       
         
                                                                                                     
         
       
       
        print_sep((char)sep);
       
    }
           
  }
}
static char const *print_line_middle(char const *beg, char const *lim, char const *line_color,
                                     char const *match_color) {
  size_t match_size;
  size_t match_offset;
  char const *cur;
  char const *mid;
  char const *b;
  int tmp;
  {
    cur = beg;
                                    
    {
                {
                                     ;
                                                     {
           
            match_offset = (*execute)(beg, (size_t)(lim - beg), &match_size, beg + (cur - beg));
           
                                                        
                             
           
        }       
                           
         
        b = beg + match_offset;
                                                     
                           
         
                                
                                 
                     
                      
           
               {
                              
                             
                        
                    
                        
             
             
                                           
             
                  
             
                                       
             
                      
                        
                                              
             
             
                                                                                                
                                                                                    
             
           
          {
                                         
            fwrite_unlocked((void const * /* __restrict  */)((void const *)b), sizeof(char),
                            match_size, (FILE * /* __restrict  */) stdout);
                                       
          }
                             {
             
              fputs_unlocked((char const * /* __restrict  */) "\n", (FILE * /* __restrict  */) stdout);
             
          }
        }
                             
      }
                                    ;
    }
               
                        
                
            
                
                  
       
     
    return (cur);
  }
}
                                                                                              
                  
                   
          
              
   
                                                  
                                                           
                
              
                
       
            
              
     
                           
                                                               
                                                          
                    
              
                    
       
            
                  
     
                                
                                                 
                          
       
                                 
                                                                                       
                                                                      
                         
                               
       
     
                 
   
 
static void prline(char const *beg, char const *lim, int sep) {
  int matching;
  char const *line_color;
  char const *match_color;
  int tmp___0;
  char *tmp___1;
  int tmp___2;
                    
  {
                        {
       
        print_line_head(beg, lim, sep);
       
    }
                                             
                       
                       
                               
                      
                 
                      
         
              
                    
       
                                  
                                         
              
                                        
       
                      
                                           
              
                                          
       
           {
      match_color = (char const *)((void *)0);
                               
    }
    if (only_matching) {
                     
        goto _L___0;
                
                    
       
    } else {
    _L___1:
                              if (color_option) {
                          
                      
                
                             
          _L___0:
                          {
                                  
                 
                  beg = print_line_middle(beg, lim, line_color, match_color);
                 
                        
                                   
                   
                                                                               
                   
                 
               
            }
                                 
                                
                 
                                                              
                 
               
             
           
         
      }
    }
    if (!only_matching) {
                                                    
         
          fwrite_unlocked((void const * /* __restrict  */)((void const *)beg), (size_t)1,
                          (size_t)(lim - beg), (FILE * /* __restrict  */) stdout);
         
       
    }
    {
      tmp___2 = ferror_unlocked(stdout);
    }
                  
       
                             
                                         
                                           
       
     
                  
                        
       
                                
       
     
           
  }
}
static void prpending(char const *lim) {
                 
                  
                    
                 
  {
                   
                                     
     
     
                 
                                      
                           
                                                               
                             
           
                
                           
         
         
                                                                                                   
                   
                    
         
                      
           
                                         
           
                
           
                                                                                                                
           
                                                                 
             
                                           
             
                  
                                  
           
         
       
                                     
     
               
    return;
  }
}
                  
static void prtext(char const *beg, char const *lim) {
  char eol;
  char const *p;
  char const *bp;
  char const *tmp;
  intmax_t i;
  char const *nl;
  char const *tmp___0;
  intmax_t n;
  char const *nl___0;
  char const *tmp___1;
  {
    eol = (char)eolbyte;
                     
                         
         
                         
         
       
     
    p = beg;
                     
                    
                      
              
                                   
       
               
                      
       
                   
                                        
                                  
                             
           
                                                     
             
                         
                                                  
                    
                                                                  
                                       
                 
               
                                             
             
                           
           
              
         
                                       
       
                 
                             
                
              
                              
           
                     
                                                             
                                    
                 
                                             
                                                                                                                     
                                           
                                               
                 
               
             
           
         
       
       
                   
                                            
                                                         
                                 
           
           
                                                                                         
                         
                 
                               
                   
           
         
                                       
       
                     
     
                    {
      n = (intmax_t)0;
      {
        while (1) {
                                           ;
          if ((unsigned long)p < (unsigned long)lim) {
                                 
                                   
             
          } else {
            goto while_break___2;
          }
          {
            tmp___1 = (char const *)memchr((void const *)p, (int)eol, (size_t)(lim - p));
            nl___0 = tmp___1;
            nl___0++;
          }
          if (!out_quiet) {
             
              prline(p, nl___0, ':');
             
          }
          p = nl___0;
          n++;
        }
                                      ;
      }
    while_break___2:;
    }       
                       
         
                                
         
       
                      
              
     
                                                        
                    
                            
            
                          
     
                    
    outleft -= n;
           
  }
}
static size_t do_execute(char const *buf, size_t size, size_t *match_size, char const *start_ptr) {
  size_t result;
  char const *line_next;
  size_t tmp;
  size_t tmp___0;
  char const *line_buf;
  char const *line_end;
  char const *tmp___1;
  {
                                                               
              
            
                                                                 
            
                                           
       
                             
           
                                                               
           
                       
                
                             
             
                                                                 
             
                         
           
         
              
        {
          tmp = (*execute)(buf, size, match_size, start_ptr);
        }
        return (tmp);
       
     
                    
     
                 
                                      
                                                                        
                           
         
         
                               
                                                                                                                  
                             
         
                                                                    
                                
                               
                
                                   
         
                        
                                                                    
                        
           
         
         
                                                                                               
         
                                             
                                                     
         
              
       
                                     
     
               
                        
  }
}
static intmax_t grepbuf(char const *beg, char const *lim) {
  intmax_t outleft0;
  char const *p;
  char const *endp;
  size_t match_size;
  size_t match_offset;
  size_t tmp;
  char const *b;
  char const *prbeg;
  char const *tmp___0;
  char const *prend;
  char const *tmp___1;
  {
    outleft0 = outleft;
    p = beg;
    {
      while (1) {
                                     ;
        if (!((unsigned long)p < (unsigned long)lim)) {
          goto while_break;
        }
        {
          tmp = do_execute(p, (size_t)(lim - p), &match_size, (char const *)((void *)0));
          match_offset = tmp;
        }
        if (match_offset == 0xffffffffffffffffUL) {
                            
                             
           
          match_offset = (size_t)(lim - p);
          match_size = (size_t)0;
        }
        b = p + match_offset;
        endp = b + match_size;
                          
                                                       
                             
           
         
                          
                      
               {
                                                    
          _L___0:
                               if (out_invert) {
              tmp___0 = p;
            } else {
              tmp___0 = b;
            }
            prbeg = tmp___0;
            if (out_invert) {
              tmp___1 = b;
            } else {
              tmp___1 = endp;
            }
            {
              prend = tmp___1;
              prtext(prbeg, prend);
            }
                           
                      
                    
                                  
                 
                                     
                   
                            
                   
                 
                                 
               
             
           
        }
        p = endp;
      }
                                    ;
    }
  while_break:;
    return (outleft0 - outleft);
  }
}
static intmax_t grep(int fd, struct stat const *st) {
  intmax_t nlines;
  intmax_t i;
  int not_text;
  size_t residue;
  size_t save;
  char oldc;
  char *beg;
  char *lim;
  char eol;
  int tmp;
  int *tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  intmax_t tmp___4;
  int *tmp___5;
  int tmp___6;
  char *tmp___7;
  intmax_t tmp___8;
  char *tmp___9;
                    
  {
    {
      eol = (char)eolbyte;
      tmp = reset(fd, st);
    }
    if (!tmp) {
      return ((intmax_t)0);
    }
    {
      totalcc = (uintmax_t)0;
                                
                             
                          
                                  
                            
      nlines = (intmax_t)0;
                          
      save = (size_t)0;
      tmp___1 = fillbuf(save, st);
    }
                   
       
                                     
                                               
       
                           
     
                                           
                       
                
                 
                    
       
            
           
                                                
            
                                                                                     
                                     
       
                      
                      
                
                      
         
              
                    
       
     
                       
                   
                                             
                             
       
     
                              
                          
    {
                {
                                     ;
        lastnl = (char const *)bufbeg;
                      
                                         
         
        beg = bufbeg + save;
                                                          
                           
         
        {
                             
                            
          lim = (char *)memrchr((void const *)(beg - 1), (int)eol, (size_t)((buflim - beg) + 1L));
          lim++;
                             
        }
                                                       
                              
         
                       
                                         
                                                     {
                        
             
              tmp___4 = grepbuf((char const *)beg, (char const *)lim);
              nlines += tmp___4;
             
           
                        
             
                                           
             
           
                         
                           
                               
                    
                          
             
                  
                 
                            
                                  
                                 
               
             
           
        }
                        
                  
         
                     
                                              
                                 
                                                               
                                                                      
                                       
                 
                      
                                     
               
                    
                                   
             
                
             
                         
                                                  
                      
                                                      
                                       
                 
               
                                             
             
                           
           
                                         
         
                       
                                                           
                                    
         
                                               
                       
           
                                                                           
           
         
                       
           
                                      
           
         
         
                                      
         
                       
           
                                         
                                                   
           
                           
         
      }
                                    ;
    }
               
                  
                       
               
                     
                    
         
                                                                                             
                            
         
       
                    
         
                                          
         
       
     
              
                               
                          
                                
                         
         
                                                        
                                                                                    
         
       
     
    return (nlines);
  }
}
static int grepdirent(FTS *fts, FTSENT *ent, int command_line) {
  int follow;
  int dirdesc;
  struct stat *st;
  int tmp;
  int tmp___0;
  int tmp___1;
  char *tmp___2;
  char *tmp___3;
  struct stat st1;
  int flag;
  int tmp___4;
  int *tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
                    
                    
                    
  {
                        
                                         
                                  
                                            
                           
                                           
         
       
                 
     
                                  
              
            
                                    
                
              
                                      
                  
                
                  
         
       
     
     
                                                                               
     
                  
       
                             
       
                 
     
    filename = (char const *)(ent->fts_path + filename_prefix_len);
                               
                  
           {
                                 
                           
                      
                
                      
         
                
                    
       
    }
    follow = tmp___1;
    if ((int)ent->fts_info == 1) {
      goto case_1;
    }
                                  
                  
     
                                  
                  
     
    if ((int)ent->fts_info == 7) {
      goto case_4;
    }
                                   
                  
     
                                 {
      goto case_3;
    }
                                  {
      goto case_3;
    }
                                 {
      goto case_8;
    }
                                   
                  
     
                                   
                   
     
                                   
                   
     
                        
  case_1:
                                         {
      out_file |= 2 * !no_filenames;
                 
    }
     
                           
     
                      
         
                           
       
                                                      
                                             
                                                              
       
     
               
  case_4 : {
    suppressible_error(filename, ent->fts_errno);
  }
    return (1);
  case_3:
                                      
              
           {
                                        
                            
        _L:
                                                 {
                        {
              tmp___4 = 0;
            }       
                            
             
            {
              flag = tmp___4;
              tmp___6 = fstatat(fts->fts_cwd_fd, (char const * /* __restrict  */)((char const *)ent->fts_accpath),
                                (struct stat * /* __restrict  */)(&st1), flag);
            }
                              {
               
                tmp___5 = __errno_location();
                suppressible_error(filename, *tmp___5);
               
                         
            }
            st = &st1;
          }
           
                                                  
           
                        
                       
           
         
       
    }
                      
  case_8:
    goto switch_break;
          
               
                      
            
   
  switch_break:;
                                         {
      dirdesc = fts->fts_cwd_fd;
    }       
                     
     
    {
      tmp___8 = grepfile(dirdesc, (char const *)ent->fts_accpath, follow, command_line);
    }
    return (tmp___8);
  }
}
static int grepfile(int dirdesc, char const *name, int follow, int command_line) {
  int desc;
  int tmp;
  int tmp___0;
  int *tmp___1;
  int *tmp___2;
  int *tmp___3;
  int tmp___4;
  {
                 
              
           {
      tmp = 131072;
    }
    {
      tmp___0 = openat_safer(dirdesc, name, tmp);
      desc = tmp___0;
    }
                   
                   
         
                                       
                                                 
         
              
         
                                       
         
                             
           
                                         
           
                               
             
                                           
                                                     
             
           
         
       
                 
     
    {
      tmp___4 = grepdesc(desc, command_line);
    }
    return (tmp___4);
  }
}
static int grepdesc(int desc, int command_line) {
  intmax_t count;
  int status;
  struct stat st;
  int *tmp;
  int tmp___0;
  int tmp___1;
  FTS *fts;
  FTSENT *ent;
  int opts;
  int tmp___2;
  char *fts_arg[2];
  int *tmp___3;
  int tmp___4;
  int tmp___5;
  int *tmp___6;
  int *tmp___7;
  int *tmp___8;
  int tmp___9;
  int tmp___10;
  char const *tmp___11;
  char *tmp___12;
  int tmp___13;
  off_t required_offset;
  off_t tmp___14;
  int *tmp___15;
  __off_t tmp___16;
  int *tmp___17;
  int tmp___18;
                    
                    
                    
  {
    {
                 
      tmp___0 = fstat(desc, &st);
    }
                       
       
                                 
                                           
       
                    
     
                    
                         
         
                                                                               
         
                      
                        
         
       
     
    if (desc != 0) {
      if ((unsigned int)directories == 3U) {
        if ((st.st_mode & 61440U) == 16384U) {
                            {
            tmp___2 = 0;
          }       
                        
           
          {
            opts = fts_options & ~tmp___2;
                                  
          }
          if (tmp___4 != 0) {
            {
              tmp___3 = __errno_location();
              suppressible_error(filename, *tmp___3);
            }
          }
          {
            fts_arg[0] = (char *)filename;
            fts_arg[1] = (char *)((void *)0);
            fts = fts_open((char *const *)(fts_arg), opts, (int (*)(FTSENT const **, FTSENT const **))((void *)0));
          }
          if (!fts) {
            {
              xalloc_die();
            }
          }
          {
            while (1) {
                                           ;
              {
                ent = fts_read(fts);
              }
              if (!ent) {
                goto while_break;
              }
              {
                tmp___5 = grepdirent(fts, ent, command_line);
                status &= tmp___5;
              }
            }
                                          ;
          }
        while_break : {
          tmp___7 = __errno_location();
        }
          if (*tmp___7) {
             
                                           
                                                     
             
          }
           
                                     
           
          if (tmp___9 != 0) {
            {
              tmp___8 = __errno_location();
                                                     
            }
          }
          return (status);
        }
      }
    }
                    
                                            
                                              
                        
                
                      
         
              
             
                                          
                  
                
                                            
                                
                  
                                                    
             
                             
                              
               
             
           
         
       
     
                     
                            
                             
                                                      
                                  
                                                 
                                                   
                                         
                     
                                                 
                                                                             
                                                                    
                     
                   
                              
                                
                 
               
             
           
         
       
     
    {
      tmp___13 = isatty(desc);
    }
                    
       
                                 
       
     
    {
      count = grep(desc, (struct stat const *)(&st));
    }
    if (count < 0L) {
                                 
    } else {
      if (count_matches) {
        if (out_file) {
          {
            print_filename();
          }
          if (filename_mask) {
            {
              print_sep((char)':');
            }
          } else {
             
                                        
             
          }
        }
        {
          printf((char const * /* __restrict  */) "%ld\n", count);
        }
      }
      status = !count;
      if (list_files == 1 - 2 * status) {
         
          print_filename();
          fputc_unlocked(10 & filename_mask, stdout);
         
      }
      if (desc == 0) {
        if (outleft) {
          tmp___14 = bufoffset;
        } else {
          tmp___14 = after_last_match;
        }
        required_offset = tmp___14;
                                           
           
                                                       
           
                              
                                                  
               
                                              
                                                        
               
             
           
         
      }
    }
           
                    
       
                               
       
                          
         
                                        
                                                  
         
       
     
                    
  }
}
static int grep_command_line_arg(char const *arg) {
  char *tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
                   
  {
     
                                 
     
    if (tmp___2 == 0) {
      if (label) {
        filename = (char const *)label;
      } else {
        {
          tmp = gettext("(standard input)");
                                       
        }
      }
      {
        tmp___0 = grepdesc(0, 1);
      }
                       
    } else {
      {
        filename = arg;
        tmp___1 = grepfile(-100, arg, 1, 1);
      }
      return (tmp___1);
    }
  }
}
__attribute__((__noreturn__)) void usage(int status);
void usage(int status) {
            
  char *tmp___0;
                
  char *tmp___2;
                
                
                
                
                
                
                
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    if (status != 0) {
      {
                                                                   
                                                                                                       
                              
                                                                       
        fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */)((char const *)tmp___0),
                program_name);
      }
    } else {
      {
                                                                       
                                                                                      
        tmp___2 = gettext("Search for PATTERN in each FILE or standard input.\n");
        printf((char const * /* __restrict  */)((char const *)tmp___2));
                                                                                         
                                                                        
                                                                                                                    
                                                                                      
                                                                                                                                                                                                                                                                                                                                       
                                                                        
                                                                                                                                                                                                                                                                                                                                                                                                               
                                                                        
                                                                                                                                                                                                                                                                                           
                                                                        
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
                                                                        
                                                                                                                                                                                                                                                                                                                                                                                
                                                                        
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
                                                                         
                                                                                                                                                                                                                                                                                                                                                  
                                                                         
                                                                                                                                                                                                                                                                                                                                                                                     
                                                                         
                                                                                                                                                                                                                                                   
                                                                         
                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                                                                         
                                                                                                                                                              
                                                                         
                                                                                                                                                                                                                                                                                                               
                                                                         
                                                     
                                                                                             
                                                         
                                                                                                              
                                                                                               
                                                                                                                    
      }
    }
    {
      exit(status);
    }
  }
}
static void Gcompile(char const *pattern, size_t size) {
   
     
      GEAcompile(pattern, size, (((((1UL << 1) | ((1UL << 1) << 1)) | ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
     
           
   
}
static void Ecompile(char const *pattern, size_t size) {
   
     
      GEAcompile(pattern, size, (((((((((((1UL << 1) << 1) | (((1UL << 1) << 1) << 1)) | ((((1UL << 1) << 1) << 1) << 1)) | ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
     
           
   
}
static void Acompile(char const *pattern, size_t size) {
   
     
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
     
           
   
}
static void GAcompile(char const *pattern, size_t size) {
   
     
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
     
           
   
}
static void PAcompile(char const *pattern, size_t size) {
   
     
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
     
           
   
}
static struct matcher const matchers[8] =
    {{{(char const)'g', (char const)'r', (char const)'e', (char const)'p',
       (char const)'\000'},
      &Gcompile,
      &EGexecute},
     {{(char const)'e', (char const)'g', (char const)'r', (char const)'e',
       (char const)'p', (char const)'\000'},
      &Ecompile,
      &EGexecute},
     {{(char const)'f', (char const)'g', (char const)'r', (char const)'e',
       (char const)'p', (char const)'\000'},
      &Fcompile,
      &Fexecute},
     {{(char const)'a', (char const)'w', (char const)'k', (char const)'\000'},
      &Acompile,
      &EGexecute},
     {{(char const)'g', (char const)'a', (char const)'w', (char const)'k',
       (char const)'\000'},
      &GAcompile,
      &EGexecute},
     {{(char const)'p', (char const)'o', (char const)'s', (char const)'i',
       (char const)'x', (char const)'a', (char const)'w', (char const)'k',
       (char const)'\000'},
      &PAcompile,
      &EGexecute},
     {{(char const)'p', (char const)'e', (char const)'r', (char const)'l',
       (char const)'\000'},
      &Pcompile,
      &Pexecute},
     {{(char const)'\000'}, (void (*)(char const *, size_t))((void *)0), (size_t(*)(char const *, size_t, size_t *, char const *))((void *)0)}};
static void setmatcher(char const *m) {
  struct matcher const *p;
  char *tmp;
  int tmp___0;
  int tmp___1;
  char *tmp___2;
                   
                    
  {
                  
       
                                     
       
                            
         
                                                          
                                         
         
       
     
    p = matchers;
    {
      while (1) {
                                     ;
                          
                           
         
        {
          tmp___1 = strcmp(m, (char const *)(p->name));
        }
        if (tmp___1 == 0) {
                                            
          compile = (void (*)(char const *, size_t))p->compile;
          execute = (size_t(*)(char const *, size_t, size_t *, char const *))p->execute;
          return;
        }
        p++;
      }
                                    ;
    }
                     
                                            
                                          
   
           
  }
}
static size_t prepend_args(char const *options, char *buf, char **argv) {
                
          
           
                    
                
                      
                
               
                      
                        
                
                
   
                
            
                  
     
                 
                                      
         
                     
                                              
             
                                       
                                            
             
                           
                                   
             
                
           
                                         
         
                       
                  
                     
         
                   
                          
         
            
         
                     
                                              
                        
                
                        
                
                                     
                               
                                     
                       
                            
                    
                                           
               
             
                     
               
                                             
                                                  
               
                            
                                     
               
                    
                                   
             
           
                                         
         
                      
                      
            
                                
       
                                 
     
                 
   
}
static int prepend_default_options(char const *options, int *pargc, char ***pargv) {
  char *buf;
  size_t tmp;
  char *tmp___0;
  size_t prepended;
  size_t tmp___1;
  int argc;
  char *const *argv;
  char **pp;
                 
                       
  size_t tmp___4;
                 
                
                       
  {
    if (options) {
      if (*options) {
        {
          tmp = strlen(options);
          tmp___0 = (char *)xmalloc(tmp + 1UL);
          buf = tmp___0;
          tmp___1 = prepend_args(options, buf, (char **)((void *)0));
          prepended = tmp___1;
          argc = *pargc;
          argv = (char *const *)*pargv;
        }
        if ((size_t)(2147483647 - argc) < prepended) {
          {
            xalloc_die();
          }
        }
        {
                                                                                  
                                                   
                      
                       
               
                         
                 
                                      
          tmp___4 = prepend_args(options, buf, pp);
                        
        }
         
                     
                                              
                         
                         
                 
                           
                   
                                       
                               
                           
                               
             
                                
           
                                         
         
                   
        return ((int)prepended);
      }
    }
    return (0);
  }
}
static int get_nondigit_option(int argc, char *const *argv, intmax_t *default_context);
                                  
static int get_nondigit_option(int argc, char *const *argv, intmax_t *default_context) {
  int this_digit_optind;
  int was_digit;
  char buf[((((sizeof(intmax_t) * 8UL - 1UL) * 146UL + 484UL) / 485UL + 1UL) + 1UL) + 4UL];
  char *p;
  int opt;
  char *tmp;
                    
                    
  {
            
                  
                               
    {
                {
                                     ;
        {
          opt = getopt_long(argc, (char *const *)((char **)argv), short_options, long_options,
                            (int *)((void *)0));
        }
                        
                             
                             
           
                
                           
         
                                                     
                  
                
                           
                    
                  
                                   
           
         
                                                                           
           
                                                                                        
                   
           
                           
         
                
            
                         
                      
                                              
                                   
      }
                                    ;
    }
               
                                                   
       
                          
                                                                 
       
     
    return (opt);
  }
}
static void parse_grep_colors(void) {
  char const *p;
  char *q;
  char *name;
            
         
                              
            
              
                
                    
  {
    {
      p = (char const *)getenv("GREP_COLORS");
    }
    if ((unsigned long)p == (unsigned long)((void *)0)) {
      return;
    } else {
      if ((int const) * p == 0) {
        return;
      }
    }
    {
                     
      name = q;
                                
    }
    {
                 
                                      
                            
                  
                
                             
             
                   
                    
                
                                
                             
             
                         
                                                  
                                 
                                       
                 
                 
                                                                                
                 
                                   
                                       
                 
                      
               
                                             
             
                           
                           
                        
                                                
               
             
                           
               
                                
               
             
                              
                     
             
                     
                                      
                  
                                
                                                            
                       
                      
                          
                         
                 
               
                          
                  
                                      
                      
                    
                                                                     
                    
                      
                                    
                      
                        
                                      
                                        
                          
                            
                             
                     
                          
                           
                   
                 
               
             
           
         
       
                                 
    }
    return;
  }
}
static _Bool contains_encoding_error(char const *pat, size_t patlen) {
  mbstate_t mbs;
  size_t i;
  size_t charlen;
                   
  {
    mbs.__count = 0;
    mbs.__value.__wch = 0U;
    i = (size_t)0;
    {
      while (1) {
                                      
        if (!(i < patlen)) {
          goto while_break;
        }
        {
          charlen = mbrlen((char const * /* __restrict  */)(pat + i), patlen - i, (mbstate_t * /* __restrict  */)(&mbs));
        }
        if (0xfffffffffffffffeUL <= charlen) {
          return ((_Bool)1);
        }
        i += charlen + (size_t)(charlen == 0UL);
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return ((_Bool)0);
  }
}
static void fgrep_to_grep_pattern(size_t len, char const *keys, size_t *new_len,
                                  char **new_keys) {
  char *p;
  char *tmp;
  mbstate_t mb_state;
  size_t n;
  wchar_t wc;
  char *tmp___0;
  char *tmp___1;
  void *__cil_tmp16;
  char *__cil_tmp17;
  {
    {
                                                   
      *new_keys = tmp;
      p = tmp;
      mb_state.__count = 0;
      mb_state.__value.__wch = 0U;
    }
    {
      while (1) {
                                      
                   
                           
         
         
                                                                                               
                                                                       
         
                                        
                                         
         
                                        
                                         
         
                       
                      
         
                       
                      
         
                            
                                
                
                        
                                                                                                                        
                               
       
                          
      case_18446744073709551615 : {
        memset((void *)(&mb_state), 0, sizeof(mb_state));
      }
      case_1 : {
                        
                                                
        p += (unsigned long)tmp___0 != (unsigned long)((void *)0);
      }
      case_0:
        tmp___1 = p;
        p++;
        *tmp___1 = (char)*keys;
                      
                          
                   
                  
                 
      }
                                     
    }
              
    *new_len = (size_t)(p - *new_keys);
    return;
  }
}
int main(int argc, char **argv) {
  AFL_INIT_SET0("grep");
  char *keys;
  size_t keycc;
  size_t oldcc;
  size_t keyalloc;
  int with_filenames;
  size_t cc;
  int opt;
  int status;
  int prepended;
  int prev_optind;
  int last_recursive;
  int fread_errno;
  intmax_t default_context;
  FILE *fp;
  char *tmp;
  char *tmp___0;
  int tmp___1;
  int tmp___2;
  ptrdiff_t tmp___3;
  size_t tmp___4;
  FILE *tmp___6;
  int tmp___7;
  int *tmp___8;
  int *tmp___9;
  int tmp___10;
  size_t tmp___11;
  strtol_error tmp___12;
  char *tmp___13;
  char *tmp___14;
  int tmp___15;
  int tmp___16;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  int tmp___23;
  int tmp___24;
  int tmp___25;
  int tmp___26;
  int tmp___27;
  int *tmp___28;
  int tmp___29;
  int tmp___30;
  int tmp___31;
  int tmp___32;
  char *userval;
  char *tmp___33;
  char *tmp___34;
  char const *tmp___35;
  struct stat tmp_stat;
  int tmp___36;
  int tmp___37;
  size_t new_keycc;
  char *new_keys;
  size_t tmp___38;
  _Bool tmp___39;
  size_t tmp___40;
  int tmp___41;
  int tmp___42;
  int tmp___43;
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                     
                     
                     
                     
                     
  char *__cil_tmp105;
  char *__cil_tmp106;
  char *__cil_tmp107;
  char *__cil_tmp108;
  {
    {
                                     
                                                  
      program_name = (char const *)*(argv + 0);
      keys = (char *)((void *)0);
      keycc = (size_t)0;
      with_filenames = 0;
      eolbyte = (unsigned char)'\n';
      filename_mask = ~0;
                                       
                                
                             
                                     
                        
                       
      bindtextdomain("grep", "/usr/local/share/locale");
      textdomain("grep");
      exit_failure = (int volatile)2;
      atexit(&clean_up_stdout);
      last_recursive = 0;
      tmp = getenv("GREP_OPTIONS");
      prepended = prepend_default_options((char const *)tmp, &argc, &argv);
      compile = (void (*)(char const *, size_t))matchers[0].compile;
      execute = (size_t(*)(char const *, size_t, size_t *, char const *))matchers[0].execute;
    }
    {
      while (1) {
                                     ;
        {
                               
          opt = get_nondigit_option(argc, (char *const *)argv, &default_context);
        }
        if (!(opt != -1)) {
          goto while_break;
        }
                        
                       
         
        if (opt == 66) {
                       
        }
        if (opt == 67) {
                       
        }
        if (opt == 68) {
          goto case_68;
        }
        if (opt == 69) {
          goto case_69;
        }
        if (opt == 70) {
          goto case_70;
        }
                        
                       
         
                        
                       
         
                        
                       
         
        if (opt == 72) {
          goto case_72;
        }
        if (opt == 73) {
          goto case_73;
        }
        if (opt == 84) {
          goto case_84;
        }
        if (opt == 85) {
          goto case_85;
        }
        if (opt == 117) {
          goto case_117;
        }
                        
                       
         
                        
                       
         
                        
                       
         
        if (opt == 99) {
          goto case_99;
        }
                         
                        
         
                         
                        
         
                         
                        
         
        if (opt == 104) {
          goto case_104;
        }
        if (opt == 105) {
          goto case_105;
        }
        if (opt == 121) {
                        
        }
        if (opt == 76) {
          goto case_76;
        }
        if (opt == 108) {
          goto case_108;
        }
                         
                        
         
        if (opt == 110) {
          goto case_110;
        }
        if (opt == 111) {
          goto case_111;
        }
        if (opt == 113) {
          goto case_113;
        }
                        
                       
         
        if (opt == 114) {
          goto case_114;
        }
        if (opt == 115) {
          goto case_115;
        }
        if (opt == 118) {
          goto case_118;
        }
        if (opt == 119) {
          goto case_119;
        }
        if (opt == 120) {
          goto case_120;
        }
                        
                       
         
                         
                        
         
                         
                        
         
                         
                        
         
                         
                        
         
                         
                        
         
        if (opt == 132) {
          goto case_132;
        }
        if (opt == 135) {
          goto case_135;
        }
                         
                        
         
                         
                        
         
                         
                        
         
                       
                          
         
        goto switch_default___0;
      case_65 : {
        context_length_arg((char const *)optarg, &out_after);
      }
        goto switch_break;
                 
                                                              
       
        goto switch_break;
      case_67 : {
        context_length_arg((char const *)optarg, &default_context);
      }
        goto switch_break;
      case_68 : {
        tmp___2 = strcmp((char const *)optarg, "read");
      }
        if (tmp___2 == 0) {
          devices = (enum __anonenum_devices_71)1;
        } else {
          {
            tmp___1 = strcmp((char const *)optarg, "skip");
          }
          if (tmp___1 == 0) {
                                                    
          } else {
            {
              tmp___0 = gettext("unknown devices method");
              error(2, 0, (char const *)tmp___0);
            }
          }
        }
                          
      case_69 :                        {
        setmatcher("egrep");
      }
        goto switch_break;
      case_70 : {
        setmatcher("fgrep");
      }
                          
                 
                           
       
        goto switch_break;
                 
                           
       
                          
                 
                                         
       
        goto switch_break;
      case_72:
        with_filenames = 1;
                         
        goto switch_break;
      case_73:
                                                          
        goto switch_break;
      case_84:
        align_tabs = 1;
        goto switch_break;
      case_85 : {
        dos_binary();
      }
        goto switch_break;
      case_117 : {
        dos_unix_byte_offsets();
      }
                          
              
                         
        goto switch_break;
              
                                                          
                          
              
                      
                          
      case_99:
        count_matches = 1;
        goto switch_break;
                      
                                                                                               
                                                                                                       
                                                     
                                                                        
       
                                              
                                       
         
                          
                   
                                          
                                                                  
                                                                                                                 
                    
                        
                
                                       
       
                          
                   
                                                    
       
                           
                     
                
           
                                                                                                                          
                         
           
         
                  
           
                                         
                                             
           
         
                             
         
                     
                                              
                                             
                                   
             
                            
           
                                         
         
      while_break___0 : {
        keys = (char *)xrealloc((void *)keys, keyalloc);
                      
      }
        {
          while (1) {
                                              
             
                                                                                                
                                                                                           
             
            if (!(cc != 0UL)) {
              goto while_break___1;
            }
            keycc += cc;
                                          
               
                                                                                  
               
             
          }
        while_break___5: /* CIL Label */;
        }
      while_break___1 : {
        tmp___9 = __errno_location();
        fread_errno = *tmp___9;
        tmp___10 = ferror_unlocked(fp);
      }
        if (tmp___10) {
          {
                                                
          }
        }
        if ((unsigned long)fp != (unsigned long)stdin) {
          {
            fclose(fp);
          }
        }
                             
                                                   
                             
                    
                                            
           
         
                          
      case_104:
        with_filenames = 0;
        no_filenames = 1;
                          
      case_105:
        match_icase = 1;
        goto switch_break;
      case_76:
        list_files = -1;
        goto switch_break;
      case_108:
        list_files = 1;
                          
                  
                                                                                    
       
                                           
                      
         
                                           
                      
         
                            
             
                                
                         
                                                
                                            
       
                        
                          
      case_110:
        out_line = 1;
        goto switch_break;
      case_111:
        only_matching = 1;
        goto switch_break;
      case_113:
        exit_on_match = 1;
                                       
                          
              
                          
      case_114:
        directories = (enum directories_type)3;
        last_recursive = prev_optind;
        goto switch_break;
      case_115:
        suppress_errors = 1;
        goto switch_break;
      case_118:
        out_invert = (_Bool)1;
        goto switch_break;
      case_119:
        match_words = 1;
        goto switch_break;
      case_120:
        match_lines = 1;
        goto switch_break;
              
                          
                          
               
                                        
                          
                  
                                                          
       
                            
                                                            
                
           
                                                            
           
                              
                                                              
                  
             
                                                                       
             
                                
                                                                
                    
               
                                                                
                                                    
               
             
           
         
                          
               
                         
           
                                                                  
           
                         
             
                                                                 
             
                           
               
                                                                     
               
                             
                 
                                                                       
                 
                               
                   
                                                                      
                   
                                 
                     
                                                                          
                     
                                   
                       
                                                                            
                       
                                     
                         
                                                                             
                         
                                       
                           
                                                                                  
                           
                                         
                                          
                                  
                                             
                           
                                
                                           
                         
                              
                                         
                       
                            
                                       
                     
                          
                                     
                   
                        
                                   
                 
                      
                                 
               
                    
                               
             
                  
                             
           
                
                           
         
                          
               
                                 
           
                                              
           
         
                         
                             
                
                       
         
         
                                                                                     
         
                          
      case_132:
                                 
           
                                              
           
         
         
                                                                                            
                                                           
         
        if (tmp___29 != 0) {
          {
                                          
            error(2, *tmp___28, "%s", optarg);
          }
        }
                          
      case_135:
        if (!excluded_directory_patterns) {
          {
                                                        
          }
        }
         
                                                                                  
         
                          
               
                                               
                          
               
                          
                          
               
        label = optarg;
        goto switch_break;
      case_0___0:
        goto switch_break;
      switch_default___0 : {
        usage(2);
      }
        goto switch_break;
      switch_break:;
      }
                                    ;
    }
  while_break:;
    if (color_option == 2) {
      {
        tmp___30 = isatty(1);
      }
      if (tmp___30) {
        {
          tmp___31 = should_colorize();
        }
        if (tmp___31) {
          tmp___32 = 1;
        } else {
                       
        }
      } else {
        tmp___32 = 0;
      }
                              
    }
     
                      
     
                        
                     
     
    if (exit_on_match | list_files) {
                        
      done_on_match = 1;
    }
    out_quiet = count_matches | done_on_match;
                         
                                  
     
                          
                                   
     
                       
       
                                        
                           
       
                                                                 
                                 
                                                      
                                                     
         
       
       
                            
       
     
                       
       
                                                                                             
                                               
                                                                                                       
                
       
     
                    
       
                 
       
     
    {
      tmp___36 = fstat(1, &tmp_stat);
    }
                       {
                                                  
        out_stat = tmp_stat;
       
    }
    if (keys) {
      if (keycc == 0UL) {
                                                  
                        
        match_lines = match_words;
      } else {
        keycc--;
      }
    } else {
      if (optind < argc) {
        {
          keycc = strlen((char const *)*(argv + optind));
          tmp___37 = optind;
          optind++;
          keys = (char *)xmemdup((void const *)*(argv + tmp___37), keycc + 1UL);
        }
      } else {
        {
          usage(2);
        }
      }
    }
    if ((unsigned long)compile == (unsigned long)(&Fcompile)) {
       
                                            
       
      if (tmp___38 > 1UL) {
                          
                  
                
           
                                                                          
           
                         
                
                                                                                    
                               
                            
                              
                             
                                
                                 
           
           
         
      }
    }
    {
      tmp___40 = __ctype_get_mb_cur_max();
    }
    if (tmp___40 > 1UL) {
      {
        build_mbclen_cache();
      }
    }
    {
      (*compile)((char const *)keys, keycc);
      free((void *)keys);
    }
    if (argc - optind > 1) {
      if (!no_filenames) {
                     
      } else {
        goto _L___0;
      }
    } else {
    _L___0:
      if (with_filenames) {
        out_file = 1;
      }
    }
    {
                           
    }
    if (!tmp___41) {
       
                              
       
    }
    if (max_count == 0L) {
       
                
       
    }
    if (fts_options & 2) {
      if ((unsigned int)devices == 0U) {
        devices = (enum __anonenum_devices_71)1;
      }
    }
    if (optind < argc) {
      status = 1;
      {
        while (1) {
                                           ;
          {
            tmp___42 = grep_command_line_arg((char const *)*(argv + optind));
            status &= tmp___42;
            optind++;
          }
          if (!(optind < argc)) {
            goto while_break___2;
          }
        }
                                      ;
      }
    while_break___2:;
    } else {
      if ((unsigned int)directories == 3U) {
        if (prepended < last_recursive) {
           
                                            
                                                
           
        } else {
          {
            status = grep_command_line_arg("-");
          }
        }
      } else {
        {
          status = grep_command_line_arg("-");
        }
      }
    }
    if (errseen) {
      tmp___43 = 2;
    } else {
      tmp___43 = status;
    }
    {
      exit(tmp___43);
    }
  }
}
