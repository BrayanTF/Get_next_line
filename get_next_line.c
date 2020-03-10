#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"


void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned int i;
    
    i = 0;
    if (src == dst)
        return (dst);
    while (i < n)
    {
        ((char *)dst)[i] = ((char *)src)[i];
        i++;
    }
    return (dst);
}

int position_next_line(char *string)
{
    int i;

    i = 0;
	while (*string != '\n' && *string != '\0')
    {
        string++;
        i++;
    }
    if (*string == '\0')
        i = 0;
    return i;
}

char    *contain_line(char *line)
{
    char    *string;
    char    *nextString;
    int i;
    
    i = position_next_line(line);
    string = ft_substr(line, 0, i);
    nextString = ft_substr(line, i + 1, ft_strlen(line));
    free(line);
    line = nextString;
    return string;
}

int get_next_line(int fd, char **line)
{
    static    char          *aux[4096];
    char                    buf[BUFFER_SIZE + 1];
    char                    *temp;
    int i;
    
    while ((i = read(fd, buf, BUFFER_SIZE)) > 0)
    {
        buf[i] = '\0';
        temp = aux[fd];
        free(aux[fd]);
        aux[fd] = ft_strjoin(temp, buf);
        if (position_next_line(aux[fd]) > 0)
        {
            *line = contain_line(aux[fd]);
            break;
        }
    }
    if (i <= 0)
        return i;
    return 1;
}
