/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_function4.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:16:44 by amessah           #+#    #+#             */
/*   Updated: 2021/12/04 14:45:51 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_long(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n / 10)
	{
		n /= 10;
		i *= 10;
	}
	return (i);
}

int	print_u(va_list scrol)
{
	unsigned int	div;
	unsigned int	i;
	unsigned int	samenum;
	int				v;

	v = 0;
	samenum = va_arg(scrol, unsigned int);
	div = ft_putnbr_long(samenum);
	while (div)
	{
		i = (samenum / div) % 10 + 48;
		ft_putchar(i);
		div /= 10;
		v++;
	}
	return (v);
}
