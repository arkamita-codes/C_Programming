#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;

    printf("\nAfter swapping\n a = %d \n b = %d", a,b);

    return 0;
}