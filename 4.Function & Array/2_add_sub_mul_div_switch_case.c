/* WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven) */

#include<stdio.h>
main()
{
	int choice;
	float num1,num2,result;
	
	do{
		//display the name
		printf("\n\Menu:\n");
		printf("1.Addition\n");
		printf("2.Subtraction\n");
		printf("3.Multiplication\n");
		printf("4.Division\n");
		printf("5.Exit\n");
		printf("Enter Your Choice (1-5): ");
		scanf("%d", &choice);
		
		if(choice >= 1 && choice <= 4)
		{
			// input two numbers
			printf("Enter Two Numbers: ");
			scanf("%f %f", &num1 , &num2);
		}
		
		switch(choice)
		{
			case 1: 
				result = num1 + num2;
				printf("Result of Addition : %.2f\n", result);
				break;
			
			case 2: 
				result = num1 - num2;
				printf("Result of Subtraction : %.2f\n", result);
				break;
			
			case 3: 
				result = num1 * num2;
				printf("Result of Multiplication : %.2f\n", result);
				break;
			
			case 4: 
				if (num2!=0)
				{
					result = num1 / num2;
				} else {
					printf("Error: Division by zero is not allowed.\n");
				}
				break;
			
			case 5:
				printf("Exit the program.\n");
				break;
			
			default:
				printf("Invalid choice! Please choose a valid option.\n");
				break;
		}
	} while (choice != 5);
}
