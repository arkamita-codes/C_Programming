//WACP to find the sum first 20 natural numbers
#include <stdio.h>
int main()
{
    int i, n;
    int sum = 0;
    
    for(i = 1; i <= 20; i++)
    {
        sum += i;
    }

    printf("The sum of first 20 natural numbers are: %d", sum);

    return 0;
}