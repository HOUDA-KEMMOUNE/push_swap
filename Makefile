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

SRC = bubble_sort.c ft_split.c main.c stacks.c swaps.c utils3.c ft_print_node.c \
	main_help_fun.c pushes.c stack_helper.c utils2.c utils4.c node_help_fun.c rerotates.c algos.c \
	check_algo.c node_help_fun_2.c algo_for_three_cases.c algo_for_six.c 

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
