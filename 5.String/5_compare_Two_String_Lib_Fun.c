// Write a program in C to compare two strings without using string library functions.

#include<stdio.h>


int compare_string(char str1[] , char str2[]) // fun compares to string char by char
{
	int i = 0;
	
	while (str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!= str2[i])
		{
			return str1[i] - str2[i];
		}
		i++;
	}
	return str1[i] - str2[i];
}

main()
{
	char str1[100],str2[100];
	int result;
	
	printf("\n\n\t Enter First String : ");
	gets(str1);
	
	printf("\n\n\t Enter Second String : ");
	gets(str2);
	
	result = compare_string(str1,str2);
	
	if (result == 0)
	{
		printf("\n\n\t The Strings are Equal.\n");
	} else if(result<0){
		printf("\n\n\t The First String is less than the Second String.\n");
	} else {
		printf("\n\n\t The First String is greater than the Second String.\n");
	}
	
}


