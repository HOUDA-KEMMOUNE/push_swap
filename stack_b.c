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

void	ft_stack_b(t_stack **head_a, t_stack **head_b)
{	
	printf("//stack B\n");
	pb(head_a, head_b);
	ft_print_node(*head_b);
	printf("//stack A\n");
	ft_print_node(*head_a);
}
