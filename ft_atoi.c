/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:54:15 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/29 20:03:13 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
int     ft_atoi(char *str)
{
        int     i;
        int     is_neg;
        int     num;

        num = 0;
        i = 0;
        is_neg = 0;
        while ((str[i] && str[i] >= 9 && str[i] <= 13) || str[i] == 32)
                i++;
        if (str[i] == '+' || str[i] == '-')
        {
                if (str[i] == '-')
                        is_neg = 1;
                i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
                num = (num * 10) + (str[i++] - '0');
        if (is_neg)
                num = -num;
        return (num);
}

/*
int	main(void)
{
	#include <stdio.h>
	char	s[] = "";

	printf("%d", ft_atoi(s));
}
*/
