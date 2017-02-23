/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:56:08 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/23 12:32:30 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	quick_check(char *read_string)
{
	int	pieces;
	int	lines;
	int	blanks;

	pieces = 0;
	lines = 0;
	blanks = 0;
	while (*read_string != '\0')
	{
		if (*read_string == '.')
			blanks++;
		if (*read_string == '#')
			pieces++;
		if (*read_string == '\n')
			lines++;
		read_string++;
	}
	if (pieces % 4 || blanks % 4 || ++lines % 5)
		return (0);
	if (pieces / 4 != lines / 5)
		return (0);
	if (blanks / pieces != 3)
		return (0);
	return (lines / 5);
}

int	validate(char *read_string)
{
	int		pieces;
	int		x;
	char	*current_piece;

	x = 0;
	if (!(pieces = quick_check(read_string)))
	{
		return (0);
	}
	current_piece = ft_strsub(read_string, x, 21);
	while (check_piece(current_piece) == 1)
	{
		x = x + 21;
		current_piece = ft_strsub(read_string, x, 21);
		pieces--;
	}
	if (pieces == 0)
		return (1);
	else
		return (0);
}
