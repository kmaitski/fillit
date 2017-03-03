/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers_for_solver.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 19:06:27 by vmakarov          #+#    #+#             */
/*   Updated: 2017/03/02 14:41:57 by vmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "./libft/libft.h"

static	int	get_position_sp(char **array, int n_hash)//works with 2d array!!
{
	int i;
	int j;

	i = 0;
	while (array[i] != '\0' && n_hash > 0)
	{
		j = 0;
		while (array[i][j] != '\0' && n_hash > 0)
		{
			if (array[i][j] >= 65 &&  array[i][j] <= 90)
				n_hash--;
			j++;
		}
		i++;
	}
	return ((i - 1) * 10 + (j - 1));
}

int boundaries(int row, int col, char **array, char **map)//checks for not crossing map's boundaries
{
	t_coordinates *l;
	int	length;
	int	heighth;

	ft_init_2(&l);
	l->j1 = get_position_sp(array, 1) / 10;
	l->k1 = get_position_sp(array, 1) % 10;
	l->j2 = get_position_sp(array, 2) / 10;
	l->k2 = get_position_sp(array, 2) % 10;
	l->j3 = get_position_sp(array, 3) / 10;
	l->k3 = get_position_sp(array, 3) % 10;
	l->j4 = get_position_sp(array, 4) / 10;
	l->k4 = get_position_sp(array, 4) % 10;
	length = get_maximum(l->k1, l->k2, l->k3, l->k4) -
		get_minimum(l->k1, l->k2, l->k3, l->k4);
	heighth = get_maximum(l->j1, l->j2, l->j3, l->j4) -
		get_minimum(l->j1, l->j2, l->j3, l->j4);
	if (l->k1 == get_maximum(l->k1, l->k2, l->k3, l->k4) && ((row + heighth) < ft_2dlen(map))
			&& ((col - length) >= 0))
		return (0);
	if (l->k1 == get_minimum(l->k1, l->k2, l->k3, l->k4) && ((row + heighth) < ft_2dlen(map))
			&& ((col + length) < ft_2dlen(map)))
		return (0);
	if ((l->k1 != get_maximum(l->k1, l->k2, l->k3, l->k4)) && (l->k1 != get_minimum(l->k1, l->k2, l->k3, l->k4))
		&& ((col + 1) < ft_2dlen(map)) && ((col - 1) >= 0) && ((row + heighth) < ft_2dlen(map)))
		return (0);
	free(l);
	return (1);
}

/*int intersection(int row, int col, char **array, char **map)//checks for two figures not intersecting
{
	
	return (1);
}*/
char **place(int row, int col, char **array, char **map)//places tetrimino in a spot(coordinates are given)
{
	int i;
	int j;
	int flag;
	int flag2;
	int temp_row;
	int temp_col;

	i = 0;
	flag = row;
	temp_row = row;
	temp_col = col;
	while (map[row] && array[i])
	{
		if (row > flag)
			col = 0;
		j = 0;
		while (map[row][col] && array[i][j])
		{
			if (array[i][j] != '.' && array[i][j] != '\n' && map[row][col] == '.')
			{	
				flag2 = 0;
				if (row == temp_row)
					map[row][col] = array[i][j];
				else	
					map[row][col + temp_col - 1] = array[i][j];
			}
			if (flag2 == 0)
				col++;
			j++;
		}
		row++;
		i++;
	}
	return (map);
}
