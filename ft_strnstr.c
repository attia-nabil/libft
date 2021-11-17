/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:49:05 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:49:12 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	size_t	i;
	size_t	check;

	i = -1;
	str = (char *)haystack;
	if (*needle == '\0' || haystack == needle)
		return (str);
	while (*str != '\0' && len--)
	{
		if (*str == *needle)
		{
			check = 1;
			while (needle[++i] != '\0')
				if (str[i] != needle[i])
					check = 0;
			if (i > len)
				break ;
			if (check == 1)
				return (str);
		}
		str++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
//    const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "Bar";
//     char *ptr;

//     ptr = strnstr(largestring, smallstring, 4); 
//     printf("%s" , ptr);
//     return 0;
// }
