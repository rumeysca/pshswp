NAME = so_long
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -L./mlx -lmlx -framework AppKit -framework OpenGL -g 
SRCS = map_checker.c so_long.c extra.c ft_printf/ft_printf.c ft_printf/ft_sidekicks.c \
		libft/ft_split.c libft/ft_substr.c libft/ft_strdup.c libft/ft_strlcpy.c libft/ft_strlen.c

OBJS= $(SRCS:.c=.o)
MINI = ./mlx/libmlx.a

all: ${NAME}

$(MINI):
	make -C ./mlx &> /dev/null

$(NAME): $(MINI) $(OBJS) 
	$(CC) ${CFLAGS} $(OBJS) -o $(NAME) 

%.o: %.c
	${CC} -c $^ -o $@ -Wall -Werror -Wextra 

clean:
	rm -rf ${OBJS}
	make clean -C mlx/

fclean: clean
	rm -rf ${NAME}
	make clean -C mlx/

re: fclean all

.PHONY: fclean re all clean