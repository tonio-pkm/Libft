/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:28:08 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 11:32:37 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			counter;
	unsigned char	*pin;

	counter = 0;
	pin = (unsigned char *)str;
	while (n > 0)
	{
		pin[counter++] = (unsigned char)c;
		n--;
	}
	return (str);
}
/*
int	main(void)
{
	#include <stdio.h>
	char	s[] = "abcdefg";
	int	c = '0';
	size_t	n = 5;

	printf("%s", (char *)ft_memset(s, c, n));
}
*/
