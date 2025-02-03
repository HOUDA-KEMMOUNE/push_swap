/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:09:54 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/02 13:09:57 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    algo_for_two(t_stack **head_a)
{
	t_stack *ptr_a;

	if (!(*head_a))
		return ;
	ptr_a = *head_a;
	if (ptr_a-> data > ptr_a->next->data)
	{
		sa(head_a);
		write(1, "sa\n", 3);
	}
	else
		return ;
}

void    algo_for_three(t_stack **head_a)
{
	t_stack	*ptr_a;
	int	max;
	int	min;

	if (!(*head_a))
		return ;
	ptr_a = *head_a;
	max = check_big_num(*head_a);
	min = check_small_num(*head_a);
	if ((ptr_a->next->data == min) && (ptr_a->next->next->data == max))
	{
		sa(head_a);
		write(1, "sa\n", 3);
	}
	else if ((ptr_a->data == max) && (ptr_a->next->next->data == min))
	{
		sa(head_a);
		rra(head_a);
		write(1, "sa\nrra\n", 7);
	}
	else if ((ptr_a->data == max) && (ptr_a->next->data == min))
	{
		ra(head_a);
		write(1, "ra\n", 3);
	}
	else if ((ptr_a->data == min) && (ptr_a->next->data == max))
	{
		sa(head_a);
		ra(head_a);
		write(1, "sa\nra\n", 6);
	}
	else
	{
		rra(head_a);
		write(1, "rra\n", 4);
	}
}