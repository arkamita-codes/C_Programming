//WACP to print multiplication table by using loop
#include <stdio.h>
int main()
{
    int i, a=0;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("-----------------------------------\n");
    printf("     MULTIPLICATION TABLE OF %d \n",a);
    printf("-----------------------------------\n");

    for(i = 1; i <= 10; i++)
        printf("%d x %d = %d \n", a,i,(a*i));

    printf("-----------------------------------\n");

    return 0;
}