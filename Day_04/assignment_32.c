#include <stdio.h>
int main()
{
    printf("-----------------------------------\n");
    int second, minute = 0, hour = 0;
    printf("Enter the time in in second: ");
    scanf("%d",&second);
    printf("-----------------------------------\n");

    if(second >= 3600)
    {
        hour = second / 3600;
        second %= 3600;
        minute = second / 60;
        second %= 60;
    }
    else if(second > 60 && second <= 3600)
    {
        minute = second / 60;
        second %= 60;
    }
    else if(second >= 0 && second < 60)
        second = second;
    else 
        printf("Invalid Input!");

    printf("The time in hours, minutes and seconds is\n");
    printf("hour : minute : second\n%d:%d:%d",hour,minute,second);
    printf("\n-----------------------------------\n");

    return 0;
    
}
