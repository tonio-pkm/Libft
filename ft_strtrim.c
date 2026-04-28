/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:22:29 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/28 21:13:55 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
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
	size_t	j;

	i = 0;
	while (s1[i] && can_trim(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && can_trim(set, s1[j]))
		j--;
	return (set_mem(s1, i, j));
}
