/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 20:17:14 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/22 20:22:11 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*open_read(char *file)
{
	int		x;
	int		fd;
	char	buf[1];
	char	tmp[545];
	int	c;

	c = 0;
	if ((fd = open(file, O_RDONLY)) < 0)
		error();
	while ((x = read(fd, buf, 1)) > 0)
	{
		tmp[c++] = buf[0];
		if (c > 545)
			error();
	}
	tmp[c] = '\0';
	if (close(fd) < 0)
		error();
	return (ft_strdup(tmp));
}
