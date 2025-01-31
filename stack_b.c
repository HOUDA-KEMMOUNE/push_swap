/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 02:48:05 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/31 02:48:08 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stack_b(t_stack *head_a)
{
	t_stack	*head_b;
	
	// head_b = malloc(sizeof(t_stack));
	// head_b->data = 0;
	// head_b->next = NULL;
	head_b = NULL;
	pb(&head_a, &head_b);
	printf("//stack B\n");
	ft_print_node(head_b);
	return (head_b);
}
