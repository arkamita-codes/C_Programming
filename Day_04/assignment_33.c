//WACP to calculate the age of person in years, months and days and the input will be given in days
#include <stdio.h>
int main()
{
    int day, month = 0, year = 0;
    printf("-----------------------------------\n");
    printf("Enter your age in days: ");
    scanf("%d",&day);
    printf("-----------------------------------\n");
    
    if(day >= 365)
    {
        year = day / 365;
        day %= 365; 
        month = day / 30;
        day %= 30;
    }
    else if(day < 365 && day >= 0)
    {
        month = day / 30;
        day %= 30;
    }
    else
        printf("Invalid Input!");

    printf("The age of the person in year, month and day is\n");
    printf("%d year, %d month %d day ",year, month, day);
    printf("\n-----------------------------------\n");
    
    return 0;
}
