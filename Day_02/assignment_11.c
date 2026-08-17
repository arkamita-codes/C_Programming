//WCAP to swap to two numbers using third variable.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("-----------------------------------\n");

    c = b;
    b = a;
    a = c;

    printf("After swapping\na = %d \nb = %d\n", a,b);
    printf("-----------------------------------\n");

    return 0;
}
