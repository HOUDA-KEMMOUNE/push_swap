/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:31:40 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/29 09:31:43 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*-------------------------ft_strncmp---------------------*/
int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	if (!s1 && !s2)
		return (0);
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while ((s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}
/*---------------------------end-----------------------*/
