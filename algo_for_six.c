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

int	*sort_array(int *array, int ac, char **s)
{
	int	size;
	int	j;
	int	*r;
	int	count;

	size = ac - 1;
	j = 0;
	count = 0;
	while (s[count])
		count++;
	array = malloc(count * sizeof(int));
	if (!array)
		return (0);
	while (s[j])
	{
		array[j] = ft_atoi(s[j], s, NULL);
		j++;
	}
	r = bubble_sort(array, size);
	return (r);
}

int	*bubble_sort(int arr[], int arr_size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
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

static void	phase_one(t_stack **head_a, t_stack **head_b,
int *bub_sort, int arr_size)
{
	int		start;
	int		end;

	start = 0;
	is_sorted(head_a);
	end = ft_end(arr_size);
	while ((*head_a) != NULL && end < arr_size)
	{
		if ((*head_a)->data <= bub_sort[start])
		{
			pb(head_a, head_b);
			rb(head_b);
			incr_segment(&start, &end, arr_size);
		}
		else if ((*head_a)->data <= bub_sort[end])
		{
			pb(head_a, head_b);
			if ((*head_b)->next != NULL
				&& (*head_b)->next->data > (*head_b)->data)
				sb(head_b);
			incr_segment(&start, &end, arr_size);
		}
		else
			ra(head_a);
	}
}

static void	phase_two(t_stack **head_a, t_stack **head_b)
{
	t_stack	*biggest;

	while (*head_b)
	{
		biggest = big_node(*head_b);
		while (biggest->data != (*head_b)->data)
		{
			if (biggest->index <= ft_lstsize(*head_b) / 2)
				rb(head_b);
			else
				rrb(head_b);
		}
		pa(head_a, head_b);
	}
}

void	algo_for_six(t_stack **head_a, t_stack **head_b, int *arr, int arr_size)
{
	int		*bub_sort;

	if (!(*head_a))
		return ;
	bub_sort = bubble_sort(arr, arr_size);
	phase_one(head_a, head_b, bub_sort, arr_size);
	phase_two(head_a, head_b);
}
