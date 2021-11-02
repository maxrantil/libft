#include <stdio.h>
#include <ctype.h>
int	main()
{
	int str = 'T';
	int str1 = 't';

	printf("ft_toupper: %d\n", ft_toupper(str));
	printf("ft_toupper: %d\n", ft_toupper(str1));
	printf("toupper: %d\n", toupper(str));
    printf("toupper: %d\n", toupper(str1));

	return 0;
}
