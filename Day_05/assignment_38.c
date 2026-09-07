//WACP to check whether a number is a prime number or not
#include <stdio.h>
int main()
{
    int i, n;
    int k = 0;

    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            k++;
    }

    if(k == 0)
        printf("It is a prime number\n");
    else
        printf("It is not a prime number\n");
    printf("-----------------------------------\n");

    return 0;
}