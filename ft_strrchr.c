/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:46:18 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/28 21:01:25 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
