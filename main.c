/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 20:16:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/02 16:09:56 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char	*read_string;
	char	**array;
	t_list	*head_node;
	int		board_size;
	int		pieces;

	if (argc != 2)
		error();
	read_string = open_read(argv[1]);
	if (validate(read_string))
		error();
	pieces = quick_check(read_string);
	head_node = create_linked_list(read_string, pieces);
	printf("%d", head_node->x_cor[2]);
	board_size = get_board_size(pieces);
	array = map_creator(board_size);
	array = solve_it(array, board_size, head_node);
	print_3d_array(array);
	return (0);
}
