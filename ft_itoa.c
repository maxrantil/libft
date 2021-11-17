/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:22:07 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/17 10:09:09 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_length(long nbr)
{
	int		c;

	c = 1;
	if (nbr <= 0)
	{
		nbr *= -1;
		if (nbr == 0)
			c = 0;
		c++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int nbr)
{
	char	*s;
	int		l;
	long	n;
	int		ll;

	n = nbr;
	l = n_length(n);
	ll = l;
	s = (char *)malloc(sizeof(char) * l + 1);
	if (!s)
		return (NULL);
	while (l--)
	{
		if (n < 0)
			n *= -1;
		s[l] = (n % 10) + 48;
		n = n / 10;
	}
	if (s[0] == '0' && s[1] != '\0')
		s[0] = '-';
	s[ll] = '\0';
	return (s);
}
