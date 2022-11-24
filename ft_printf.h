/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:17:35 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/24 19:22:15 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		put_unsigned_nbr(unsigned int num);
int		ft_putstr(char *s);
int		ft_hexa(unsigned long int nbr);
int		ft_hexxa(unsigned long int nbr);
int		ft_putmemoryaddress(unsigned long nbr);

#endif 