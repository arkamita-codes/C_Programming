//WACP to check whether a number is a armstrong number or not
#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,d=0,s = 0;
    int copy, armstrong = 0;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    copy = n;
    m = n;
     
    while(m!=0)
    {
        d = m%10;
        armstrong = armstrong + pow(d,3);
        m = m / 10;
    }  
    if(copy == armstrong)
        printf("It is a armstrong number\n");
    else    
        printf("It is not a armstrong number\n");    
    printf("-----------------------------------\n");

    return 0;
}