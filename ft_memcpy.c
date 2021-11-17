/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:42:46 by amessah           #+#    #+#             */
/*   Updated: 2021/11/17 00:01:39 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dst1;

	i = 0;
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	if (dst || src)
	{
		while (i < n)
		{
			dst1[i] = src1[i];
			i++;
		}
		return (dst);
	}
	return (0);
}
/*
int main()
{
	int s[] = {1,2,3,4};
	int t[100];
    char s[] ="fdjkvkdj";
    char t[10];
    char s1[] ="fdjkvkdj";
    char t1[10];
    memcpy(t,s,7);
    printf("%d\n",t[1]);
    memcpy(t1,s1,5);
    printf("%s",t1);
}*/
