
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>


int main()
{
	int fd = open("adem.txt", O_RDONLY );
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
}
// gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42  main.c get_next_line.c get_next_line_utils.c
