#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	while (i <= nb)
	{
		if ( nb <= 0)
			return (0);
		else
			res *= i;
		i++;
	}
	return (res);
}

int	main(void)
{
	int	n;
	int	res;

	n = 5;
	res = ft_iterative_factorial(n);
	printf("%d\n", res);
	return (0);
}
