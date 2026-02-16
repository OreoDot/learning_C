#include <stdio.h>

char* ft_rest(char *str)
{
    int i;
    i = 0;

    while (str[i])
    {
        i++;
    }
    if (i > 4)
    {
        str[4] = 'a';
    }
    return (str);
}

int main()
{
    char word[] = "strings";
    printf("%s\n", ft_rest(word));
}