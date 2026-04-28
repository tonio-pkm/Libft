NAME = libft.a

SRCS = ft_strlen.c ft_strchr.c ft_strdup.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rcs $(NAME) $(OBJS)