#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize);
char    *ft_substr(char const *s, unsigned int start, size_t len);
size_t    ft_strlen(const char *s);
int position_next_line(char *string);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strdup(const char *s1);
void    *ft_memcpy(void *dst, const void *src, size_t n);
