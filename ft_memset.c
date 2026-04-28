/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:18:15 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/28 20:13:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	counter;
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
