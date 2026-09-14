//WACP to implement the fibonacci series upto n terms
#include <stdio.h>
int main()
{
    int i, n, a = 0, b = 1, c = 0;
    printf("-----------------------------------\n");
    printf("Enter the number of terms for fibonacci series: ");
    scanf("%d", &n);

    printf("The fibonacci series upto %d terms is: \n",n);
    if(n == 1)
        printf("0");
    else if(n == 2)
        printf("0,  1");
    else
    {
        i = 1;
        while(i <= n)
        {
            printf("%d, \t",a);
            c = a + b;
            a = b;
            b = c;
            i++;
        }
        
    }
    
    printf("\n-----------------------------------\n");

    return 0;
}