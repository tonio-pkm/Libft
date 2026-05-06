/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:05:12 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/06 17:17:40 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*l1 = ft_lstnew("l1");
	t_list	*lnew = ft_lstnew("lnew");

	ft_lstadd_front(&l1, lnew);
	printf("%s", (char *)l1->content);
	free(lnew);
}
*/
