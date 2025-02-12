/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:12:33 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/02/03 15:12:35 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*-------------check_if_nbr----------------*/
int	check_if_nbr(char **av, int ac)
{
	if (ac <= 1)
		exit(1);
	neg_and_pos(av, ac);
	return (0);
}

/*-------------empty_arg----------------*/
int	empty_arg(int ac, char *av[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (av[i][0] == '\0')
			print_error();
		i++;
	}
	return (0);
}

/*-------------check_if_dup----------------*/
int	check_if_dup(char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (ac <= 1)
		exit(1);
	else
	{
		while (i < ac)
		{
			j = i + 1;
			while (j < ac)
			{
				if (ft_strcmp(av[i], av[j]) == 0)
					print_error();
				j++;
			}
			i++;
		}
	}
	return (0);
}

/*-------------------end--------------------*/