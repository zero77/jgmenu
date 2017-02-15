#ifndef UTIL_H
#define UTIL_H

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <errno.h>

#define XATOI_NONNEG (01)
#define XATOI_GT_0   (02)

void die(const char *err, ...);
void spawn(const char *arg);
void *xmalloc(size_t size);
void *xrealloc(void *ptr, size_t size);
void *xcalloc(size_t nb, size_t size);
char *expand_tilde(char *s);
char *strstrip(char *s);
int parse_config_line(char *line, char **option, char **value);
int hex_to_dec(char c);
int parse_hexstr(char *hex, double *rgba);
int get_first_num_from_str(const char *s);
void xatoi(int *var, const char *value, int flags, const char *key);
int multiple_processess_running(const char *prog);

#endif /* UTIL_H */
