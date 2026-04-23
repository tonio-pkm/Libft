/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:24:58 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/22 14:06:06 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <stddef.h>
#include <stdint.h>

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

