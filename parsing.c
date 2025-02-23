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
	neg_and_pos(av, ac);
	return (0);
}

/*-------------empty_arg----------------*/
int	empty_arg(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		if (av[i][0] == '\0')
			print_error();
		while (av[i][j])
		{
			if (av[i][j] == ' ')
				j++;
			else
				break;
		}
		if (av[i][j] == '\0')
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
	int	first_num;
	int	second_num;

	i = 0;
	while (i < ac)
	{
		first_num = ft_atoi(av[i]);
		j = i + 1;
		while (j < ac)
		{
			second_num = ft_atoi(av[j]);
			if (first_num == second_num)
				print_error();
			j++;
		}
		i++;
	}
	return (0);
}
char	**ft_free_(char **res)
{
	int i;

	i = 0;
	while (res[i])
	{
		free (res[i]);
		i++;
	}
	free (res);
	return (NULL);
}
/*-------------------end--------------------*/