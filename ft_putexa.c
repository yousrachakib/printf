/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:59:42 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/22 21:11:24 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putexa(unsigned	long	int nbr)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (nbr >= 16)
		i += ft_putexa(nbr / 16);
	i += ft_putchar(hex[nbr % 16]);
	return (i);
}

int	ft_putexxa(unsigned	long	int nbr)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789ABCDEF";
	if (nbr >= 16)
		i += ft_putexxa(nbr / 16);
	i += ft_putchar(hex[nbr % 16]);
	return (i);
}

int	ft_putptr(unsigned long nbr)
{
	int	c;

	ft_putstr("0x");
	c = (ft_putex(nbr) + 2);
	return (c);
}