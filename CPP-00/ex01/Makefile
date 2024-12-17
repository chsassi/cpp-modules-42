NAME = phonebook

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -f

GREEN=\033[0;32m
RED=\033[0;31m
BLUE=\033[0;34m
YELLOW=\033[0;33m
RESET=\033[0m

SRC =	./Contact.cpp \
		./Phonebook.cpp \
		./utils.cpp \
		./main.cpp

$(NAME): $(SRC)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
	@echo "$(GREEN)	EX01 COMPILED!✅$(RESET)"

all: $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean

re: fclean all

# .SILENT:
.PHONY: all bonus clean fclean re