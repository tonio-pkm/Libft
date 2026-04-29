/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:52:21 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/29 21:09:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content);

void ft_lstclear(t_list **lst, void (*del)(void *));

void ft_lstadd_back(t_list **alst, t_list *new);


t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_start;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_start = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_start, del);
			return (NULL);
		}
		ft_lstadd_back(&new_start, new_node);
		lst = lst->next;
	}
	return (new_start);
}
