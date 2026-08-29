//WACP to calculate the age of a person i year, month and days when the input will be given in days.
#include <stdio.h>
int main()
{
    int year = 0, month = 0, day;
    printf("-----------------------------------\n");
    printf("Enter the age in days: ");
    scanf("%d",&day);
    printf("-----------------------------------\n");

    year = day / 365;
    day = day % 365;

    month = day / 30;
    day = day % 30;
    printf("The age of the person in year, month and day is\n");
    printf("%d year, %d month %d day ",year, month, day);
    printf("\n-----------------------------------\n");
    
    return 0;
}
