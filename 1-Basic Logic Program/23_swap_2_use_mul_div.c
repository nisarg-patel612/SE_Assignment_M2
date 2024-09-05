// WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>
main()
{
	int a,b;
	
	printf("\n\n\t Enter Two Numbers:");
	scanf("%d %d", &a,&b);
	
	printf("\n\n\tYou Entered a = %d & b = %d\n", a,b);
	
	a = a * b;
	b = a / b;
	a = a / b;
	
	printf("\n\n\t After Swapping Two Numbers a = %d & b = %d\n", a,b);
	
}

