#include <stdio.h>

void zad5_main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num>=10 && num<=20)
    {
        printf("The number is in the radius from 10 to 20\n");
    } else
    {
        printf("The number is not in the radius of 10 to 20\n");
    }
}