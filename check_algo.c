/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:25:47 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/02 13:25:48 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_sorted(t_stack **head_a)
{
	t_stack	*ptr_a;

	ptr_a = *head_a;
	while (ptr_a != NULL && ptr_a->next != NULL)
	{
		if (ptr_a->data > ptr_a->next->data)
			break ;
		ptr_a = ptr_a->next;
	}
	if (ptr_a == NULL || ptr_a->next == NULL)
		exit(0);
}

void	check_algo(t_stack **head_a, t_stack **head_b, int *arr, int arr_size)
{
	int	size;

	if (!head_a)
		return ;
	// ac--;
	size = ft_lstsize(*head_a);
	if (size == 2)
		algo_for_two(head_a);
	else if (size == 3)
		algo_for_three(head_a);
	else if (size == 4 || size == 5)
		algo_for_four_five(head_a, head_b);
	else if (size >= 6)
		algo_for_six(head_a, head_b, arr, arr_size);
	else
		return ;
}
