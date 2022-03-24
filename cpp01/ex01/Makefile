.PHONY:
	all re fclean

TARGET	=	zombie
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror -c -std=c++98
CC		=	c++

HEADERS	=	Zombie.h
SRC		=	ZombieHorde.cpp Zombie.cpp main.cpp
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