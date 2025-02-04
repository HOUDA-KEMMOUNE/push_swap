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
int	empty_arg(int ac, char *av[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (av[i][0] == '\0')
		{
			printf("(empty_arg)");
			print_error();
		}
		i++;
	}
	return (0);
}
/*-------------------end--------------------*/
