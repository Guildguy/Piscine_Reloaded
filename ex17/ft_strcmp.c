#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main(void)
{
    char    stra[20] = "a string";
    char    strb[20] = "another string";
    int res = ft_strcmp(stra, strb);
    if (res > 0)
        printf("%s é maior que %s\n", stra, strb);
    else if (res == 0)    
        printf("%s é igual %s\n", stra, strb);
    else
        printf("%s é menor que %s\n", stra, strb);
}