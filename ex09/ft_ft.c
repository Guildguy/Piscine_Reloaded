/*• Write a function that takes a pointer to int as a parameter, and assigns the value '42' to that int.

• It must be prototyped in this way:

void ft_ft(int *nbr);*/

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	n;

	n = 66;
	ft_ft(&n);
	printf("%d", n);
	return (0);
}

//gcc -Wall -Wextra -Werror -o ft_ft ft_ft.c
