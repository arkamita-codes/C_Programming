//WACP to find the maximum number among three given numbers using ladder if-else
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

    if(a == b && a == c)
        printf("equal");
    else if(a>b && a>c)
        printf("%d is max",a);
    else if(b>a && b>c)
        printf("%d is max",b);
    else
        printf("%d is max",c); 
    printf("\n-----------------------------------\n");
    
    return 0;
}