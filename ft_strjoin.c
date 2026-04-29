/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:10:57 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/29 19:11:12 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	total_len;
	char	*str;

	j = 0;
	i = 0;
	while (s1[i])
		i++;
	total_len = i;
	while (s2[j])
		j++;
	total_len += j + 1;
	str = malloc(total_len * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
		str[i] = s1[i++];
	j = 0;
	while (s2[j])
		str[j + i] = s2[j++];
	str[total_len - 1] = '\0';
	return (str);
}
