/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:31:50 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/12 10:27:49 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int	i;
	char *ss;

	i = 0;
	ss = (char *)malloc(sizeof(char) * len + 1);
	if (!ss)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ss[i] = '\0';
		return (ss);
	}
	while (len--)
	{
		ss[i++] = s[start++];
	}
	ss[i] = '\0';
	return (ss);
}
