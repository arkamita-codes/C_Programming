//WACP to count the number of digits of a number using for loop 
#include <stdio.h>
int main()
{
    int i, n;
    int sum = 0;

    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i = n; i != 0; i/=10)
        sum += i%10;
    
    printf("The sum of the digits are: %d\n", sum);
    printf("-----------------------------------\n");


        return 0;
}