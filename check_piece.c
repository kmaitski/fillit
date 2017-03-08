/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iheck_piece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:02:18 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/02 13:12:57 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_piece2(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '\0')
	{
		if (piece[i] == '#')
		{
			if (piece[i + 5] == '#' && piece[i + 6] == '#' && piece[i + 11] == '#')
				return (1);
			if (piece[i + 1] == '#' && piece[i + 5] == '#' && piece[i + 6] == '#')
				return (1);
			if (piece[i + 5] == '#' && piece[i + 6] == '#' && piece[i + 10] == '#')
				return (1);
			if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 6] == '#')
				return (1);
			if (piece[i + 4] == '#' && piece[i + 5] == '#' && piece[i + 10] == '#')
				return (1);
			if (piece[i + 4] == '#' && piece[i + 5] == '#' && piece[i + 6] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

int		check_piece3(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '\0')
	{
		if (piece[i] == '#')
		{
			if (piece[i + 5] == '#' && piece[i + 10] == '#' && piece[i + 11] == '#')
				return (1);
			if (piece[i + 5] == '#' && piece[i + 9] == '#' && piece[i + 10] == '#')
				return (1);
			if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 5] == '#')
				return (1);
			if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 7] == '#')
				return (1);
			if (piece[i + 5] == '#' && piece[i + 6] == '#' && piece[i + 7] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}


int		check_piece4(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '\0')
	{
		if (piece[i] == '#')
		{
			if (piece[i + 3] == '#' && piece[i + 4] == '#' && piece[i + 5] == '#')
				return (1);
			if (piece[i + 1] == '#' && piece[i + 6] == '#' && piece[i + 11] == '#')
				return (1);
			if (piece[i + 1] == '#' && piece[i + 5] == '#' && piece[i + 10] == '#')
				return (1);
			if (piece[i + 4] == '#' && piece[i + 5] == '#' && piece[i + 9] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

int		check_piece(char *piece)
{
	int	i;

	i = 0;
	if (piece[i] != '#' && piece[i] != '.')
		return (0);
	while (piece[i] != '\0')
	{
		if (piece[i] == '#')
		{
			if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 3] == '#')
				return (1);
			if (piece[i + 5] == '#' && piece[i + 10] == '#' && piece[i + 15] == '#')
				return (1);
			if (piece[i + 1] == '#' && piece[i + 4] == '#' && piece[i + 5] == '#')
				return (1);
			if (piece[i + 1] == '#' && piece[i + 6] == '#' && piece[i + 7] == '#')
				return (1);
		}
		i++;
	}
	if (check_piece2(piece) == 1 || check_piece3(piece) == 1
			|| check_piece4(piece) == 1)
		return (1);
	return (0);
}
