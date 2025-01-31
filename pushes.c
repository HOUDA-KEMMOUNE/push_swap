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

void    pb(t_stack *head_a, t_stack **head_b)
{
	t_stack	*ptr_a;
	t_stack	*new_b;

	if (!head_a)
		return ;
	ptr_a = head_a;

	new_b = ft_lstnew(ptr_a->data);
	ft_lstadd_front(head_b, new_b);
	// ptr_b->data = ptr_a->data;
	// ptr_a = head_a->next;
	head_a = ptr_a->next;
	free(ptr_a);
	ptr_a = NULL;
	// head_a = NULL;
	// head_a = ptr_a;
}
