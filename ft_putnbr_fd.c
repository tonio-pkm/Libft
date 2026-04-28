/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:40:08 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/28 21:50:01 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putnbr_fd(int n, int fd)
{
    long	nb;
    char	c;

    nb = (long)n;
    if (nb < 0)
    {
        write(fd, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr_fd((int)(nb / 10), fd);
    c = '0' + (nb % 10);
    write(fd, &c, 1);
}

