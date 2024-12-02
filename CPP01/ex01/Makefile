
CC		= c++

CPPFLAGS	= -std=c++98 -Wall -Wextra -Werror 

NAME 	= zombieHorde

SRCS	= Zombie.cpp main.cpp zombieHorde.cpp

OBJS	= $(SRCS:%.cpp=%.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Zombie.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJS)

fclean	: clean
	rm -f $(NAME)

re		: fclean all

.PHONY	: clean
