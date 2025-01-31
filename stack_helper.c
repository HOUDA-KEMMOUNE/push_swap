/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 02:49:22 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/31 02:49:23 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*ptr;
	t_stack	*current;

	current = *lst;
	while (current != NULL)
	{
		ptr = current->next;
        free(current);
        current = ptr;
	}
	*lst = NULL;
}

void    add_node(t_stack *head, int new_data)
{
    t_stack *ptr;
    t_stack *tail;

    if (!head)
        return ;
    tail = malloc(sizeof(t_stack));
    tail->data = new_data;
    tail->next = NULL;
    ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = tail;
}
