/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:49:11 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/16 19:35:51 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]) && --n)
	{
		i++;
	}
	if (s1[i] - s2[i] == 0)
		return (1);
	return (0);
}
