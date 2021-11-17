/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:52:34 by nattia            #+#    #+#             */
/*   Updated: 2021/11/13 12:52:37 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	ptr = malloc(len + 1);
	if (!s || !ptr)
		return (0);
	while (i < ft_strlen(s) && j < len)
	{
		ptr[j++] = s[i++];
	}
	ptr[j] = '\0';
	return (ptr);
}
