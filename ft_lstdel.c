/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:51:09 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/18 16:25:25 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*head;
	t_list	*tmp;

	tmp = *alst;
	while (tmp != NULL)
	{
		head = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = head;
	}
	*alst = NULL;
}
