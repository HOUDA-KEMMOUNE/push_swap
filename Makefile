# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/25 03:54:39 by hkemmoun          #+#    #+#              #
#    Updated: 2025/01/25 03:54:43 by hkemmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

EXE = a.out

# ARCH = libft/libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3

SRC = bubble_sort.c ft_split.c main.c stack_b.c swaps.c utils3.c check_if_dup.c ft_print_node.c \
	main_help_fun.c pushes.c stack_a.c stack_helper.c utils2.c utils4.c node_help_fun.c

OBJ = $(SRC:.c=.o)

all: $(NAME) $(EXE)

%.o: %.c
	@cc -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)

$(EXE): $(SRC)
	$(CC) *.c $(CFLAGS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME) $(EXE)

re: fclean all
