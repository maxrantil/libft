/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:28:24 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/05 12:09:03 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

int main(void) 
{  
	char	b[] = "Hello World"; 
	int		c 	= 'a';

	ft_memset(b, c, 5);
	printf("%s\n", b);
	return (0);
}
