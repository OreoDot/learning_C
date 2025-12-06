#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    char id[10];
    int age;
    int scores[5];
};

int main()
{
    struct person dee;

    strcpy(dee.name, "Dotun");
    strcpy(dee.id, "234fre");
    dee.age = 28;
    dee.scores[0] = 25;
    dee.scores[1] = 29;
    dee.scores[2] = 35;

    printf("%s", dee.name);
    printf("%s", dee.id);
    printf("%s", dee.age);
    printf("%s", dee.scores[1]);
}