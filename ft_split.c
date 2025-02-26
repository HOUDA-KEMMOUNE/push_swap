/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 03:26:59 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/01/26 03:27:06 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*-------------------------ft_split-------------------------*/
static int	ft_lenword(const char *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i] && s[i] == c)
	{
		i++;
	}
	while (s[i] && s[i] != c)
	{
		j++;
		i++;
	}
	return (j);
}

static int	count_word(const char *s, char c)
{
	int	i;
	int	check;
	int	wc;

	wc = 0;
	i = 0;
	check = 0;
	while (s[i])
	{
		if (s[i] == c)
			check = 0;
		else if (check == 0)
		{
			check = 1;
			wc++;
		}
		i++;
	}
	return (wc);
}

static char	*mystrdup(const char *s, char c)
{
	char	*array;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	array = malloc(sizeof(char) * ft_lenword(s, c) + 1);
	if (!array)
		return (NULL);
	while (s[i] && s[i] == c)
	{
		i++;
	}
	while (s[i] && s[i] != c)
	{
		array[j] = s[i];
		i++;
		j++;
	}
	array[j] = '\0';
	return (array);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			str[j] = mystrdup(s + i, c);
			if (str[j++] == NULL)
				ft_free(str);
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (str[j] = NULL, str);
}

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
