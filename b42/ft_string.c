#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h> // 3. for va_list

char my_printf(const char *format, ...) //2. start what the functionreplica will look like... note, f is for format.
{
    va_list ap;

}


int main() //1. write an int main of the printf func for a normal string including the count
{
    int count;

    count = my_printf("Hello %s\n", "World");

    my_printf("%d\n", count);
}