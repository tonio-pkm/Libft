/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:57:19 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 12:49:02 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	int	counter;

	if (!str)
		return (NULL);
	counter = 0;
	while (str[counter])
	{
		if (str[counter] == (char)c)
			return ((char *)&str[counter]);
		counter++;
	}
	if (str[counter] == c)
		return ((char *)&str[counter]);
	return (NULL);
}
/*
int	main(void)
{
	#include <stdio.h>
	char	s[] = "abcdefg";
	int	c = 'e';

	printf("%s", ft_strchr(s, c));
}
*/
