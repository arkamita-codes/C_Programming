//WACP to find the sum of n natural number using recursion
#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n > 0)
        printf("The sum of first %d natural number is %d.", n,sum(n));
    else
        printf("%d is not a natural number",n);
  
    return 0;
}

int sum(int n)
{
    if(n == 1)
        return 1;
    else 
        return n + sum(n-1);    
}