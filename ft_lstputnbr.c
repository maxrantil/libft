/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:39:48 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/23 13:54:42 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstputnbr(t_list **alst)
{
	while ((*alst)->next != NULL)
	{
		ft_putnbr((int)(*alst)->content);
		write(1, "\t", 1);
		(*alst) = (*alst)->next;
	}
}
