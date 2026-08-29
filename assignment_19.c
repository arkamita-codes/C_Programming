//WACP to find th max among of two numbers using conditional operator
#include <stdio.h>
int main()
{
    int a, b;
    printf("-----------------------------------\n");
    printf("Enter two number: \n");
    scanf("%d%d", &a, &b);
    printf("-----------------------------------\n");
    a>b? printf("%d is max",a):printf("%d is max",b);
    printf("\n-----------------------------------\n");

    return 0;
}