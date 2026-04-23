/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:18:15 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/21 12:06:26 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int	counter;
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
