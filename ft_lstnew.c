/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:35:00 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/19 15:07:31 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t	content_size)
{
	t_list	*lstnew;

	lstnew = (t_list *)malloc(sizeof(t_list));
	if (!lstnew)
		return (NULL);
	lstnew->content = malloc(sizeof(content));
	if (!lstnew->content)
	{
		free(lstnew);
		lstnew = NULL;
		return (NULL);
	}
	if (content == 0)
	{
		lstnew->content = NULL;
		lstnew->content_size = 0;
	}
	else
	{
		lstnew->content = ft_memcpy(lstnew->content, content, content_size);
		lstnew->content_size = content_size;
	}
	lstnew->next = NULL;
	return (lstnew);
}
