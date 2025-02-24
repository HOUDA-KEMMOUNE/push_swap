/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 03:51:24 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/25 03:51:27 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	write(1, "Error\n", 6);
	exit (1);
}

void	check_errors(int ac, char *av[])
{
	check_if_nbr(av, ac);
	empty_arg(ac, av);
}

static int	count_words(char *str)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == ' ')
			in_word = 0;
		str++;
	}
	return (count);
}

int	count_words_in_av(int ac, char **av)
{
	int	total_words;
	int	i;

	total_words = 0;
	i = 1;
	while (i < ac)
	{
		total_words += count_words(av[i]);
		i++;
	}
	return (total_words);
}

int	main(int ac, char *av[])
{
	t_stack	*head_a;
	t_stack	*head_b;
	int		*arr;
	int		arr_size;

	if (ac == 1)
		return (0);
	check_errors(ac, av);
	arr = atoi_av(av);
	if (arr == NULL)
		return (1);
	arr_size = 0;
	arr_size = count_words_in_av(ac, av);
	head_a = ft_lstnew(arr[0]);
	head_b = NULL;
	ft_stack_a(arr_size, arr, head_a);
	check_algo(&head_a, &head_b, arr, arr_size);
	free(arr);
	ft_lstclear(&head_a);
	ft_lstclear(&head_b);
}
