#include<stdio.h>
int main()
{
    int num = 3, space = 1;
    int i, j ,k;
    int c=0;
    for(i=1; i<= 3; i++)
        printf("%d",c+i);
    for(i=2;i>=1;i--)
        printf("%d",c+i);
    printf("\n");    
    for(i = 1; i<=3; i++)
    {
        for(j=1; j<= num; j++)
            printf("%d",c+j);
        for(k = 1; k<=space; k++)
            printf(" ");
        for(j = num; j >= 1; j--)
            printf("%d",c+j);
        space += 2;
        num--;
        printf("\n");
    }
    return 0;
}
