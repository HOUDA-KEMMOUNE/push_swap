/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 01:25:16 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/27 01:25:18 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	*bubble_sort(int *arr, int ac)
{
	int	i;
	int	j;
	int	swapped;
	//int	*sorted_arr;

	i = 0;
	j = 0;
	ac--;
	if (!arr && ac <= 1)
		return (NULL);
	//sorted_arr = malloc(ac * sizeof(int));
	while (i < ac - 1)
	{
		swapped = 0;
		//j = 0;
		while (j < ac - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				ft_swap(&arr[j], &arr[j + 1]);
				swapped = 1;
			}
			j++;
		}
		if (swapped == 0)
			break;
		i++;
	}
	return (arr);
}