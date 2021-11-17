/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:50:35 by nattia            #+#    #+#             */
/*   Updated: 2021/11/14 14:58:17 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
//
//#include <fcntl.h>
//#include <stdio.h>
//
//int		main()
//{
//	int fd;
//	char string[] = "hello world\n";
//
//	fd = open("file1337", O_CREAT | O_WRONLY);
//
//	for (int i = 0; string[i] != '\0'; i++)
//	{
//		ft_putchar_fd(string[i], fd);
//	}
//	close(fd);
//	return (0);
//}
//
