/*Write a function that displays the alphabet in lowercase letters, in a single
line, in ascending order, starting with the letter ‘a’.

• It must be prototyped in this way:

void ft_print_alphabet(void);

Don't forget to prototype the ft_putchar function at the top of your file.*/

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	a;
	int	z;

	a = 97;
	z = 122;

	while (a <= z)
	{
		ft_putchar(a);
		a++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}

//gcc -Wall -Wextra -Werror -o ft_print_alphabet ft_print_alphabet.c ../utils/ft_putchar.c
