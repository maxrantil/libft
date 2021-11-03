/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:28:24 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/03 16:36:59 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

int main(void) 
{  
	/*char dst[29] = "cpy this str";
  	const char str[29] = ":into: this str";
	char dst1[29] = "cpy this str";
  	const char str1[29] = ":into: this str";
	*/
	//char dst2[13]; 
  	const char str2[18] = "dub this str";
	//char dst3[13];
  	const char str3[18] = "dub this str";


   // printf("ft_strdup:		%s\n", ft_strdup(dst1, str1));
	//printf("strdup:			%s\n", strdup(dst, str));
	printf("ft_strdup:		%s\n", ft_strdup(str2));
	printf("strdup:			%s\n", strdup(str3));


	return 0; 
}
