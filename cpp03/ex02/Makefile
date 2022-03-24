.PHONY:
	all re fclean

TARGET	=	FragTrap
RM		=	rm -rf
CPPFLAGS	=  -Wall -Wextra -Werror -c -std=c++98
CC		=	c++

HEADERS	=	ClapTrap.h ScavTrap.h FragTrap.h
SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ		=	$(SRC:.cpp=.o)

$(TARGET):	$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

all: $(TARGET)

fclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

re:	fclean all