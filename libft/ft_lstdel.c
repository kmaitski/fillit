/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:35:30 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 17:44:49 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*node;
	t_list	*next;

	node = *alst;
	while (node)
	{
		next = node->next;
		del(node->content, node->content_size);
		free(node);
		node = next;
	}
	*alst = NULL;
}
