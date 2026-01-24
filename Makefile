NAME	= libftprintf.a
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -Iinclude


DEPS	= ft_printf.h

SRC = src/ft_printf.c \
      src/ft_print_char.c \
      src/ft_print_string.c \
      src/ft_print_pointeur.c \
      src/ft_print_deci_integ.c \
      src/ft_print_unsigned.c \
      src/ft_print_hexa.c \
      src/ft_print_hexa_upper.c

OBJS = $(SRC:.c=.o)

TEST_SRC = main.c
TEST_OBJ = main.o
TEST_NAME = test_prog

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) -L. -lftprintf -o $(TEST_NAME)
	./$(TEST_NAME)

clean:
	rm -f $(OBJS) $(TEST_OBJ)



fclean: clean
	rm -f $(NAME) $(TEST_NAME)



re: fclean all
