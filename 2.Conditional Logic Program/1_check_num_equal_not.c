// Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>
main()
{
	int num1,num2;
	
	printf("\n\n\n\t Enter First Number:");
	scanf("%d", &num1);
	
	printf("\n\n\n\t Enter Second Number:");
	scanf("%d", &num2);
	
	if(num1==num2)
	{
		printf("\n\n\n\t The Two Numbers are equal\n:");
	}
	else
	{
		printf("\n\n\n\t The Two Numbers are not equal\n:");
	}
}
