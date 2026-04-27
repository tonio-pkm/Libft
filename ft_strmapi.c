/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:06:43 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/27 17:45:46 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	i;
	char	*str;

	s_len = 0;
	while (s[s_len])
		s_len++;
	str = malloc((s_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < s_len)
		str[i++] = f(i, s[i]);
	str[i] = '\0';
	return (str)
}
