//WACP to swap two numbers in a single line
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("-----------------------------------\n");

    c=b, b=a, a=c;

    printf("-----------------------------------\n");
    printf("After swapping\na = %d\nb = %d",c,b);
    printf("\n-----------------------------------\n");

    return 0;
}
