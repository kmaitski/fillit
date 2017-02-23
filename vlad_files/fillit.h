/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:24:24 by vmakarov          #+#    #+#             */
/*   Updated: 2017/02/22 16:40:08 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/stat.h> // exit is in stdlib which is libft.h
# include "libft/libft.a"
# define BUF_SIZE 13 // malloc, free, write are also included by the libft.h

typedef struct	s_validator
{
	int j;
	int hash;
	int dot;
	int nl;
}				t_validator;

typedef	struct	s_coordinates
{
	int j1;
	int k1;
	int j2;
	int k2;
	int j3;
	int k3;
	int j4;
	int k4;
}				t_coordinates;

char			*reader(int argc, char **argv);
int				validator(char *str);
char			***split_3d(char *str);
int				size_of_3d_array(const char *s);
void			print_3d_array(char ***array);
int				validator_2(char ***array);
int				get_minimum(int i, int j, int k, int l);
int				get_maximum(int i, int j, int k, int l);
int				check1(char *str);
int				check2(char *str);
int				check_block_for_hashes(char ***array, int n_3d);
void			ft_init_1(t_validator **list);
void			ft_init_2(t_coordinates **list);

#endif
