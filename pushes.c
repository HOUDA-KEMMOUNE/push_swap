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

void    pb(t_stack **head_a, t_stack **head_b)
{
	t_stack	*ptr_a;
	t_stack	*new_b;

	if (!(*head_a))
		return ;
	ptr_a = *head_a;
	new_b = ft_lstnew((*head_a)->data);
	ft_lstadd_front(head_b, new_b);
	*head_a = ptr_a->next;
	free(ptr_a);
}

void    pa(t_stack **head_a, t_stack **head_b)
{
	t_stack	*ptr_a;
	t_stack	*new_b;

	if (!(*head_b))
		return ;
	ptr_a = *head_a;
	new_b = ft_lstnew((*head_a)->data);
	ft_lstadd_front(head_b, new_b);
	*head_a = ptr_a->next;
	free(ptr_a);
}
