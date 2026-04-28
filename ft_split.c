/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:23:40 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/28 00:10:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t   ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

static size_t   count_words(const char *s, char c)
{
    size_t  words;

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

static void     free_all(char **s, size_t i)
{
    while (i > 0)
        free(s[--i]);
    free(s);
}

static char     *copy_word(const char *s, size_t len)
{
    char    *word;
    size_t  i;

    word = malloc((len + 1) * sizeof(char));
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char            **ft_split(const char *s, char c)
{
    char    **res;
    size_t  words;
    size_t  i;
    size_t  len;

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
        len = 0;
        while (s[len] && s[len] != c)
            len++;
        res[i] = copy_word(s, len);
        if (!res[i])
        {
            free_all(res, i);
            return (NULL);
        }
        s += len;
        i++;
    }
    res[words] = NULL;
    return (res);
}
