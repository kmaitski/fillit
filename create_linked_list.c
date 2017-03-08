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

t_list	*fill_arrays(t_list *node,  char **tetrimino)
{
	signed int	column;
	signed int	row;
	int	i;

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

t_list	*create_linked_list(char *read_string, int pieces)
{
	int	i;
	char	letter;
	t_list	*head_node;
	t_list	*node;

	i = 0;
	letter = 'A';
	if (!(head_node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node = head_node;
	while (pieces--)
	{
		fill_arrays(node, ft_strsplit(ft_strsub(read_string, i, 20), '\n'));
		i = i + 21;
		if (!(node->next = (t_list *)(malloc(sizeof(t_list)))))
			return (NULL);
		node->letter = letter;
		node = node->next;
		letter++;
	}
	return (head_node);
}
