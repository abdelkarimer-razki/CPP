NAME = Bureaucrat

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

GREEN=\033[0;32m

NC=\033[0m

FILES = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

HEADERS = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) -c $<
	@clear

all : $(NAME)
	@echo "$(GREEN)✔$(NC) Compiled."

$(NAME) : $(OBJS) $(HEADERS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@clear

clean : 
	@rm -f $(NAME)
	@clear

fclean : clean
	@rm -f $(OBJS)
	@clear
	@echo "$(GREEN)✔$(NC) Cleaned."

run :
	@make re && ./$(NAME)

re : fclean all