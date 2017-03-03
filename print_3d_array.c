/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_3d_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 23:24:21 by vmakarov          #+#    #+#             */
/*   Updated: 2017/03/02 16:09:49 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_3d_array(char **array)
{
	int j;
	int k;

	j = 0;
	while (array[j] != '\0')
	{
		k = 0;
		while (array[j][k] != '\0')
		{
			ft_putchar(array[j][k]);
			k++;
		}
		ft_putchar('\n');
		j++;
	}
}
