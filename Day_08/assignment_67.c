#include <stdio.h>
int gcd(int, int);
int main()
{
    int a, b, h;
    printf("Enter a number: ");
    scanf("% d", &a);
    printf("Enter a number: ");
    scanf("% d", &b);
    if (a > b)
        h = gcd(a, b);
    else
        h = gcd(b, a);
    printf("The GCD of two numbers is % d", h);

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);;
}