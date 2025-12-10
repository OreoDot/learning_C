// let's break the ice

#include <stdarg.h>
#include <stdio.h>

// format
// #include <stdarg.h>


// void
// va_start(va_list ap, last);
// va_arg(va_list ap, type);
// va_copy(va_list dest, va_list src)
// va_end(va_list ap);

float average(int count, ...)
{
    va_list ap;
    // (I declare an obj va_list, which is a new type) (just like in struct, I name my va_list as ap).
    // You create a variable named ap... ap is uninitialized but is intended to point the first arg which is count.
    // You do not need to write va_list *ap because va_list is already formatted as a pointer.
    // va_list is a formatted typedef struct.
    int i;
    float total;
    va_start(ap, count); //a macro to initialise va_list
    //since ap is the pointing to the first arg and the first arg is count we can then go up
    //to declare our variable that will be used for calculation.
    // This macro makes ap point to the FIRST variadic argument, which ap points to 10.
    total = 0; //you need to inatialize your variable to avoid problems
    i = 0;
    while (i < count)
    {
        total = total + va_arg(ap, int);
        ++i;
    }
    va_end(ap);
    return (total/count);
}

// i initially used an int for my total and that affected my result to be an int, so casting afterwards
// just added .000 to the back of an already truncated int

int main()
{
    float ave;
                //this 5 is a flag      //all of these are the actual args
    ave = average(3,                    10, 9, 6);

    printf("the average age of these people is: %f\n", ave);
}