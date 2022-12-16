NAME= 		libftprintf.a

HEADER=		ft_printf.h

RM= 		rm -f

FLAGS= 		-Wall -Werror -Wextra

SRCS= 		ft_printf.c ft_putchar_print.c ft_putstr_print.c \
			ft_putnbr_print.c ft_putunbr_print.c ft_strlen.c \
			ft_hex_print_low.c ft_hex_print_caps.c ft_isfprint.c \
			ft_ptr_print.c

OBJECT= 	$(SRCS:.c=.o)


all:		$(NAME)

$(NAME): 	$(OBJECT)
			ar rcs $@ $^

%.o:		%.c $(HEADER)
			$(CC) -c $(FLAGS) -o $@ $<

clean:
			$(RM) $(OBJECT)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re
