//WACP tp calculate the sum of all digits of a three digit number.
#include <stdio.h>
int main()
{
    int sum = 0;
    int n; 
    int d, copy = 0;
    printf("-----------------------------------\n");
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    printf("-----------------------------------\n");
    copy = n;

    d = n%10;
    sum += d;
    n /= 10;
    d = 0;

    d = n%10;
    sum += d;
    n /= 10;
    d = 0; 

    d = n%10;
    sum += d;
    n /= 10;

    printf("The sum of the digits of a three digit number %d is %d", copy,sum);
    printf("\n-----------------------------------\n");

    return 0;
}
