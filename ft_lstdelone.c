/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:45:10 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/18 15:44:39 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list	**tmp = NULL;

	del()
	if (alst != NULL)
	{
		*tmp = *alst;
		free(tmp);
		*alst = NULL;
	}
}
