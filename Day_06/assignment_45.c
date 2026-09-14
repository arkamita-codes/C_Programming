//WACP to find the reverse of the number
#include <stdio.h>
int main()
{
    int n,s = 0;
    int copy;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    copy = n;
    
    while(n!=0)
    {
        s = s*10 + (n % 10); 
        n/= 10;
    }        

    printf("The reverse of the number %d is %d\n",copy,s);
    printf("-----------------------------------\n");
    
    return 0;
}