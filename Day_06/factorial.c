//WACP to print factorial of a given number
#include <stdio.h>
int main()
{
    int i, a, factorial = 1;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &a);

    i = a;
    while(i >= 2)
    {
        factorial *= i;
        i--;
    }
    
    printf("The factorial of the number %d is %d\n.",a,factorial);

    printf("-----------------------------------\n");

    return 0;
}