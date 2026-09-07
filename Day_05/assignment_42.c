//WACP to find all the factors f a given number using for loop
#include <stdio.h>
int main()
{
    int i, n;
    int k = 0;

    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("The factors of the number %d is\n",n);
    printf("1,\t");
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            printf("%d,\t",i);
    }

    printf("%d",n);

        return 0;
}