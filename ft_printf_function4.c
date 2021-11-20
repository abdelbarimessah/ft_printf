/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_function4.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:16:44 by amessah           #+#    #+#             */
/*   Updated: 2021/11/20 16:12:53 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_long(unsigned int n)
{
	if (n < 9)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr_long(n / 10);
		ft_putnbr_long(n % 10);
	}
}

int	print_u(va_list scrol)
{
	unsigned int	nb;
	int				lengh;

	lengh = 0;
	nb = va_arg(scrol, unsigned int);
	ft_putnbr_long(nb);
	lengh = size(nb);
	return (lengh);
}
