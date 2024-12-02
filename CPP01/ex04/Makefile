CC		= c++

CPPFLAGS	= -std=c++98 -Wall -Wextra -Werror 

NAME 	= file

SRCS	= main.cpp replace.cpp

OBJS	= $(SRCS:%.cpp=%.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp segIsForLosers.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJS)
fclean	: clean
	rm -f $(NAME)

re		: fclean all

.PHONY	: clean
