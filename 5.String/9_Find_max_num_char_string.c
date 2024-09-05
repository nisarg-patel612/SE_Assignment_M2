// Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>
main() 
{
    char str[100];
    int frequency[256] = {0}; // array to store frequency of each character
    int i, maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    gets(str);  

    // Calculate frequency of character
    for (i = 0; str[i] != '\0'; i++) 
	{
        frequency[(int)str[i]]++;
    }

    // Find character with maximum frequency
    for (i = 0; i < 256; i++) 
	{
        if (frequency[i] > maxFreq) 
		{
            maxFreq = frequency[i];
            maxChar = (char)i;
        }
    }

    printf("The character '%c' appears most frequently used: %d times\n", maxChar, maxFreq);
    
}

