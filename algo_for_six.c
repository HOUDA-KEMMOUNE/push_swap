/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_for_six.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:26:29 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/04 21:26:31 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_for_six(t_stack **head_a, t_stack **head_b, int *arr, int ac)
{
	printf("rani dkhalt hh\n");
	int		start;
	int		end;
	int		tmp;
	// int		size_b;
	// int		mid;
	int		max;
	t_stack	*ptr_a;
	t_stack	*ptr_b;

	if (!(*head_a))
		return ;
	start = 0;
	ptr_a = *head_a;
	ptr_b = *head_b;
	// size_b = ft_lstsize(*head_b);
	// ac--;
	tmp = ac;
	printf("tmp --> %d\tac --> %d\n", tmp, ac);
	if (ac <= 100)
		end = tmp / 6;
	else if (ac <= 500)
		end = tmp / 14;
	printf("start --> %d\tend --> %d\n", start, end);
	/*--------------------Phase 1-----------------*/
	while (ptr_a != NULL && end < ac && start < ac)
	{
		if (ptr_a->data <= arr[start])
		{
			pb(head_a, head_b);
			rb(head_b);
			write(1, "pb\nrb\n", 6);
			end++;
			start++;
		}
		else if (ptr_a->data <= arr[end])
		{
			pb(head_a, head_b);
			write(1, "pb\n", 3);
			if ((*head_b)->next->data > (*head_b)->data)
			{
				sb(head_b);
				write(1, "sb\n", 3);
			}
			end++;
			start++;
		}
		else
		{
			ra(head_a);
			write(1, "ra\n", 3);
		}
	}
	/*--------------end of Phase 1---------------*/
	/*-----------------Phase 2-----------------*/
	// mid = size_b / 2;
	while (ptr_b != NULL)
	{
		max = check_big_num(*head_a);
		if (ptr_b->data == max)
		{
			pa(head_a, head_b);
			write(1, "pa\n", 3);
		}
		else
		{
			rrb(head_b);
			write(1, "rrb\n", 4);
		}
	}
}
