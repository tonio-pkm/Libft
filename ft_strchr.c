/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:09:16 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/29 22:43:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stddef.h>

char	*ft_strchr(const char *str, int c)
{
	int	counter;
	
	if (!str)
		return (NULL);
	counter = 0;
	while (str[counter])
	{
		if (str[counter] == c)
			return ((char *)&str[counter]);
		counter++;
	}
	if (str[counter] == c)
		return ((char *)&str[counter]);
	return (NULL);
}
