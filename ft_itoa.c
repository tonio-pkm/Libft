/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:58:22 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 14:11:49 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	int		is_neg;
	char	*str;

	nb = (long)n;
	is_neg = (nb < 0);
	if (is_neg)
		nb = -nb;
	len = num_len(nb);
	str = malloc((len + is_neg + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len + is_neg] = '\0';
	while (len--)
	{
		str[len + is_neg] = '0' + (nb % 10);
		nb /= 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	int	c = 42;

	printf("%s", ft_itoa(c));
}
*/
