/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:16:23 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/17 12:22:02 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static	size_t	if_error(size_t t)
{
	if (!t)
		return (0);
	t--;
	return (t);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size	size;

	size.i = 0;
	size.j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[size.j] && len)
	{
		size.x = size.j;
		size.t = len;
		while (haystack[size.x] == needle[size.i])
		{
			size.i++;
			size.x++;
			if (size.i == ft_strlen(needle))
				return (&((char *)haystack)[size.j]);
			if_error(size.t);
		}
		size.j++;
		len--;
	}
	return (NULL);
}
