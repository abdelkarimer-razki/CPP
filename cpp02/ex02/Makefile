NAME = Fixed

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

FILES = main.cpp Fixed.cpp

HEADERS = Fixed.hpp

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(NAME)

fclean : clean
	rm -f $(OBJS)

re : fclean all