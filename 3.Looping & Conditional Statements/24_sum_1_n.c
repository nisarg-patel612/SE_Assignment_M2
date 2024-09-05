//24. 1 + 2 + 3 + 4 + 5 + ... + n


#include<stdio.h>
main()
{
	int n , i, sum=0;
	printf("\n\n\tEnter Series of Number : ");
	scanf("%d", &n);
	
	if(n > 1)
	{
	    i=1;
	    while(i <= n)
	    {
		   sum = sum + i;
		   i++;
	    }
    }
    else
    {
    	printf("\n\n\tPlease Enter the Positive Number ");
	}
	printf("\n\n\t1 + 2 + 3 + 4 + 5 + ... + n");
	printf("\n\n\tSum of 1 to %d is = %d", n, sum);
}
