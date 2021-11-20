/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_function3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:44:05 by amessah           #+#    #+#             */
/*   Updated: 2021/11/20 16:11:34 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size(long int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb != 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		ft_putnbr(n);
	}
	else if (n <= 9)
	{
		c = n + 48;
		write (1, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	print_i(va_list scrol)
{
	int	nb;
	int	lengh;

	lengh = 0;
	nb = va_arg(scrol, int);
	if (nb < 0)
	{
		lengh++;
		lengh += size(-nb);
	}
	else
		lengh = size(nb);
	ft_putnbr(nb);
	return (lengh);
}

int	print_d(va_list scrol)
{
	int	nb;
	int	lengh;

	lengh = 0;
	nb = va_arg(scrol, int);
	if (nb < 0)
	{
		lengh++;
		lengh += size(-nb);
	}
	else
		lengh = size(nb);
	ft_putnbr(nb);
	return (lengh);
}
