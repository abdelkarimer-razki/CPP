NAME = Brain

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES =  main.cpp

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	clear

clean : 
	@rm -f $(NAME)
	clear

fclean : clean
	@rm -f $(OBJS)
	clear

re : fclean all
