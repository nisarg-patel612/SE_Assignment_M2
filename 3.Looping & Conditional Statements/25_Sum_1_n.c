// 25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
	int n, i, sum=0;
	printf("\n\n\tEnter the Series of Number : ");
	scanf("%d", &n);
	
	if(n >= 1)
	{
	    i=1;
	    while(i<=n)
	    {
		    sum = sum + (i*i);
		    i++;
	    }
	}
	else
	{
		printf("\n\n\tPlease Enter Positive Number ");
	}
	printf("\n\n\t(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)");
	printf("\n\n\tSum of Series 1 to %d is = %d ", n, sum);
	
}
