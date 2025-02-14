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
	{
		sa(head_a);
		write(1, "sa\n", 3);
	}
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
		if ((*head_a)->data == min)
		{
			pb(head_a, head_b);
			write(1, "pb\n", 3);
			size--;
		}
		else
		{
			ra(head_a);
			write(1, "ra\n", 3);
		}
	}
}

void	algo_for_four_five(t_stack **head_a, t_stack **head_b)
{
	t_stack	*ptr_a;

	if (!(*head_a) && !(*head_b))
		return ;
	ptr_a = *head_a;
	while (ptr_a != NULL && ptr_a->next != NULL)
	{
		if (ptr_a->data > ptr_a->next->data)
			break ;
		ptr_a = ptr_a->next;
	}
	if (ptr_a == NULL || ptr_a->next == NULL)
		exit(0);
	size_for_four_five(head_a, head_b);
	algo_for_three(head_a);
	while ((*head_b) != NULL)
	{
		pa(head_a, head_b);
		write(1, "pa\n", 3);
	}
}
