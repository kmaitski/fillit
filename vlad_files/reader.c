/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:21:37 by vmakarov          #+#    #+#             */
/*   Updated: 2017/02/17 01:29:07 by vmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "./libft/libft.h"

static	int	check_argc(int argc)
{
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	return (1);
}

char		*reader(int argc, char **argv)
{
	int		fd;
	char	buffer[BUF_SIZE + 1];
	char	*str;
	int		read_bytes;

	if (check_argc(argc) == 0)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("error\n");
		return (0);
	}
	str = ft_strnew(0);
	read_bytes = 0;
	while ((read_bytes = read(fd, buffer, BUF_SIZE)) > 0)
	{
		buffer[read_bytes] = '\0';
		str = ft_strjoin(str, buffer);
	}
	if (close(fd) == -1)
	{
		ft_putstr("error\n");
		return (0);
	}
	close(fd);
	return (str);
}
