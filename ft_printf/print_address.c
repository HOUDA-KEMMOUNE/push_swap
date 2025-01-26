/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:27:57 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/26 23:48:54 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_mini_hex(unsigned long int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_mini_hex(n / 16);
	if ((n % 16) <= 9)
		count += print_char((n % 16) + '0');
	else if ((n % 16) >= 10)
		count += print_char((n % 16) - 10 + 'a');
	return (count);
}

int	print_address(void *ptr)
{
	int					count;
	unsigned long int	address;

	if (!ptr)
		return (print_str("(nil)"));
	address = (unsigned long int)ptr;
	count = 0;
	count += print_str("0x");
	count += print_mini_hex(address);
	return (count);
}
