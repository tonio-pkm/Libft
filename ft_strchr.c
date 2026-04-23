/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:41:45 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/20 16:45:58 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] == c)
			return (str[counter])
		counter++;
	}
	return(NULL);
}
