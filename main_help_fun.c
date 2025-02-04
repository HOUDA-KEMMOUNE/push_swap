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

char	**join_split_arg(int ac, char **av)
{
	int		i;
	char	*join;
	char	*tmp;
	char	**new_av;
	int		check_num;

	i = 1;
	check_num = check_if_nbr(av, ac);
	ac++;
	if (ac > 1 && check_num == 0)
	{
		join = ft_strdup("");
		while (av[i])
		{
			tmp = join;
			join = ft_strjoin(tmp, av[i]);
			free(tmp);
			i++;
		}
		new_av = ft_split(join, ' ');
		free(join);
		return (new_av);
	}
	return (NULL);
}
/*-------------free_split----------------*/

void	free_split(char **str_str)
{
	int	i;

	if (!str_str)
		return ;
	i = 0;
	while (str_str[i])
	{
		free(str_str[i]);
		i++;
	}
	free(str_str);
}
/*-------------atoi_av---------------*/

int	*atoi_av(int ac, char *av[])
{
	char	**new_av;
	int		*arr;
	int		i;

	new_av = join_split_arg(ac, av);
	if (new_av != NULL)
	{
		arr = malloc((ac - 1) * sizeof(int));
		if (!arr)
		{
			free_split(new_av);
			return (NULL);
		}
		i = 0;
		while (new_av[i] && i < ac)
		{
			arr[i] = ft_atoi(new_av[i]);
			i++;
		}
		free_split(new_av);
		return (arr);
	}
	else
		return (NULL);
}
/*-------------end----------------*/
