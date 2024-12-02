
CC		= c++

CPPFLAGS	=  -Wall -Wextra -Werror -std=c++98

NAME 	= unnecessaryViolence

SRCS	= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

OBJS	= $(SRCS:%.cpp=%.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJS)

fclean	: clean
	rm -f $(NAME)

re		: fclean all

.PHONY	: clean
