/* Write a program in C to read any Month Number in integer and display the
number of days for this month. */

#include <stdio.h>
main()
{
	int month;
	
	// User to enter month number
	printf("\n\n\n\t Enter a Month Number (1-12): ");
	scanf("%d", &month);
	
	// The numbers of days in a month
	switch(month){
		case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December	
	        printf("\n\n\n\t This Month has 31 days.\n");
	        break;
	        
	    case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
        	printf("\n\n\n\t This Month has 30 days.\n");
        	
        case 2: // February
        	printf("\n\n\n\t This Month has 29 days in a leap year.\n");
        	
        default : 
        	printf("\n\n\n\t Invalid Month Number! Please enter a valid number between 1 to 12.\n");
        
        
	}
}
