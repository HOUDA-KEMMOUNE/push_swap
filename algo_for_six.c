/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_for_six.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:26:29 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/04 21:26:31 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*bubble_sort(int *arr, int arr_size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!arr)
		exit(1);
	while (i < arr_size - 1)
	{
		while (j < arr_size - i - 1)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1]);
			j++;
		}
		j = 0;
		i++;
	}
	return (arr);
}

void	algo_for_six(t_stack **head_a, t_stack **head_b, int *arr, int arr_size)
{
	int		*bub_sort;
	int		start;
	int		end;
	int		tmp;
	int		size_b;
	int		mid;
	int		max;
	// t_stack	*ptr_a;
	t_stack	*ptr_b;

	if (!(*head_a))
		return ;
	bub_sort = bubble_sort(arr, arr_size);
	start = 0;
	// ptr_a = *head_a;
	ptr_b = *head_b;
	tmp = arr_size;
	if (arr_size <= 100)
		end = tmp / 6;
	else if (arr_size <= 500)
		end = tmp / 14;
	/*--------------------Phase 1-----------------*/
	while ((*head_a) != NULL && end < arr_size && start < arr_size)
	{
		if ((*head_a)->data <= bub_sort[start])
		{
			pb(head_a, head_b);
			rb(head_b);
			write(1, "pb\nrb\n", 6);
			end++;
			start++;
		}
		else if ((*head_a)->data <= bub_sort[end])
		{
			pb(head_a, head_b);
			write(1, "pb\n", 3);
			ptr_b = *head_b;
			if ((*head_b)->next != NULL && (*head_b)->next->data > (*head_b)->data)
			{
				sb(head_b);
				write(1, "sb\n", 3);
			}
			end++;
			start++;
		}
		else
		{
			ra(head_a);
			write(1, "ra\n", 3);
		}
	}
	/*--------------end of Phase 1---------------*/
	/*-----------------Phase 2-----------------*/
	size_b = ft_lstsize(*head_b);
	while (*head_b != NULL)
    {
        max = check_big_num(*head_b);
        ptr_b = *head_b;
        mid = size_b / 2;
        while (ptr_b->data != max)
        {
            if (ptr_b->index <= mid)
            {
                rb(head_b);
                write(1, "rb\n", 3);
            }
            else
            {
                rrb(head_b);
                write(1, "rrb\n", 4);
            }
            ptr_b = *head_b;
        }
        pa(head_a, head_b);
        write(1, "pa\n", 3);
        size_b--;
    }
}
