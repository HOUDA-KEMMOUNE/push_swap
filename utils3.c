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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 2;
	ptr = (char *)malloc(total_len * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	ft_strlcat(ptr, s2, ft_strlen(s1) + ft_strlen(s2) + 2);
	return (ptr);
}
/*-------------------------ft_strlcpy-------------------------*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	j;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	j = 0;
	while (src[j] && j < dstsize - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = ' ';
	j++;
	dst[j] = '\0';
	return (src_len);
}

/*-------------------------ft_atoi--------------------------*/

static int	check(const char *str, int i)
{
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

// static int	check_zero_one(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] == '0')
// 		i++;
// 	if (str[i] == '\0')
// 		return (0);
// 	while (str[i])
// 	{
// 		if (str[i] != '0' && str[i] != '1')
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// static int	count_after_zero(const char *str)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (str[i] == '0')
// 		i++;
// 	if (str[i] == '\0')
// 		return (0);
// 	while (str[i])
// 	{
// 		i++;
// 		count++;
// 	}
// 	return (count);
// }

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;
	// size_t		len;
	// int			zero_one_res;
	// int			count;

	i = 0;
	sign = 1;
	result = 0;
	// len = ft_strlen(str);
	// zero_one_res = check_zero_one(str);
	// count = count_after_zero(str);
	i = check(str, i);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	// if ((count >= 11) && (zero_one_res == 1))
	// 	print_error();
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = result * sign;
	if (result < INT_MIN || result > INT_MAX)
		print_error();
	return (result);
}
/*---------------------------end-----------------------*/
