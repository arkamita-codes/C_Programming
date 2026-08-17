//WCAP to swap to two numbers without using third variable.
#include <stdio.h>
int main()
{
    int a,b;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("-----------------------------------\n");


    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping\na = %d \nb = %d\n", a,b);
    printf("-----------------------------------\n");

    return 0;
}
