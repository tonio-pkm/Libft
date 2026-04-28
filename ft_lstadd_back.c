/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:19:20 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/28 17:56:40 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	
	if (lst == NULL)
		lst->content = new;
	current = lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}
