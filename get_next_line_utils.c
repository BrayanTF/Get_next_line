
#include "get_next_line.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *ptr;
    int        count;
    int        count2;
    
    count2 = 0;
    count = 0;
    if (!s1 || !s2)
        return (NULL);
    if (!(ptr = malloc(((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1))))
        return (NULL);
    while (s1[count] != '\0')
        ptr[count++] = s1[count2++];
    count2 = 0;
    while (s2[count2] != '\0')
        ptr[count++] = s2[count2++];
    ptr[count] = '\0';
    return (ptr);
}

size_t    ft_strlen(const char *s)
{
    size_t i;
    
    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ptr;
    
    if (!s)
        return (0);
    if (ft_strlen(s) < start)
        return (ft_strdup(""));
    if (!(ptr = malloc((len + 1) * sizeof(char))))
        return (NULL);
    ft_strlcpy(ptr, &s[start], len + 1);
    return (ptr);
}

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    unsigned int i;
    
    i = 0;
    if (!src || !dst)
        return (0);
    else if (!dstsize)
        return (ft_strlen(src));
    while (src[i] != '\0' && i < (dstsize - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

char    *ft_strdup(const char *s1)
{
    char    *ptr;
    int        len;
    
    len = ft_strlen(s1) + 1;
    if (!(ptr = malloc(len * sizeof(char))))
        return (NULL);
    ft_memcpy(ptr, s1, len);
    return (ptr);
}
