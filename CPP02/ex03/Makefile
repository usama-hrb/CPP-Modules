
CC		= c++

CPPFLAGS	= -std=c++98 -Wall -Wextra -Werror 

NAME 	= Fixed

SRCS	= main.cpp Fixed.cpp Point.cpp bsp.cpp


OBJS	= $(SRCS:%.cpp=%.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Fixed.hpp Point.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJS)

fclean	: clean
	rm -f $(NAME)

re		: fclean all

.PHONY	: clean
