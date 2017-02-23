/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:57:08 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 17:32:40 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_head;
	t_list	*new_node;
	t_list	*old_node;

	if (!lst)
		return (NULL);
	old_node = lst;
	new_node = f(old_node);
	new_head = new_node;
	while (old_node->next)
	{
		old_node = old_node->next;
		new_node->next = f(old_node);
		new_node = new_node->next;
	}
	return (new_head);
}
