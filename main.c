/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 03:51:24 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/25 03:51:27 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	int		*arr;
	int		*sorted_arr;
	int		i;

	arr = atoi_av(ac, av);
	sorted_arr = bubble_sort(arr, ac - 1);
	i = 0;
	if (sorted_arr == NULL)
		return (1);
	if (arr != NULL)
	{
		while (i < ac - 1)
		{
			printf("%d\t", sorted_arr[i]);
			i++;
		}
		printf("\n");
		free(arr);
		return (0);
	}
	else
		return (1);
	printf("\n");
}
