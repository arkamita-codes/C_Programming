//WACP to find the maximum number among three given numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("-----------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Enter a number: ");
    scanf("%d",&c);
    printf("-----------------------------------\n");

    (a == b && a == c)? printf("equal"):
        a>b && a>c ? printf("%d is max",a) : (b>c ? printf("%d is max",b) : 
        printf("%d is max",c)); 
    printf("\n-----------------------------------\n");
    
    return 0;
}
