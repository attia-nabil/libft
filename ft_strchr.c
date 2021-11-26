/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:39:21 by nattia            #+#    #+#             */
/*   Updated: 2021/11/26 15:24:22 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cette fonction recherche la première occurrence du caractère
 passé en second paramètre dans la chaîne de caractères 
 spécifiée via le premier paramètre.
 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (!c)
		return ((char *)(s + i));
	return (NULL);
}
