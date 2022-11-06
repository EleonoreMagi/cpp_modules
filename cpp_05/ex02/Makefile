NAME =	form_version

SRC =	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
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
