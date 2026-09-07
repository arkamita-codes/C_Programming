//WACP to print factorial of aa given number
#include <stdio.h>
int main()
{
    int i, a, factorial = 1;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &a);

    for(i = a; i >= 2; i--)
        factorial *= i;

    printf("The factorial of the number %d is %d\n.",a,factorial);

    printf("-----------------------------------\n");

    return 0;
}