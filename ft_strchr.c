/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:57:19 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/30 15:52:57 by antgarci         ###   ########.fr       */
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
