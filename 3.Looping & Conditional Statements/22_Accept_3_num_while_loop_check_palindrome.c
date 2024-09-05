/* Accept 3 numbers from user using while loop and check each numbers
palindrome */


#include<stdio.h>
main()
{
	int num,original_num,remainder,reversed_num = 0;
	
	printf("\n\n\t Enter a Number: ");
	scanf("%d", &num);
	
	original_num = num;  // store the original number
	
	
	// reverse the number
	while(num !=0){
		remainder = num % 10; // get last digit
		reversed_num = reversed_num * 10 + remainder; // add to reversed number
		num /= 10; // remove the last digit from the original number
	}
	
	// check if original number is equal to reverse number
	if(original_num == reversed_num)
	{
		printf("\n\n\t %d is palindrome.\n", original_num);
	} else {
		printf("\n\n\t %d is not a palindrome.\n", original_num);
	}
	
}
