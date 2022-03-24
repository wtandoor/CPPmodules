.PHONY:
	all re fclean

TARGET	=	weapon
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror -c -std=c++98
CC		=	c++

HEADERS	=	Weapon.h HumanB.h HumanA.h
SRC		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ		=	$(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) $< -o $@

$(TARGET):	$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

all: $(TARGET)

fclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

re:	fclean all