/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:17:29 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/06 16:28:15 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	main()
{
    char *str = "cm1p this str to str1";
    char *str1 = "cmp1 this str to str2";
    char *str2 = "cmp 1this str to str3";
    char *str3 = "cmp t1his str to str4";
 	
	char *str4 = "cm1p this str to str1";	
 	char *str5 = "cmp1 this str to str2";	
	char *str6 = "cmp 1this str to str3";	
	char *str7 = "cmp t1his str to str4";	

	size_t var = 4;
	
    printf("memcmp return:  %d. ft_memcmp return:   %d.\n", memcmp(str, str1, var), ft_memcmp(str4, str5, var));
    printf("memcmp return:  %d. ft_memcmp return:   %d.\n", memcmp(str1, str2, var), ft_memcmp(str5, str6, var));
    printf("memcmp return:  %d. ft_memcmp return:   %d.\n", memcmp(str3, str, var), ft_memcmp(str7, str4, var));
    printf("memcmp return:  %d. ft_memcmp return:   %d.\n", memcmp(str2, str3, var), ft_memcmp(str6, str7, var));

	return (0);
}
