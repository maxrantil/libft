/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 09:52:05 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/11 13:47:04 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	char *ns;

	i = 0;
	ns = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[i])
	{
		ns[i] = s[i];
		i++;
	}
	ns[i] = '\0';
	f(ns[i]);
	return (ns);
}
