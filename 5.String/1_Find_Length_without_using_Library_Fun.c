// Write a program in C to find the length of a string without using library functions

#include<stdio.h>
main()
{
	char str1[10];
	int i, count = 0;
	
	printf("\n\n\t Enter a String : ");
	scanf("%s", &str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		printf("\n\n\t %c", str1[i]);
		count++;
	}
	printf("\n\n\t The Length of the String : %d", count);
}
