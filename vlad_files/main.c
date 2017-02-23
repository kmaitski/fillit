/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 16:19:18 by vmakarov          #+#    #+#             */
/*   Updated: 2017/02/22 16:36:32 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char *str;
	char ***array;

	str = reader(argc, argv);
	if (validator(str) == 1)
	{
		ft_putstr("CYKA\n");
		return (0);
	}
	array = split_3d(str);
	ft_putchar('Y');
	return (0);
}
