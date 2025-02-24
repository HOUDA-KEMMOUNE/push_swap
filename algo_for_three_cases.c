/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_for_three_cases.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 04:59:48 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/03 04:59:50 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_one(t_stack **head_a)
{
	sa(head_a);
}

void	case_two(t_stack **head_a)
{
	sa(head_a);
	rra(head_a);
}

void	case_three(t_stack **head_a)
{
	ra(head_a);
}

void	case_four(t_stack **head_a)
{
	sa(head_a);
	ra(head_a);
}

void	case_five(t_stack **head_a)
{
	rra(head_a);
}
