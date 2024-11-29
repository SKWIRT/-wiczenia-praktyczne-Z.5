#include <stdio.h>

int sum(int a, int b);
int minus(int a, int b);
int multiplication(int a, int b);


void zad2_main()
{
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    sum(a,b);
    minus(a,b);
    multiplication(a,b);
}

int sum(int a, int b)
{
    printf("Suma %d and %d is %d\n",a, b, a + b);
}

int minus(int a, int b)
{
    printf("Minus %d and %d is %d\n",a, b, a - b);
}

int multiplication(int a, int b)
{
    printf("Multiplication %d and %d is %d\n",a, b, a * b);
}