/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:15:06 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/17 10:43:09 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	x;
	size_t	sl;

	i = 0;
	j = ft_strlen(dst);
	x = dstsize - ft_strlen(dst) - 1;
	sl = ft_strlen(dst) + ft_strlen(src);
	if (!dstsize)
		return (ft_strlen(src));
	if (ft_strlen(dst) > dstsize)
		return (ft_strlen(src) + dstsize);
	while (x && src[i] != '\0')
	{
		dst[j] = src[i];
		x--;
		i++;
		j++;
	}
	dst[j] = '\0';
	return (sl);
}
