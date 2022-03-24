.PHONY:
	all re fclean

TARGET	=	oneZomb
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror -c -std=c++98
CC		=	c++

HEADERS	=	Zombie.h
SRC		=	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
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