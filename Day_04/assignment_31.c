//WACP to calculate the electric bill.
#include <stdio.h>
int main()
{
    float unit, bill = 0.0;
    printf("-----------------------------------\n");
    printf("Enter the unit consumed of your electric bill: ");
    scanf("%f",&unit);

    if(unit >= 0 && unit <= 100)
        bill = unit * 10;
    else if(unit > 100 && unit <= 150)
        bill = (100 * 10) + (unit - 100) * 15;
    else if(unit > 150 && unit <= 200)
        bill =  (100 * 10) + (50 * 15) + (unit - 150) * 20;
    else if(unit > 200)
        bill = (100 * 10) + (50 * 15) + (50 * 20) + (unit - 200) * 25;

    printf("The electric bill by consuming %.2f unit is %.2f \n",unit,bill);
    printf("-----------------------------------\n");

    return 0;
}