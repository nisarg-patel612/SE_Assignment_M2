/*Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/



#include<stdio.h>
main()
{
	int unit;
	float rupess,total;
	//input unit
	printf("\n\n\tEnter Your Unit charges : ");
	scanf("%d",&unit);
	if(unit <= 50)
	{
		rupess=unit*0.50;
		printf("\n\n\t%d units = %.2f Rupees",unit,rupess);
	}
	else if(unit > 50 && unit <= 100 )
	{
		rupess=unit*0.75;
		printf("\n\n\t%d units = %.2f Rupees",unit,rupess);
	}
	else if(unit > 100 && unit <= 250 )
	{
		rupess=unit*1.20;
		printf("\n\n\t%d units = %.2f Rupees",unit,rupess);
	}
	else
	{
		rupess=unit*1.50;
		printf("\n\n\t%d units = %.2f Rupees",unit,rupess);
	}
	printf("\n\n\t Additional Surcharges of 20 Percentage ");
	total= rupess * 0.2 ;
	printf("\n\n\t Total Rupees of Your Bill is : %.2f",total + rupess);
}
