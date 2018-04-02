# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 14:29:09 by jkimmina          #+#    #+#              #
#    Updated: 2018/01/28 18:48:06 by jkimmina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = eval.c helper.c cleaner.c

HEADER = helper.h cleaner.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADER)
	gcc -o $(NAME) eval.o helper.o cleaner.o

clean:
	/bin/rm -f *.o
	/bin/rm -f *.gch

fclean: clean
	/bin/rm -f $(NAME)
