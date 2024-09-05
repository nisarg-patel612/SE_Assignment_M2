// Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
main()
{
	int numbers[5],i,fact,num;
	
	// Input 5 Numbers
	printf("\n\n\n\t Enter 5 Numbers: ");
	//scanf("%d", &num);
	
	i=1;
	while(i<=5){
		printf("\n\n\n\t Number %d: ", i);
		scanf("%d", &numbers[i]);
		i++;
	}
	
	printf("\n\n\n\t--------------------------Factorial Of 5 Numbers-----------------------------------------");
	i = 1;
	while(i<=5){
		num = numbers[i];
		fact = 1;
		
		int j = num;
		while(j>=1){
			fact = fact * j;
			j--;
		}
		
		printf("\n\n\n\t%d Number Factorial is = %d", num , fact);
		printf("\n\n");
		i++;
	}
}


