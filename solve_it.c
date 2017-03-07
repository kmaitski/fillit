/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 13:12:48 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/06 15:20:48 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*move_piece(t_list *node, int x, int y)
{
	int	x_min;
	int	y_min;
	int	i;

	x_min = 2147483647;
	y_min = 2147483647;
	i = 0;
	while (i < 4)
	{
		if (node->x_cor[i] < x_min)
			x_min = node->x_cor[i];
		if (node->y_cor[i] < y_min)
			y_min = node->y_cor[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		node->x_cor[i] = node->x_cor[i] - x_min + x;
		node->y_cor[i] = node->y_cor[i] - y_min + y;
		i++;
	}
	return (node);
}

int	check_place_piece(t_list *node, char **board, int board_size)
{
	int	x;
	int	y;
	int	i;

	y = 0;
	i = 0;
	while (y < board_size)
	{
		x = 0;
		while (x < board_size)
		{
			if (node->x_cor[i] == x && node->y_cor[i] == y && board[y][x] != '.')
				return (1);
			if (node->x_cor[i] == x && node->y_cor[i] == y)
				i++;
			x++;
		}
		y++;
	}
	if (i == 4)
		return (0);
	return (1);
}

char	**place_piece(char **board, t_list *node, int board_size)
{
	int	x;
	int	y;
	int	i;

	y = 0;
	i = 0;
	while (y < board_size)
	{
		x = 0;
		while (x < board_size)
		{
			if (node->x_cor[i] == x && node->y_cor[i] == y)
			{
				board[y][x] = node->c;
				i++;
			}
			x++;
		}
		y++;
	}
	return (board);
}

char	**remove_piece(char **board, int board_size, t_list *node)
{
	int	x;
	int	y;

	y = 0;
	while (y < board_size)
	{
		x = 0;
		while (x < board_size)
		{
			if (board[y][x] == node->c)
				board[y][x] = '.';
			x++;
		}
		y++;
	}
	return (board);
}

int	solve_it(char **board, int board_size, t_list *node, int pieces)
{
	int	x;
	int	y;
	char	**tmp;

	y = 0;
	while (y < board_size)
	{
		x = 0;
		while (x < board_size)
		{
			node = move_piece(node, x, y);
			if (!check_place_piece(node, board, board_size))
			{
				tmp = place_piece(board, node, board_size);
				pieces--;
				if (node->next)
					solve_it(tmp, board_size, node->next, pieces);
				if (pieces == 0)
				{
					print_3d_array(tmp);
					exit(0);
				}
				tmp = remove_piece(tmp, board_size, node);
				pieces++;
			}
			x++;
		}
		y++;
	}
	return (0);
}
