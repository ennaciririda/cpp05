FLAGS 			= -Wall -Wextra -Werror -std=c++98
NAME 			= ex00
CC				= c++
RM				= rm -fr
FILES			= main.cpp Bureaucrat.cpp
OBJECT_FILES	= $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECT_FILES)
	$(CC) $(FLAGS)  $(OBJECT_FILES) -o $(NAME)

%.o:%.cpp Bureaucrat.hpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	@$(RM) $(OBJECT_FILES)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re