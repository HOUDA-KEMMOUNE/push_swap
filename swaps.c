/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 02:58:17 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/31 02:58:20 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_stack **head_a)
{
	t_stack *ptr;

	if (!head_a)
		return ;
	ptr = *head_a;
	ft_swap(&(ptr->data), &(ptr->next->data));
}

// void    sb(t_stack **head_b)
// {
// 	t_stack *ptr;

// 	if (!head_b)
// 		return ;
// 	ptr = *head_b;
// 	ft_swap(&(ptr->data), &(ptr->next->data));
// }

// void    ss(t_stack **head_a, t_stack **head_b)
// {
// 	sa(&head_a);
// 	sb(&head_b);
// }
