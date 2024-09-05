// C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>
main()
{
	char ch;
	
	// Input a character
	printf("\n\n\n\t Enter a Character: ");
	scanf("%c", &ch);
	
	// Condition for uppercase and lettercase letter & digit and any special character
	if(isupper(ch)){
		printf("\n\n\n\t '%c' is an Uppercase Letter.\n", ch);
	} else if(islower(ch)){
		printf("\n\n\n\t '%c' is an Lowercase Letter.\n", ch);
	} else if(isdigit(ch)){
		printf("\n\n\n\t'%c' is an digit.\n", ch);
	} else {
		printf("\n\n\n\t '%c' is an special chatacter.\n", ch);
	}
	
}
