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

void	check_errors(int ac, char *av[])
{
	int		*arr;
	int		*sorted_arr;

	check_if_dup(av, ac);
	arr = atoi_av(ac, av);
	sorted_arr = bubble_sort(arr, ac - 1);
	if (sorted_arr == NULL)
		exit(1);
	free(arr);
}

int	main(int ac, char *av[])
{
	t_stack	*head_a;
	t_stack	*head_b;
	int		*arr;

	check_errors(ac, av);
	arr = atoi_av(ac, av);
	head_a = ft_lstnew(arr[0]);	
	ft_stack_a(ac, av, head_a);
	head_b = NULL;
	ft_stack_b(&head_a, &head_b);
	printf("----------------------------------\n");
	printf("stack A\n");
	ft_print_node(head_a);
	printf("stack B\n");
	ft_print_node(head_b);
	pa(&head_a, &head_b);
	printf("After pb\n");
	printf("stack A\n");
	ft_print_node(head_a);
	printf("stack B\n");
	ft_print_node(head_b);
	free(arr);
	ft_lstclear(&head_a);
	ft_lstclear(&head_b);
	printf("----------------------------------\n");
}
