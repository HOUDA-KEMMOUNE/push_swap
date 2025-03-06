/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 03:23:20 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/26 06:16:12 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*-------------------------ft_strjoin-------------------------*/

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	new_str = (char *)malloc((sizeof(char) * (ft_strlen((char *)s1)
					+ ft_strlen((char *)s2) + 1)));
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j])
		new_str[i++] = s2[j++];
	free(s1);
	new_str[i] = '\0';
	return (new_str);
}

/*-------------------------ft_atoi--------------------------*/
static void	helper_fct1(char **arr_str, t_stack **stack)
{
	ft_free(arr_str);
	if (stack)
		ft_lstclear(stack);
	print_error();
}

int	ft_atoi(const char *str, char **arr_str, t_stack **stack)
{
	int			i;
	long long	result;
	int			sign;

	i = 0;
	result = 0;
	sign = 1;
	if (!str)
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] != '\0')
	{
		result = result * 10 + (str[i++] - '0');
		if ((sign == 1 && result > INT_MAX) || (sign == -1
				&& (-result) < INT_MIN))
		{
			helper_fct1(arr_str, stack);
		}
	}
	return (sign * result);
}
/*---------------------------end-----------------------*/
