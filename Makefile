NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SRCS = push_swap.c error_exit.c checkarg.c put_into.c pushandswap.c upsanddowns.c rotate.c revrotate.c radix.c getindex.c sort_small.c
OBJS = $(SRCS:.c=.o)
LIB = ./lib/libft/libft.a ./lib/ft_printf/libftprintf.a
CC = gcc
RM = rm -rf

all: $(NAME)

$(NAME): $(LIB) $(OBJS)
		$(CC) $(OBJS) $(LIB) -o $(NAME)

$(LIB):
		@make -C ./lib/libft
		@make -C ./lib/ft_printf

fclean: clean
		$(RM) ./push_swap.a
		@make fclean -C ./lib/libft
		@make fclean -C ./lib/ft_printf
		$(RM) $(NAME)

clean:
		$(RM) $(OBJS)
		@make clean -C ./lib/libft
		@make clean -C ./lib/ft_printf

re: fclean all
	@clear

.PHONY: all clean fclean re