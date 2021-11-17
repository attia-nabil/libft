/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:38:16 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:49:47 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*

#include <stdio.h>

int main()
{
    char ch;
 
    ch = 'L';
    printf("%c in lowercase is represented as  %c", ch, ft_tolower(ch));
 
    return 0;
}

*/
