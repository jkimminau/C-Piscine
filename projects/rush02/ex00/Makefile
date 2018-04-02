# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zspackma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/25 11:16:32 by zspackma          #+#    #+#              #
#    Updated: 2018/01/28 21:36:20 by jkimmina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
FLAG = -Wall -Wextra -Werror
SRC = rush-2.c valid.c
OBJ = rush-2.o valid.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRC) -o $(NAME) -I valid.h

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
