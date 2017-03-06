/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 13:13:09 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/03 13:31:55 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*fill_arrays(t_list *node,  char **coordinates_string)
{
	int	x;
	int	y;
	int	i;

	y = 0;
	i = 0;
	while (y != 4)
	{
		x = 0;
		while (x != 4)
		{
			if (coordinates_string[y][x] == '#')
			{
				node->x_cor[i] = x;
				node->y_cor[i] = y;
				i++;
			}
			x++;
		}
		y++;
	}
	return (node);
}

t_list	*create_linked_list(char *read_string, int pieces)
{
	int	x;
	char	c;
	t_list	*head_node;
	t_list	*tmp;

	x = 0;
	c = 'A';
	if (!(head_node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	tmp = head_node;
	while (pieces--)
	{
		fill_arrays(tmp, ft_strsplit(ft_strsub(read_string, x, 20), '\n'));
		x = x + 21;
		if (!(tmp->next = (t_list *)(malloc(sizeof(t_list)))))
			return (NULL);
		tmp->c = c;
		tmp = tmp->next;
		c++;
	}
	return (head_node);
}
