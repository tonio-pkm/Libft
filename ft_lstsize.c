/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:19:55 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 16:54:45 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		size;

	size = 0;
	current = lst;
	while (current)
	{
		current = current->next;
		size++;
	}
	return (size);
}
/*
int     main(void)
{
        t_list  *l1 = ft_lstnew("a");
	t_list  *l2 = ft_lstnew("b");
        t_list  *l3 = ft_lstnew("c");

        l1->next = l2;
        l2->next = l3;
        l3->next = NULL;

        printf("%d", ft_lstsize(l1));
	free(l1);
	free(l2);
	free(l3);
}
*/
