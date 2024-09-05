// Find the Character Is Vowel or Not

#include <stdio.h>
main()
{
	char c;
	
	
	//input character
	printf("\n\n\n\t Enter the character: ");
	scanf("%c", &c);
	
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
	{
		printf("\n\n\n\t %c it is vowel.\n", c);
	} else {
		printf("\n\n\n\t %c it is not vowel.\n", c);
	}
}
