.PHONY:
	all re fclean

TARGET	=	form2
RM		=	rm -rf
CPPFLAGS	=  -Wall -Wextra -Werror -c -std=c++98
CC		=	c++

HEADERS	=	Bureaucrat.h Form.h PresidentialPardonForm.h RobotomyRequestForm.h ShrubberyCreationForm.h
SRC		=	main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
OBJ		=	$(SRC:.cpp=.o)

$(TARGET):	$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

all: $(TARGET)

fclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

re:	fclean all