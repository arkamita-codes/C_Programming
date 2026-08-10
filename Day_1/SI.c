#include <stdio.h>
int main()
{
    float principal, rate, time, SI;
    SI = 0.0;
    printf("------------------------\n");
    printf("Enter the principal: \n");
    scanf("%f",&principal);
    printf("Enter the rate: \n");
    scanf("%f",&rate);
    printf("Enter the time: \n");
    scanf("%f",&time);
    printf("------------------------\n");

    SI = (principal * rate * time)/100;
    printf("The value of SI with pricipal %d, rate %d and time %d is %f \n:", (int)principal, (int)rate, (int)time, SI);
    printf("------------------------\n");

    return 0;
}