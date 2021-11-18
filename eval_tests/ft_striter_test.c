/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:50:45 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/18 19:15:28 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void            uf_striter_callback(char *s)
{
	*s = *s + 1;
}

int	main(void)
{
	char        str[] = "Hello";

    ft_striter(NULL, NULL);
    ft_striter(str, NULL);
    ft_striter(str, uf_striter_callback);
    if (strcmp(str, "Ifmmp") != 0)
        ft_putendl("Error");
    return (1);
}
