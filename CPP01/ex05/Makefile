
CC		= c++

CPPFLAGS	= -std=c++98 -Wall -Wextra -Werror 

NAME 	= harl

SRCS	= main.cpp Harl.cpp


OBJS	= $(SRCS:%.cpp=%.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Harl.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJS)

fclean	: clean
	rm -f $(NAME)

re		: fclean all

.PHONY	: clean
