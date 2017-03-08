/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_piece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 11:00:00 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/08 11:24:27 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_piece2(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
				return (1);
			if (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 6] == '#')
				return (1);
			if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 10] == '#')
				return (1);
			if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 6] == '#')
				return (1);
			if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 10] == '#')
				return (1);
			if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 6] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

int		check_piece3(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			if (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 11] == '#')
				return (1);
			if (str[i + 5] == '#' && str[i + 9] == '#' && str[i + 10] == '#')
				return (1);
			if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 5] == '#')
				return (1);
			if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 7] == '#')
				return (1);
			if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

int		check_piece4(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			if (str[i + 3] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
				return (1);
			if (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
				return (1);
			if (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 10] == '#')
				return (1);
			if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 9] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

int		check_piece(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '#' && str[i] != '.')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 3] == '#')
				return (1);
			if (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 15] == '#')
				return (1);
			if (str[i + 1] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
				return (1);
			if (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
				return (1);
		}
		i++;
	}
	if (check_piece2(str) == 1 || check_piece3(str) == 1
			|| check_piece4(str) == 1)
		return (1);
	return (0);
}
