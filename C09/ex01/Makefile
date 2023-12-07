CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes

SRCS = $(addprefix $(SRC_DIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)

OFILES = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)
	ranlib $(NAME)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/ft.h
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
