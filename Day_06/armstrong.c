#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,d=0,s = 0;
    int copy, armstrong = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    copy = n;
    m = n;
    
    while(n!=0)
    {
        s++;
        n = n/10;
    }

    printf("%d\n",s);
    
    while(m!=0)
    {
        d = m%10;
        armstrong = armstrong + pow(d,s);
        printf("%d\n",armstrong);
        m = m / 10;
    }  
    printf("%d\n",armstrong);
    if(copy == armstrong)
        printf("It is a armstrong number\n");
    else    
        printf("It is not a armstrong number\n");    

    return 0;
}