/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:23:40 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/27 19:34:57 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}



char	**mem_alloc(const char *str, size_t words, size_t len, char c)
{
	char	**s;
	size_t	i;

	s = malloc((words + 1) * sizeof(char *));
	if (!s)
		return (NULL);
	i = 0;
	while (i < words + 1)
	{
		s[i] = malloc((len + 1) * sizeof(char));
		if (!s[i])
		{
			i--;
			while (i >= 0)
				free(s[i--]);
			free(s);
			return (NULL);
		}
		i++;
	}
	return (s);
}

char	**mem_assign(const char *str, size_t words, size_t len, char c)
{
	size_t	i;
	size_t	k;
	size_t	j;
	char	**s;

	s = mem_alloc(str, words, len, c);
	i = 0;
	k = 0;
	while (i < words)
	{
		j = 0;
		while (j < len && str[k] != c)
			s[i][j++] = str[k++];
		if (str[k++] == c)
			s[i][j] = '\0';
		while (str[k] == c)
			k++;
		i++;
	}
	j = 0;
	while (j <= len)
		s[words][j++] = '\0';
	return (s);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	words;
	size_t	current_len;
	size_t	word_len;

	word_len = 0;
	current_len = 0;
	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (current_len > word_len)
				word_len = current_len;
			current_len = 0;
			words++;
			while (s[++i] == c)
				;
		}
		else
			current_len++;
		i++;
	}
	return (mem_assign(s, words, word_len, c));
}
