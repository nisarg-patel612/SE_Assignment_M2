// WAP to find the largest of three numbers.

#include<stdio.h>
main()
{
	int num1,num2,num3,largest;
	
	// Input three numbers
	printf("\n\n\n\t Enter three numbers: ");
	scanf("%d %d %d", &num1 , &num2 , &num3);
	
	// Find the largest of the three numbers
	if( num1 >= num2 && num1 >= num3 )
	{
		printf("\n\n\n\t %d The Number is largest.\n", largest = num1);
	} else if( num2 >= num1 && num2 >= num3 ) {
		printf("\n\n\n\t %d The largest Number.\n", largest = num2);
	} else {
		printf("\n\n\n\t %d The largest Number.\n", largest = num3);
	}
}
