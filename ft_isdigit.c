/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:44:41 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:44:49 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isdigit(c) is a function in C which can be used to 
 check if the passed character is a digit or not.
 It returns a non-zero value if it’s a digit else it returns 0. For example, 
 it returns a non-zero value for ‘0’ to ‘9’ and zero for others. */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

    if (ft_isdigit(c) == 0)
         printf("%c is not an digit.", c);
    else
         printf("%c is an digit.", c);

    return 0;
}

*/
