/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:30:46 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/28 21:14:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	total_len;
	char	*str;

	j = 0;
	i = 0;
	while (s1[i])
		i++;
	total_len = i;
	while (s2[j])
		j++;
	total_len += j + 1;
	str = malloc(total_len * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
		str[i] = s1[i++];
	j = 0;
	while (s2[j])
		str[j + i] = s2[j++];
	str[total_len - 1] = '\0';
	return (str);
}
