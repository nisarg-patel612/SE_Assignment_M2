// wap to check whether a number is negative , positive or zero.

#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\n\t Enter a Number: ");
	scanf("%d", &num);
	
	if(num>0){
		printf("\n\n\n\t The number is %d  positive.\n", num);
	} else if(num<0){
		printf("\n\n\n\t The number is %d negative.\n",num);
	} else {
		printf("\n\n\n\t The number is zero.\n");
	}
}
