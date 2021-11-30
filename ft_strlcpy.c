/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:35:21 by nattia            #+#    #+#             */
/*   Updated: 2021/11/22 15:56:04 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((i < size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (src[i] == '\0')
		return (i);
	else
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char src[50] = "NABIL";
	char dst[50] = "ATTIA";
	printf("strlcpy rt : %d dst : %s", ft_strlcpy(dst, src, 4) , dst);
}
*/
