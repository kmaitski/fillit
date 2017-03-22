/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 22:22:39 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/22 16:17:38 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct		s_fillit
{
	int				column_coordinates[4];
	int				row_coordinates[4];
	char			letter;
	struct s_fillit	*next;
}					t_fillit;

char				*open_read(char *file);
int					validate(char *read_string);
int					check_piece(char *str);
int					main(int argc, char **argv);
int					quick_check(char *read_string);
char				***split_3d(char *str);
void				print_result(char **array);
void				error(void);
t_fillit			*create_linked_list(char *str, int pieces);
int					get_board_size(int pieces);
char				**board_creator(int board_size);
int					solve_it(char **board, int board_size,
		t_fillit *node, int pieces);
char				**place_piece(char **board, t_fillit *node, int board_size);
char				**remove_piece(char **board, int board_size,
		t_fillit *node);
void				indirect_recursion(t_fillit *node, char **board,
		int board_size, int pieces);
void				error_argc(void);

#endif
