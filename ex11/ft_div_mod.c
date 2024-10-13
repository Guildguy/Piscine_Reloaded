/*• Write a prototyped ft_div_mod function like this:

void ft_div_mod(int a, int b, int *div, int *mod);

• This function divides the parameters a by b and stores the result in the int pointed to by div. It also stores the remainder of the division of a by b in the int pointed to by mod.*/

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d\nmod: %d", div, mod);
}


