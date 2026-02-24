#include <stdio.h>

int main(void)
{
    int i;
    int len;
    int j;

    int a[] = {1,5,3,7,2};

    i = 0;
    len =5;
    while (i < len)
    {
        j = 0;
        while(j < (len-1))
        {
            if (a[j] > a[j+1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < len)
    {
        printf("%d", a[i]);
        i++;
    }
}
