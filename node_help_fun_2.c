/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_help_fun_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 04:30:42 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/03 04:30:44 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

/*--------------ft_index---------------*/
int	ft_index(t_stack *lst)
{
	t_stack	*ptr;
	int		i;

	ptr = lst;
	i = 0;
	while (ptr != NULL)
	{
		ptr->index = i;
		i++;
		ptr = ptr->next;
	}
}

/*--------------end---------------*/
