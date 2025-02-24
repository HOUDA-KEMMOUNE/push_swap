/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 03:07:01 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/31 03:07:04 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **head_a, t_stack **head_b)
{
	t_stack	*ptr_a;
	t_stack	*new_b;

	if (!(*head_a))
		return ;
	ptr_a = *head_a;
	new_b = ft_lstnew(ptr_a->data);
	ft_lstadd_front(head_b, new_b);
	*head_a = ptr_a->next;
	write(1, "pb\n", 3);
	free(ptr_a);
}

void	pa(t_stack **head_a, t_stack **head_b)
{
	t_stack	*ptr_b;
	t_stack	*new_a;

	if (!(*head_b))
		return ;
	ptr_b = *head_b;
	new_a = ft_lstnew(ptr_b->data);
	ft_lstadd_front(head_a, new_a);
	*head_b = ptr_b->next;
	write(1, "pa\n", 3);
	free(ptr_b);
}
