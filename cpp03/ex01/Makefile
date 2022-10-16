NAME = ClapTrap

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp ClapTrap.cpp ScavTrap.cpp

HEADERS = ClapTrap.hpp ScavTrap.hpp

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) -c $<
	clear

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