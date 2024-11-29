#include <stdio.h>

void zad3_main()
{
    int number;

    printf("Enter a number to check if it is even or odd: ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("Number is even\n");
    } else
    {
        printf("Number is odd\n");
    }
}