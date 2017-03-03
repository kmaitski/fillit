/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_piece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:02:18 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/02 13:12:57 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_piece(char *str)
{
	int	c;

	c = 0;
	if (str[c] != '#' && str[c] != '.')
		return (0);
	while (str[c] != '\0')
	{
		if (str[c] == '#')
		{
			if (str[c + 1] == '#' && str[c + 2] == '#' && str[c + 3] == '#')
				return (1);
			if (str[c + 5] == '#' && str[c + 10] == '#' && str[c + 15] == '#')
				return (1);
			if (str[c + 1] == '#' && str[c + 4] == '#' && str[c + 5] == '#')
				return (1);
			if (str[c + 1] == '#' && str[c + 6] == '#' && str[c + 7] == '#')
				return (1);
		}
		c++;
	}
	if (check_piece2(str) == 1 || check_piece3(str) == 1
			|| check_piece4(str) == 1)
		return (1);
	return (0);
}

int		check_piece2(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] == '#')
		{
			if (str[c + 5] == '#' && str[c + 6] == '#' && str[c + 11] == '#')
				return (1);
			if (str[c + 1] == '#' && str[c + 5] == '#' && str[c + 6] == '#')
				return (1);
			if (str[c + 5] == '#' && str[c + 6] == '#' && str[c + 10] == '#')
				return (1);
			if (str[c + 1] == '#' && str[c + 2] == '#' && str[c + 6] == '#')
				return (1);
			if (str[c + 4] == '#' && str[c + 5] == '#' && str[c + 10] == '#')
				return (1);
			if (str[c + 4] == '#' && str[c + 5] == '#' && str[c + 6] == '#')
				return (1);
		}
		c++;
	}
	return (0);
}

int		check_piece3(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] == '#')
		{
			if (str[c + 5] == '#' && str[c + 10] == '#' && str[c + 11] == '#')
				return (1);
			if (str[c + 5] == '#' && str[c + 9] == '#' && str[c + 10] == '#')
				return (1);
			if (str[c + 1] == '#' && str[c + 2] == '#' && str[c + 5] == '#')
				return (1);
			if (str[c + 1] == '#' && str[c + 2] == '#' && str[c + 7] == '#')
				return (1);
			if (str[c + 5] == '#' && str[c + 6] == '#' && str[c + 7] == '#')
				return (1);
		}
		c++;
	}
	return (0);
}

int		check_piece4(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] == '#')
		{
			if (str[c + 3] == '#' && str[c + 4] == '#' && str[c + 5] == '#')
				return (1);
			if (str[c + 1] == '#' && str[c + 6] == '#' && str[c + 11] == '#')
				return (1);
			if (str[c + 1] == '#' && str[c + 5] == '#' && str[c + 10] == '#')
				return (1);
			if (str[c + 4] == '#' && str[c + 5] == '#' && str[c + 9] == '#')
				return (1);
		}
		c++;
	}
	return (0);
}
