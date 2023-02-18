NAME = libftprintf.a

SRC = 	ft_hexa.c ft_putchar.c ft_putnbr.c \
		ft_putstr.c ft_putptr.c \
		ft_printf.c ft_unsigned.c \

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

OBJ = $(SRC:.c=.o)

all : $(NAME) 

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
