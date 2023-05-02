NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re