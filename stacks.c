/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:32:11 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/02 00:32:17 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(char **str)
{
	int		data;
	t_stack	*new;
	t_stack	*stack;
	int		j;

	j = 0;
	stack = NULL;
	while (str[j])
	{
		data = ft_atoi(str[j], str, &stack);
		new = ft_lstnew(data);
		if (!new)
			exit(1);
		ft_lstadd_back(&stack, new);
		j++;
	}
	if (check_dup(stack) == 0)
	{
		ft_lstclear(&stack);
		ft_free(str);
		print_error();
	}
	return (stack);
}
