#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str != '\0')
    {
        i++;
        str++;
    }    
    return (i);
}

int main(void)
{
    char    str[100] = "test";
    int res = ft_strlen(str);
    printf("%d\n", res);
    return (0);
}