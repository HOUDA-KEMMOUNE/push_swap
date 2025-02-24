/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:32:11 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/02 00:32:17 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_a(int arr_size, int* arr, t_stack *head_a)
{
	int		i;

	i = 1;
	while (i < arr_size)
	{
		add_node(head_a, arr[i]);
		i++;
	}
	// free(arr);
}
