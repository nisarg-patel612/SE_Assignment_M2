// WAP to input the week number and print week day.

#include<stdio.h>
main()
{
	int week_number;
	
	printf("\n\n\n\t Enter a week number: ");
	scanf("%d", &week_number);
	
	// Print the corresponding week day
	switch(week_number){
		case 1 : 
			printf("\n\n\n\t Sunday\n ");
			break;
		
		case 2 : 
			printf("\n\n\n\t Monday\n ");
			break;
			
		
		case 3 : 
			printf("\n\n\n\t Tuesday\n ");
			break;
			
			
		case 4 : 
			printf("\n\n\n\t Wednesday\n ");
			break;
		
		
		case 5 : 
			printf("\n\n\n\t Thursday\n ");
			break;
		
		
		case 6 : 
			printf("\n\n\n\t Friday\n ");
			break;
		
		
		case 7 : 
			printf("\n\n\n\t Saturday\n ");
			break;
			
		default : 
			printf("\n\n\n\t Invalid Week Number! Please Enter a number between 1 to 7.\n");
			break;
			
	}
}
