#include <stdio.h>
int main()
{
    int a, b, subtract;
    subtract = 0;
    printf("------------------------\n");
    printf("Enter two numbers: \n");
    scanf("%d%d`",&a,&b);
    printf("------------------------\n");
    subtract = a-b;
    printf("The sum of %d and %d is %d\n",a,b,subtract);
    printf("------------------------\n");

    return 0;
}