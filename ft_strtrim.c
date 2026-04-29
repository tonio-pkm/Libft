/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:16:17 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/29 21:18:37 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t 	ft_strlen(const char *s);

char *ft_strdup(const char *s1);

int	can_trim(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*set_mem(const char *s, size_t i, size_t j)
{
	size_t	counter;
	char	*str;

	str = malloc((j - i + 2) * sizeof(char));
	if (!str)
		return (NULL);
	counter = 0;
	while (i <= j)
		str[counter++] = s[i++];
	str[counter] = '\0';
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	int		j;

	i = 0;
	while (s1[i] && can_trim(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && can_trim(set, s1[j]))
		j--;
	if (j < (int)i)
		return (ft_strdup(""));
	return (set_mem(s1, i, j));
}
