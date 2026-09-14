//WACP to check whether a number is a palindrome number or not
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
    
    if(copy == s)
        printf("%d is a palindrome number\n",copy);
    else    
        printf("%d is not a palindrome number\n",copy);   
    printf("-----------------------------------\n"); 

    return 0;
}