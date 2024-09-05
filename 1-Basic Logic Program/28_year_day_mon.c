// Convert years into days and months

#include<stdio.h>
#define AVERAGE_DAYS 365
#define AVERAGE_MONTHS_PER_YEAR 12
main()
{
	int years;
	float days , months;
	
	// Input the years
	printf("\n\n\t Enter Years: ");
	scanf("%d", &years);
	
	// Convert years into days
	days = (float)years * AVERAGE_DAYS;
	
	// convert years into months
	months = (float)years * AVERAGE_MONTHS_PER_YEAR;
	
	// Display the result
	printf("\n\n\t Approximate years into days: %.2f\n", days);
	printf("\n\n\t Approximate years into month: %.2f\n", months);
	
}
