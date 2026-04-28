/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:24:58 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/28 21:11:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <stddef.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	s_size;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	s_size = i + 1;
	str = malloc(s_size * sizeof(char));
	if (!str)
		return(NULL);
	i = 0;
	while (i < s_size)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

