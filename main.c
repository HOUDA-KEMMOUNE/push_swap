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
	check_if_dup(av, ac);
	empty_arg(ac, av);
}

int	main(int ac, char *av[])
{
	t_stack	*head_a;
	t_stack	*head_b;
	int		*arr;
	int		*arr_bub_sort;

	arr = atoi_av(ac, av);
	head_a = ft_lstnew(arr[0]);
	arr_bub_sort = bubble_sort(arr, ac - 1);
	head_b = NULL;
	check_errors(ac, av);
	ft_stack_a(ac, av, head_a);
	ft_print_node(head_a);
	check_algo(&head_a, &head_b, arr_bub_sort, ac);
	ft_print_node(head_a);
	// ft_print_node(head_b);
	free(arr);
	ft_lstclear(&head_a);
	ft_lstclear(&head_b);
}
