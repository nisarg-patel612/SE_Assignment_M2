// WAP to find minimum number among 3 numbers using ternary operator


#include<stdio.h>
main()
{
	int num1,num2,num3,min;
	
	printf("\n\n\n\t Enter Three Numbers: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
	
	printf("\n\n\n\t The minimum number is %d.\n", min);
	
}
