/*• Write a function that swaps the value of two integers whose addresses are passed
as a parameter.

• It must be prototyped in this way:

void ft_swap(int *a, int *b);*/

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	a;
	int	b;
	
	a = 6;
	b = 66;
	ft_swap(&a, &b);
	printf("a: %d\nb: %d", a, b);
	return (0);
}
