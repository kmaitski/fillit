/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 18:26:47 by vmakarov          #+#    #+#             */
/*   Updated: 2017/03/22 15:50:15 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**board_creator(int board_size)
{
	char	**result;
	int		row;
	int		row_size;

	row = 0;
	row_size = board_size;
	if (!(result = (char **)malloc(sizeof(char *) * (board_size + 1))))
		return (NULL);
	while (board_size--)
		result[row++] = ft_memset(ft_strnew(row_size), '.', row_size);
	result[row] = NULL;
	return (result);
}
