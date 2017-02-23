/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 22:22:39 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/23 12:30:31 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>

char	*open_read(char *file);
int		validate(char *read_string);
int		check_piece(char *str);
int		check_piece2(char *str);
int		check_piece3(char *str);
int		check_piece4(char *str);
int		main(int argc, char **argv);
char	***split_3d(char *str);
void	print_3d_array(char ***array);

#endif
