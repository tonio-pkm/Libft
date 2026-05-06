/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:54:53 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 17:22:46 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*l1 = ft_lstnew("one");
	t_list	*l2 = ft_lstnew("two");

	l1->next = l2;
	l2->next = NULL;
	printf("%s", (char *)ft_lstlast(l1)->content);
	free(l1);
	free(l2);
}
*/
