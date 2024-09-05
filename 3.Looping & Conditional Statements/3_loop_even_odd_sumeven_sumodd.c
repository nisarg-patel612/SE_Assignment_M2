/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/

#include<stdio.h>
main()
{
	int number[10] , even_count = 0 , odd_count = 0 , sum_even = 0 , sum_odd = 0;
	int i = 0;
	
	// input numbers from user
	printf("\n\n\n\t Enter 10 Numbers:\n ");
	
	while(i<10){
		printf("\n\n\n\t Number %d : ", i + 1);
		scanf("%d", &number[i]);
		
		
		// check if the number is even or odd
		if(number[i] %2 == 0)
		{
			even_count++;
			sum_even = sum_even + number[i];
		} else {
			odd_count++;
			sum_odd = sum_odd + number[i];
		}
		
		i++;
	}
	
	// Display the result
	printf("\n\n\n\t----------------------------Display Whole Details--------------------------------------------");
	printf("\n\n\n\t Total Even Numbers : %d", even_count);
	printf("\n\n\n\t Total Odd Numbers : %d", odd_count);
	printf("\n\n\n\t Sum of Even Numbers : %d", sum_even);
	printf("\n\n\n\t Sum of Odd Numbers : %d", sum_odd);
}
