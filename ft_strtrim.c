/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:54:38 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/22 12:56:37 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		e;
	size_t		start;
	char		*st;

	if (!s)
		return (NULL);
	i = 0;
	e = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	start = i;
	if (i != ft_strlen(s))
	{
		while (s[e] == ' ' || s[e] == '\t' || s[e] == '\n')
		{
			e--;
			i++;
		}
	}
	st = ft_strsub(s, start, ft_strlen(s) - i);
	if (!st)
		return (NULL);
	return (st);
}
