#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    printf("Enter a number: ");
    scanf("%f",&a);

    printf("\nfloor of %.2f: %.2f",a,floor(a));
    printf("\nceil of %.2f: %.2f",a,ceil(a));
    
    return 0;
}