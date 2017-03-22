/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 20:17:14 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/22 15:50:06 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*open_read(char *file)
{
	int		fd;
	char	*buf;
	char	*tmp;
	int		bytes_read;

	if ((fd = open(file, O_RDONLY)) < 0)
		error();
	tmp = ft_strnew(0);
	buf = ft_strnew(2);
	while ((bytes_read = read(fd, buf, 1)) > 0)
		tmp = ft_strjoin(tmp, buf);
	if (ft_strlen(tmp) > 545)
		error();
	if (close(fd) < 0)
		error();
	return (tmp);
}
