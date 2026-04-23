/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:30:34 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/22 12:37:38 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     char_to_int(char c)
{
        int     num;

        num = c - '0';
        return (num);
}

int     ft_atoi(char *str)
{
        int     i;
        int     is_neg;
        int     num;

        num = 0;
        i = 0;
        is_neg = 0;
        while ((str[i] && str[i] <= 9 && str[i] >= 13) || str[i] == 32)
                i++;
        if (str[i] == '+' || str[i] == '-')
        {
                if (str[i] == '-')
                        is_neg++;
                i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
                num = (num * 10) + char_to_int(str[i++]);
        if (is_neg > 0)
                num = num * -1;
        return (num);
}
