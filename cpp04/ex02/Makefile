NAME = Animal

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

HEADERS = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

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