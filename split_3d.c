/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_3d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 16:23:14 by vmakarov          #+#    #+#             */
/*   Updated: 2017/02/22 20:59:48 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int					size_of_3d_array(const char *s)
{
	int c;
	int pieces;

	pieces = 0;
	c = 0;
	if (s == NULL)
		return (0);
	while (s[c] != '\0')
	{
		if (s[c] == '\n' && (s[c + 1] == '\n' || s[c + 1] == '\0'))
			pieces++;
		c++;
	}
	return (pieces);
}

static	char		**give_element_of_3d_array(char *str,
		int position_of_element)
{
	int		size_array;
	char	**result;
	int		position;

	if (str == NULL)
		return (NULL);
	size_array = 4;
	if (!(result = (char **)malloc(sizeof((char *)str) * (size_array + 1))))
		return (NULL);
	position = 0;
	while (size_array > 0)
	{
		result[position] = ft_strsub(str, position_of_element, 5);
		size_array--;
		position++;
		position_of_element = position_of_element + 5;
	}
	result[position] = NULL;
	return (result);
}

char				***split_3d(char *str)
{
	char	***result;
	int		position_3d;
	int		pieces;

	if (str == NULL)
		return (NULL);
	pieces = size_of_3d_array(str);
	if (!(result = (char ***)malloc(sizeof(char **) * (pieces + 1))))
		return (NULL);
	position_3d = 0;
	while (size_3d > 0)
	{
		result[position_3d] = give_element_of_3d_array(str, position_3d * 21);
		size_3d--;
		position_3d++;
	}
	result[position_3d] = NULL;
	return (result);
}
