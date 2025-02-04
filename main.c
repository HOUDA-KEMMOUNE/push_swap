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
	printf("------->  Error\n");
	exit (1);
}

void	check_errors(int ac, char *av[])
{
	int		*arr;
	// int		*sorted_arr;

	check_if_dup(av, ac);
	arr = atoi_av(ac, av);
	bubble_sort(arr, ac - 1);
	empty_arg(ac, av);
	// if (sorted_arr == NULL)
	// 	exit(1);
	free(arr);
}

int	main(int ac, char *av[])
{
	t_stack	*head_a;
	t_stack	*head_b;
	int		*arr;

	arr = atoi_av(ac, av);
	head_a = ft_lstnew(arr[0]);
	head_b = NULL;

	check_errors(ac, av);

	ft_stack_a(ac, av, head_a);
	check_algo(&head_a, &head_b);
	ft_print_node(head_a);
	ft_print_node(head_b);

	free(arr);
	ft_lstclear(&head_a);
	ft_lstclear(&head_b);
}
