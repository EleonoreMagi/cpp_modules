# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 01:30:03 by dmillan           #+#    #+#              #
#    Updated: 2022/11/07 02:30:01 by dmillan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	convert

SRC =	main.cpp Scalar.cpp
OBJ = 	$(SRC:.cpp=.o)
CC 	= 	c++
CCFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
RM	= 	-rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY: all clean fclean re