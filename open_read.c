#include "fillit.h"

char	*open_read(char *file, char *str)
{
	int	x;
	int	c;
	int	fd;
	char	buf[1];
	char	t[500];

	c = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return ("error message");
	while ((x = read(fd, buf, 1)))
	{
		t[c] = buf[0];
		c++;
	}
	t[c] = '\0';
	return (ft_strdup(tmp));
}
