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

CFLAGS = -Wall -Wextra -Werror

SRC = main.c ft_split.c utils2.c utils3.c main_help_fun.c bubble_sort.c

OBJ = $(SRC:.c=.o)

all: $(NAME) $(EXE)

%.o: %.c
	@cc -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)

$(EXE): $(SRC)
	$(CC) *.c -g3 $(CFLAGS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME) $(EXE)

re: fclean all
