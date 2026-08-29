//WACP to find out the annual salary of a person.
#include <stdio.h>
int main()
{
    printf("-----------------------------------\n");
    float basic, salary = 0;
    printf("Enter your basic pay: ");
    scanf("%f",&basic);
    printf("-----------------------------------\n");
    salary = basic + (0.5 * basic) + (0.1 * basic) + 5000;

    printf("The annual salary of the person with basic pay is: %.4f\n", salary*12);
    printf("-----------------------------------\n");
    return 0;
}
