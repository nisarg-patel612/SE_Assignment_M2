//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>
main()
{
	int n,reverse_Number = 0, reminder;
	
	
	// Ask the user to enter the number
	printf("\n\n\n\t Enter a Number: ");
	scanf("%d", &n);
	
	while(n != 0 ){
		reminder = n % 10;
		reverse_Number = reverse_Number * 10 + reminder;
		n /= 10;
		//n = n / 10;
	}
	
	printf("\n\n\n\t Reverse Number is %d\n", reverse_Number);
}
