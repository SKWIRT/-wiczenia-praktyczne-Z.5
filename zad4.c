#include <stdio.h>

struct class
{
    char name[50];
};

void zad4_main()
{
    struct class names[5];


    for(int i = 0; i < 5; i++)
    {
        printf("Enter ur name: ");
        scanf("%s", names[i].name);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%s\n",names[i].name);
    }
}