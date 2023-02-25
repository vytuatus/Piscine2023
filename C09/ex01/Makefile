NAME = libft.a

HEADER = includes

COMPILE_TO_OBJECTS = cc -Wextra -Werror -Wall -c

MY_SOURCES =	srcs/ft_putchar.c \
				srcs/ft_putstr.c \
				srcs/ft_strlen.c \
				srcs/ft_strcmp.c \
				srcs/ft_swap.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar -cr $(NAME) $(MY_OBJECTS)
	ranlib $(NAME)

%.o: %.c
	$(COMPILE_TO_OBJECTS) $< -I $(HEADER) -o $(<:.c=.o)

clean:
	rm -f ${MY_OBJECTS}

fclean: clean
	rm -f $(NAME)

re: fclean all