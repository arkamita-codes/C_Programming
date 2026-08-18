//WACP to add two numbers using third variable.
#include <stdio.h>
int main()
{
    int a, b, sum;
    sum = 0;
    printf("------------------------\n");
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    printf("------------------------\n");
    sum = a+b;
    printf("The sum of %d and %d is %d\n",a,b,sum);
    printf("------------------------\n");

    return 0;
}
