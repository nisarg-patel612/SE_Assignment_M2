// Calculate person’s insurance premium based on salary

#include <stdio.h>
main()
{
	int salary,insurance;
	
	printf("\n\n\n\t Enter The Salary of the Person: ");
	scanf("%d", &salary);
	
	insurance=salary*0.03;
	printf("\n\n\n\t Calculate Person's premium Insurance  based on Salary: %d", insurance);
	printf("\n\n\n\t Calculate Person's Premium Insurance based on Annual Salary: %d", insurance*12);
}
