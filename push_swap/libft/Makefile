SRCS = 	ft_isdigit.c \
			ft_strlen.c \
			ft_strrchr.c \
			ft_strlcpy.c \
			ft_atoi.c \
			ft_strdup.c \
			ft_substr.c \
			ft_split.c \
			ft_lstadd_front.c \
			ft_lstadd_back.c \
			ft_lstlast.c \
			ft_lstnew.c \
			ft_lstsize.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
