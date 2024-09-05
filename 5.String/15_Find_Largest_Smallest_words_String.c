// Write a program in C to find the largest and smallest words in a string

#include <stdio.h>
#define MAX_LENGTH 100

main() 
{
    char str[MAX_LENGTH],largest[MAX_LENGTH], smallest[MAX_LENGTH],currentWord[MAX_LENGTH];
    int i, j = 0, k = 0 ,largestLength = 0, smallestLength = MAX_LENGTH,currentLength;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Initialize largest and smallest word strings
    largest[0] = '\0';
    smallest[0] = '\0';

    // Process the input string
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            // Build the current word
            currentWord[j++] = str[i];
        } else if (str[i] == ' ' || str[i] == '\0') {
            // End of a word
            currentWord[j] = '\0'; // Null-terminate the current word
            currentLength = j;

            // Compare word lengths to find largest and smallest
            if (currentLength > largestLength) 
			{
                largestLength = currentLength;
                strcpy(largest, currentWord);
            }
            if (currentLength < smallestLength && currentLength > 0) 
			{
                smallestLength = currentLength;
                strcpy(smallest, currentWord);
            }
            // Reset for next word
            j = 0;
        }
    }

    // Check the last word
    if (j > 0) {
        currentWord[j] = '\0';
        currentLength = j;
        if (currentLength > largestLength) {
            largestLength = currentLength;
            strcpy(largest, currentWord);
        }
        if (currentLength < smallestLength && currentLength > 0) {
            smallestLength = currentLength;
            strcpy(smallest, currentWord);
        }
    }

    // Print the results
    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

}

