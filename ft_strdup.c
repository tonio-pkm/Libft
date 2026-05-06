/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:09:51 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 13:26:22 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	s_size;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	s_size = i + 1;
	str = malloc(s_size * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < s_size)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	#include <stdio.h>
	char	s[] = "HEFPN78";

	printf("%s", ft_strdup(s));
}
*/
