.PHONY:
	all re fclean

TARGET	=	fixed
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror -c -std=c++98
CC		=	c++

HEADERS	=	Fixed.h
SRC		=	main.cpp Fixed.cpp
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