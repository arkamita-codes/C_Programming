#include <stdio.h>
int main() 
{
    char op;
    float a, b;

    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter a number: ");
    scanf("%f", &b);
    printf("Enter the operation to be performed(+,-,*,/): ");
    scanf(" %c", &op);
    switch (op) 
    {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            else
                printf("Error: division by zero is not possible\n");
            break;
        default:
            printf("Error: invalid operator\n");
    }
    return 0;
}