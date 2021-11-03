/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:17:03 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/03 20:59:56 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	l;
	int	s;

	i = 0;
	j = 0;
	l = ft_strlen(needle);
	s = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (needle[i] != haystack[j] && haystack[j])
	{
		j++;
		while (needle[i] == haystack[j])
		{
			i++;
			j++;
			s++;
			if (s == l)
			{
				printf("%s\n", haystack);
				haystack = &haystack[j - l];
				printf("%s\n", haystack);
				return ((char *)haystack);
			} 	
		}
		i = 0;
		s = 0;
	}
	return (NULL);
}
