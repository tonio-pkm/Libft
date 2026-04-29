/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:42:32 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/29 20:53:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next_n;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next_n = current->next;
		del(current->content);
		free(current);
		current = next_n;
	}
	*lst = NULL;
}
