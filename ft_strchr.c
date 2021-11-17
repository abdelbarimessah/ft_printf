/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:44:56 by amessah           #+#    #+#             */
/*   Updated: 2021/11/12 10:57:53 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c1;
	char	*str;
	int		i;

	c1 = (char )c;
	str = (char *)s;
	i = 0;
	if (c1 == '\0')
		return (str + ft_strlen(str));
	while (str[i])
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
    printf("%s\n",ft_strchr(t,'a'));
    char j[] = "abdomesaah";
    printf("%s",ft_strchr(j,'a'));
}*/
