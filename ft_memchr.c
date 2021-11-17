/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:17:24 by amessah           #+#    #+#             */
/*   Updated: 2021/11/06 18:52:52 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c1;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == c1)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char t[] = "abdomesaah";
    printf("%s\n",ft_memchr(t,'z',5));
    char j[] = "abdomesaah";
    printf("%s",memchr(j,'z',5));
}*/
