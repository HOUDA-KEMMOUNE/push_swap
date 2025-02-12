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

/*-------------------check_len----------------*/
// static int	check_zero_one(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == '0' || str[i] == '1')
// 			i++;
// 		else
// 			return (1);
// 	}
// 	return (0);
// }

// void	check_len(char **av, int ac)
// {
// 	size_t		len;
// 	int			zero_one_res;
// 	int			i;
// 	char		*str;
	
// 	check_if_nbr(av, ac);
// 	// if (ac == 1)
// 	// 	exit(1);
// 	i = 1;
// 	ac--;
// 	// len = ft_strlen(str);
// 	// zero_one_res = check_zero_one(str);
// 	while (i < ac)
// 	{
// 		str = av[i]; 
// 		len = ft_strlen(str);
// 		zero_one_res = check_zero_one(str);
// 		if ((len > 11) && (zero_one_res == 1))
// 			print_error();
// 		i++;
// 	}
// }
/*-------------------end--------------------*/