/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 23:37:32 by vmakarov          #+#    #+#             */
/*   Updated: 2017/02/21 20:03:40 by vmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "fillit.h"

int			get_maximum(int i, int j, int k, int l)
{
	int array[4];
	int position;
	int max;

	position = 0;
	array[0] = i;
	array[1] = j;
	array[2] = k;
	array[3] = l;
	max = array[0];
	while (position < 4)
	{
		if (array[position] > max)
			max = array[position];
		position++;
	}
	return (max);
}

int			get_minimum(int i, int j, int k, int l)
{
	int array[4];
	int position;
	int min;

	position = 0;
	array[0] = i;
	array[1] = j;
	array[2] = k;
	array[3] = l;
	min = array[0];
	while (position < 4)
	{
		if (array[position] < min)
			min = array[position];
		position++;
	}
	return (min);
}

static	int	get_position(char ***array, int n_3d, int n_hash)
{
	int	j;
	int k;

	j = 0;
	while (array[n_3d][j] != '\0' && n_hash > 0)
	{
		k = 0;
		while (array[n_3d][j][k] != '\0' && n_hash > 0)
		{
			if (array[n_3d][j][k] == '#')
				n_hash--;
			k++;
		}
		j++;
	}
	return ((j - 1) * 10 + (k - 1));
}

static	int	check_block(char ***array, int n_3d)
{
	t_coordinates	*l;
	int				length;
	int				heighth;

	if (array == NULL)
		exit(1);
	ft_init_2(&l);
	l->j1 = get_position(array, n_3d, 1) / 10;
	l->k1 = get_position(array, n_3d, 1) % 10;
	l->j2 = get_position(array, n_3d, 2) / 10;
	l->k2 = get_position(array, n_3d, 2) % 10;
	l->j3 = get_position(array, n_3d, 3) / 10;
	l->k3 = get_position(array, n_3d, 3) % 10;
	l->j4 = get_position(array, n_3d, 4) / 10;
	l->k4 = get_position(array, n_3d, 4) % 10;
	length = get_maximum(l->k1, l->k2, l->k3, l->k4) -
		get_minimum(l->k1, l->k2, l->k3, l->k4) + 1;
	heighth = get_maximum(l->j1, l->j2, l->j3, l->j4) -
		get_minimum(l->j1, l->j2, l->j3, l->j4) + 1;
	if ((length == 2 && heighth == 2) || (length == 4 && heighth == 1)
		|| (length == 1 && heighth == 4) || (length == 2 && heighth
			== 3) || (length == 3 && heighth == 2))
		return (0);
	free(l);
	return (1);
}

int			validator_2(char ***array)
{
	int i;

	if (array == NULL)
		return (1);
	i = 0;
	while (array[i] != '\0')
	{
		if (check_block_for_hashes(array, i) != 0)
			return (1);
		if (check_block(array, i) != 0)
			return (1);
		i++;
	}
	return (0);
}
