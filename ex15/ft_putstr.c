void    ft_putchar(char c);

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

int main(void)
{
    ft_putstr("sixsixsix\n");
    return (0);
}