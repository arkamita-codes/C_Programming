#include <stdio.h>

int main() {
    // Nested loops for a 3x3 grid
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            
            if (i == 1) {
                printf("%d ", j);       // Top row: prints 1, 2, 3
            } 
            else if (j == 3) {
                printf("%d ", i + 2);   // Right column: prints 4, 5
            } 
            else if (i == 3) {
                printf("%d ", 8 - j);   // Bottom row: prints 7, 6
            } 
            else if (j == 1) {
                printf("8 ");           // Left column: prints 8
            } 
            else {
                printf("9 ");           // Center element: prints 9
            }
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}