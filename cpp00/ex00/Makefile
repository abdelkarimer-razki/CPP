NAME = megaphone

CFLAGS = -Wall -Werror -Wextra 

CC = g++

FILES = megaphone.cpp

OBJS = $(FILES:.c=.o)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	clear

clean : 
	@rm -f $(NAME)
	clear

fclean : clean
	@rm -f $(NAME)
	clear

re : fclean all

.PHONY : re fclean clean all