/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 20:16:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/22 20:59:54 by kmaitski         ###   ########.fr       */
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
		ft_pustr("error\n")
		return (0);
	}
	array = split_3d(read_string);
	return (0);
}
