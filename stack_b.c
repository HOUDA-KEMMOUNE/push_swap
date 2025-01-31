/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 02:48:05 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/31 02:48:08 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    stack_b(int ac, char *av[], t_stack *head_a)
{
    t_stack	*head_b;
	int		*arr;
	int		i;

	i = 1;
	arr = atoi_av(ac, av);
	head_b = malloc(sizeof(t_stack));
	pb(head_a, &head_b);
	// free(head_b);
}
