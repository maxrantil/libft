/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:16:23 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/04 16:49:25 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		sl;
	size_t		x;

	i = 0;
	j = 0;
	sl = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[j] && len)
	{
		i = 0;
		len--;
		x = j;
		while (haystack[x] == needle[i])
		{
			i++;
			x++;
			if (i == sl)
				return (&((char *)haystack)[j]);
		}
		j++;
	}
	return (NULL);
}
