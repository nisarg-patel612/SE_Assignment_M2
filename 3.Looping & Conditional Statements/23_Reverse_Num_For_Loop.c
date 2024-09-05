// C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
main()
{
	int num,reverse_num = 0,remainder;
	
	printf("\n\n\t Enter an Integer: ");
	scanf("%d", &num);
	
	for(;num !=0; num /= 10)
	{
		remainder = num % 10;
		reverse_num = reverse_num * 10 + remainder;
	}
	
	// output the reverse number
	printf("\n\n\t Reverse Number : %d\n", reverse_num);
	
}

