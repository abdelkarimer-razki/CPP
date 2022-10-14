NAME = Fixed

CFLAGS = -Wall -Werror -Wextra 

CC = g++

FILES = main.cpp Fixed.cpp

HEADERS = Fixed.hpp

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(NAME)

fclean : clean
	rm -f $(NAME)

re : fclean all
