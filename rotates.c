/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 01:45:52 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/02 01:45:54 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack **head_a)
{
	t_stack *ptr_a;
	t_stack *new_a;

	if (!(*head_a) && (*head_a)->next == NULL)
		return ;
	ptr_a = *head_a;
	new_a = ft_lstnew(ptr_a->data);
	ft_lstadd_back(head_a, new_a);
	*head_a = ptr_a->next;
	free(ptr_a);
}

void    rb(t_stack **head_b)
{
	t_stack *ptr_b;
	t_stack *new_b;

	if (!(*head_b) && (*head_b)->next == NULL)
		return ;
	ptr_b = *head_b;
	new_b = ft_lstnew(ptr_b->data);
	ft_lstadd_back(head_b, new_b);
	*head_b = ptr_b->next;
	free(ptr_b);
}

void    rr(t_stack **head_a, t_stack **head_b)
{
	if ((!(*head_a) || !(*head_b)) && (((*head_a)->next == NULL) || ((*head_b)->next == NULL)))
		return ;
	ra(head_a);
	rb(head_b);
}