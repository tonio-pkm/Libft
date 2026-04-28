/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:41:45 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/27 23:23:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
char	*ft_strchr(const char *str, int c)
{
	int	counter;
	if (!str)
		return (NULL);
	counter = 0;
	while (str[counter])
	{
		if (str[counter] == c)
			return ((char *)&str[counter]);
		counter++;
	}
	return(NULL);
}
