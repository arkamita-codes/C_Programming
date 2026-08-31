//WACP to check whether the given year is a leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("-----------------------------------\n");
    printf("Enter a year: ");
    scanf("%d",&year);

    if(year % 400 == 0)
        printf("%d is a leap year",year);
    else if(year % 100 == 0)
        printf("%d is not a leap year",year);
    else if(year % 4 == 0)
        printf("%d is a leap year",year);
    else
        printf("%d is not a leay year",year);

        printf("\n-----------------------------------\n");

    return 0;
}