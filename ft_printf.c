/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:18:25 by amessah           #+#    #+#             */
/*   Updated: 2021/11/20 16:08:53 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convertion(va_list scrol, const char *format, int i)
{
	if (format[i + 1] == 'c')
		return (print_c(scrol));
	else if (format[i + 1] == 's')
		return (print_s(scrol));
	else if (format[i + 1] == 'p')
		return (print_p(scrol));
	else if (format[i + 1] == 'd')
		return (print_d(scrol));
	else if (format[i + 1] == 'i')
		return (print_i(scrol));
	if (format[i + 1] == 'u')
		return (print_u(scrol));
	else if (format[i + 1] == 'x')
		return (print_x(scrol));
	else if (format[i + 1] == 'X')
		return (print_upper_x(scrol));
	else if (format[i + 1] == '%')
		return (print_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	scrol;
	int		i;
	int		cnt;
	char	c;

	i = 0;
	cnt = 0;
	va_start(scrol, format);
	while (format[cnt])
	{
		if (format[cnt] == '%')
		{
			i = i + convertion(scrol, format, cnt);
			cnt = cnt + 2;
		}
		else
		{
			i++;
			ft_putchar(format[cnt]);
			cnt++;
		}
	}
	va_end(scrol);
	return (i);
}
/*
int main()
{
	int i = 506;

	ft_printf("%u\n",i);
   printf("%u\n",i);
}*/