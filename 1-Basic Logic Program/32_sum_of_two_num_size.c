// Accept 2 numbers and find out its sum check it size

#include<stdio.h>
main()
{
	int num1,num2;
	int sum;
	
	// Input two number
	printf("\n\n\t Enter Num1: ");
	scanf("%d", &num1);
	
	
	printf("\n\n\t Enter Num2: ");
	scanf("%d", &num2);
	
	
	// Calculate the sum
	sum = num1 + num2;
	
	
	// Display the sum
	printf("Sum: %d\n", sum);
	
	// check and display the size of sum
	printf("\n\n\t Size of sum: %zu bytes\n", sizeof(sum));
}
