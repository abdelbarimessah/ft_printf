/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:56:27 by amessah           #+#    #+#             */
/*   Updated: 2021/11/14 00:51:50 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
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
    while(first)
    {
    	printf(" %s ->",first-> content);
    	first = first ->next;
    }
  printf(" NULL");
  printf("\n");
  ft_lstclear(list,&free);
  if(!first)
    {
      printf(" done");
    }
}
*/