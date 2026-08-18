#include <stdio.h>
int main()
{
    float celcius, farhenheit, temperature;
    printf("-----------------------------------\n");
    printf("Enter a temperature in celcius: ");
    scanf("%f",&celcius);

    temperature = (celcius * (1.8)) + 32;

    printf("Temperature in farhenhiet = %f\n", temperature);

    temperature = 0;

    printf("-----------------------------------\n");
    printf("Enter a temperature in farhenheit: ");
    scanf("%f",&farhenheit);

    temperature = (farhenheit - 32) * 5/9;

    printf("Temperature in celcius = %f\n", temperature);
    printf("-----------------------------------\n");

    return 0;

}