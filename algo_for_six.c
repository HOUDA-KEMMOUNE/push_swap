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
	int		start;
	int		end;
	t_stack	*ptr_a;
	t_stack	*ptr_b;

	if (!(*head_a) || !(*head_b))
		return ;
	start = 0;
	ptr_a = *head_a;
	ptr_b = *head_b;
	ac--;
	if (ac <= 100)
		end = ac / 6;
	else if (ac <= 500)
		end = ac / 14;
	while (ptr_a != NULL && end < ac)
	{
		if (ptr_a->data <= start)
		{
			pb(head_a, head_b);
			rb(head_b);
			write(1, "pb\nrb\n", 6);
		}
		else if (ptr_a->data <= end)
		{
			pb(head_a, head_b);
			write(1, "pb\n", 3);
			if ((*head_b)->next->data > (*head_b)->data)
			{
				sb(head_b);
				write(1, "sb\n", 3);
			}
		}
		else
		{
			ra(head_a);
		}
	}
}