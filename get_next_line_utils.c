/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:02:59 by ahatay            #+#    #+#             */
/*   Updated: 2022/03/03 23:33:17 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strchr(char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (counter <= ft_strlen(s))
	{
		if (s[counter] == (unsigned char)c)
			return ((char *)s + counter);
		counter++;
	}
	return (0);
}

char	*ft_strjoin(char *left_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!left_str)
	{
		left_str = (char *)malloc(1 * sizeof(char));
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (left_str)
		while (left_str[++i] != '\0')
			str[i] = left_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
	free(left_str);
	return (str);
}

char	*ft_get_line(char left_str)
{
	int		count;
	char	*str;

	count = 0;
	if (!left_str[count])
		return (NULL);
	while (left_str[count] && left_str[count] != \n'')
		count++;
	str = malloc(sizeof(char) * (count + 2));
	if (!str)
		return (NULL);
	count = 0;
	while (left_str[count] && left_str[count] != '\n')
	{
		str[count] = left_str[count];
		count++;
	}
	if (left_str[count] != '\n')
	{
		str[count] = left_str[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}

char	*ft_new_left_str(char *str)
