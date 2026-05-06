/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 14:03:31 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 17:03:16 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}
/*
int	main(void)
{
	t_list	*l1 = ft_lstnew("l1");
	t_list	*l2 = ft_lstnew("l2");
	t_list	*lnew = ft_lstnew("lnew");

	l1->next = l2;
	l2->next = NULL;

	ft_lstadd_back(&l1, lnew);
	printf("%s", (char *)ft_lstlast(l1)->content);
	free(l1);
	free(l2);
	free(lnew);
}
*/
