#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd = open("adem.txt", O_RDONLY );
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));

    int fd_bonus = open("hatay.txt", O_RDONLY);
    printf("%s", get_next_line(fd_bonus));
	printf("%s", get_next_line(fd_bonus));
}

// gcc main_bonus.c get_next_line_bonus.c get_next_line_utils.c