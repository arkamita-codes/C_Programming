#include <stdio.h>

int main() {
    int day_number;

    // Prompt user for input
    printf("Enter a day number of the week (1-7):\n");
    printf("1: Monday, 2: Tuesday, 3: Wednesday, 4: Thursday, 5: Friday, 6: Saturday, 7: Sunday\n\n");
    printf("Your choice: ");
    
    // Check if the input is a valid integer
    if (scanf("%d", &day_number) != 1) {
        printf("Error: Please enter a valid numeric digit.\n");
        return 1; // Exit with error code
    }

    // Validate the range using a switch statement
    switch (day_number) {
        case 1:
            printf("Valid day: Monday\n");
            break;
        case 2:
            printf("Valid day: Tuesday\n");
            break;
        case 3:
            printf("Valid day: Wednesday\n");
            break;
        case 4:
            printf("Valid day: Thursday\n");
            break;
        case 5:
            printf("Valid day: Friday\n");
            break;
        case 6:
            printf("Valid day: Saturday\n");
            break;
        case 7:
            printf("Valid day: Sunday\n");
            break;
        default:
            // Handles any integers outside the 1-7 range
            printf("Invalid day! The number must be between 1 and 7.\n");
            break;
    }

    return 0;
}
