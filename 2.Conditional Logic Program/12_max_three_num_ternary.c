// WAP to find maximum number among 3 numbers using ternary operator


#include<stdio.h>
main()
{
	int num1,num2,num3,max;
	
	printf("\n\n\n\t Enter Three Numbers: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
	
	printf("\n\n\n\t The maximum number is %d.\n", max);
	
}
