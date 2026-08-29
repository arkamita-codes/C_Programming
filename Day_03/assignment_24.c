//WACP to check whether the given year is a leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("-----------------------------------\n");
    printf("Enter a year: ");
    scanf("%d",&year);

    year%4 == 0? printf("%d is a leap year",year):printf("%d is not a leap year",year);
    printf("\n-----------------------------------\n");

    return 0;
}
