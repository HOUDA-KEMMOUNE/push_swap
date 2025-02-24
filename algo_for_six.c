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

static void	incr_segment(int *start, int *end, int size)
{
	if (*end < size - 1)
		(*end)++;
	if (*start < size - 2)
		(*start)++;
}
static int	ft_end(int arr_size)
{
	int	end;

	end = 0;
	if (arr_size <= 100)
		end = arr_size / 6;
	else
		end = arr_size / 35;
	return (end);
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

static void	init_index(t_stack *lst)
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
static t_stack	*big_node(t_stack *lst)
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


static void	phase_two(t_stack **a, t_stack **b)
{
	t_stack	*biggest;

	while (*b)
	{
		biggest = big_node(*b);
		while (biggest->data != (*b)->data)
		{
			if (biggest->index <= ft_lstsize(*b) / 2)
			{
				rb(b);
				write(1, "rb\n", 3);
			}
			else
			{
				rrb(b);
				write(1, "rrb\n", 4);
			}
		}
		pa(a, b);
		write(1, "pa\n", 3);
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
