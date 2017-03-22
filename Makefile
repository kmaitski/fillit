# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/08 11:30:38 by vmakarov          #+#    #+#              #
#    Updated: 2017/03/22 16:10:58 by kmaitski         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = board_size.c create_linked_list.c main.c print_result.c validate.c\
	  board_creator.c check_piece.c error.c open_read.c solve_it.c\
	  indirect_recursion.c

CC = gcc

FLAGS = -c -g -Wall -Werror -Wextra

OBJ = ${SRC:.c=.o}

LIBFT = ./libft/libft.a

DO = make

GOTOLIB = cd libft

UP = cd ..

DEL = rm -f

all: $(NAME)

$(NAME):
	$(GOTOLIB) && $(DO) && $(UP)
	$(CC) $(FLAGS) $(SRC)
	$(CC) $(OBJ) -o $(NAME) $(LIBFT)

clean:
	$(DEL) $(OBJ)
	$(GOTOLIB) && $(DO) clean

fclean: clean
	$(DEL) $(NAME)
	$(GOTOLIB) && $(DO) fclean

re: fclean all
	$(GOTOLIB) && $(DO) re
