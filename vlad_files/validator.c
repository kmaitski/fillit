/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 16:17:15 by vmakarov          #+#    #+#             */
/*   Updated: 2017/02/21 19:56:30 by vmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "./libft/libft.h"

int				validator(char *str)
{
	int i;

	if (str == NULL)
		return (1);
	i = 0;
	if (str[0] == '\n')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] != '\n' && str[i] != '#' && str[i] != '.')
			return (1);
		i++;
	}
	//	printf("max position (i - 1) = %d\nstrlen = %zu\nmodulo21 =%d\n", i - 1, ft_strlen(str), (i + 1) % 21);
	if (((i + 1) % 21 != 0) || (i > 545))// max we receive 26 tetriminos, (26 * 21) - 1 = 545 (last tetrimino is only 20)
		return (1);//we add 1 to to be able to take modulo 21.
	if (ft_strlen(str) <= 20 && (check1(str) == 1))
		return (1);
	if ((ft_strlen(str) >= 21) && (check2(str) == 1))
		return (1);
	return (0);
}
