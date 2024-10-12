NAME = push_swap

SRCS = exceptions.c helpers.c push_swap.c radix_factor.c \
       rule_push.c rule_revrot.c rule_rot.c rule_swp.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C ./libft
	@$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME)

clean:
	make clean -C libft
	@$(RM) *.o

fclean: clean
	make fclean -C libft
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
