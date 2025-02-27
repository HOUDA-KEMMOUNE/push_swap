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

void	algo_for_two(t_stack **head_a)
{
	t_stack	*ptr_a;

	if (!(*head_a))
		return ;
	ptr_a = *head_a;
	if (ptr_a-> data > ptr_a->next->data)
		sa(head_a);
	else
		return ;
}

void	algo_for_three(t_stack **head_a)
{
	t_stack	*ptr_a;
	int		max;
	int		min;

	if (!(*head_a))
		return ;
	ptr_a = *head_a;
	max = check_big_num(*head_a);
	min = check_small_num(*head_a);
	if ((ptr_a->next->data == min) && (ptr_a->next->next->data == max))
		case_one(head_a);
	else if ((ptr_a->data == max) && (ptr_a->next->next->data == min))
		case_two(head_a);
	else if ((ptr_a->data == max) && (ptr_a->next->data == min))
		case_three(head_a);
	else if ((ptr_a->data == min) && (ptr_a->next->data == max))
		case_four(head_a);
	else if ((ptr_a->next->data == max) && (ptr_a->next->next->data == min))
		case_five(head_a);
	else
		return ;
}

static void	size_for_four_five(t_stack **head_a, t_stack **head_b)
{
	int		min;
	int		size;

	size = ft_lstsize(*head_a);
	while ((size > 3))
	{
		min = check_small_num(*head_a);
		if (((size == 4) && ((*head_a)->next->next->next->data == min))
			|| ((size == 5)
				&& ((*head_a)->next->next->next->next->data == min)))
			rra(head_a);
		if ((*head_a)->next->data == min)
			sa(head_a);
		if ((*head_a)->data == min)
		{
			pb(head_a, head_b);
			size--;
		}
		else
			ra(head_a);
	}
}

void	algo_for_four_five(t_stack **head_a, t_stack **head_b)
{
	if (!(*head_a) && !(*head_b))
		return ;
	is_sorted(head_a);
	size_for_four_five(head_a, head_b);
	algo_for_three(head_a);
	while ((*head_b) != NULL)
		pa(head_a, head_b);
}
