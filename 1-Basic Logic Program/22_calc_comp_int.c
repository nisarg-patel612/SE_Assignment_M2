/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P */

#include <stdio.h>
main()
{
	int price,rate,time;
	float amount,compound_interest;
	
	printf("\n\n\n\t Enter Principal Amount:");
	scanf("%d", &price);
	
	printf("\n\n\n\t Enter Rate of Interest:");
	scanf("%d", &rate);
	
	printf("\n\n\n\t Enter Time of Period:");
	scanf("%d", &time);
	
	printf("\n\n\t------------a.Formula to calculate compound interest annually is given by---------------");
	amount=price*(1+rate/100)*time;
	
	printf("\n\n\n\tPrinciple Amount of person is : %d",price);
	printf("\n\n\n\tRate of interest of person is : %d",rate);
	printf("\n\n\n\tTime of Period of person is : %d",time);
	printf("\n\n\n\tFinal Amount of person is : %.2f",amount);
	
	printf("\n\n\t------------------b.Compound Interest = Amount–P-----------------------------");
	compound_interest=amount-price;
	printf("\n\n\n\tCompound Interest is : %.2f",compound_interest);
}
