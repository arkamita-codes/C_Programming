//WACP to fibonacci series  using recursion
#include <stdio.h>
int fibonacci(int);
int main()
{
    int n;
    printf("Enter a number of terms: ");
    scanf("%d",&n);
    
    if(n < 0)
        printf("Negative number of terms cannot be implemented");
    else
    {
        printf("The fibonacci series upto %d terms is: \n", n);
        int i;
        for(i = 0; i <= n; i++)
            printf("%d, ",fibonacci(i));
    }
    
    return 0;
}

int fibonacci(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else     
        return fibonacci(n-1) + fibonacci(n-2);
}