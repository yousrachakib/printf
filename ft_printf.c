/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:42:12 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/23 21:49:11 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	detect_format(char format, va_list	num_args)
{
	int	counter;

	counter = 0;
	if (format == 'c')
		counter += ft_putchar(va_arg(num_args, int));
	else if (format == 's')
		counter += ft_putstr(va_arg(num_args, char *));
	else if (format == 'p')
		counter += ft_putmemoryaddress(va_arg(num_args, unsigned long));
	else if (format == 'd' || format == 'i')
		counter += ft_putnbr(va_arg(num_args, int));
	else if (format == 'u')
		counter += put_unsigned_nbr(va_arg(num_args, unsigned int));
	else if (format == 'x')
		counter += ft_hexa(va_arg(num_args, unsigned long int));
	else if (format == 'X')
		counter += ft_hexxa(va_arg(num_args, unsigned long int));
	else if (format == '%')
		counter += ft_putchar(va_arg(num_args, int));
	return (counter);
}
int	ft_printf(const	char* placeholders, ...)
{
	int		num_args;
	va_list	args;

	num_args = 0;
	va_start(args, placeholders);
	while (*placeholders)
	{
		if (*placeholders == '%')
		{	
			placeholders++;
			if (*placeholders == 'c' || *placeholders == 's' \
				|| *placeholders == 'p' || *placeholders == 'd' \
				|| *placeholders == 'i' || *placeholders == 'u' \
				|| *placeholders == 'x' || *placeholders == 'X' \
				|| *placeholders == '%' )
					num_args += detect_format(*placeholders, args);
			else
					num_args += detect_format(*placeholders, args);
		}
		else if (*placeholders != '%')
			num_args += ft_putchar(*placeholders);
		placeholders++;
	}
	va_end(args);
	return (num_args);
}