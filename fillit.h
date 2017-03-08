/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 22:22:39 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/06 13:42:55 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# define buf_size 21

typedef struct		s_list
{
	int		column_coordinates[4];
	int		row_coordinates[4];
	char	letter;
	struct s_list	*next;
}			t_list;

char	*open_read(char *file);
int		validate(char *read_string);
int		check_piece(char *str);
int		check_piece2(char *str);
int		check_piece3(char *str);
int		check_piece4(char *str);
int		main(int argc, char **argv);
int		quick_check(char *read_string);
char	***split_3d(char *str);
void	print_result(char **array);
void	error(void);
t_list	*create_linked_list(char *str, int pieces);
int		get_board_size(int pieces);
char	**board_creator(int board_size);
int	solve_it(char **board, int board_size, t_list *node, int pieces);


#endif
