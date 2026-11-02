#include <stdio.h>

int hcf(int a, int b);
int lcm(int a, int b);

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("HCF of %d and %d is %d\n", a, b, hcf(a, b));
    printf("LCM of %d and %d is %d\n", a, b, lcm(a, b));

    return 0;
}

int hcf(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a / hcf(a, b)) * b;
}