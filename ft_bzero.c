/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:33:21 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 11:44:13 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
		ptr[i++] = '\0';
}
/*
int	main(void)
{
	#include <stdio.h>
	char	s[] = "";
	size_t	n = 5;
	int	i = 0;

	ft_bzero(s, n);
	while (s[i++] == '\0')
		printf("%s", "nulo\n");
}
*/
