// Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
main()
{
	char str[100];
	int length,i;
	
	// input the string from user
	printf("Enter a String : ");
	fgets(str, sizeof(str), stdin);
	
	// calculate the length of the string
	length = strlen(str);
	
	// Display each character in reverse order
    printf("Individual characters in reverse order are:\n");
    for (i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
}
