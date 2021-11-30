/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:39:21 by nattia            #+#    #+#             */
/*   Updated: 2021/11/30 18:09:42 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (!c)
		return ((char *)(s + i));
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[50] = "NABIL ATTIA";
	char c = '\0';
	printf("%s" , ft_strchr(str,"NULL"));
}
*/
