//WACP to calculate the time in hour, minute and seconds when the input will be given in second.
#include <stdio.h>
int main()
{
    int second, minute = 0, hour = 0;
    printf("-----------------------------------\n");
    printf("Enter the time in second: ");
    scanf("%d",&second);
    printf("-----------------------------------\n");

    hour = second / 3600;
    second = second % 3600;

    minute = second / 60;
    second = second % 60;

    printf("The time in year, month and day is\n");
    printf("hour : minute : second\n%d:%d:%d",hour,minute,second);
    printf("\n-----------------------------------\n");
    
    return 0;
}