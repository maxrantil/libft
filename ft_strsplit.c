/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:35:23 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/12 16:42:37 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	size_t		e;
	char		**ret;
	int		index;

	i = 0;
	e = 0;
	index = 0;
	ret = (char **)malloc(sizeof(char) * 80);
	while (s[i] == c)
	{
		i++;
		e++;
	}
	while (s[e] != c)
		e++;
	ret[index] = ft_strsub(s, i, e - i);
	printf("%s\n", ret[index]);
	return ret;
}
