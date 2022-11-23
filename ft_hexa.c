/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:59:42 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/23 21:48:49 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned	long	int nbr)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (nbr >= 16)
		i += ft_hexa(nbr / 16);
	i += ft_putchar(hex[nbr % 16]);
	return (i);
}

int	ft_hexxa(unsigned	long	int nbr)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789ABCDEF";
	if (nbr >= 16)
		i += ft_hexxa(nbr / 16);
	i += ft_putchar(hex[nbr % 16]);
	return (i);
}

int	ft_putmemoryaddress(unsigned long nbr)
{
	int	c;

	ft_putstr("0x");
	c = (ft_hexa(nbr) + 2);
	return (c);
}