#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping\n a = %d \n b = %d", a,b);

    return 0;
}