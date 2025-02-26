/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:31:40 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/29 09:31:43 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*-------------------------check_big_num---------------------*/
int	check_big_num(t_stack *head)
{
	t_stack	*ptr;
	int		max;

	if (!head)
		exit (1);
	ptr = head;
	max = ptr->data;
	while (ptr != NULL)
	{
		if (ptr->data > max)
			max = ptr->data;
		ptr = ptr->next;
	}
	return (max);
}

/*-------------------------check_big_num---------------------*/
int	check_small_num(t_stack *head)
{
	t_stack	*ptr;
	int		min;

	if (!head)
		exit (1);
	ptr = head;
	min = ptr->data;
	while (ptr != NULL)
	{
		if (ptr->data < min)
			min = ptr->data;
		ptr = ptr->next;
	}
	return (min);
}

/*-------------------------neg_and_pos---------------------*/
void	neg_and_pos(char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		if ((av[i][0] == '-' || av[i][0] == '+')
			&& (av[i][1] == ' ' || av[i][1] == '\0'))
			print_error();
		if (av[i][0] == '-' || av[i][0] == '+')
			j++;
		while (av[i][j])
		{
			if ((av[i][j] == '-' || av[i][j] == '+') && (av[i][j - 1] == ' '))
				j++;
			if ((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == ' ')
				j++;
			else
				print_error();
		}
		j = 0;
		i++;
	}
}

/*---------------------------end-----------------------*/
void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}
