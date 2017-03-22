/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_3d_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 23:24:21 by vmakarov          #+#    #+#             */
/*   Updated: 2017/03/22 16:18:01 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_result(char **board)
{
	int i;
	int j;

	if (board == NULL)
		error();
	i = 0;
	while (board[i] != '\0')
	{
		j = 0;
		while (board[i][j] != '\0')
		{
			ft_putchar(board[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
