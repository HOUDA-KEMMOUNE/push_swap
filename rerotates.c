/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rerotates.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:33:52 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/02 09:33:54 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **head_a)
{
	t_stack	*ptr_a;
	t_stack	*prev;
	t_stack	*last;

	if (!(*head_a) && (*head_a)->next == NULL)
		return ;
	ptr_a = *head_a;
	prev = NULL;
	while (ptr_a->next != NULL)
	{
		prev = ptr_a;
		ptr_a = ptr_a->next;
	}
	last = ptr_a;
	prev->next = NULL;
	last->next = *head_a;
	*head_a = last;
}

void	rrb(t_stack **head_b)
{
	t_stack	*ptr_b;
	t_stack	*prev;
	t_stack	*last;

	if (!(*head_b) && (*head_b)->next == NULL)
		return ;
	ptr_b = *head_b;
	prev = NULL;
	while (ptr_b->next != NULL)
	{
		prev = ptr_b;
		ptr_b = ptr_b->next;
	}
	last = ptr_b;
	prev->next = NULL;
	last->next = *head_b;
	*head_b = last;
}

void	rrr(t_stack **head_a, t_stack **head_b)
{
	if ((!(*head_a) || !(*head_b))
		&& (((*head_a)->next == NULL)
			|| ((*head_b)->next == NULL)))
		return ;
	rra(head_a);
	rrb(head_b);
}
