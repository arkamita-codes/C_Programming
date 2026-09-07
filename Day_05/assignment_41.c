//WACP to count the number of digits of a number using for loop 
#include <stdio.h>
int main()
{
    int i, n;
    int c = 0;

    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i = n; i != 0; i/=10)
        c++;
    
    printf("The number of the digits in %d: %d\n",n,c);
    printf("-----------------------------------\n");


        return 0;
}
