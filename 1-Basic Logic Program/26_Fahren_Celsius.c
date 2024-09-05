// Convert temperature Fahrenheit to Celsius

/* 5.0 / 9.0: This factor scales the temperature difference to the Celsius scale. 
The factor 5 / 9 converts the temperature difference into degrees Celsius. */


#include<stdio.h>
main()
{
	float fahrenheit , celsius;
	
	// Input temperature in fahrenheit
	printf("\n\n\t Enter temperature in Fahrenheit : ");
	scanf("%f", &fahrenheit);
	
	// Convert Fahrenheit to Celsius
	celsius = (5.0 / 9.0) * (fahrenheit - 32);
	
	
	// Display the result
	printf("\n\n\t Temperature in Celsius: %.2f\n", celsius);
	
	
}
