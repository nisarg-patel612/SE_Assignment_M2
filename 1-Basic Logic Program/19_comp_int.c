// Calculate compound interest

#include <stdio.h>
main()
{
	int p,r,t;
	float amount,compound_interest;
	printf("\n\n\tEnter Principle Amount : ");
	scanf("%d",&p);
	printf("\n\n\tEnter Rate of Interests : ");
	scanf("%d",&r);
	printf("\n\n\tEnter Time of Periods : ");
	scanf("%d",&t);
	amount=p*(1+r/100)*t;
	
	printf("\n\n\t--------------------------------------------");
	printf("\n\n\tPrinciple Amount of person is : %d",p);
	printf("\n\n\tRate of interest of person is : %d",r);
	printf("\n\n\tTime of Period of person is : %d",t);
	printf("\n\n\tFinal Amount of person is : %.2f",amount);
	
	printf("\n\n\t-----------------------------------");
	compound_interest=amount-p;
	printf("\n\n\tCompound Interest of the Person is : %.2f",compound_interest);
	
}
	


