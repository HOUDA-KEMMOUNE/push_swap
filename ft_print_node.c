/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:41:55 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/30 13:41:59 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_node(t_stack *head)
{
	t_stack	*ptr;

	ptr = head;
	while (ptr != NULL)
	{
		printf("%d --> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}
