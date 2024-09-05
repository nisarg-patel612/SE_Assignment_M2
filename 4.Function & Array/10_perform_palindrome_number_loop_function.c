// WAP to perform Palindrome number using for loop and function

#include <stdio.h>
#include <stdbool.h>

// function to check if a number is a palindrome
bool Palindrome(int number) {
    int original = number;
    int reversed = 0;
    int remainder;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    // Check original number and reversed number are the same
    return original == reversed;
}

main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (Palindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

}

