/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 16:19:18 by vmakarov          #+#    #+#             */
/*   Updated: 2017/02/21 19:41:40 by vmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "./libft/libft.h"

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
	print_3d_array(array);
	if (validator_2(array) == 1)
	{
		ft_putstr("BLYA\n");
		return (0);
	}
	ft_putchar('Y');
	return (0);
}
