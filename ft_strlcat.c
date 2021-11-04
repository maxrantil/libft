/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:15:06 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/04 16:36:59 by mrantil          ###   ########.fr       */
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
	while (x && src[i])
	{
		dst[j] = src[i];
		x--;
		i++;
		j++;
	}
	if (x == 0)
		dst[j] = '\0';
	return (sl);
}
