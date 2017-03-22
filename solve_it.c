/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 13:12:48 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/22 16:18:13 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_fillit	*move_piece(t_fillit *node, int column_increase, int row_increase)
{
	int	column_minimum_coordinate;
	int	row_minimum_coordinate;
	int	i;

	column_minimum_coordinate = 2147483647;
	row_minimum_coordinate = 2147483647;
	i = 0;
	while (i < 4)
	{
		if (node->column_coordinates[i] < column_minimum_coordinate)
			column_minimum_coordinate = node->column_coordinates[i];
		if (node->row_coordinates[i] < row_minimum_coordinate)
			row_minimum_coordinate = node->row_coordinates[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		node->column_coordinates[i] = node->column_coordinates[i]
			- column_minimum_coordinate + column_increase;
		node->row_coordinates[i] = node->row_coordinates[i]
			- row_minimum_coordinate + row_increase;
		i++;
	}
	return (node);
}

int			check_new_coordinates(t_fillit *node, char **board, int board_size)
{
	int	column;
	int	row;
	int	i;

	row = 0;
	i = 0;
	while (row < board_size)
	{
		column = 0;
		while (column < board_size)
		{
			if (node->column_coordinates[i] == column &&
					node->row_coordinates[i] == row &&
					board[row][column] != '.')
				return (1);
			if (node->column_coordinates[i] == column &&
					node->row_coordinates[i] == row)
				i++;
			column++;
		}
		row++;
	}
	if (i == 4)
		return (0);
	return (1);
}

char		**place_piece(char **board, t_fillit *node, int board_size)
{
	int	column;
	int	row;
	int	i;

	row = 0;
	i = 0;
	while (row < board_size)
	{
		column = 0;
		while (column < board_size)
		{
			if (node->column_coordinates[i] == column &&
					node->row_coordinates[i] == row)
			{
				board[row][column] = node->letter;
				i++;
			}
			column++;
		}
		row++;
	}
	return (board);
}

char		**remove_piece(char **board, int board_size, t_fillit *node)
{
	int	column;
	int	row;

	row = 0;
	while (row < board_size)
	{
		column = 0;
		while (column < board_size)
		{
			if (board[row][column] == node->letter)
				board[row][column] = '.';
			column++;
		}
		row++;
	}
	return (board);
}

int			solve_it(char **board, int board_size, t_fillit *node, int pieces)
{
	int		column_increase;
	int		row_increase;

	row_increase = 0;
	while (row_increase < board_size)
	{
		column_increase = 0;
		while (column_increase < board_size)
		{
			node = move_piece(node, column_increase, row_increase);
			if (!check_new_coordinates(node, board, board_size))
				indirect_recursion(node, board, board_size, pieces);
			column_increase++;
		}
		row_increase++;
	}
	return (0);
}
