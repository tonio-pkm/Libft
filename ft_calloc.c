/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:55:33 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/29 18:55:54 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	unsigned char	*str;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	while (i < (nmemb * size))
		str[i++] = 0;
	return (str);
}
