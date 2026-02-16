#include <stdio.h>
//#include <stddef.h>

char* gre_ft(char *str)
{
    int i = 0;
    if (str == NULL)
        return NULL;

    while (str[i] != '\0')
        i++;

    if (i > 4)
        str[4] = 'x'; /* set the 5th character (index 4) */

    return str;
}

int main(void)
{
    char s[] = "balloon"; /* make writable so we can modify it */
    printf("%s\n", s);
    printf("%s\n", gre_ft(s));
}