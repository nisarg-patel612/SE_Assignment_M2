/*Accept the input month number and print number of days in that
month.*/

#include <stdio.h>

main() 
{
    int month_number;

    // Input month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    // print the number of days in the month
    switch (month_number) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("This month has 31 days.\n");
            break;

        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("This month has 30 days.\n");
            break;

        case 2:  // February
            printf("This month typically has 28 days, but 29 days in a leap year.\n");
            break;

        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
            break;
    }

}

