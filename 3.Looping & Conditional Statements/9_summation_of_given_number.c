// Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
main()
{
	int n,sum = 0,temp;
	
	printf("\n\n\n\t Enter a Number: ");
	scanf("%d", &n);
	
	temp = (n < 0) ? -n : n;
	
	while(temp!=0){
		sum += temp % 10;
		temp /= 10;
	}
	
	if(n<0) {
		sum = -sum;
	}
	
	printf("\n\n\n\t Sum of digits: %d\n", sum);
}
