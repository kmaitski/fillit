/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:45:05 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 16:16:59 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*old_head;

	if (!new)
		return ;
	old_head = *alst;
	if (alst == NULL)
	{
		*alst = new;
		new->next = NULL;
	}
	else
	{
		*alst = new;
		new->next = old_head;
	}
}
