NAME = libftprintf.a

CC = cc

INCLUDE = ft_printf.h

CFLAGS =  -Wall -Wextra -Werror

SRCS = main.c ft_printf_char.c ft_printf_interger.c  ft_printf_pointer.c  ft_printf_str.c  ft_printf.c

OBJS_SRCS= $(SRCS:%.c=%.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJS_SRCS) $(INCLUDE)
		ar rcs $@ $^
	
all: $(NAME)

clean:
	rm -f $(OBJS_SRCS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re