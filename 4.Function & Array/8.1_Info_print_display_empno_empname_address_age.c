/* 
WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage 
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100

// Function to reverse the string
void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

main() {
    char str[MAX];
    char reversed[MAX];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Copy the original string to reversed
    strcpy(reversed, str);

    // Reverse the string
    reverseString(reversed);

    // Check if the string is a palindrome
    if (strcmp(str, reversed) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    // Print the reversed string
    printf("Reversed string: %s\n", reversed);

}

