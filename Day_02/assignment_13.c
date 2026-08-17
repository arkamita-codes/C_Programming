#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    float sq_root = 0.0;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    sq_root = sqrt(a);

    printf("\nThe square root of %d is: %.3f\n",a,sq_root);
    
    return 0;

}