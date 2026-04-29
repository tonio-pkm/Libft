/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:52:21 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/29 19:02:20 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content);

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*currrent;
	t_list	*new_start;
	t_list	*new_current;

	current = lst;
	while (current)
	{
		if (new_start == NULL)
		{
			new_start = ft_lstnew(f(current->content));
			new_current = new_start;
		}
		else
		{
			new_current->next = ft_lstnew(f(current->content));
			new_current = new_current->next;
		}
		current->next;
	}
}
