/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:30:11 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:36:16 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La  fonction bzero() met à 0 les n premiers octets du bloc
       pointé par s. 
	   bzero -- write zeroes to a byte string
	   */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*

#include <stdio.h>

int main()
{
	char str[50]= "nabil attia";
	printf("Str Before : %s\n" , str);
	ft_bzero(str, 5);
	printf("Str After : %s\n" , str);
	return 0;	
}
*/
