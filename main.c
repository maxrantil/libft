/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:28:24 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/12 19:46:00 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

int main(void) 
{  
	char str[] = "a potentially long string";

    char dest[50] = "This is ";
    char dest2[50] = "This is ";
    size_t n = 0;
    //char *a = ft_strlcat(dest, str, n);
    int a = ft_strlcat(dest, str, n);
    int b = strlcat(dest2, str, n);

    printf("ft_strlcat:			%d\n", a);
    printf("strlcat:			%d\n", b);
    printf("Original string: %s\n", str);
    printf("ft_strlcat:			%s\n", dest);
    printf("strlcat:			%s\n", dest2);


    return (0);
}
