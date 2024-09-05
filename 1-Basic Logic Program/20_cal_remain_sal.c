/* Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/

#include <stdio.h>
main()
{
	int salary;
	int insurance,loan_installment;
	
	printf("\n\n\t-------------------------Employee_Salary--------------------------------");
	printf("\n\n\n\t Enter the Salary of the Employee:");
	scanf("%d", &salary);
	
	insurance=salary*0.1;
	loan_installment=salary*0.1;
	
	printf("\n\n\t-------------------------Remaining_Salary------------------------------");
	printf("\n\n\tinsurance premium of the person as per rate of interest is: %d", insurance);
	printf("\n\n\tloan installment of the loan as per the policy is: %d", loan_installment);
	printf("\n\n\tremaining salary of the person is: %d",salary-insurance,loan_installment);
}
