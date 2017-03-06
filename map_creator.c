/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 18:26:47 by vmakarov          #+#    #+#             */
/*   Updated: 2017/03/02 16:00:31 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		*ft_strnew_sp(size_t size)
{
	char	*str;

	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	ft_memset(str, '.', size);
	str[size + 1] = '\0';
	return (str);
}

char	**map_creator(int square_size)
{
	char **result;
	int position_2d;
	int str_size;

	position_2d = 0;
	str_size = square_size;
	if (!(result = (char **)malloc(sizeof(char *) * (square_size + 1))))
		return (NULL);
	while (square_size > 0)
	{
		result[position_2d] = ft_strnew_sp(str_size);
		square_size--;
		position_2d++;
	}
	result[position_2d] = NULL;
	return (result);
}
