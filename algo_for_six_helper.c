/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_for_six_helper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 22:11:03 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/24 22:11:06 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_end(int arr_size)
{
	int	end;

	end = 0;
	if (arr_size <= 100)
		end = arr_size / 6;
	else
		end = arr_size / 14;
	return (end);
}

void	init_index(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst->index = i;
		lst = lst->next;
		i++;
	}
}

t_stack	*big_node(t_stack *lst)
{
	t_stack	*max;

	init_index(lst);
	max = lst;
	while (lst)
	{
		if (lst->next && max->data < lst->next->data)
			max = lst->next;
		lst = lst->next;
	}
	return (max);
}

void	incr_segment(int *start, int *end, int size)
{
	if (*end < size - 1)
		(*end)++;
	if (*start < size - 2)
		(*start)++;
}
