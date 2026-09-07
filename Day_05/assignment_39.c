//WACP to find the sum of the squares of first 10 natural numbers
#include <stdio.h>
int main()
{
    int i, n;
    int sum = 0;
    
    for(i = 1; i <= 10; i++)
    {
        sum += i * i;
    }

    printf("The sum of squares of first 10 natural numbers are: %d", sum);

    return 0;
}