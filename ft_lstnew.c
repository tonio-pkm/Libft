/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:41:00 by antgarci          #+#    #+#             */
/*   Updated: 2026/04/28 16:04:50 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content)
{
	t_list	*n1;

	n1 = malloc(sizeof(t_list));
	if (!n1)
		return (NULL);
	n1->content = content;
	n->next = NULL;
	return (n1);
}
