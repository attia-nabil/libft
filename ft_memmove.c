/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:33:57 by nattia            #+#    #+#             */
/*   Updated: 2021/11/30 18:12:51 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;

	src1 = (char *)src;
	dst1 = (char *)dst;
	if (!src1 && !dst1)
		return (NULL);
	if (src < dst)
	{
		while (len-- != 0)
			dst1[len] = src1[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char buffer[50] = "abcdefgh";
	printf("%s\n" , ft_memmove(buffer + 1, buffer, 4));
	printf("%s\n" , ft_memcpy(buffer + 1, buffer, 4));
}
*/
