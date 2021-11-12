/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:22:10 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/12 14:48:05 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		e;
	int		y;
	char	*st;
	char	*blanc;

	i = 0;
	j = 0;
	e = ft_strlen(s) - 1;
	while (s[e] == ' ' || s[e] == '\t' || s[e] == '\n')
		if (!e)
		{
			blanc = "";
			return (blanc);
		}		
		e--;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
         i++;
	y = e - i + 1;
	st = (char *)malloc(sizeof(char) * y + 1);
	if (!st)
		return (NULL);
	while (y--)
		st[j++] = s[i++];
	st[j] = '\0';
	return (st);
}
