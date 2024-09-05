// write a program you have to make summation of first and last digit (E.g., 1234 Ans:-5)

#include<stdio.h>
main()
{
	int n, sum = 0 , first_digit , last_digit , temp;
	
	printf("\n\n\n\t Enter a Number: ");
	scanf("%d", &n);
	
	temp = (n<0) ? -n : n;
	
	// find the last digit
	last_digit = temp % 10;
	
	while(temp>=10)
	{
		temp /= 10; // keep diving by 10 only the first digit remains
	}
	first_digit = temp;
	
	// calculate the sum of the first and last digits
	sum = first_digit + last_digit;
	
	// If the original number was negative then sum is negative
	if(n<0){
		sum = -sum;
	}
	printf("\n\n\n\t Sum of the first and last digit: %d\n", sum);
} 
