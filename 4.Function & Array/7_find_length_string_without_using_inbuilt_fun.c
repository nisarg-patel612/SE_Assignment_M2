// WAP Find out length of string without using inbuilt function

#include <stdio.h>

main() {
    char str[100];
    int length = 0;

    // Input the string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Adjust for the newline character if present
    if (str[length - 1] == '\n') {
        length--;
    }

    // Output the length of the string
    printf("Length of the string is: %d\n", length);
    
}

