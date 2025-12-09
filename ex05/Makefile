SRCS        =	Harl.cpp main.cpp
HEADERS     =	Harl.hpp
 
OBJ		=	$(SRCS:.cpp=.o)
CC		=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

all:	harl
	
harl: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)
	
%.o:%.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f harl

re:	fclean all

.PHONY:	all clean fclean re

