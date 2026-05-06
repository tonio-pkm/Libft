/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:33:12 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 17:49:45 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
static void	print(void *node)
{
	printf("%s", (char *)node);
}

int	main(void)
{
	t_list	*l1;
	t_list	*l2;

	l1 = ft_lstnew("one");
	l2 = ft_lstnew("two");
	l1->next = l2;
	l2->next = NULL;
	ft_lstiter(l1, print_node);
	free(l1);
	free(l2);
}
*/
