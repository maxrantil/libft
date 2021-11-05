/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrantil <mrantil@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:28:24 by mrantil           #+#    #+#             */
/*   Updated: 2021/11/05 13:51:13 by mrantil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

int main(void) 
{  
	struct person 			{

        int		age;
        char	name[12];

    }	man = { 34, "George" };
	
	struct person1			{

		int		age1;
		char	name1[12];

	}	man1 = { 44, "Georgeieboi" };


	void			*buffer;
	void			*buffer1;
	int				*bufint;
	int				*bufint1;
    unsigned char	*bufchar;
	unsigned char	*bufchar1;
    int				x;
	int				x1;

    struct person guy;
	struct person1 guy1;

    /* output the structure */
    printf("memcpy:		%s is %d years old\n",man.name, man.age);
	printf("ft_memcpy:      %s is %d years old\n",man1.name1, man1.age1);

	/* allocate the void buffer */
    buffer = malloc( sizeof(struct person) );
    if( buffer==NULL )
    {
        fprintf(stderr,"Unable to allocate memory\n");
        exit(1);
    }
	buffer1 = malloc( sizeof(struct person1) );
    if( buffer1==NULL )
    {
        fprintf(stderr,"Unable to allocate memory\n");
        exit(1);
	}

	/* copy memory */
	memcpy(buffer, &man, sizeof(struct person));
	ft_memcpy(buffer1, &man1, sizeof(struct person1));

    /* copy structure */
    guy = man;
	guy1 = man1;

    /* output the duplicate structure */
    printf("memcpy:		%s is %d years old\n",guy.name, guy.age);
	printf("ft_memcpy:	%s is %d years old\n",guy1.name1, guy1.age1);

	/* dump the buffer */
    puts("Buffer dump:");
        /* reference (void)buffer as (char)bufchar */
    bufchar = buffer;
    for( x=0; x<(int)sizeof(struct person); x++ )
    {
        printf(" %02X",*(bufchar+x));
    }
    putchar('\n');
	bufchar1 = buffer1;
    for( x=0; x<(int)sizeof(struct person1); x++ )
	{
	printf(" %02X",*(bufchar1+x));
	}
	putchar('\n');

	/* sneak into the buffer */
        /* reference (void)buffer as (int)bufint */
    bufint = (int *)buffer;
	bufint1 = (int *)buffer1;
        /* reference (void)buffer (offset 4) as (char)bufchar */
    bufchar = (unsigned char *)buffer+4;
	bufchar1 = (unsigned char *)buffer1+4;
        /* data can now be accessed directly */
    printf("Int portion:		%d\n",*(bufint));
	printf("Int portion(ft):	%d\n",*(bufint1));
    printf("String portion:		%s\n",bufchar);
	printf("String portion(ft):	%s\n",bufchar1);

    return(0);
}
