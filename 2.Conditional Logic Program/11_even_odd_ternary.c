// WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\n\t Enter a Number: ");
	scanf("%d", &num);
	
	
	(num % 2 == 0) ? printf("The number %d is even.\n", num) : printf("\n\n\n\t The number %d is odd.\n", num);
}
