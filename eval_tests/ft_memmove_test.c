/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:17:29 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/05 21:38:31 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	main()
{
	char str[] = "stackoverflow";
	char str1[] = "stackoverflow";
	char str2[] = "stackoverflow";
	char str3[] = "stackoverflow";

	//char dst[60] = "ABCDEFGHIJKLMNOP";
	//char dst1[60] = "ABCDEFGHIJKLMNOP";
	//char dst2[60] = "ABCDEFGHIJKLMNOP";
	//char dst3[60] = "ABCDEFGHIJKLMNOP";
	size_t x = 7;

	printf("		%s\n\n", str);

	memmove(str + 5, str, x);
	ft_memmove(str1 + 5, str1, x);
	memcpy(str2 + 5, str2, x);
	ft_memcpy(str3 + 5, str3, x);

	printf("memmove:	%s\n", str);
	printf("ft_memmove	%s\n", str1);
	printf("\n");
	printf("memcpy:		%s\n", str2);
	printf("ft_memcpy:	%s\n", str3);


	return (0);
/*
int main()
{
    char csrc[100] = "Geeksfor";
    char psrc[100] = "HELLO WORLD!! Sd";
    memmove(csrc+5, psrc, 5);
    printf("memmmove:		%s\n", csrc);


    char csrc2[100] = "Geeksfor";
    char psrc2[100] = "HELLO WORLD!! Sd";
    ft_memmove(csrc2+5, psrc2, 5);
    printf("ft_memmove:		%s\n", csrc2);

    char csrc3[100] = "Geeksfor";
    memmove(csrc3+5, csrc3, 5);
    printf("\nmemmove:		%s\n", csrc3);


    char csrc4[100] = "Geeksfor";
    ft_memmove(csrc4+5, csrc4, 5);
    printf("ft_memmove:		%s\n", csrc4);

    return 0;
	*/
}
