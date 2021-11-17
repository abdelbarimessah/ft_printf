/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:41:59 by amessah           #+#    #+#             */
/*   Updated: 2021/11/17 15:00:07 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcon(int con, long n2, char *str)
{
	int	neg;

	neg = 0;
	if (n2 < 0)
	{
		n2 = n2 * (-1);
		neg = 1;
	}
	while (con >= 0)
	{
		str[con] = n2 % 10 + '0';
		n2 = n2 / 10;
		con--;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}

static int	ft_num(long n2)
{
	int	con;

	con = 0;
	if (n2 < 0)
	{
		n2 = n2 * (-1);
		con++;
	}
	while (n2 > 9)
	{
		n2 = n2 / 10;
		con++;
	}
	con++;
	return (con);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		con;
	int		sign;

	sign = 0;
	con = ft_num(n);
	str = (char *)malloc((con + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	str[con] = '\0';
	con--;
	return (ft_strcon(con, n, str));
}
/*
int main()
{
	printf("%s\n",ft_itoa(111115));
	printf("%s\n",ft_itoa(-5));
	printf("%s\n",ft_itoa(0));
	printf("%s",ft_itoa('v'));
}*/