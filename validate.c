#include "fillit.h"

int	quick_check(char *read_string)
{
	int	piece;
	int	lines;
	int	blanks;
	int	c;

	pieces = 0;
	lines = 0;
	blanks = 0;
	c = 0;
	while (read_string[c] != '\0')
	{
		if (read_string[c] == ".")
			blanks++;
		else if (read_strings[c] == "#")
			pieces++;
		else if (read_strings[c] == '\n')
			lines++;
		else
			return("error message");
		c++;
	}
	if (pieces % 4 || blanks % 4)
		return ("error message");
	return (1);
}


char	*validate_create(char *read_string)
{
	char	**list;

	list == ft_strsplit(read_string, '\0');
