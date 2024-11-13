NAME = phonebook

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -f

SRC =	./.cpp

$(NAME): $(SRC)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean

re: fclean all

# .SILENT:
.PHONY: all bonus clean fclean re