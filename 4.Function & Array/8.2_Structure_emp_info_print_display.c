/* 
WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
b. Write a program of structure for five employee that
provides the following information -print and display empno, empname, address andage 
*/

#include <stdio.h>

// Define the structure for Employee
struct Employee {
    int empno;
    char empname[100];
    char address[100];
    int age;
};

main() {
    struct Employee employees[5];
    int i;

    // Input information for 5 employees
    for (i = 0; i < 5; i++) {
        printf("Enter information for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        getchar(); // To consume newline character left by scanf
        fgets(employees[i].empname, sizeof(employees[i].empname), stdin);
        employees[i].empname[strcspn(employees[i].empname, "\n")] = '\0'; // Remove newline

        printf("Address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        employees[i].address[strcspn(employees[i].address, "\n")] = '\0'; // Remove newline

        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    // Display information for all employees
    printf("\nEmployee Information:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
    }
}

