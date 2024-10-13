/*• Write a function that displays all the digits, on a single line, in order
growing.

• It must be prototyped in this way:

void ft_print_numbers(void);

Don't forget to prototype the ft_putchar function at the top of your file.*/

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	one;
	int	nine;

	one = 48;
	nine = 57;

	while (one <= nine)
	{
		ft_putchar(one);
		one++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return(0);
}

//gcc -Wall -Wextra -Werror -o ft_print_numbers ft_print_numbers.c ../utils/ft_putchar.c
