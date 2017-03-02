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
		error();
	if (pieces / 4 != lines / 5)
		error();
	if (blanks / pieces != 3)
		error();
	return (lines / 5);
}

t_list	*validate(char *read_string)
{
	int		pieces;
	int		x;
	char	*current_piece;
	t_list	*head_node;
	t_list	*tmp;
	char	**coordinates_string;

	x = 0;
	if (!(pieces = quick_check(read_string)))
		error();
	current_piece = ft_strsub(read_string, x, 21);
	coordinates_string = ft_strsplit(current_piece, '\n');
	head_node = create_linked_list(coordinates_string);
	tmp = head_node;
	while (check_piece(current_piece) == 1)
	{
		x = x + 21;
		current_piece = ft_strsub(read_string, x, 21);
		coordinates_string = ft_strsplit(current_piece, '\n');
		if (x < ft_strlen(read_string))
		{
			tmp = tmp->next;
			tmp = create_linked_list(coordinates_string);
		}
		pieces--;
	}
	if (pieces == 0)
		return (head_node);
	return (NULL);
}
