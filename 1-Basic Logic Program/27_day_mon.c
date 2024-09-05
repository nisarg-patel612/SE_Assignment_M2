// Convert days into months

// #define AVERAGE_DAYS_PER_MONTH 30 defines a constant that is used to calculate the approximate number of months.


#include<stdio.h>
#define AVERAGE_DAYS_PER_MONTH 30
main()
{
    int days;
    float months;

    // Input the number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Convert days into months
    months = (float)days / AVERAGE_DAYS_PER_MONTH;

    // Display the result
    printf("Approximate number of months: %.2f\n", months);
    
}
