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

static void	phase_one(t_stack **head_a, t_stack **head_b,
int *bub_sort, int arr_size)
{
	int		start;
	int		end;

	start = 0;
	is_sorted(head_a);
	if (arr_size <= 100)
		end = arr_size / 6;
	else
		end = arr_size / 35;
	while ((*head_a) != NULL && end < arr_size)
	{
		if ((*head_a)->data <= bub_sort[start])
		{
			pb(head_a, head_b);
			rb(head_b);
			write(1, "pb\nrb\n", 6);
			incr_segment(&start, &end, arr_size);
		}
		else if ((*head_a)->data <= bub_sort[end])
		{
			pb(head_a, head_b);
			write(1, "pb\n", 3);
			if ((*head_b)->next != NULL
				&& (*head_b)->next->data > (*head_b)->data)
			{
				sb(head_b);
				write(1, "sb\n", 3);
			}
			incr_segment(&start, &end, arr_size);
		}
		else
			ra(head_a);
	}
}

// static int max_index(t_stack *b, int max)
// {
// 	t_stack *tmp;
// 	int	i;
// 	tmp = b;
// // printf("%d\n", tmp->data);
// 	i = 0;
// 	while (tmp)
// 	{
// 		if (tmp->data == max)
// 			return (i);
// 		tmp = tmp->next;
// 		i++;
// 	}
// 	return (0);
// }

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

// static void	phase_two(t_stack **head_a, t_stack **head_b)
// {
// 	int		size_b;
// 	int		mid;
// 	int		max;
// 	t_stack	*ptr_b;

// 	size_b = ft_lstsize(*head_b);
// 	while (*head_b != NULL && size_b > 0)
//     {
//         max = check_big_num(*head_b);
//         ptr_b = *head_b;
//         mid = size_b / 2;
//         while (ptr_b->data != max)
//         {
//             if (ptr_b->index < mid)
//             {
//                 rb(head_b);
//                 write(1, "rb\n", 3);
//             }
//             else
//             {
//                 rrb(head_b);
//                 write(1, "rrb\n", 4);
//             }
//             ptr_b = *head_b;
//         }
//         pa(head_a, head_b);
//         write(1, "pa\n", 3);
//         size_b--;
//     }
// }

void	algo_for_six(t_stack **head_a, t_stack **head_b, int *arr, int arr_size)
{
	int		*bub_sort;

	if (!(*head_a))
		return ;
	bub_sort = bubble_sort(arr, arr_size);
	phase_one(head_a, head_b, bub_sort, arr_size);
	phase_two(head_a, head_b);
}
