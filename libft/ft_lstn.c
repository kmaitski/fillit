/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 17:03:24 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 17:40:10 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstn(t_list *begin, size_t n)
{
	size_t	count;
	t_list	*node;

	if (!begin)
		return (NULL);
	count = 1;
	node = begin;
	while (count < n)
	{
		node = node->next;
		count++;
	}
	return (node);
}
