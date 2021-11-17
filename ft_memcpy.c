/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:41:55 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:46:36 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction memcpy() copie n octets depuis la zone mémoire
       src vers la zone mémoire dest.
         La fonction memcpy() renvoie un pointeur sur dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*src1;
	char		*dest1;

	src1 = src;
	dest1 = dest;
	i = 0;
	if (!src1 && !dest1)
		return (NULL);
	if (src == dest)
		return (dest);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int main()
{
	char str[50] = "nabil";
	char dst[50] = "145551337";
	printf("dsr Before : %s\n" , dst);
	ft_memcpy(dst, str, 5);
	printf("dst After : %s\n" , dst);
	return 0;
}*/
