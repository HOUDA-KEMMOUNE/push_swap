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

void	check_algo(t_stack **head_a, t_stack **head_b, int *arr, int ac)
{
	// int	size;

	if (!head_a)
		return ;
	ac--;
	// size = ft_lstsize(*head_a);
	if (ac == 2)
		algo_for_two(head_a);
	else if (ac == 3)
		algo_for_three(head_a);
	else if (ac == 4 || ac == 5)
		algo_for_four_five(head_a, head_b);
	else if (ac >= 6)
		algo_for_six(head_a, head_b, arr, ac);
	else
		return ;
}
