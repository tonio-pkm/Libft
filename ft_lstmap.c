/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:59:12 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 17:55:03 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_start;
	t_list	*new_node;
	void	*function;

	if (!lst || !f || !del)
		return (NULL);
	new_start = NULL;
	while (lst)
	{
		function = f(lst->content);
		new_node = ft_lstnew(function);
		if (!new_node)
		{
			del(function);
			ft_lstclear(&new_start, del);
			return (NULL);
		}
		ft_lstadd_back(&new_start, new_node);
		lst = lst->next;
	}
	return (new_start);
}
