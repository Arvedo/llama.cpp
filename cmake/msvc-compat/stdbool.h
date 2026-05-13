#ifndef LLAMA_MSVC_COMPAT_STDBOOL_H
#define LLAMA_MSVC_COMPAT_STDBOOL_H

#ifdef __cplusplus
#    define __bool_true_false_are_defined 1
#else
typedef unsigned char bool;
#    define true                          1
#    define false                         0
#    define __bool_true_false_are_defined 1
#endif

#endif
