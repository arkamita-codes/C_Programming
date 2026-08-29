//WACP to check whether a number is odd or even using conditional operator
#include <stdio.h>
int main()
{
    int n;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("-----------------------------------\n");
    n%2 == 0? printf("%d is a even number",n):printf("%d is a odd number",n);
    printf("\n-----------------------------------\n");

    return 0;
}