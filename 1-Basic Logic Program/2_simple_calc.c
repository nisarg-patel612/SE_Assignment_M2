// write a program to make Simple Calculator(addition,subtraction,multiplication,divison,modulo)

#include <stdio.h>
main()
{
	int x, y, z; 
	x = 40;
	y = 90;
	
//	Addition
	z = x + y;
	printf("\n\n\t x = %d", x);
	printf("\n\n\t y = %d", y);
	printf("\n\n\t Addition = %d", z);
	
//	Subtraction
	z = x - y;
	printf("\n\n\t x = %d", x);
	printf("\n\n\t y = %d", y);
	printf("\n\n\t Substraction = %d", z);
	
//	Multiplication
	z = x * y;
	printf("\n\n\t x = %d", x);
	printf("\n\n\t y = %d", y);
	printf("\n\n\t Multiplication = %d", z);
	
//	Division
	z = x / y;
	printf("\n\n\t x = %d", x);
	printf("\n\n\t y = %d", y);
	printf("\n\n\t Division = %d", z);
	
//	Modulo
	z = x % y;
	printf("\n\n\t x = %d", x);
	printf("\n\n\t y = %d", y);
	printf("\n\n\t Modulo = %d", z);

}
