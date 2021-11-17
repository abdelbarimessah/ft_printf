/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:26:14 by amessah           #+#    #+#             */
/*   Updated: 2021/11/17 00:07:05 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static char	**free_thing(char **tab, int index)
{
	while (index >= 0)
	{
		free(tab[index]);
		index--;
	}
	free(tab);
	return (NULL);
}

static	int	counw(char *ptr, char c)
{
	int				i;
	int				count;

	i = 0;
	count = 0;
	while (ptr[i])
	{
		if (ptr[i] == c && ptr[i + 1] != c)
			count++;
		i++;
	}
	return (count + 1);
}

static char	*copi(int nn, int ii, char *ptr)
{
	int				k;
	char			*p;

	k = 0;
	p = (char *)malloc(sizeof(char) * (nn + 1));
	while (nn > k)
	{
		p[k] = ptr[k + ii];
		k++;
	}
	p[k] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int				index;
	char			**str;
	int				i;
	int				n;
	char			*ptr;

	ptr = ft_strtrim (s, &c);
	str = (char **)malloc(sizeof(char *) * (counw(ptr, c) + 1));
	if (!ptr || !str)
		return (0);
	i = -1;
	index = -1;
	while (ptr[i])
	{
		while (ptr[i] == c)
			i++;
		n = 0;
		while (ptr[i + n] != c && ptr[i + n])
			n++;
		if (!(str[++index] = copi(n, i, ptr)))
			return (free_thing(str, index));
		i = n + i;
	}
	str[index + 1] = NULL;
	free(ptr);
	return (str);
}*/
static int	free_thing(char **tab, int index)
{
	while (index >= 0)
	{
		free(tab[index]);
		index--;
	}
	return (0);
}

static int	count_word(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			count++;
		}
		else
			s++;
	}
	return (count);
}

static char	*create_word(const char *s, int start, int end)
{
	char	*word;
	int		i;
	int		word_len;

	i = 0;
	word_len = end - start;
	word = (char *)malloc((word_len * sizeof(char )) + 1);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static int	fill_the_splited_array(char **str, const char *s, char c)
{
	int		start;
	int		end;
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			end = i;
			str[k] = create_word(s, start, end);
			if ((str[k]) == NULL)
				return (free_thing(str, k));
			k++;
		}
		else
			i++;
	}
	str[k] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		checker;

	checker = 1;
	if (!s)
		return (NULL);
	str = (char **)malloc(((count_word(s, c) + 1) * (sizeof(char *))));
	if (str == NULL)
		return (NULL);
	checker = fill_the_splited_array(str, s, c);
	if (checker == 0)
		return (NULL);
	return (str);
}
/*
int main ()
{
	char str[] = "abdo messah";
  	char o = ' ' ;
	char **sa = ft_split(str,o);
  	printf("%s\n%s\n",sa[0],sa[1]);
  
}*/