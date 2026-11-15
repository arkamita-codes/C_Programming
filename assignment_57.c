#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i < 5; i++) 
    {
        for (j = 1; j <= 4 - i; j++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("* ");

        printf("\n");
    }
    return 0;
}