/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:52:52 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/29 13:38:38 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED(...) printf("\033[;31m" __VA_ARGS__)
#define GREEN(...) printf("\033[0;32m" __VA_ARGS__)
#define CYAN(...) printf("\033[0;36m" __VA_ARGS__)
#define RESET(...) printf("\033[0m" __VA_ARGS__)

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	//ft_memcpy
	
	void	*mem;

	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	ft_memset(mem, '*', 30);
	
	if (mem == ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14))
	{
		if (mem == ft_memcpy(mem, "zyxwvutst", 0))
		{
			if (mem == ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11))
			{
				printf("ft_memcpy	TEST ");
				GREEN("OK\n");
				RESET();
			}
		}
	}
	else
	{
		printf("ft_memcpy	TEST ");
		RED("NOT OK\n");
		RESET();
	}
	ft_putchar('\n');

	//ft_strcpy
	
	char *str_strcpy[19] = {"cpy this str", "das\0assd\0", "  \t \0 \t  ", "         ", "yes", "OK"};
  	char dst_strcpy[19];
	char dst1_strcpy[19];
	int		i = 0;

	while (i < 5 && strcmp(str_strcpy[i], strcpy(dst_strcpy, str_strcpy[i])) == strcmp(str_strcpy[i], ft_strcpy(dst1_strcpy, str_strcpy[i])))
		i++;
	if (i == 5)
	{
		printf("ft_strcpy	TEST ");
		GREEN("OK");
		RESET("	(%d of %d complete)\n", i, i);
	}
	else
	{
		printf("ft_strcpy	TEST ");
		RED("NOT OK\n");
		RESET();
	}
	ft_putchar('\n');

	//ft_strcat
	
	i = 0;

	const	char *dst[] = {"cpy this str", "        ", "\0\0\0\0\0\0\0\0", "\t \0  \v ", "     \0   \0", "yes"};
  	char str[30] = ":into: this str";

	const	char *dst1[] = {"cpy this str", "        ", "\0\0\0\0\0\0\0\0", "\t \0  \v ", "     \0   \0", "yes"};
  	char str1[30] = ":into: this str";
	
	while (i < 5)
	{
		char *cat1 = ft_strcat(str1, dst1[i]);
		char *cat2 = strcat(str, dst[i]);
		while (strcmp(cat1, cat2) == 0)
			i++;
	}
	if (i == 5)
	{
		printf("ft_strcat	TEST ");
		GREEN("OK");
		RESET("	(%d of %d complete)\n", i, i);
	}
	else
	{
		printf("ft_strcpy	TEST ");
		RED("NOT OK\n");
		RESET();
	}
	ft_putchar('\n');
	return (0);
}
