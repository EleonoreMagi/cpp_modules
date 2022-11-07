# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 01:30:03 by dmillan           #+#    #+#              #
#    Updated: 2022/11/07 03:42:02 by dmillan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	check_type

SRC =	main.cpp Identifier.cpp Base.cpp
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