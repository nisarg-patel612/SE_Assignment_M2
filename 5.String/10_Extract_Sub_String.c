// Write a program in C to extract a substring from a given string

#include <stdio.h>
main() 
{
    char str[100], substring[100];
    int start, length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("Enter start index for substring: ");
    scanf("%d", &start);

    printf("Enter length of substring: ");
    scanf("%d", &length);

    // Check for valid start and length
    if (start < 0 || length < 0 || start >= strlen(str)) 
	{
        printf("Invalid start index or length.\n");
        return 1;
    }

    // Extract substring
    for (i = 0; i < length && str[start + i] != '\0'; i++) 
	{
        substring[i] = str[start + i];
    }
    substring[i] = '\0';

    printf("Extracted substring: %s\n", substring);
}

