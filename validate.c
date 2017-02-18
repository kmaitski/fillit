/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:56:08 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/17 22:28:50 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int quick_check(char *read_string)
{
	int	piece;
	int	lines;
	int	blanks;
	int	c;

	pieces = 0;
	lines = 0;
	blanks = 0;
	c = 0;
	while (read_string[c] != '\0')
	{
		if (read_string[c] == ".")
			blanks++;
		else if (read_strings[c] == "#")
			pieces++;
		else if (read_strings[c] == '\n')
			lines++;
		else
			return (0);
		c++;
	}
	if (pieces % 4 || blanks % 4 || lines % 5)
		return (0);
	return (pieces / 4);
}

int	validate(char *read_string)
{
	char	**list;
	int		pieces;
	int		x;
	char	*current_piece;

	x = 0;
	if (!(pieces = quick_check(read_string)))
		return (0);
	current_piece = ft_strsub(read_string, x, 21);
	while (pieces-- && check_piece(current_piece) == 1)
	{
		x = x + 21;
		current_piece = ft_strsub(read_string, x, 21)
	}
	return (1);
}
