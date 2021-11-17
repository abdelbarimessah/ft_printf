/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:02:46 by amessah           #+#    #+#             */
/*   Updated: 2021/11/15 16:12:46 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!lst)
		return (NULL);
	first = NULL;
	while (lst)
	{	
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
/*
int main()
{
	char *str[3];
    str[0] = ft_strdup("aa");
    str[1] = ft_strdup("bb");
    str[2] = ft_strdup("FF");
    t_list *first = ft_lstnew(str[0]);
    t_list *first1 = ft_lstnew(str[1]);
    t_list *first2 = ft_lstnew(str[2]);
	
    t_list **list = &first;
    first -> next = first1;
    first1 -> next = first2;
	first2 -> next = NULL;
	ft_lstmap(*list,f,del);
	while(first)
    {
    	printf(" %s ->",first-> content);
    	first = first ->next;
    }
}
void	*f(void *content)
{
	char *s = (char *)content;
	int i = 0;
	while (s[i])
	{
		((char *)content)[i] = ft_toupper(s[i]);
		i++;
	}
	return (content);
	
}
void del(void *s)
{
	free(s);
}*/