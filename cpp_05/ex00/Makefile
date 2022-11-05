# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 22:02:42 by dmillan           #+#    #+#              #
#    Updated: 2022/11/05 22:08:14 by dmillan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	bureaucrat

SRC =	main.cpp Bureaucrat.cpp
OBJ = 	$(SRC:.cpp=.o)
CC 	= 	c++
CCFLAGS = -Wall -Werror -Wextra -std=c++98
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