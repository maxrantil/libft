/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:00:48 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/23 16:24:59 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list	*list;
	t_list	*last;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return ;
	list->content = new->content;
	list->next = NULL;
	if (*alst == NULL)
	{
		*alst = list;
		return ;
	}
	last = *alst;
	while (last->next != NULL)
		last = last->next;
	last->next = list;
}
