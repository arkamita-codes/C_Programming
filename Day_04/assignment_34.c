//WACP to calculate the income tax based on the following condition and input will be annual salary.
#include <stdio.h>
int main()
{
    float salary, tax = 0.0;

    printf("-----------------------------------\n");
    printf("Enter the annual salary: ");
    scanf("%f",&salary);

    if(salary > 0 && salary <= 250000)
        tax = 0;
    else if(salary > 250000 && salary <= 500000)
        tax = salary * 0.05;
    else if(salary > 500000 && salary <= 1000000)
        tax = salary * 0.1;
    else
        tax = salary * 0.3;

    printf("The tax amount to be paid for annual salary %.2f is %.2f\n", salary, tax);
    printf("-----------------------------------\n");

    return 0;
}