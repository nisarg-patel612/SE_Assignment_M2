// wap to print Fibonacci series up to given numbers

#include <stdio.h>
main()
{
	int i , n , a = 0, b = 1 , c;
	
	printf("\n\n\n\t Enter a Number: ");
	scanf("%d", &n);
	
	printf("\n\n\n\t %d %d ", a , b);
	
	i = 1;
	
	while(i<=n)
	{
		c = a + b;
		printf(" %d", c);
		
		a = b;
		b = c;
		
		i++;
	}
}
