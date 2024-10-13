#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 1;
    while (i * i < nb)
        i++;
    if (i * i == nb)
        return (i);
    else
        return (0);
}

int main(void)
{
    int n;
    int res;

    n = 9;
    res = ft_sqrt(n);
    printf("A raiz de: %d é: %d\n", n, res);
    return (0);
}