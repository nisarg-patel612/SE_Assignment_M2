// Convert minutes into seconds and hours

/* Note:- Seconds: Multiply the number of minutes by 60 (since there are 60 seconds in a minute).
Hours: Divide the number of minutes by 60 (since there are 60 minutes in an hour).*/


#include<stdio.h>
main()
{
	int minutes;
	float seconds,hours;
	
	// Input the number of minutes
	printf("\n\n\t Enter minutes: ");
	scanf("%d", &minutes);
	
	
	// convert minutes into seconds
	seconds = (float)minutes * 60;
	
	
	// convert minutes into hours
	hours = (float)minutes / 60;
	
	
	// display the result
	printf("\n\n\t Minutes into seconds : %.2f\n", seconds);
	printf("\n\n\t Minutes into hours : %.2f\n", hours);
}
