# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 19:11:35 by dmillan           #+#    #+#              #
#    Updated: 2022/11/05 19:20:43 by dmillan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp\
			AMateria.cpp\
			Character.cpp\
			Ice.cpp\
			Cure.cpp\
			MateriaSource.cpp

OBJS	= $(SRCS:.cpp=.o)
CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

NAME = Interface

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

debug	:
		$(CXX) $(CXXFLAGS) -fsanitize=address -std=c++98 -Wshadow $(SRCS) -o $(NAME)

clean	:
			$(RM) $(OBJS)

fclean	:
			$(RM) $(NAME) $(OBJS)

re		: fclean all

.PHONY	: all clean fclean re