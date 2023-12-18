NAME = libftprintf.a
CC = gcc
HEADER = ft_printf.h
CFLAGS = -Wall -Werror -Wextra -I$(HEADER)


SRCS = ft_printf.c \
	   ft_print_digit.c \
	   ft_print_str.c \
	   ft_print_char.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c $(HEADER) Makefile
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
