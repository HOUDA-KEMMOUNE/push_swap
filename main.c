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

static int	ft_sorted(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp && tmp->next && tmp->data < tmp->next->data)
	{
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
		return (0);
	return (1);
}

static void	helper_fct2(t_stack **a, char **sp)
{
	ft_lstclear(a);
	free_split(sp);
	exit(0);
}
static void ft_print_nodes(t_stack *lst)
{
	t_stack *ptr;

	ptr = lst;
	while (ptr != NULL)
	{
		printf("%d --> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

int	main(int ac, char *av[])
{
	t_stack	*head_a;
	t_stack	*head_b;
	char	**sp;
	char	*join;
	int		*arr;
	// int		*new_arr;

	if (ac == 1)
		return (0);
	join = NULL;
	sp = NULL;
	arr = 0;
	join = join_args(ac, av);
	sp = ft_split(join, ' ');
	free(join);
	head_a = NULL;
	head_b = NULL;
	head_a = init_stack(sp);
	if (!ft_sorted(&head_a))
		helper_fct2(&head_a, sp);
	ft_print_nodes(head_a);
	check_algo(&head_a, &head_b, sort_array(arr, count_words_in_av(ac, av), sp));
	ft_print_nodes(head_a);
	// free(arr);
	ft_lstclear(&head_a);
	ft_lstclear(&head_b);
	ft_free(sp);
}
