NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	   srcs/ft_swap.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I includes/
	ar rc $(NAME) *.o
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
