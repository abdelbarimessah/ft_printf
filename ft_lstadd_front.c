/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:30:29 by amessah           #+#    #+#             */
/*   Updated: 2021/11/12 13:02:26 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst)
	{
		if (*alst)
			new->next = *alst;
		*alst = new;
	}
}
/*
int main ()
{
	t_list *new;
	new = malloc(sizeof(t_list));
	new -> content = "abdo0";
	new -> next = NULL;
	while(new != NULL)
	{
		printf("%s",new -> content);
		new = new -> next;
	}
}
*/