// Check Number Is Positive or Negative

#include<stdio.h>
main()
{
	int n;
	
	printf("\n\n\n\t Enter number: ");
	scanf("%d", &n);
	
	if(n>0)
	{
		printf("\n\n\n\t %d Number is Positive.\n",n);
	} else if(n<0) {
		printf("\n\n\n\t %d Number is Negative.\n",n);
	} else {
		printf("\n\n\n\t Number is Netural.\n",n);
	}
}
