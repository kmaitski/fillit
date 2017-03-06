/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 13:12:48 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/03 17:35:16 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**reset_board(char **wrong_board, t_list *node, int board_size)
{
	int	x;
	int	y;

	y = 0;
	while (y < board_size)
	{
		x = 0;
		while (x < board_size)
		{
			if (node->c == wrong_board[y][x])
				wrong_board[y][x] = '.';
			x++;
		}
		y++;
	}
	return (wrong_board);
}

char	**bigger_board(char **old_board, int board_size)
{
	char	**new_board;

//	ft_memdel((void**)old_board);
	new_board = map_creator(board_size);
	return (new_board);
}

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



void	solve_it(char **board, int board_size, t_list *node, int pieces, t_list *store_head, int store_pieces)
{
	int	x;
	int	y;
	int	i;
	char	**result;
	char	**tmp;

	y = 0;
	result = NULL;
//	printf("%s", board[0]);
	while (y < board_size)
	{
		x = 0;
		while (x < board_size)
		{
			node = move_piece(node, x, y);
			if (!check_place_piece(node, board, board_size))
			{
//				printf("%d", pieces);
				tmp = place_piece(board, node, board_size);
				pieces--;
				if (pieces == 0)
				{
					print_3d_array(tmp);
					exit(0);
				}
				if (node->next)
//				{
					solve_it(tmp, board_size, node->next, pieces, store_head, store_pieces);
//					if (pieces == 0)
//						return (result);
//				}
//				else
//				{
//					reset_board(tmp, node, board_size);
//					board_size++;
//					board = map_creator(board_size);
//					solve_it(board, board_size, store_head, store_pieces);
//					printf("%d", 1);
//				}
//
//
			}
			x++;
		}
		y++;
	}
//	printf("%c", node->c);
//	if (node->next == NULL)
//	{
//	reset_board(tmp, node, board_size);
		board_size++;
//		printf("%d", board_size);
		board = map_creator(board_size);
//		printf("%s", board[1]);
//		printf("%d", store_pieces);
		solve_it(board, board_size, store_head, store_pieces, store_head, store_pieces);
//					printf("%d", 1);
//	}
//	printf("%d", pieces);
//	if (pieces == 0)
//		return (tmp);
//	else if (node->next)
//	{
//		solve_it(board, board_size, node->next, pieces);
//		board = bigger_board(board, board_size);
//		solve_it(board, board_size, node, store_pieces);
//	}
//	else
//	{
//		board_size++;
//		board = map_creator(board_size);
//		solve_it(board, board_size, store_head, store_pieces);
//	}
//	printf("%d", 1);
//	return (NULL);
}
