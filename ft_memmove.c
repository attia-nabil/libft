/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:33:57 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:46:54 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memmove - Copier une zone mémoire.

 La fonction memmove() copie n octets depuis la zone mémoire src vers la
       zone mémoire dest. 
*/

/* * for overlap : 
* *  - memcpy might always copy addresses from low to high. 
* If the destination overlaps after the source,
* this means some addresses will be overwritten before copied. 
*   - memmove would detect this and copy in the other direction 
*   from high to low - in this case.
* */

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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char buffer[50] = "abcdefgh";
	printf("%s\n" , ft_memmove(buffer + 1, buffer, 4));
	printf("%s\n" , ft_memcpy(buffer + 1, buffer, 4));
}
