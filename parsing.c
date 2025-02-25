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
				break ;
		}
		if (av[i][j] == '\0')
		{
			printf("empty_arg\n");
			exit(1);
		}
			// print_error();
		i++;
	}
	return (0);
}

/*-------------check_if_dup----------------*/

int	check_dup(t_stack *a)
{
	t_stack	*check;
	t_stack	*current;

	current = a;
	while (current)
	{
		check = current->next;
		while (check)
		{
			if (check->data == current->data)
				return (0);
			check = check->next;
		}
		current = current->next;
	}
	return (1);
}

char	**ft_free_(char **res)
{
	int	i;

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