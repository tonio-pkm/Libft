/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:30:29 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/22 12:00:33 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;
	size_t	counter;

	counter = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (counter <= n)
	{
		if (str1 - str2 < 0)
			return ((str1 - str2) * -1);
		else if (str1 - str2 > 0)
			return (str1 - str2);
	}
	return (str1 - str2);
}
