/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:40:08 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/27 18:48:26 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	num_man(int len, int num)
{
	int     i;

	i = 0;
	while (i < len)
	{
		while (len - 1 > 0)
		{
			num = num / 10;
			len--;
		}
		num = num % 10;
		i++;
	}
	return (num);
}

int	is_valid(int nb, int fd)
{
	if (nb == 0)
		write(fd, "0", 1);
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (0);
	}
	if (nb < INT_MIN && nb > INT_MAX)
		return (0);
	return (1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		str_len;
	int		aux;
	char	c;

	if (!is_valid(n, fd))
		return ;
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	str_len = 0;
	aux = n;
	while (aux > 0)
	{
		aux = aux / 10;
		str_len++;
	}
	while (str_len > 0)
	{
		c = '0' + num_man(str_len--, n);
		write(fd, &c, 1);
	}
}

