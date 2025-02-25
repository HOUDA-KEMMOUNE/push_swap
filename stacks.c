/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:32:11 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/02 00:32:17 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_stack_a(int arr_size, int* arr, t_stack *head_a)
// {
// 	int		i;

// 	i = 1;
// 	while (i < arr_size)
// 	{
// 		add_node(head_a, arr[i]);
// 		i++;
// 	}
// 	// free(arr);
// }

t_stack	*init_stack(char **av)
{
	int		data;
	t_stack	*new;
	t_stack	*stack;
	int		j;

	j = 0;
	stack = NULL;
	while (av[j])
	{
		data = ft_atoi(av[j], av, &stack);
		new = ft_lstnew(data);
		if (!new)
			exit(1);
		ft_lstadd_back(&stack, new);
		j++;
	}
	if (check_dup(stack) == 0)
	{
		ft_lstclear(&stack);
		ft_free(av);
		print_error();
	}
	return (stack);
}
