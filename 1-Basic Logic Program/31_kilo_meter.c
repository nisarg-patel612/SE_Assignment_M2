// Convert kilometers into meters

#include<stdio.h>
main()
{
	float kilometers,meters;
	
	// Input the numbers of kilometers
	printf("\n\n\t Enter distance in kilometers: ");
	scanf("%f", &kilometers);
	
	// convert kilometers to meters
	meters = kilometers * 1000;
	
	printf("\n\n\t %.2f kilometers is equal to %.2f meters.\n", kilometers,meters);
}
