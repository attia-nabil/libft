/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:37:58 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:38:06 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction alloue un bloc de mémoire
 en initialisant tous ces octets à la valeur 0. */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main(void)
// {
// 	char *str;
// 	str = ft_calloc(100, sizeof(char));
// 	for (int i = 0; i < 99 ; i++)
// 	{
// 		printf(" %d is ; |%d| \n" , i + 1,str[i]);
// 	}
// 	return 0;
// }
