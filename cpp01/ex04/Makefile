NAME = replacer

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = g++

FILES = main.cpp replacer.cpp

HEADERS = replacer.hpp

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) $(HEADERS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	clear

clean : 
	@rm -f $(NAME)
	clear

fclean : clean
	@rm -f $(OBJS)
	clear

re : fclean all
