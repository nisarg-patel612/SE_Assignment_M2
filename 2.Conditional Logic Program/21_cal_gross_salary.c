/* Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */


#include<stdio.h>
main()
{
	float basic_salary , hra , da , gross_salary;
	
	// Input Basic Salary
	printf("\n\n\n\t Enter a basic salary of the employee: ");
	scanf("%f", &basic_salary);
	
	// Calculate hra and da based on basic salary
	if (basic_salary <= 10000) {
		hra = basic_salary * 0.20;
		da = basic_salary * 0.80;
	} else if (basic_salary <= 20000) {
		hra = basic_salary * 0.25;
		da = basic_salary * 0.90;
	} else {
		hra = basic_salary * 0.30;
		da  = basic_salary * 0.95;
	}
	
	// calculate the gross salary
	gross_salary = basic_salary + hra + da;
	
	// Print the gross salary
	printf("\n\n\n\t The gross salary of the employee is: %.2f\n", gross_salary);
	
}
