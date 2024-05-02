# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sramos <sramos@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2024/03/04 14:12:48 by sramos        #+#    #+#                  #
#    Updated: 2024/05/02 17:53:43 by sramos        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = main.c\
arg_checker.c\
arg_parser.c\
ft_create_ll.c\
free.c\
sorting_utils.c\
ft_swap.c\
ft_push.c\
ft_reverse.c\
ft_revrev.c\
check_sorted.c\
sorting.c\
sorting_algorithm.c\
set_index.c\
split_qs_a.c\
split_qs_a_utils.c\
split_qs_b.c\
split_qs_b_utils.c\
check_dif_groups.c\

OBJ = $(SRC:%.c=%.o)
CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -Ilibft -g3
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(SRC) -Llibft -lft -o $(NAME)

$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	$(RM) $(OBJ)
	make -C $(LIBFT_PATH) clean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY = all, clean, fclean, re