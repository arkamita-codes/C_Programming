//WACP to find the factorial of the given number
#include <stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("The factorial of %d is %d.", n,factorial(n));
    
    return 0;
}

int factorial(int n)
{
    int i,f = 1;
    
    if(n == 0)
        return 1;
    else
    {
        for(i = 2; i <= n; i++)
        f = f * i;
    }
        
    return f;
}