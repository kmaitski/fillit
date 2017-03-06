/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 20:16:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/06 13:47:41 by kmaitski         ###   ########.fr       */
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
	int		i;

	i = 0;
	if (argc != 2)
		error();
	read_string = open_read(argv[1]);
	if (validate(read_string))
		error();
	pieces = quick_check(read_string);
	head_node = create_linked_list(read_string, pieces);
	board_size = get_board_size(pieces);
	while (i == 0)
	{
//		printf("%d", 1);
		array = map_creator(board_size);
		i = solve_it(array, board_size, head_node, pieces);
		board_size++;
	}
	return (0);
}
