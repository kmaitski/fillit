NAME = $(FILLIT)
FLAGS = -Wall -Werror -Wextra
CC = gcc $(FLAGS)
RM = rm -rf
HEAD = -Iincludes

SRC = check_piece.c main.c open_read.c print_3d_array.c split_3d.c validate.c\

OFILES = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(HEAD)

clean:
	$(RM) $(OFILES)

fclean:
	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
