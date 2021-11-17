/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:32:24 by amessah           #+#    #+#             */
/*   Updated: 2021/11/12 10:55:59 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	c1 = (unsigned char)c;
	while (i < len)
	{
		str[i] = c1;
		i++;
	}
	return (b);
}
/*int main()
{
    char b[] = "kskfjhskjs";
    
    printf("%s\n",ft_memset(b,'a',4));
    printf("%s",memset(b,'a',4));
    
}*/
