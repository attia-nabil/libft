/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:48:21 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:48:25 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compute the length of a string*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	char str[50] = "Nabil ATTIA";
	int len = ft_strlen(str);
	printf("%d" , len);
}
*/
