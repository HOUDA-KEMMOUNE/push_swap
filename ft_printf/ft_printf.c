/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:06:56 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/26 23:13:50 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(args, int));
	else if (specifier == 's')
		count += print_str(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_nbr(va_arg(args, int));
	else if (specifier == 'x')
		count += print_hex(va_arg(args, unsigned int), 'x');
	else if (specifier == 'X')
		count += print_hex(va_arg(args, unsigned int), 'X');
	else if (specifier == 'u')
		count += print_unsigned(va_arg(args, unsigned int));
	else if (specifier == 'p')
		count += print_address(va_arg(args, void *));
	else if (specifier == '%')
		count += print_char('%');
	else
	{
		count = print_char('%');
		count += print_char(specifier);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), args);
		else
			count += write(1, format, 1);
		format++;
	}
	return (count);
}
