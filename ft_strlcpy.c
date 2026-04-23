/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:08:20 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/20 16:16:39 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	counter;

	counter = 0;
	while (size - 1 > 0)
	{
		dst[counter] = src[counter];
		counter++;
		size--;
	}
	dst[counter] = '\0';
	return (counter);
}
