/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:48:25 by amessah           #+#    #+#             */
/*   Updated: 2021/11/15 23:14:51 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	len;
	size_t	len1;

	i = 0;
	len = ft_strlen(dst);
	len1 = ft_strlen(src);
	while ((i + len + 1) < size && src[i])
	{
		dst[len + i] = src[i];
		i++;
	}
	if (size > len)
	{
		dst[len + i] = '\0';
		return (len + len1);
	}
	return (size + len1);
}
/*
int main()
{
    char src[] = "abdo";
    char dst[] = "messah";
    printf("%zu",ft_strlcat(dst,src,5));
}*/
