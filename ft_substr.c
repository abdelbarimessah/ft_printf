/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:33:24 by amessah           #+#    #+#             */
/*   Updated: 2021/11/16 00:07:12 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s + start);
	if (len > i)
		len = i;
	t = ft_calloc(len + 1, sizeof(char));
	if (!t)
		return (NULL);
	if (start < ft_strlen(s) && len > 0)
		ft_memcpy(t, s + start, len);
	return (t);
}
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == '\0' || len < 0)
		return (NULL);
	str = (char *)malloc((len + 1) * sizeof(char ));
	if (str == NULL)
		return (NULL);
	while (start < ft_strlen(s) && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}*/
/*
int main()
{
	char t[] = "01234";
	printf("%s",ft_substr(t,10,20));
}*/