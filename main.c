/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:03:58 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/11 13:46:18 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	charfunc(char c)
{
	return (c++);
}


int	main()
{
	const char *str = "str";
	char a;

	char (*f)(char) = charfunc;
	a = f('a');
	ft_putstr(ft_strmap(str, charfunc));
	ft_putchar('\n');
	printf("%s\n", ft_strmap(str, &charfunc));
	return 0;
}
