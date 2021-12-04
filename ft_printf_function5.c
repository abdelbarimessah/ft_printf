/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_function5.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:04:09 by amessah           #+#    #+#             */
/*   Updated: 2021/12/04 14:46:10 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len(unsigned long int nb)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}

static void	base_convert(unsigned long int nb, char *base)
{
	if (nb < 16)
		ft_putchar(base[nb % 16]);
	else
	{
		base_convert(nb / 16, base);
		base_convert(nb % 16, base);
	}
}

int	print_p(va_list scrol)
{
	void				*c;
	int					i;
	unsigned long int	nb;

	c = va_arg(scrol, void *);
	write (1, "0x", 2);
	nb = (unsigned long int)c;
	base_convert(nb, "0123456789abcdef");
	i = len(nb);
	if (nb == 0)
		i = 1;
	return (i + 2);
}
