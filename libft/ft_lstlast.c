/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:13:44 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 17:03:12 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *begin)
{
	t_list	*node;

	if (!begin)
		return (NULL);
	node = begin;
	while (node->next)
		node = node->next;
	return (node);
}
