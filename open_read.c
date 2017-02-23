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
	int		c;
	int		fd;
	char	buf[1];
	char	tmp[500];

	c = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("error\n");
		return (NULL);
	}
	while ((x = read(fd, buf, 1)))
		tmp[c++] = buf[0];
	tmp[c] = '\0';
	if (close(fd) < 0)
	{
		ft_putstr("error\n");
		return (NULL);
	}
	close(fd);
	return (ft_strdup(tmp));
}
