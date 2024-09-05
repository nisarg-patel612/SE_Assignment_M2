/* WAP to accept 5 numbers from user and check entered number is even or odd
using of array */

#include<stdio.h>
main()
{
	int a[55], i,n, e_count=0, o_count=0;
	
	
	printf("\n\n\n\t Enter Numbers: ");
	scanf("%d", &n);
	
	for (i=0;i<5;i++)
	{
		printf("\n\n\n\t Enter a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\n\n\n\t Even Elements are-------------------------------");
	
	for (i=0;i<5;i++)
	{
		if (a[i]%2==0)
		{
			printf("\n\n\n\t a[%d] : %d", i , a[i]);
			e_count++;
		}
	}
	printf("\n\n\n\t Total Even Numbers are %d", e_count);
	
	printf("\n\n\n\t Odd Elements are--------------------------------");
	for (i=0;i<5;i++)
	{
		if (a[i]%2!=0)
		{
			printf("\n\n\n\t a[%d] : %d", i,a[i]);
			o_count++;
		}
	}
	printf("\n\n\n\t Total Odd Numbers are %d", o_count);
}
