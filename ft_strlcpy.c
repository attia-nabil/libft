/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:35:21 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:48:09 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -- The strlcpy() and strlcat() 
 * functions copy and concatenate strings respectively. 
 * They're designed to be safer, more consistent,
 * and less error-prone replacements for strncpy() and strncat().
 * -- Return : For strlcpy() that means the length of src.
 * */

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

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char src[50] = "nabil";
// 	char dst[50] = "";
// 	printf("dst Before : %s\n" , dst);
// 	ft_strlcpy(dst, src, 10);
// 	printf("dst After : %s\n" , dst);
// 	printf("len : %zu\n" , ft_strlcpy(dst, src, 5));
// 	return 0;
// 	// char	dst[100];
// 	// char	*src = "hello world";
// 	// strlcpy(NULL, src, 10); //printf("%s")
// }
