/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:47:08 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:47:14 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction memset() remplit les len premiers octets
 de la zone mémoire pointée par b avec l'octet c.*/

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*b1;

	i = 0;
	b1 = (char *)b;
	while (i < len)
	{
		b1[i] = c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>

int main()
{
	char c = 'c';
	char str[50] = "Nabil Attia";
	printf("%s" , ft_memset(str, c, 0));
}
*/
