/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_help_fun.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:27:57 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/31 15:27:59 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*-------ft_lstclear---------------*/
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

/*-------ft_lstadd_front---------------*/
void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*-------ft_lstnew---------------*/
t_stack	*ft_lstnew(int content)
{
	t_stack	*ptr;

	ptr = malloc(sizeof(t_stack));
	if (!ptr)
		return (NULL);
	ptr->data = content;
	ptr->next = NULL;
	return (ptr);
}

/*-------ft_lstlast---------------*/
t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*ptr;

	if (!lst)
		return (NULL);
	ptr = lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}
/*-------ft_lstadd_back---------------*/
void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*tail;

	if (!new || !lst)
		return ;
	tail = ft_lstlast(*lst);
	if (tail == NULL)
		*lst = new;
	else
		tail->next = new;
}
/*-------ft_lstadd_back---------------*/

int	ft_lstsize(t_stack *lst)
{
	t_stack	*ptr;
	int		count;

	if (!lst)
		return (0);
	ptr = lst;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

/*------------end------------------*/
