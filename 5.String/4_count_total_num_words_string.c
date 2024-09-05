// Write a program in C to count the total number of words in a string.

#include<stdio.h>

main()
{
	char str[100];
	int i, word_count=0;
	int inword=0;
	
	printf("\n\n\t Enter a String : ");
	fgets(str, sizeof(str),stdin);  // text including spaces from standard input.
	
	
	for(i=0;str[i]!='\0';i++)
	{
		if(isspace(str[i]))
		{
			inword=0;
		} else if (inword==0){
			inword=1;
			word_count++;
		}
	}
	printf("\n\n\t Total Number of Words : %d\n", word_count);
}
