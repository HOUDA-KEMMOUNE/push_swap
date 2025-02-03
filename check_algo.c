/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:25:47 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/02 13:25:48 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_algo(t_stack **head_a, t_stack **head_b)
{
	int	size;

	if (!head_a)
		return ;
	size = ft_lstsize(*head_a);
	if (size == 2)
		algo_for_two(head_a);
	else if (size == 3)
		algo_for_three(head_a);
	else if (size == 4 || size == 5)
		algo_for_four_five(head_a, head_b);
	else
		return ;
}
