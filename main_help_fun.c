/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_help_fun.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 06:03:42 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/26 06:03:45 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*-------------join_split_arg----------------*/

char	*join_args(int ac, char **av)
{
	int		i;
	char	*join;

	i = 1;
	join = ft_strdup("");
	while (i < ac)
	{
		join = ft_strjoin(join, av[i]);
		join = ft_strjoin(join, " ");
		i++;
	}
	return (join);
}
