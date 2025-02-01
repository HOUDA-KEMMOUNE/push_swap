/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:38:24 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/30 13:38:28 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_stack	*ft_head_a(int ac, char *av[])
// {
// 	t_stack	*head_a;
// 	int		*arr;

// 	arr = atoi_av(ac, av);
// 	head_a = malloc(sizeof(t_stack));
// 	head_a->data = arr[0];
// 	head_a->next = NULL;
// }

void	ft_stack_a(int ac, char *av[], t_stack *head_a)
{
	int		*arr;
	int		i;
	
	arr = atoi_av(ac, av);
	i = 1;	
	ac--;
	while (i < ac)
	{
		add_node(head_a, arr[i]);
		i++;
	}
	printf("//stack A\n");
	ft_print_node(head_a);
}
