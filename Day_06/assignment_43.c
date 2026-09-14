//WACP to find the number of digits
#include <stdio.h>
int main()
{
    int n,c = 0;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    int copy = n;
    while(n!=0)
    {
        c++;
        n /= 10;
    }        

    printf("The number of digits in the number %d is %d\n",copy,c);
    printf("-----------------------------------\n");

    return 0;
}