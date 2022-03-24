.PHONY:
	all re fclean

TARGET	=	replace
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror -c -std=c++98
CC		=	c++

HEADERS	=	Replace.h printError.h
SRC		=	main.cpp Replace.cpp printError.cpp
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