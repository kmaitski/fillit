/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_initialisators.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 19:24:58 by vmakarov          #+#    #+#             */
/*   Updated: 2017/02/21 19:37:06 by vmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "./libft/libft.h"

void	ft_init_1(t_validator **list)
{
	if (!(*list = (t_validator *)malloc(sizeof(t_validator))))
		exit(1);
	(*list)->j = 0;
	(*list)->hash = 0;
	(*list)->dot = 0;
	(*list)->nl = 0;
}

void	ft_init_2(t_coordinates **list)
{
	if (!(*list = (t_coordinates *)malloc(sizeof(t_coordinates))))
		exit(1);
	(*list)->j1 = 0;
	(*list)->k1 = 0;
	(*list)->j2 = 0;
	(*list)->k2 = 0;
	(*list)->j3 = 0;
	(*list)->k3 = 0;
	(*list)->j4 = 0;
	(*list)->k4 = 0;
}
