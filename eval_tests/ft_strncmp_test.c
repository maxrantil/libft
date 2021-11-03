/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:28:24 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/03 12:52:59 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

int main(void) 
{  
 	char *str = "cmp this str to str1";
	char *str1 = "cmp this2 str to str1";
	char *str2 = "cmp t2his str to str";
	char *str3 = "cmp2 this str to str2";

    printf("strcmp return:	%d.	ft_strcmp return:	%d.\n", strncmp(str, str1, 4), ft_strncmp(str, str1, 4));
    printf("strcmp return:	%d.	ft_strcmp return:	%d.\n", strncmp(str1, str2, 9), ft_strncmp(str1, str2, 9));
    printf("strcmp return:	%d.	ft_strcmp return:	%d.\n", strncmp(str3, str, 7), ft_strncmp(str3, str, 7));
    printf("strcmp return:	%d.	ft_strcmp return:	%d.\n", strncmp(str2, str3, 7), ft_strncmp(str2, str3, 7));

	return 0; 
}
