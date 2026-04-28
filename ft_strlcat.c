/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:17:50 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/28 21:14:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	counter;

	counter = 0;
	while (dst[counter])
		counter++;
	while (size > 0)
	{
		dst[counter] = src[counter];
		counter++;
		size--;
	}
	dst[counter] = '\0';
	return (counter);
}
