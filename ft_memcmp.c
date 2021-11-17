/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:46:18 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:46:26 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*x1;
	unsigned char	*x2;

	x1 = (unsigned char *)s1;
	x2 = (unsigned char *)s2;
	i = 0;
	if (!s1 && !s2)
		return (0);
	while (i < n)
	{
		if (x1[i] != x2[i])
			return (x1[i] - x2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main () {
//    char str1[15] = "abedef";
//    char str2[15] = "abcdef";
//    int ret;

//    ret = ft_strncmp(str1, str2, 4);

//    if(ret < 0) {
//       printf("str1 is less than str2\n");
//    } else if(ret > 0) {
//       printf("str2 is less than str1\n");
//    } else {
//       printf("str1 is equal to str2\n");
//    }
//    printf("Retournée %d\n" , ret);
//    return(0);
// }
