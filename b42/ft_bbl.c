#include <stdio.h>
void bubbleSort(int a[], int len)
{
    int i;
    int j;

    i = 0;
    while(i < len)
    {
        j = 0;
        while(j < (len - 1))
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
}

int main(void)
{
    int a[] = {1,5,3,7,2,4,6};
    int len = 7;

    bubbleSort(a, len);

    for(int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}