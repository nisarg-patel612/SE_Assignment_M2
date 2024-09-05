/* Write a C program to read temperature in centigrade and display a suitable
message according to the temperature.*/

#include<stdio.h>
main()
{
	float temperature;
	
	// Input temperature in centigrade
	printf("\n\n\n\t Enter Temperature in Centigrade: ");
	scanf("%f", &temperature);
	
	if (temperature < 0 ) {
		printf("\n\n\n\t Freezing weather.\n");
	} else if (temperature >= 0 && temperature <= 10) {
		printf("\n\n\n\t Very Cold Whether.\n");
	} else if (temperature >= 10 && temperature <= 20) {
		printf("\n\n\n\t Cold Whether.\n");
	} else if (temperature >= 20 && temperature <= 30) {
		printf("\n\n\n\t Normal Whether.\n");
	} else if (temperature >= 30 && temperature <= 40) {
		printf("\n\n\n\t It's Hot'Whether.\n");
	} else {
		printf("\n\n\n\t It's Very Hot.\n");
	}
	
}
