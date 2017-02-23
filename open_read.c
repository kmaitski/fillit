#include "fillit.h"

char	*open_read(char *file)
{
	int	x;
	int	c;
	int	fd;
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
	{
		tmp[c] = buf[0];
		c++;
	}
	tmp[c] = '\0';
	return (ft_strdup(tmp));
}
