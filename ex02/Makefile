SRCS        =	main.cpp
 
OBJ		=	$(SRCS:.cpp=.o)
CC		=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

all:	brain 
	
brain: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)
	
%.o:%.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f brain

re:	fclean all

.PHONY:	all clean fclean re

