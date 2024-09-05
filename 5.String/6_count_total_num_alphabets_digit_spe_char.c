/* Write a program in C to count the total number of alphabets, digits and special
characters in a string. */

#include<stdio.h>
main()
{
	char str[100];
	int i,alphabets=0,digits=0,special_chars=0;
	
	printf("\n\n\t Enter a String : ");
	fgets(str, sizeof(str),stdin);
	
	for (i=0;str[i]!='\0';i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			alphabets++;
		} else if(str[i] >= '0' && str[i] <= '9'){
			digits++;
		} else if(str[i]!=' ' && str[i] !='\n'){
			special_chars++;
		}
	}
	
	printf("\n\n\t Total Number of alphabets : %d\n ", alphabets);
	printf("\n\n\t Total Number of digits : %d\n ", digits);
	printf("\n\n\t Total Number of Special Characters : %d\n ", special_chars);
}
