/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:28:28 by amessah           #+#    #+#             */
/*   Updated: 2021/11/13 20:25:30 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*s1;
	unsigned int	i;

	if (s == 0)
		return (0);
	i = 0;
	s1 = (char *)s;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (s[i])
	{
		str[i] = f(i, s1[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char asciimod(unsigned i, char c)
{
	return (c + i);

}*/
/*
int main()
{
	char c[] = "abdomessah";
	printf("%s", ft_strmapi(c, asciimod));
}*/