# == Makefile pour phonebook ==

NAME = phonebook
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp contact.cpp phonebook.cpp
OBJ = $(SRC:.cpp=.o)

# == Couleurs pour les messages dans le terminal ==
YELLOW = \033[1;33m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(YELLOW)Oui allo ? A l'huile !!!$(NC)"

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	@echo "$(YELLOW)Object file cleaned.$(NC)"

fclean: clean
	rm -f $(NAME)
	@echo "$(YELLOW)Executable removed.$(NC)"

re: fclean all

.PHONY: all clean fclean re