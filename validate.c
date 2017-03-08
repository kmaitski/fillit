/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:56:08 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/08 13:24:50 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	quick_check(char *read_string)
{
	int	hashes;
	int	new_lines;
	int	dots;

	hashes = 0;
	new_lines = 0;
	dots = 0;
	while (*read_string)
	{
		if (*read_string == '.')
			dots++;
		if (*read_string == '#')
			hashes++;
		if (*read_string == '\n')
			new_lines++;
		read_string++;
	}
	if (hashes % 4 || dots % 4 || ++new_lines % 5)
		error();
	if (hashes / 4 != new_lines / 5)
		error();
	if (dots / hashes != 3)
		error();
	return (new_lines / 5);
}

int	validate(char *read_string)
{
	int		pieces;
	int		i;
	char	*str;

	i = 0;
	if (!(pieces = quick_check(read_string)))
		error();
	str = ft_strsub(read_string, i, 21);
	while (check_piece(str))
	{
		if (str[20] != '\n')
			error();
		str = ft_strsub(read_string, i, 21);
		i = i + 21;
		pieces--;
	}
	if (pieces == 0)
		return (0);
	return (1);
}
