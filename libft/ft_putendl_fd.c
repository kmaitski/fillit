/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 09:05:17 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/03 13:41:50 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (!s || !fd)
		return ;
	while (*s != 0)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
	ft_putchar_fd('\n', fd);
}
