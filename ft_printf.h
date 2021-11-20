/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:14:43 by amessah           #+#    #+#             */
/*   Updated: 2021/11/20 16:09:03 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		convertion(va_list scrol, const char *format, int i);
int		len(unsigned long int nb);
int		print_percent(void);
int		print_c(va_list scrol);
int		print_s(va_list scrol);
int		print_p(va_list scrol);
int		print_x(va_list scrol);
int		print_upper_x(va_list scrol);
int		print_d(va_list scrol);
int		print_i(va_list scrol);
int		print_d(va_list scrol);
int		print_u(va_list scrol);
int		size(long int nb);
void	base_convert(unsigned long int nb, char *base);
void	ft_putchar(char c);

#endif