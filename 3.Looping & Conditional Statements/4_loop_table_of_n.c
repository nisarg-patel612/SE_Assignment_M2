// WAP to print table up to given numbers

#include<stdio.h>
main()
{
	int i , n;
	
	printf("\n\n\n\t Enter a Number for Multiplication Table : ");
	scanf("%d", &n);
	
	i = 1;
	
	while(i<=10)
	{
		printf("\n\n\n\t %d * %d = %d", n , i , n * i);
		i++; // i = i + 1;
	}
}
