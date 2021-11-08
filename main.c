#include "libft.h"

int	main()
{
	size_t array[4];
    //size_t size = 4;
    const char *str = "Say hello to my little friend";

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
//  array[0] = 0; // assign int to char

    printf("%zu %zu %zu %zu\n", array[0], array[1], array[2], array[3]);


    printf("%s\n", ft_strdup(str));

//  printf("%d %zu %zu %zu\n", ft_memalloc(&array), array[1], array[2], array[3]    );
    return 0;
}
