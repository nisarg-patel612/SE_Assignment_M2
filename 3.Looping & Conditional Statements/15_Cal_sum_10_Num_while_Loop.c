// Calculate sum of 10 numbers using of while loop

#include<stdio.h>
main()
{
	int i = 0 , sum = 0 , number;
	
	// using while loop to get 10 numbers from the user and calculate their sum
	while(i<10){
		printf("\n\n\t Enter Number %d : ", i + 1);
		scanf("%d", &number);
		sum += number;
		i++;
	}
	
	// display the total sum
	printf("\n\n\t The sum of the 10 Numbers is: %d\n", sum);
}
