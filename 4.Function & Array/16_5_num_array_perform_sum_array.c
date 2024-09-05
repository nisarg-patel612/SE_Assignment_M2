// Accept 5 numbers from user and perform sum of array

#include<stdio.h>
main()
{
	int number[5], sum = 0 , i;
	
	// accept 5 numbers from user
	printf("\n\n\t Enter 5 Numbers:\n");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Number %d : ", i + 1);
		scanf("%d", &number[i]);
		sum = sum + number[i];  // add each number to the sum
	}
	
	printf("\n\n\t The sum of the Array is : %d\n", sum);
	
}
