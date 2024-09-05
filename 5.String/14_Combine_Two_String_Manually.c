// Write a program in C to combine two strings manually

#include <stdio.h>
main() 
{
    char str1[100], str2[100], combined[200]; // Array to store the combined string
    int i, j;

    // Read the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    // Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    // Read the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // Combine the two strings manually && Copy the first string to combined array
    for (i = 0; str1[i] != '\0'; i++) {
        combined[i] = str1[i];
    }

    // Append the second string to combined array
    for (j = 0; str2[j] != '\0'; j++) {
        combined[i + j] = str2[j];
    }

    // Null-terminate the combined string
    combined[i + j] = '\0';

    // Print the combined string
    printf("Combined string: %s\n", combined);

}

