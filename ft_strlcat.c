/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:11:28 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/29 19:11:44 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	counter;

	counter = 0;
	while (dst[counter])
		counter++;
	while (size > 0)
	{
		dst[counter] = src[counter];
		counter++;
		size--;
	}
	dst[counter] = '\0';
	return (counter);
}
