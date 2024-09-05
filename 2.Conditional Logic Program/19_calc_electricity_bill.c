/*Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer.*/

#include<stdio.h>
main()
{
	int customer_id;
	char customer_name;
	float units_consumed , total_amount;
	
	
	
	// Get Customer Details
	printf("\n\n\n\t--------------------Get Customer Details---------------------------------------");
	printf("\n\n\n\t Enter Customer Id: ");
	scanf("%d", &customer_id);
	
	printf("\n\n\n\t Enter Customer Name: ");
	scanf("%d", &customer_name);
	
	printf("\n\n\n\t Enter Units Consumed: ");
	scanf("%f", &units_consumed);
	
	
	
	// calculate total amount based on units consumed
	
	if (units_consumed < 350 ) {
		total_amount = units_consumed * 1.20;
	} else if (units_consumed >= 350 && units_consumed < 600) {
		total_amount = units_consumed * 1.50;
	} else if (units_consumed >= 600 && units_consumed < 800) {
		total_amount = units_consumed * 1.80;
	} else {
		total_amount = units_consumed * 2.00;
	} 
	
	
	
	// Apply  surcharge if the bil exceeds Rs.800
	if (total_amount > 800){
		total_amount += total_amount * 0.18;   // Adding 18% surcharge
	}
	
	
	// minimum bill Rs. 256
	if (total_amount < 256) {
		total_amount = 256;
	}
	
	
	// Print the bill
	printf("\n\n\n\t-------------------------------Electricity Bill----------------------------------------------");
	printf("\n\n\n\t Customer Id : %d\n", customer_id);
	printf("\n\n\n\t Customer Name : %d\n", customer_name);
	printf("\n\n\n\t Units Consumed : %.2f\n", units_consumed);
	printf("\n\n\n\t Total Amount : Rs. %.2f\n",total_amount);
	
	
}
