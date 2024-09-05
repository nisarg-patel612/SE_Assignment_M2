/* WAP to accept 5 numbers from user and display in reverse order using for
loop and array */

#include<stdio.h>
main()
{
	int a[5], i;
	
	for (i=0;i<5;i++)
	{
		printf("\n\n\t Enter a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\n\n\t--------------------------------Display Numbers In Reverse Order----------------------------");
	for (i=4;i>=0;i--)
	{
		printf("\n\n\t a[%d] : %d", i , a[i]);
	}
}
