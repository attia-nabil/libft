/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:36:42 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:47:59 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction strcat() ajoute la chaîne src à la fin de la chaîne dest
 en écrasant le caractère nul (« \0 ») à la fin de dest */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	if (!dst && size == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (size <= dstlen)
		return (srclen + size);
	size = size - dstlen;
	while (*dst)
		dst++;
	ft_strlcpy(dst, src, size);
	return (srclen + dstlen);
}

/*

#include <stdio.h>

int main()
{
	char src[50] = "nabil";
	char dst[50] = "attia";
	printf("dst Before : %s\n" , dst);
	size_t len = ft_strlcat(dst, src, 3);
	printf("dst After : %s\n" , dst);
	printf("return : %zu\n" , len);
	return 0;
}

*/
