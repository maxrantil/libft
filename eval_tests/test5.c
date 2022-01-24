/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:42:17 by mrantil           #+#    #+#             */
/*   Updated: 2021/12/17 17:13:07 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED(...) printf("\033[;31m" __VA_ARGS__)
#define GREEN(...) printf("\033[0;32m" __VA_ARGS__)
#define CYAN(...) printf("\033[0;36m" __VA_ARGS__)
#define RESET(...) printf("\033[0m" __VA_ARGS__)

#include <stdio.h>
#include "../libft.h"

/*- - ft_memalloc
**-	- ft_putchar
**-	- ft_putstr
**-	- ft_putendl
**-	- ft_putnbr
**-	- ft_strnew
**-	- ft_strdel
**-	- ft_strclr
**-	- ft_strequ
**-	- ft_strnequ
**-	- ft_strsub
**-	- ft_strjoin
**-	- ft_putchar_fd
**-	- ft_putstr_fd
**-	- ft_putendl_fd
**-	- ft_putnbr_fd
*/


size_t	test_ft_memalloc()
{
	char *str;

	str = (char *)ft_memalloc(30);
	if (!str)
	{
		printf("ft_memalloc     TEST ");
        RED("NOT OK (empty)\n");
        RESET();
	}
	else
	{
		printf("\nft_memalloc	TEST ");
        GREEN("OK");
        RESET(" (1 of 1 complete)\n");
	}
	return (0);
}

int	test_ft_putchar(void)
{
	char	a = 'a';
	int		i = 0;
	while (a < 'z')
	{
		i++;
		a++;
	}
	if (a == 'z')
	{
		printf("\nft_putchar	TEST ");
        GREEN("OK");
        RESET(" (%d of %d complete)\n", i , i);
	}
	else 
	{
		printf("ft_putchar    TEST ");
        RED("NOT OK\n");
        RESET();	
	}
	return 0;
}

int	test_ft_putstr(void)
{
	char *str = "testing this";
	
	if (!strcmp(str, "testing this"))
	{
		printf("\nft_putstr	TEST ");
        GREEN("OK");
        RESET(" (1 of 1 complete)");
	}
	
	return 0;
}



int	main()
{
	test_ft_memalloc();
	test_ft_putchar();
	test_ft_putstr();
	
	return 0;
}

/*- - ft_memalloc
**-	- ft_putchar
**-	- ft_putstr
**-	- ft_putendl
**-	- ft_putnbr
**-	- ft_strnew
**-	- ft_strdel
**-	- ft_strclr
**-	- ft_strequ
**-	- ft_strnequ
**-	- ft_strsub
**-	- ft_strjoin
**-	- ft_putchar_fd
**-	- ft_putstr_fd
**-	- ft_putendl_fd
**-	- ft_putnbr_fd
*/