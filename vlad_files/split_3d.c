/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_3d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 16:23:14 by vmakarov          #+#    #+#             */
/*   Updated: 2017/02/21 19:52:07 by vmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "./libft/libft.h"

int					size_of_3d_array(const char *s)
{
	int i;
	int size;

	size = 0;
	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if ((s[i] == '\n') && ((s[i + 1] == '\n') || (s[i + 1] == '\0')))
			size++;
		i++;
	}
	return (size);
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
	int		size_3d;

	if (str == NULL)
		return (NULL);
	size_3d = size_of_3d_array(str);
	if (!(result = (char ***)malloc(sizeof(char **) * (size_3d + 1))))
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
