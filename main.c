#include "fillit.h"

int	main(int argc, char **argv)
{
	char	*read_string;
	char	*validate_string

	if (argc != 2)
		return("error message here");
	read_string = open_read(argv[1]);
	validate_string = validate_create(read_string);

