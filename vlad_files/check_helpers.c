/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 19:53:22 by vmakarov          #+#    #+#             */
/*   Updated: 2017/02/21 20:05:44 by vmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "./libft/libft.h"

int		check1(char *str)
{
	t_validator *list;

	if (str == NULL)
		return (0);
	ft_init_1(&list);
	while (str[list->j] != '\0')
	{
		if (str[list->j] == '#')
			list->hash++;
		if (str[list->j] == '.')
			list->dot++;
		if (str[list->j] == '\n')
			list->nl++;
		list->j++;
	}
	if (list->hash != ft_strlen(str) / 5)
		return (1);
	if (list->dot != ft_strlen(str) / 5 * 3)
		return (1);
	if (list->nl != ft_strlen(str) / 5)
		return (1);
	free(list);
	return (0);
}

int		check2(char *str)
{
	t_validator	*list;
	int			n_blocks;

	n_blocks = (ft_strlen(str) + 1) / 21;
	if (str == NULL)
		return (0);
	ft_init_1(&list);
	while (str[list->j] != '\0')
	{
		if (str[list->j] == '#')
			list->hash++;
		if (str[list->j] == '.')
			list->dot++;
		if (str[list->j] == '\n')
			list->nl++;
		list->j++;
	}
	if (list->hash != n_blocks * 4)
		return (1);
	if (list->dot != n_blocks * 12)
		return (1);
	if (list->nl != n_blocks * 4 + n_blocks - 1)
		return (1);
	free(list);
	return (0);
}

int		check_block_for_hashes(char ***array, int n_3d)
{
	int j;
	int k;
	int hash;

	j = 0;
	hash = 0;
	while (array[n_3d][j] != '\0')
	{
		k = 0;
		while (array[n_3d][j][k] != '\0')
		{
			if (array[n_3d][j][k] == '#')
				hash++;
			k++;
		}
		j++;
	}
	if (hash != 4)
		return (1);
	return (0);
}
