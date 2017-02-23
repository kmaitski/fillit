/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_3d_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 23:24:21 by vmakarov          #+#    #+#             */
/*   Updated: 2017/02/18 23:36:57 by vmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "fillit.h"

void	print_3d_array(char ***array)
{
	int i;
	int j;
	int k;

	i = 0;
	while (array[i] != '\0')
	{
		j = 0;
		while (array[i][j] != '\0')
		{
			k = 0;
			while (array[i][j][k] != '\0')
			{
				ft_putchar(array[i][j][k]);
				k++;
			}
			j++;
		}
		i++;
		if (i != 0 && array[i] != '\0')
			ft_putchar('\n');
	}
}
