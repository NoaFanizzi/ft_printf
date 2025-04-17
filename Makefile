NAME = libftprintf.a

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
SRCS_DIR = srcs/

INC_FILE = includes/ft_printf.h libft/includes/libft.h

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes -Ilibft/includes

SRCS = $(addprefix $(SRCS_DIR), ft_printf.c \
      							ft_parse.c \
								ft_display_char.c \
								ft_display_hexa.c \
								ft_display_number.c \
								ft_display_ptr.c \
								ft_display_str.c \
								ft_is_lower.c \
								ft_is_upper.c \
								ft_itoa_base.c \
								ft_litoa_base.c \
								ft_tolower_str.c \
								ft_toupper_str.c)

OBJS = $(SRCS:.c=.o)

all: lib $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

lib:
	make --no-print-directory -C $(LIBFT_DIR)

%.o: %.c $(INC_FILE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean
re: fclean all

.PHONY: all clean fclean re lib
