/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:13:29 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/29 19:14:40 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t          i;
    unsigned char   *str1;
    unsigned char   *str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    while (i < n && (str1[i] || str2[i]))
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
