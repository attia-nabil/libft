/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:37:32 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:49:58 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}


#include <stdio.h>

int main()
{
    char ch;
 
    ch = 108;
    printf("%c in uppercase is represented as  %c", ch, ft_toupper(ch));
 
    return 0;
}

