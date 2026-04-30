/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:38:27 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/30 13:46:48 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n1;

	n1 = malloc(sizeof(t_list));
	if (!n1)
		return (NULL);
	n1->content = content;
	n1->next = NULL;
	return (n1);
}
