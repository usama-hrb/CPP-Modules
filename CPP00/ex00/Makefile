
CC		= c++

CPPFLAGS	=  -Wall -Wextra -Werror -std=c++98

NAME 	= megaphone

SRCS	= megaphone.cpp

OBJ_DIR = ../.obj/

OBJS	= $(SRCS:%.cpp=$(OBJ_DIR)%.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o : %.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ_DIR)/$(OBJS)
	@if [ -d "$(OBJ_DIR)" ] && [ -z "$$(ls -A "$(OBJ_DIR)")" ]; then\
		echo "Removing empty directory: $(OBJ_DIR)"; \
		rm -rf "$(OBJ_DIR)"; \
	fi

fclean	: clean
	rm -f $(NAME)

re		: fclean all

.PHONY	: clean
