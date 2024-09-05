// WAP to find reverse of string using recursion

#include<stdio.h>
void reverse_String(char str[], int start, int end) 
{
	if (start >= end)
	{
		return;  // when the start index is greater or equal to end index
	}
	
	// swap the char at start and end position
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	
	// recursive call to reverse the string
	reverse_String(str, start + 1 , end - 1);
}

main()
{
	char str[100];
	
	// input the string
	printf("Enter a String : ");
	gets(str);
	
	// calculate the length of string
	int len = strlen(str);
	
	// call the recursive function to reverse string
	reverse_String(str, 0,len - 1);
	
	// output the reverse string
	printf("Reverse String: %s\n", str);
	
}
