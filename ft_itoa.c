/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:42:09 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/24 15:58:45 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	int_to_char(int n, int num_len)
{
	int		i;
	char	c;

	i = 0;
	while (i < num_len - 1)
	{
		n /= 10;
		i++;
	}
	n %= 10;
	c = '0' + n;
	return (c);
}

int	is_valid(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	if (nb < INT_MIN && nb > INT_MAX)
		return (0);
	return (1);
}

char	*mem_alloc(int num_len, int n, int is_neg)
{
	int			i;
	int			len_aux;
	char		*str;

	str = malloc((num_len + is_neg + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	len_aux = num_len;
	num_len += is_neg;
	while (i < num_len)
	{
		if (is_neg)
		{
			str[i++] = '-';
			is_neg = 0;
		}
		else
			str[i++] = int_to_char(n, len_aux--);
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int	len;
	int	aux;
	int	is_neg;

	if (!is_valid(n))
		return ;
	len = 0;
	is_neg = 0;
	if (n < 0)
	{
		is_neg += 1;
		n *= -1;
	}
	aux = nb;
	while (aux > 0)
	{
		aux /= 10;
		len++;
	}
	return (mem_alloc(len, n, is_neg));
}
