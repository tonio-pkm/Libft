/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:08:38 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/30 13:55:45 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static size_t	count_words(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s && *s != c)
			s++;
	}
	return (words);
}

static void	*free_all(char **s, size_t i)
{
	while (i > 0)
		free(s[--i]);
	free(s);
	return (NULL);
}

static char	*copy_word(const char **s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = (*s)[i];
		i++;
	}
	word[i] = '\0';
	*s += len;
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		res[i] = copy_word(&s, c);
		if (!res[i] && !free_all(res, i))
			return (NULL);
		i++;
	}
	res[words] = NULL;
	return (res);
}
