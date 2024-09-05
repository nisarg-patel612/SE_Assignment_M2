// Accept 5 employees name and salary and count average and total salary

#include<stdio.h>
main()
//{
//	char Rahul[50],Preetam[50],Hansrajhathi[50],Pranay[50],Pranshu[50];
//	float salary1,salary2,salary3,salary4,salary5;
//	float total_salary,average_salary;
//	
//	
//	printf("\n\n\n\t Enter the Name of the Employee1:");
//	scanf("%s", Rahul);
//	printf("\n\n\n\t Enter the Salary of the Employee1:");
//	scanf("%f",&salary1);
//	
//	printf("\n\n\n\t Enter the Name of the Employee2:");
//	scanf("%s", Preetam);
//	printf("\n\n\n\t Enter the Salary of the Employee2:");
//	scanf("%f",&salary2);
//	
//	printf("\n\n\n\t Enter the Name of the Employee3:");
//	scanf("%s", Hansrajhathi);
//	printf("\n\n\n\t Enter the Salary of the Employee3:");
//	scanf("%f",&salary3);
//	
//	printf("\n\n\n\t Enter the Name of the Employee4:");
//	scanf("%s", Pranay);
//	printf("\n\n\n\t Enter the Salary of the Employee4:");
//	scanf("%f",&salary4);
//	
//	printf("\n\n\n\t Enter the Name of the Employee5:");
//	scanf("%s", Pranshu);
//	printf("\n\n\n\t Enter the Salary of the Employee5:");
//	scanf("%f",&salary5);
//	
//	// calculating total & average salary 
//	total_salary =  salary1 + salary2 + salary3 + salary4 + salary5;
//	average_salary = total_salary/5;
//	
//	// Displaying the result
//	printf("\n\n\n\t Total Salary : %.2f\n", total_salary);
//	printf("\n\n\n\t average salary : %.2f\n", average_salary);
//}


{
    char Rahul[50], Preetam[50], Hansrajhathi[50], Pranay[50], Pranshu[50];
    float salary1, salary2, salary3, salary4, salary5;
    float total_salary, average_salary;
    
    // Input names and salaries
    printf("\n\n\n\t Enter the Name of Employee 1: ");
    scanf("%s", Rahul);
    printf("\n\n\n\t Enter the Salary of Employee 1: ");
    scanf("%f", &salary1);
    
    printf("\n\n\n\t Enter the Name of Employee 2: ");
    scanf("%s", Preetam);
    printf("\n\n\n\t Enter the Salary of Employee 2: ");
    scanf("%f", &salary2);
    
    printf("\n\n\n\t Enter the Name of Employee 3: ");
    scanf("%s", Hansrajhathi);
    printf("\n\n\n\t Enter the Salary of Employee 3: ");
    scanf("%f", &salary3);
    
    printf("\n\n\n\t Enter the Name of Employee 4: ");
    scanf("%s", Pranay);
    printf("\n\n\n\t Enter the Salary of Employee 4: ");
    scanf("%f", &salary4);
    
    printf("\n\n\n\t Enter the Name of Employee 5: ");
    scanf("%s", Pranshu);
    printf("\n\n\n\t Enter the Salary of Employee 5: ");
    scanf("%f", &salary5);
    
    // Calculate total & average salary 
    total_salary = salary1 + salary2 + salary3 + salary4 + salary5;
    average_salary = total_salary / 5;
    
    
    printf("\n\n\n\t Total Salary: %.2f\n", total_salary);
    printf("\n\n\n\t Average Salary: %.2f\n", average_salary);
    
   
}
