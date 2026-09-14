//WACP to find the sum of all digits of the number
#include <stdio.h>
int main()
{
    int n,sum = 0;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    int copy = n;
    while(n!=0)
    {
        sum += n%10;
        n /= 10;
    }        

    printf("The sum of digits in the number %d is %d\n",copy,sum);
    printf("-----------------------------------\n");

    return 0;
}