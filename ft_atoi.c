/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:58:30 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/24 17:19:33 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	unsigned long int	res;
	long int			minus;

	res = 0;
	minus = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
		str++;
	else if (*str == '-')
	{
		str++;
		minus = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - 48;
		if (res > 9223372036854775807)
		{
			if (minus < 0)
				return (0);
			return (-1);
		}
		str++;
	}
	return (res * minus);
}

int main()
{
    printf("%d\n", ft_atoi("-+42"));
    printf("%d\n", atoi("-+42"));
    printf("\n");
    printf("%d\n", ft_atoi("+-42"));
    printf("%d\n", atoi("+-42"));
    printf("\n");
    printf("%d\n", ft_atoi("1000"));
    printf("%d\n", atoi("1000"));
    printf("\n");
    printf("%d\n", ft_atoi("0"));
    printf("%d\n", atoi("0"));
    printf("\n");
    printf("%d\n", ft_atoi("-1000"));
    printf("%d\n", atoi("-1000"));
    printf("\n");
    printf("%d\n", ft_atoi("               +98765"));
    printf("%d\n", atoi("               +98765"));
    printf("\n");
    printf("%d\n", ft_atoi("-2147483648"));
    printf("%d\n", atoi("-2147483648"));
    printf("\n");
    printf("%d\n", ft_atoi("   -123abc123"));
    printf("%d\n", atoi("   -123abc123"));
    printf("\n");
    printf("%d\n", ft_atoi(""));
    printf("%d\n", atoi(""));
    printf("\n");
    printf("%d\n", ft_atoi("aa"));
    printf("%d\n", atoi("aa"));
    printf("\n");
    printf("%d\n", ft_atoi("-99999999999999999999999"));
    printf("%d\n", atoi("-99999999999999999999999"));
    printf("\n");
    printf("%d\n", ft_atoi("-9223372036854775807"));
    printf("%d\n", atoi("-9223372036854775807"));
    printf("\n");
    printf("%d\n", ft_atoi("-9223372036854775808"));
    printf("%d\n", atoi("-9223372036854775808"));
    printf("\n");
    printf("%d\n", ft_atoi("+99999999999999999999999"));
    printf("%d\n", atoi("+99999999999999999999999"));
    printf("\n");
    printf("%d\n", ft_atoi("-9223372036854775809"));
    printf("%d\n", atoi("-9223372036854775809"));
    printf("\n");
    printf("%d\n", ft_atoi("9223372036854775809"));
    printf("%d\n", atoi("9223372036854775809"));
    return 0;
}
