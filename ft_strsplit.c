/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:35:23 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/29 19:56:57 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_freemal(char **ret, int index)
{
	while (index--)
	{
		if (ret[index])
			free(ret[index]);
	}		
	free(ret);
	return (NULL);
}

static int	word_count(char const *s, char c)
{
	int	state;
	int	wc;

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

static char	**make_ret(char const *s, char c, char **ret, size_t e)
{
	size_t	i;
	int		index;

	i = 0;
	index = 0;
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
		if (!ret[index])
			return (ft_freemal(ret, index));
		index++;
		i = e;
	}
	ret[index] = 0;
	return (ret);
}

char	**ft_strsplit(char const *s, char c)
{
	char		**ret;
	size_t		e;

	e = 0;
	if (!s)
		return (NULL);
	ret = (char **)malloc(sizeof(char *) * word_count(s, c) + 1);
	if (!ret)
		return (NULL);
	ret = make_ret(s, c, ret, e);
	return (ret);
}
