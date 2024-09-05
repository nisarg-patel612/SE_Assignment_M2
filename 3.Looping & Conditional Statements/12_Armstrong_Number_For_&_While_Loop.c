// Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
main()
{
	int num,original_num,remainder,count=0;
	int sum = 0;
	
	printf("\n\n\n\t Enter a Number of Digits: ");
	scanf("%d", &num);
	
	original_num = num;
	
	// Find the number of Digits
	while(original_num !=0){
		original_num /= 10;
		count++;
	}
	
	original_num = num;
	
	// Calculates the sum of each digits to the power of count
	while(original_num !=0){
		remainder = original_num % 10;
		sum += pow(remainder , count);
		original_num /= 10;
	}
	
	// chek if the number is an Armstring Number or not
	if ( sum == num ) {
		printf("\n\n\n\t %d is an Armstrong Number.\n", num);
	} else {
		printf("\n\n\n\t %d is not an Armstrong Number.\n", num);
	}
	
}
