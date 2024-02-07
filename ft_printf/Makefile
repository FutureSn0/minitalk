NAME = libftprintf.a

CC = gcc
AR = ar
CFLAGS = -Wextra -Wall -Werror
RM = rm -f

SRCS = ft_printf.c \
	ft_printf_str.c \
	ft_printf_nbr.c \
	ft_printf_ptr.c \
	ft_printf_hex.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $@ $?

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
