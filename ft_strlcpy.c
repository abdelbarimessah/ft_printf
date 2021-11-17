/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:54:27 by amessah           #+#    #+#             */
/*   Updated: 2021/11/16 00:07:40 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	while (--dstsize && *src)
		*dst++ = *(char *)src++;
	*dst = '\0';
	return (i);
}
/*
int main()
{
    char src[]="hvsvhbshv";
    char dst[50];
    //char dst1[50];
    printf("%zu\n",ft_strlcpy(dst,src,0));
    //printf("%zu\n",strlcpy(dst1,src,5));
	printf("%s",dst);
}
*/