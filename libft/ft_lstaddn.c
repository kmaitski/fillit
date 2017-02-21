/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 17:32:55 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 17:39:40 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddn(t_list *begin, t_list *new, void *c)
{
	t_list	*node;
	t_list	*store;

	if (!new)
		return ;
	node = begin;
	while (node && node->content != c)
		node = node->next;
	if (node->content == c)
	{
		store = node->next;
		node->next = new;
		new->next = store;
	}
}
