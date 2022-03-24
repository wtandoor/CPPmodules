.PHONY:
	all re fclean

TARGET	=	array
RM		=	rm -rf
CPPFLAGS	=  -Wall -Wextra -Werror -c -std=c++98
CC		=	c++
HEADER = Array.hpp
SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)

$(TARGET):	$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

all: $(TARGET)

fclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

re:	fclean all