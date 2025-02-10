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

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	*bubble_sort(int *arr, int arr_size)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	if (!arr)
// 		exit(1);
// 	while (i < arr_size - 1)
// 	{
// 		while (j < arr_size - i - 1)
// 		{
// 			if (arr[j] > arr[j + 1])
// 				ft_swap(&arr[j], &arr[j + 1]);
// 			j++;
// 		}
// 		j = 0;
// 		i++;
// 	}
// 	return (arr);
// }
