ALL = client server
LIBFT = libft/libft.a
FT_PRINTF = ft_printf/libftprintf.a

CC = cc
CFLAGS = -Wextra -Wall -Werror
RM = rm -f

all: $(ALL)

client: client.c $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) -o client client.c -Llibft -lft -Lft_printf -lftprintf

server: server.c $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) -o server server.c -Llibft -lft -Lft_printf -lftprintf

$(LIBFT):
	make -C libft

$(FT_PRINTF):
	make -C ft_printf

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(ALL)

re: fclean all

.PHONY: all clean fclean re
