/* Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/

#include<stdio.h>
main()
{
	printf("\n\n\t--------------Swap number using 3rd Variable--------------------");
	int a,b,c,d,e;
	printf("\n\n\tEnter your first number : ");
	scanf("%d",&a);
	printf("\n\n\tEnter your second number : ");
	scanf("%d",&b);
	
	printf("\n\n\t----------------------Before Swapping---------------------------");
	
	printf("\n\n\tFirst Number    : %d",a);
	printf("\n\n\tSecond Number   : %d",b);
	
	printf("\n\n\t----------------------After Swapping---------------------------");
	c=a;
	a=b;
	b=c;
	
	printf("\n\n\tFirst Number    : %d",a);
	printf("\n\n\tSecond Number   : %d",b);
	
	printf("\n\n\t-------------Swap number without using 3rd Variable-------------");
	printf("\n\n\tEnter your first number : ");
	scanf("%d",&d);
	printf("\n\n\tEnter your second number : ");
	scanf("%d",&e);
	
	printf("\n\n\t----------------------Before Swapping---------------------------");
	
	printf("\n\n\tFirst Number    : %d",d);
	printf("\n\n\tSecond Number   : %d",e);
	
	printf("\n\n\t----------------------After Swapping---------------------------");
	
	d=d+e;
	e=d-e;
	d=d-e;
	
	printf("\n\n\tFirst Number    : %d",d);
	printf("\n\n\tSecond Number   : %d",e);
}

