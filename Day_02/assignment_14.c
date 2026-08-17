//WACP to find floor and ceil of the number
#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("-----------------------------------\n");

    printf("floor of %.2f: %.2f\n",a,floor(a));
    printf("ceil of %.2f: %.2f\n",a,ceil(a));
    printf("-----------------------------------\n");
    
    return 0;
}
