/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:45:16 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 17:32:56 by antgarci         ###   ########.fr       */
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
/*
static void	del(void *node)
{
	free(node);
}
int	main(void)
{
	t_list	*l1 = ft_lstnew("one");
	t_list	*l2 = ft_lstnew("two");

	l1->next = l2;
	l2->next = NULL;
	ft_lstclear(&l1, del);
	printf("%s", (char *)l1);
}
*/
