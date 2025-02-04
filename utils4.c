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

/*-------------------------ft_strncmp---------------------*/
int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	if (!s1 && !s2)
		return (0);
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while ((s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}

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
		if (av[i][0] == '-' || av[i][0] == '+')
			j++;
		while (av[i][j])
		{
			if (av[i][j] >= '0' && av[i][j] <= '9')
				j++;
			else
				print_error();
		}
		j = 0;
		i++;
	}
}

/*---------------------------end-----------------------*/
