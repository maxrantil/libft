#include "libft.h"

int	main()
{
	
	size_t	size1 = 4;
	void    **mem = NULL;

    *mem = malloc(sizeof(mem) * size1);
	if (!mem)
		ft_putstr("no malloc\n");
    ft_bzero(mem, size1);


	printf("%p\n", *mem);

	void	**size = NULL;
	void	*sz = NULL;

	printf("sz:	%p\n", sz);
	printf("size:	%p\n", (void *)size);

	ft_memdel(mem);
	printf("%p\n", *mem);
	printf("done.\n");



    return 0;
}
