/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indirect_recursion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 11:03:04 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/08 11:35:43 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	indirect_recursion(t_list *node, char **board,
		int board_size, int pieces)
{
	char	**result;

	result = place_piece(board, node, board_size);
	pieces--;
	if (node->next)
		solve_it(result, board_size, node->next, pieces);
	if (pieces == 0)
	{
		print_result(result);
		exit(0);
	}
	result = remove_piece(result, board_size, node);
	pieces++;
}
