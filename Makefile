# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtavares <mtavares@student.42lisboa.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/06 16:34:51 by mtavares          #+#    #+#              #
#    Updated: 2022/08/06 16:40:00 by mtavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= main.c \
		  ft_ten_queens_puzzle.c \

OBJ		= $(SRC:.c=.o)

NAME	= ten_queens

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
