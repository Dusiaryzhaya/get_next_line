#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "get_next_line_bonus.h"
int main(void)
{
    int fd[1024];
    fd[0] = open("test1.txt", O_RDONLY);
    fd[1] = open("test2.txt", O_RDONLY);
    fd[2] = open("test3.txt", O_RDONLY);
    char *line;
    // Read from test1.txt
    line = get_next_line(fd[0]);
    printf("%s", line);
    free(line);
    // Read from test2.txt
    line = get_next_line(fd[1]);
    printf("%s", line);
    free(line);
      // Read from test3.txt
    line = get_next_line(fd[2]);
    printf("%s", line);
    free(line);
    // Read from test1.txt again
    line = get_next_line(fd[0]);
    printf("%s", line);
    free(line);
    // Read from test1.txt again
    line = get_next_line(fd[1]);
    printf("%s", line);
    free(line);
    //...
    line = get_next_line(fd[2]);
    printf("%s", line);
    free(line);
     line = get_next_line(fd[0]);
    printf("%s", line);
    free(line);
    line = get_next_line(fd[1]);
    printf("%s", line);
    free(line);
    line = get_next_line(fd[2]);
    printf("%s", line);
    free(line);
      line = get_next_line(fd[0]);
    printf("%s", line);
    free(line);
    line = get_next_line(fd[1]);
    printf("%s", line);
    free(line);
    line = get_next_line(fd[2]);
    printf("%s", line);
    free(line);
    close(fd[0]);
    close(fd[1]);
    close(fd[2]);
    return 0;
}