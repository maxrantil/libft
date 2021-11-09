/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:52:55 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/09 18:51:37 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnew(size_t size)
{
	char	*str;

	str = malloc(sizeof(size));
	if (!str)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
