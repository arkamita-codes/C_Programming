//In a cricket match, coin has been tossed and captain 1 wants head. WACP to check whether captain 1 has won or not.
#include <stdio.h>
int main()
{
    char c;
    printf("-----------------------------------\n");
    printf("Captain A got head or tail\nEnter H for head and T for tail: ");
    scanf("%c",&c);
    printf("-----------------------------------\n");


    if('H' == c)
        printf("Captain A won!");
    else if('T' == c)
        printf("Captain B won!");
    else 
        printf("Invalid input");

    printf("\n-----------------------------------\n");

return 0;
}