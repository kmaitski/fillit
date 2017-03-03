/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 22:22:39 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/02 15:57:07 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# define index 0

typedef struct		s_list
{
	int		x_cor[4];
	int		y_cor[4];
	char	c;
	struct s_list	*next;
}			t_list;

char	*open_read(char *file);
t_list		*validate(char *read_string);
int		check_piece(char *str);
int		check_piece2(char *str);
int		check_piece3(char *str);
int		check_piece4(char *str);
int		main(int argc, char **argv);
int		quick_check(char *read_string);
char	***split_3d(char *str);
void	print_3d_array(char **array);
void	error(void);
t_list	*create_linked_list(char **str, char c);
int		get_board_size(int pieces);
char	**map_creator(int square_size);
char	**solve_it(char **board, int board_size, t_list *node, int pieces);


#endif
