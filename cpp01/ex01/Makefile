NAME = Zombie

CFLAGS = -Wall -Werror -Wextra 

CC = g++

FILES =  main.cpp Zombie.cpp zombieHorde.cpp

HEADERS = Zombie.hpp

OBJS = $(FILES:.c=.o)

%.o : %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	clear

clean : 
	@rm -f $(NAME)
	clear

fclean : clean
	@rm -f $(NAME)
	clear

re : fclean all
