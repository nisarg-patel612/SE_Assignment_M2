// Wap to accept 5 numbers from user and display all numbers

#include<stdio.h>
main()
{
	int n[5];
	int i;
	i = 1;
	printf("\n\n\n\t Enter 5 Numbers: ");
	while(i<=5)
	{
		printf("\n\n\n\tNumber %d : ",i);
		scanf("%d",&n[i]);
		i++;
	}
	printf("\n\n\n\t Display the 5 Numbers");
	i = 1;
	while(i<=5)
	{
		printf("\n\n\n\tNumber %d : %d ",i,n[i]);
		i++;
	}
	
}
