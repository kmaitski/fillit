/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 20:16:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/23 12:19:47 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char	*read_string;
	char	***array;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	read_string = open_read(argv[1]);
	if (validate(read_string) != 1)
	{
		ft_putstr("error\n");
		return (0);
	}
	array = split_3d(read_string);
	print_3d_array(array);
	return (1);
}
