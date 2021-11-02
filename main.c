/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:28:24 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/02 21:12:05 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include "libft.h"  
#include <string.h>
#include <ctype.h>

#define EX 3

int main(void) 
{  
#pragma region FT_STRCPY  // ft_strcpy 

#if EX==1 

	char str[13] = "cpy this str";
  	char dst[13];

	printf("strcpy: %s\n", strcpy(dst, str));
    printf("ft_strcpy: %s\n", ft_strcpy(dst, str));

#endif 
#pragma endregion        


#pragma region FT_TOUPPER // ft_toupper

#if EX==2

	int str = 'T';
    int str1 = 't';

    printf("ft_toupper: %d\n", ft_toupper(str));
    printf("ft_toupper: %d\n", ft_toupper(str1));
    printf("toupper: %d\n", toupper(str));
    printf("toupper: %d\n", toupper(str1));
 
#endif
#pragma endregion


#pragma region FT_STRLEN

#if EX==3

	const char *str = "This str is 19 int";
	
	printf("strlen: 	%zu\n", strlen(str));
	printf("ft_strlen:	%zu\n", ft_strlen(str));

#endif
#pragma endregion
	return 0; 
}
