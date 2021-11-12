/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:22:10 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/12 16:33:07 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		e;
	int		y;
	char	*st;
	char	*blanc;

	blanc = "";
	i = 0;
	e = ft_strlen(s) - 1;
	while ((s[e] == ' ' || s[e] == '\t' || s[e] == '\n') && e--)
	{
		if (!e)
			return (blanc);
	}
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i++;
	y = e - i + 1;
	st = (char *)malloc(sizeof(char) * y + 1);
	if (!st)
		return (NULL);
	e = 0;
	while (y--)
		st[e++] = s[i++];
	st[e] = '\0';
	return (st);
}
