/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 13:13:09 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/02 15:01:07 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*create_linked_list(char **str, char c)
{
	int	x;
	int	y;
	int	i;
	t_list	*new_node;

	y = 0;
	i = 0;
	if (!(new_node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (str[y][x] == '#')
			{
				new_node->x_cor[i] = x;
				new_node->y_cor[i] = y;
				i++;
			}
			x++;
		}
		y++;
	}
	if (!(new_node->next = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	return (new_node);
}
