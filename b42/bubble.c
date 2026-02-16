#include <stdio.h>

int main(void)
{
    int a[] = {8,0,7,6,9,3,5,4,2,1};

    int i = 0;
    int j;

    int length = 10;

    while(i < length)
    {
        j = 0;
        while(j < (length - 1))
        {
            if(a[j] > a[j+1])
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
    while(i < length)
    {
        printf("%d", a[i]);
        i++;
    }
}