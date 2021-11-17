/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:43:59 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:44:06 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isalpha() function checks whether a character is an alphabet or not.*/
/*Zero (0)	If the parameter isn't an alphabet.*/
/*Non zero number	If the parameter is an alphabet.*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (ft_isalpha(c) == 0)
         printf("%c is not an alpha.", c);
    else
         printf("%c is an alpha.", c);

    return 0;
}
*/
