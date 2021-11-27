#define RED(...) printf("\033[;31m" __VA_ARGS__)
#define GREEN(...) printf("\033[0;32m" __VA_ARGS__)
#define CYAN(...) printf("\033[0;36m" __VA_ARGS__)
#define RESET(...) printf("\033[0m" __VA_ARGS__)

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main()
{
	//ft_toupper	

	int	atoupper = 'T';
	int	btoupper = 't';

	if (toupper(atoupper) == ft_toupper(atoupper))
	{
		printf("ft_toupper	TEST ");
		GREEN("OK\n");
		RESET();
	}
        else
	{
		RED("atoupper != 'T'\n");
		RESET();
	}
	if (toupper(btoupper) == ft_toupper(btoupper))
	{
		printf("ft_toupper	TEST ");
		GREEN("OK\n");
		RESET();
	}
	else
	{
		RED("btoupper != 't'\n");   
		RESET();					        
	}
	ft_putchar('\n');

	//ft_tolower
	
	int	atolower = 'T';
	int	btolower = 't';

	if (tolower(atolower) == ft_tolower(atolower))
	{
		printf("ft_tolower	TEST ");
		GREEN("OK\n");
		RESET();
	}
        else
	{
		RED("atolower != 'T'\n");
		RESET();
	}
	if (tolower(btolower) == ft_tolower(btolower))
	{
		printf("ft_tolower	TEST ");
		GREEN("OK\n");
		RESET();
	}
	else
	{
		RED("btolower != 't'\n");   
		RESET();					        
	}
	ft_putchar('\n');

	//ft_memchr
	
	char amemchr[] = "stackoverflow";
	char bmemchr[] = "stackoverflow";
	size_t cmemchr = 0;

	if (memchr(amemchr, 'o', cmemchr) == ft_memchr(bmemchr, 'o', cmemchr))
	{
		printf("ft_memchr	TEST ");
		GREEN("OK\n");
		RESET();
	}
        else
	{
		RED("cmemchr != 0\n");
		RESET();
	}
	cmemchr++;
	if (memchr(amemchr, 'k', cmemchr) == ft_memchr(bmemchr, 'k', cmemchr))
	{
		printf("ft_memchr	TEST ");
		GREEN("OK\n");
		RESET();
	}
        else
	{
		RED("cmemchr != 1\n");
		RESET();
	}
	cmemchr++;
	if (memchr(amemchr, 'v', cmemchr) == ft_memchr(bmemchr, 'v', cmemchr))
	{
		printf("ft_memchr	TEST ");
		GREEN("OK\n");
		RESET();
	}
        else
	{
		RED("cmemchr != 2\n");
		RESET();
	}
	ft_putchar('\n');

	return (0);
}
