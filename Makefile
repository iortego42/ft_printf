NAME= libftprintf.a

CC= gcc

CFLAGS= -Wall -Wextra -Werror

SRCS= ft_printf.c \
	 ft_printf_utils.c \

LIBFT-DIR= libft/
LIBFT-LIB= libft.a
LIBFT= $(addprefix $(LIBFT-DIR), $(LIBFT-LIB))
OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT): | $(LIBFT-DIR)
	make -C $(LIBFT-DIR)
	cp $(LIBFT) $(NAME)
$(NAME): $(OBJECTS) $(LIBFT)
	ar -rc $(NAME) $(OBJECTS)

clean:
	make -C $(LIBFT-DIR) clean
	rm -f $(OBJECTS)

fclean: clean
	make -C $(LIBFT-DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all bonus
	

