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

void    stack_a(int ac, char *av[])
{
    t_stack	*head;
	int		*arr;
	int		i;

	i = 1;
	arr = atoi_av(ac, av);
	head = malloc(sizeof(t_stack));
	head->data = arr[0];
	head->next = NULL;
	ac--;
	while (i < ac)
	{
		add_node(head, arr[i]);
		i++;
	}
	ft_print_node(head);
	ft_lstclear(&head);
	free(head);
	free(arr);
}