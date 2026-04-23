/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:17:50 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/20 16:37:20 by antgarci         ###   ########.fr       */
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
