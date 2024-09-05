/* Calculate 5 numbers from user and calculate number of even and odd using
of while loop */


#include<stdio.h>
main()
{
	int n,i,even_num = 0 , odd_num = 0;
	
	printf("\n\n\t-------------------------------------Enter 5 Numbers-------------------------------------------");
	
	while(i<15){
		printf("\n\n\t Enter Number %d: ", i+1);
		scanf("%d", &n);
		
		if(n %2==0){
			even_num++;
		} else {
			odd_num++;
		}
		
		i++;
	}
	
	printf("\n\n\t---------------------------------Total Even & Odd Numbers-----------------------------------");
	printf("\n\n\tTotal Even Numbers: %d\n", even_num);
	printf("\n\n\tTotal Odd Numbers: %d\n", odd_num);
	
}
