//WACP to find out the squares of sum of first 10 natural numbers without using loop
#include <stdio.h>
int main()
{
    int sum = 0, sq_sum = 0;
    sum = (1+2+3+4+5+6+7+8+9+10);
    sq_sum = sum * sum;

    printf("-----------------------------------\n");
    printf("The sum of the squares of first ten natural numbers is %d", sq_sum);
    printf("\n-----------------------------------\n");

    return 0;
}
