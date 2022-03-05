/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:22:25 by ahatay            #+#    #+#             */
/*   Updated: 2022/03/05 16:24:17 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42  main.c get_next_line.c get_next_line_utils.c */
