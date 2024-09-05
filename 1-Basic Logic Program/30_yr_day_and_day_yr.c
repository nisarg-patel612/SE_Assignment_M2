// WAP to convert years into days and days into years


#include<stdio.h>
#define DAYS_PER_YEAR 365 // AVERAGE NUMBER OF DAYS IN A YEAR
main()
{
	int years,days;
	float converted_days,converted_years;
	
	
	// Convert years into days
    printf("\n\n\tEnter the number of years: ");
    scanf("%d", &years);
    converted_days = (float)years * DAYS_PER_YEAR;
    printf(" \n\n\t  %d years is approximately %.2f days.\n", years, converted_days);

    // Convert days into years
    printf("\n\n\tEnter the number of days: ");
    scanf("%d", &days);
    converted_years = (float)days / DAYS_PER_YEAR;
    printf(" \n\n\t %d days is approximately %.2f years.\n", days, converted_years);
}
