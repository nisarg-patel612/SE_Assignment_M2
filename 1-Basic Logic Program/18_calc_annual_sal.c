// Calculate person’s Annual salary

#include <stdio.h>
main()
{
	int salary,anuual_salary;
	printf("\n\n\n\t Enter The Salary of the One Month:");
	scanf("%d", &salary);
	
	printf("\n\n\n\t---------------------------------------");
	
	printf("--------------Person's Annual Salary-------------------------");
	
	printf("\n\n\n\t Person's Salary of the person: %d", salary);
	anuual_salary=salary*12;
	printf("\n\n\n\t Annual Salary of the person: %d", anuual_salary);
	
}
