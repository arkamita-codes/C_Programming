//WCAP to find the square root of a number.
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    float sq_root = 0.0;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("-----------------------------------\n");
    
    sq_root = sqrt(a);

    printf("\nThe square root of %d is: %.3f\n",a,sq_root);
    printf("-----------------------------------\n");
    
    return 0;

}
