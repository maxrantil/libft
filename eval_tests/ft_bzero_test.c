/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:28:24 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/05 12:28:50 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

int main(void) 
{  
	char	b[] = "Hello World"; 
	char	c[] = "Hello World";

	ft_bzero(b, 5);
	bzero(c, 5);
	printf("ft_bzero:	%s\n", b);
	printf("bzero:		%s\n", c);
	return (0);
}