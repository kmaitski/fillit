/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 13:13:09 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/22 15:51:37 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_fillit	*fill_arrays(t_fillit *node, char **tetrimino)
{
	signed int	column;
	signed int	row;
	int			i;

	row = 0;
	i = 0;
	while (row != 4)
	{
		column = 0;
		while (column != 4)
		{
			if (tetrimino[row][column] == '#')
			{
				node->column_coordinates[i] = column;
				node->row_coordinates[i] = row;
				i++;
			}
			column++;
		}
		row++;
	}
	return (node);
}

t_fillit	*create_linked_list(char *read_string, int pieces)
{
	int			i;
	char		letter;
	t_fillit	*head_node;
	t_fillit	*node;

	i = 0;
	letter = 'A';
	if (!(head_node = (t_fillit *)malloc(sizeof(t_fillit))))
		return (NULL);
	node = head_node;
	while (pieces--)
	{
		fill_arrays(node, ft_strsplit(ft_strsub(read_string, i, 20), '\n'));
		i = i + 21;
		if (!(node->next = (t_fillit *)(malloc(sizeof(t_fillit)))))
			return (NULL);
		node->letter = letter;
		node = node->next;
		letter++;
	}
	return (head_node);
}
