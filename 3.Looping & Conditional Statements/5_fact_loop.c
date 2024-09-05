// WAP to print factorial of given number

#include<stdio.h>
main()
{
	int i , n , factorial;
	
	printf("\n\n\n\t Enter a Number : ");
	scanf("%d", &n);
	
	i = 1;
	
	while (i<=n)
	{
		factorial = factorial * i;
		printf("\n\n\n\t Number : %d Factorial : %d", i , factorial);
		i++;
	}
}
