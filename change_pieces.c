/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_pieces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 15:41:24 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/18 15:57:49 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	change_pieces(char *read_string)
{
	int		pieces;
	int		x;
	char	*current_piece;
	char	c;

	c = 'a';
	if (!(pieces = quick_check(read_string)))
		return (0);
	while (pieces--)
	{
		current_piece = ft_strsub(read_string, x, 21);
		while (current_piece)
		{
			if (*current_piece == '#')
				current_piece = c;
			current_piece++;
		}
		x = x + 21;
		c++;
	}
}

