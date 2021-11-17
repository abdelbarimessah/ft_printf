/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:00:12 by amessah           #+#    #+#             */
/*   Updated: 2021/11/14 01:35:24 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*
void f(void *s)
{
	printf("\t%s\n",s);
}
int main ()
{
    char *str[3];
    str[0] = ft_strdup("00");
    str[1] = ft_strdup("01");
    str[2] = ft_strdup("02");
    t_list *first = ft_lstnew(str[0]);
    t_list *first1 = ft_lstnew(str[1]);
    t_list *first2 = ft_lstnew(str[2]);
    t_list **list = &first;
    first -> next = first1;
    first1 -> next = first2;
	ft_lstiter(*list,&f);
    while(first)
    {
    	printf(" %s ->",first-> content);
    	first = first ->next;
    }
}
*/