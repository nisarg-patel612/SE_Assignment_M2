/* Write a program to find out the max from given number (E.g., No: -1562
Max number is 6) */

#include<stdio.h>
main()
{
	int n, max_digit = 0, remainder;
	
	printf("\n\n\n\t Enter a Number: ");
	scanf("%d", &n);
	
	// handle negative numbers by taking absolute value 
	n = (n<0)?-n:n;
	
	// loop to find the maximum numbers	
	while(n != 0){
		remainder = n % 10;
		
		if(remainder > max_digit){
			max_digit = remainder;
		}
		n /= 10;  // remove the last digit from original the number
	}
	
	printf("\n\n\n\t The Maximum Number is %d\n", max_digit);
}
