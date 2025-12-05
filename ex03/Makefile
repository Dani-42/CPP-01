SRCS        =	Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
HEADERS     =	Weapon.hpp HumanA.hpp HumanB.hpp
 
OBJ		=	$(SRCS:.cpp=.o)
CC		=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

all:	weapon
	
weapon: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)
	
%.o:%.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f weapon

re:	fclean all

.PHONY:	all clean fclean re

