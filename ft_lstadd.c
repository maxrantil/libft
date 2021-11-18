/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:00:31 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/18 18:06:03 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd(t_list **alst, t_list *new)
{
	new =  *alst;
	if (new)
		new->next = ft_lstnew(new, sizeof(alst));
	else
		*alst = ft_lstnew(new, sizeof(alst));
}
