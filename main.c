/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:06:12 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/23 14:12:05 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	t_list *head;
	
	head = malloc(sizeof(t_list));
	if (!head)
		return (0);	
	head->content = (int *)5;
	head->next = NULL;

	ft_lstnew(head, sizeof(t_list));
//	ft_lstnew(head->next, sizeof(t_list));
//	ft_lstnew(head->next->next, sizeof(t_list));

	ft_lstputnbr(&head);
	return 0;
}
