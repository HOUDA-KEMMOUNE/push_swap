/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_nX2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:43:29 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/29 08:43:31 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_if_nX2(char **av, int ac)
{
	int i;
	int j;

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
				{
					printf("-->Error:/\n");
					exit(1);
				}
				j++;
			}
			i++;
		}
	}
	return (0);
}