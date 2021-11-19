/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:06:34 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/19 17:40:43 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	head = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (!head)
		return (NULL);
	temp = head;
	while (lst->next)
	{
		temp->next = ft_lstnew(f(lst->next)->content,
				f(lst->next)->content_size);
		if (!lst)
			return (NULL);
		temp = temp->next;
		lst = lst->next;
	}
	return (head);
}
