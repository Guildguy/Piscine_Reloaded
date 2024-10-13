#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb -1));
}

int	main(void)
{
	int	n;
	int	res;

	n = 5;
	res = ft_recursive_factorial(n);
	printf("%d\n", res);
	return (0);
}