/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:35:23 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/16 19:54:24 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	state;
	int	OUT;
	int	IN;
	int	wc;

	OUT = 0;
	IN = 1;
	wc = 0;
	state = OUT;
	while (*s)
	{
		if (*s == c)
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++wc;
		}
		++s;
	}
	return (wc);
}

char	**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	size_t			e;
	char			**ret;
	int				index;
	int				wc;

	if (!s)
		return (NULL);
	i = 0;
	e = 0;
	index = 0;
	wc = word_count(s, c);
	ret = (char **)malloc(sizeof(char *) * wc + 1);
	if (!ret)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			e++;
		}
		if (s[i] == '\0')
			break ;
		while (s[e] != c)
		{
			e++;
			if (!s[e])
				break ;
		}
		ret[index] = ft_strsub(s, i, e - i);
		index++;
		i = e;
	}
	ret[index] = 0;
	return (ret);
}
