NAME = phonebook

CFLAGS = -Wall -Werror -Wextra 

CC = g++

FILES = phonebook.cpp contact.cpp main.cpp

HEADERS = phonebook.hpp contact.hpp

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
