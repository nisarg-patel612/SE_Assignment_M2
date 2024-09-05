// Write a program in C to separate individual characters from a string.

#include<stdio.h>
main()
{
	char str[100];
	int i = 0;
	
	// input string from user
	printf("\n\n\t Enter a String : ");
	fgets(str, sizeof(str), stdin);
	
	// display each character separately
	printf("\n\n\t Individual characters in the string are :\n");
	while (str[i]!= '\0' && str[i]!='\n')
	{
		printf("%c\n", str[i]);
		i++;
	}
}
