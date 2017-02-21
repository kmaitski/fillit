/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 15:57:47 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 17:02:46 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list *alst, t_list *new)
{
	t_list	*list;

	list = alst;
	if (!new)
		return ;
	if (alst == NULL)
	{
		alst = new;
		new->next = NULL;
	}
	else
	{
		while (list->next)
			list = list->next;
		list->next = new;
	}
}
