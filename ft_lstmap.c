/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:06:34 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/18 15:20:01 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = malloc(sizeof(lst));
		if (!lst)
			return (NULL);
		lst++;
	}
	return (lst);
}
