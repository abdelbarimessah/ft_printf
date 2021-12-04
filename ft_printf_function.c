/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:42:41 by amessah           #+#    #+#             */
/*   Updated: 2021/11/27 13:09:28 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	print_percent(void)
{
	write (1, "%%", 1);
	return (1);
}

int	print_c(va_list scrol)
{
	char	*c;

	c = va_arg(scrol, char *);
	write (1, &c, 1);
	return (1);
}

int	print_s(va_list scrol)
{
	char	*c;
	int		i;

	i = 0;
	c = va_arg(scrol, char *);
	if (!c)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (*c)
	{
		write (1, c++, 1);
		i++;
	}
	return (i);
}
