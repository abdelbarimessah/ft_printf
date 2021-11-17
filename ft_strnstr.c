/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:35:38 by amessah           #+#    #+#             */
/*   Updated: 2021/11/12 11:07:27 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (haystack == NULL && len == 0)
		return (NULL);
	if (needle[i] == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 1;
		if (haystack[i] == needle[0])
		{
			while (needle[j] && needle[j] == haystack[j + i] && i + j < len)
				j++;
			if (needle[j] == '\0' && i + j <= len)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char hays[] ="abdomessah";
    char need[] = "ss";
    printf("%s",ft_strnstr(hays,need,11));
}*/
