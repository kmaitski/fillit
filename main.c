/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 20:16:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/22 15:52:23 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char		*read_string;
	char		**board;
	t_fillit	*head_node;
	int			board_size;
	int			result;

	result = 0;
	if (argc != 2)
		error_argc();
	read_string = open_read(argv[1]);
	if (validate(read_string))
		error();
	head_node = create_linked_list(read_string, quick_check(read_string));
	board_size = get_board_size(quick_check(read_string));
	while (!result)
	{
		board = board_creator(board_size);
		result = solve_it(board, board_size, head_node,
				quick_check(read_string));
		board_size++;
	}
	return (0);
}
