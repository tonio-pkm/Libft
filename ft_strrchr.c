/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:15:31 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/29 19:16:02 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
    int	i;

    i = 0;
    while (str[i])
        i++;
    while (i >= 0)
    {
        if (str[i] == (char)c)
            return ((char *)&str[i]);
        i--;
    }
    return (NULL);
}
