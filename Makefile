# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/08 11:30:38 by vmakarov          #+#    #+#              #
#    Updated: 2017/03/08 12:45:54 by kmaitski         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = board_size.c create_linked_list.c main.c print_result.c validate.c\
	  board_creator.c check_piece.c error.c open_read.c solve_it.c\
	  indirect_recursion.c

FLAG = gcc -c -g -Wall -Werror -Wextra

OBJ = ${SRC:.c=.o}

LIBFT = ./libft/libft.a

all: $(NAME)

$(NAME):
	cd libft && make && cd ..
	$(FLAG) $(SRC)
	gcc $(OBJ) -o $(NAME) $(LIBFT)

clean:
	/bin/rm -f $(OBJ)
	cd libft && make clean

fclean: clean
	/bin/rm -f $(NAME)
	cd libft && make fclean

re: fclean all
	cd libft && make re
