FLAGS 			= -Wall -Wextra -Werror -std=c++98
NAME 			= ex01
CC				= c++
RM				= rm -fr
FILES			= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJECT_FILES	= $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECT_FILES)
	@$(CC) $(FLAGS)  $(OBJECT_FILES) -o $(NAME)
	@printf "\n\033[1;36m ───────────── Done ──────────── \033[0m\n\n"

%.o:%.c Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
	@$(CC) $(FLAGS) -c $< -o $@
clean:
	@$(RM) $(OBJECT_FILES)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re