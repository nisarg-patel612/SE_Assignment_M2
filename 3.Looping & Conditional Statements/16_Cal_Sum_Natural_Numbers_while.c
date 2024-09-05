// Calculate the Sum of Natural Numbers Using the While Loop


#include<stdio.h>
main()
{
	int i,n,sum = 0;
	
	// User to input the Natual Number
	printf("\n\n\n\t Enter a Natural Number: ");
	scanf("%d", &n);
	
	i = 1;
	
	while(i<=n){
		sum = sum + i;
		i++;
	}
	
	printf("Sum = %d", sum);
	
}
