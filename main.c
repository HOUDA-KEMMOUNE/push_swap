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
// static int	ft_is_nbr(char c)
// {
// 	if ((c == '-') || (c == '+') || (c >= '0' && c <= '9'))
// 		return (0);
// 	return (1);
// }

// static int	check_space(char *s)
// {
// 	int	i;
// 	// int	j;
// 	// int	is_nbr;

// 	i = 0;
// 	// j = i++;
// 	// is_nbr = ft_is_nbr(s[j]);
// 	while (s[i])
// 	{
// 		if (s[i] == ' ' && ft_is_nbr(s[i++]) == 0)
// 			return (0);
// 		i++;
// 	}
// 	exit(1);
// }

// int	*check_av_one(char **av, int ac)
// {
// 	int		i;
// 	int		space;
// 	int		*new_arr;
// 	// char	*join;
// 	// char	*tmp;
// 	char	**new_av;

// 	i = 0;
// 	space = check_space(av[1]);
// 	// is_nbr = check_if_nbr(av, ac);
// 	if (space == 0)
// 	{
// 		new_av = ft_split(av[1], ' ');
// 		new_arr = atoi_av(2, new_av);
// 	}
	
// }

void	check_errors(int ac, char *av[])
{
	check_if_nbr(av, ac);
	check_if_dup(av, ac);
	empty_arg(ac, av);
}

static int	count_words_in_string(const char *str)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != ' ' && !in_word)
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

// Main function to count words in **av
int	count_words_in_av(int ac, char **av)
{
	int	total_words;
	int	i;

	total_words = 0;
	i = 1; // Start from 1 to skip the program name (av[0])
	while (i < ac)
	{
		total_words += count_words_in_string(av[i]);
		i++;
	}
	return (total_words);
}
int	main(int ac, char *av[])
{
	t_stack	*head_a;
	t_stack	*head_b;
	int		*arr;
	int		*arr_bub_sort;
	int		arr_size;
	

	arr = atoi_av(ac, av);
	if (arr == NULL)
		return (1);
	arr_size = 0;
	for(int i=0;i<3;i++){
		printf("%d",arr[i]);
	}
	// while (arr[arr_size])
	// 	arr_size++;
	// check_errors(ac, av);
	arr_size = count_words_in_av(ac,av);
	head_a = ft_lstnew(arr[0]);
	head_b = NULL;
	// check_errors(ac, av);
	ft_stack_a(arr_size, arr, head_a);
	arr_bub_sort = bubble_sort(arr, arr_size);
	ft_print_node(head_a);
	check_algo(&head_a, &head_b, arr_bub_sort, arr_size);
	ft_print_node(head_a);
	free(arr);
	ft_lstclear(&head_a);
	ft_lstclear(&head_b);
}
