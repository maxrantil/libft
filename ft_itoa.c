/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:22:07 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/16 11:58:44 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_length(int nbr)
{
	int		c;

	c = 0;
	if (nbr < 0)
	{
		nbr *= -1;
	}
	if (nbr > 9)
	{
		n_length(nbr / 10);
		n_length(nbr % 10);
	}
	else
	{
		c = c + 1;		
	}
	return (c);
}

char    *ft_itoa(int n)
{
	char	*s;
	int		l;

	l = n_length(n);
	s = (char *)ft_memalloc(sizeof(char) * l +  1);
	return (s);
}
