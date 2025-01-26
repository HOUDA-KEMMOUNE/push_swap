/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 01:45:02 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/26 23:12:35 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, char low_upp)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_hex((n / 16), low_upp);
	if ((n % 16) <= 9)
		count += print_char((n % 16) + '0');
	else if ((n % 16) >= 10)
	{
		if (low_upp == 'x')
			count += print_char((n % 16) - 10 + 'a');
		else if (low_upp == 'X')
			count += print_char((n % 16) - 10 + 'A');
	}
	return (count);
}
