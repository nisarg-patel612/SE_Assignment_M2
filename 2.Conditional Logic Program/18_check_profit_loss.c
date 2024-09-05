// Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
main()
{
	int x,y,profitloss;
	
	printf("\n\n\n\t------------------------Calculate Profit & Loss-------------------------------------");
	printf("\n\n\n\t Enter the cost Price: ");
	scanf("%d", &x);
	
	printf("\n\n\n\t Enter the Selling Price:");
	scanf("%d", &y);
	
	// Calculate the Profit and loss
	profitloss = y - x;
	
	if ( profitloss > 0 ){
		printf("\n\n\n\t You made a Profit of %d\n", profitloss);
	} else if ( profitloss < 0  ) {
		printf("\n\n\n\t You have  loss of %d\n", -profitloss);
	} else {
		printf("\n\n\n\t No Profit No Loss.\n");
	}
	
}
