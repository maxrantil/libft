/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:16:23 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/12 20:12:09 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		sl;
	size_t		x;
	size_t		t;

	i = 0;
	j = 0;
	sl = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[j] && len)
	{
		x = j;
		t = len;
		while (haystack[x] == needle[i])
		{
			i++;
			x++;
			if (i == sl)
				return (&((char *)haystack)[j]);
			if (!t)
				return (NULL);
			t--;
		}
		j++;
		len--;
	}
	return (NULL);
}
