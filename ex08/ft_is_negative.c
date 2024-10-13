/*• Write a function that displays ’N’ or ’P’ depending on the sign of the integer placed
as a parameter. If n is negative, ,show ’N’. If n is positive or zero, show ’P’.

• It must be prototyped in this way:

void ft_is_negative(int n);

Don't forget to prototype the ft_putchar function at the top of your
file.*/

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int	main(void)
{
	ft_is_negative(6);
	return (0);
}

//gcc -Wall -Wextra -Werror -o ft_is_negative ft_is_negative.c ../utils/ft_putchar.c
