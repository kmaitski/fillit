/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 10:34:42 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/08 12:41:34 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	error(void)
{
	ft_putstr("error");
	ft_putchar('\n');
	exit(1);
}

void	error_argc(void)
{
	ft_putstr("usage: ./fillit source_file");
	ft_putchar('\n');
	exit(1);
}
