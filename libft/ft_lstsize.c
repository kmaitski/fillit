/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:04:30 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 17:02:17 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_list *begin)
{
	size_t	count;
	t_list	*list;

	count = 0;
	list = begin;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}
