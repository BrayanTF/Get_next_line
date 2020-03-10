#include <stdio.h>
#include <stdlib.h>

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

int get_next_line(int fd, char **line)
{
    static char     *aux[4096];
    char            *buf[BUFFER_SIZE];
    (void) line;
    while (&line) 
    {
        
    }
    printf("%d",position_next_line("h\n"));
    printf("hola mundo como estas");
    return 0;
}