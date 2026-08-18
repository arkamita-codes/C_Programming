//WACP to print the last digit of a number without using modulus operator
#include <stdio.h>
int main()
{
    int a;
    int last_digit = 0;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("-----------------------------------\n");

    last_digit = a - (a/10)*10;

    printf("The last digit of the numer %d is %d \n", a,last_digit);
    printf("-----------------------------------\n");

    return 0;
}
