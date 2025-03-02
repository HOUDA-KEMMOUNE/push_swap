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

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_split.c main.c stacks.c swaps.c utils3.c main_help_fun.c pushes.c stack_helper.c \
	utils2.c utils4.c node_help_fun.c rerotates.c algos.c check_algo.c node_help_fun_2.c \
	algo_for_three_cases.c algo_for_six.c parsing.c rotates.c algo_for_six_helper.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	@cc -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
