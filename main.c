#include "libft.h"

int	main()
{
	int	x = -42;
	int y = +42;
	int v = 21;
	int u = 2147483647;
	int o = -2147483648;
	
	ft_putnbr_fd(x, 1);
	ft_putendl("		be: -42 ");
	ft_putnbr_fd(y, 2);
	ft_putendl("		be: 42 ");
	ft_putnbr_fd(v, 3);
	ft_putendl("		be: 21 ");
	ft_putnbr_fd(u, 4); 
	ft_putendl("	be: 2147483647 ");
	ft_putnbr_fd(o, 5);
	ft_putendl("	be: -2147483648 ");
	return (0);
}
