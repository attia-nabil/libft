/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:45:05 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:45:14 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
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

    if (ft_isprint(c) == 0)
         printf("%c is not an print.", c);
    else
         printf("%c is an print.", c);

    return 0;
}

*/
