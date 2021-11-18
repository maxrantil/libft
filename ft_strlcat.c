/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:15:06 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/18 20:19:47 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	int		x;
	size_t	sl;

	i = 0;
	j = ft_strlen(dst);
	x = (int)(dstsize - ft_strlen(dst) - 1);
	sl = ft_strlen(dst) + ft_strlen(src);
	if (!dstsize)
		return (ft_strlen(src));
	while (x > 0 && src[i])
	{
		dst[j] = src[i];
		x--;
		i++;
		j++;
	}
	dst[j] = '\0';
	if ((int)dstsize >= (int)ft_strlen(dst))
		return ((int)ft_strlen(dst) + (int)ft_strlen(src));
	return ((int)dstsize + (int)ft_strlen(src));
}
