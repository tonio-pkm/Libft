/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:05:06 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 13:07:22 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			counter;

	counter = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (counter < n)
	{
		if (str1[counter] != str2[counter])
			return (str1[counter] - str2[counter]);
		counter++;
	}
	return (0);
}
/*
int     main(void)
{
        #include <stdio.h>
        const char	s[] = "123456789";
	const char	d[] = "12356789";
        size_t  size = 10;

        printf("%d", ft_memcmp(s, d, size));
}
*/
