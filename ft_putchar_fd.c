/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:39:00 by amessah           #+#    #+#             */
/*   Updated: 2021/11/17 00:07:21 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int main()
{
	int fd;
	fd = open("file", O_CREAT | O_RDWR);
	printf("%d",fd);
	ft_putchar_fd('c', fd);
	int fd1;
	fd1 = open("file1", O_CREAT | O_RDWR);
	printf("%d",fd1);
	ft_putchar_fd('c', fd1);
}*/