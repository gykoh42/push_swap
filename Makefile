# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 13:59:07 by gykoh             #+#    #+#              #
#    Updated: 2023/11/12 20:45:04 by gykoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = srcs/push_swap.h

SRC = 	srcs/push_swap.c \
		srcs/check_argv.c \
		srcs/error_utils.c \
		srcs/index.c \
		srcs/libft_utils.c \
		srcs/operations_p.c \
		srcs/operations_r.c \
		srcs/operations_rr.c \
		srcs/operations_s.c \
		srcs/parse.c \
		srcs/rotate_cnt_a.c \
		srcs/rotate_cnt_b.c \
		srcs/rotate_type.c \
		srcs/rotate_a.c \
		srcs/rotate_b.c \
		srcs/sort_utils.c \
		srcs/sort.c \
		srcs/stack_utils.c \
		srcs/stack.c \
		
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: %.c ${HAEDER}
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re