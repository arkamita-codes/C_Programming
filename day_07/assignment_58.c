#include <stdio.h>

int main() {
    int i, j, k, n=5/2;

    for (i = 1; i <= 5/2+1; i++) 
    {
        for (j = 1; j <= 4 - i; j++)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("* ");

        printf("\n");
    }
    
    i=0, j=0, k=0;
    for(i = 1; i <= 5/2; i++)
    {
        for(j=1; j <= i; j++)
            printf(" ");
        for(k = 1; k <= 5/2+1-i; k++)
            printf("* ");
        printf("\n");
    }     
    return 0;
}
