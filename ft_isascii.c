/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:44:22 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:44:26 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Test a character to see if it's a 7-bit ASCII character*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (ft_isascii(c) == 0)
         printf("%c is not an ascii.", c);
    else
         printf("%c is an ascii.", c);

    return 0;
}
*/
