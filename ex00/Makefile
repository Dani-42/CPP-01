SRCS        =	Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
HEADERS     =	Zombie.hpp
 
OBJ		=	$(SRCS:.cpp=.o)
CC		=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

all:	zombie
	
zombie: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)
	
%.o:%.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f zombie

re:	fclean all

.PHONY:	all clean fclean re

