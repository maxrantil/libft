/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:22:07 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/15 18:47:42 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_putstrnbr(int n)
{
	char	*s;
	long	nbr;
	int		i;

	i = 0;
	nbr = (long)n;
	s = (char *)ft_memalloc(sizeof(int));
	if (!s)
		return (NULL);
	if (nbr < 0)
	{
		s[i++] = '-';
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putstrnbr(nbr / 10);
		ft_putstrnbr(nbr % 10);
	}
	else
	{
		s[i++] = nbr + 48;
	}
	s[i] = '\0';
	return (s);
}

char    *ft_itoa(int n)
{
	char	*s;	
	s = (char *)ft_memalloc(sizeof(int));
	if (!s)
		return (NULL);
	s = ft_putstrnbr(n);
	return (s);
}
